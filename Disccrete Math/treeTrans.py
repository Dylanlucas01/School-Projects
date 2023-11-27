class Node:
   def __init__(self, data):
      self.left = None
      self.right = None
      self.data = data

   def insert(self, data):
      if self.data:
         if data < self.data:
            if self.left is None:
               self.left = Node(data)
            else:
               self.left.insert(data)
         elif data > self.data:
            if self.right is None:
               self.right = Node(data)
            else:
               self.right.insert(data)
      else:
         self.data = data

   def PrintTree(self):
      if self.left:
         self.left.PrintTree()
      print( self.data),
      if self.right:
         self.right.PrintTree()

   def inorderTraversal(self, root):
      res = []
      if root:
         res = self.inorderTraversal(root.left)
         res.append(root.data)
         res = res + self.inorderTraversal(root.right)
      return res 

def main():
    numbers = input("Enter 10 integers: ")
    lstdNumbers = list(map(int, numbers.split()))
    the_list = [None]
    the_list.extend(lstdNumbers)

    for i in range(len(the_list)):
        if i==0:
            root = Node(i)
        else:
            root.insert(i)
    print(root.inorderTraversal(root))

if __name__ == "__main__":
    main()