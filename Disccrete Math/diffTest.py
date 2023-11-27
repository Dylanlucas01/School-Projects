#a = [int(x) for x in input().split()]
#print(a)

s = input()
numbers = list(map(int, s.split()))
#numbers.insert(0,0)
cure = [0]
cure.extend(list(map(int, s.split())))
print (cure)