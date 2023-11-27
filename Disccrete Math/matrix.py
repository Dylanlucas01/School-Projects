
def theFunction(ar2, operations):
    print(ar2)
    print(operations)
    for i in operations:
        print(i)
        x = i[0]
        y = i[1]
        print (x)
        print (y)
        z = ar2[x-1:x:]
       #ar2[x:y:-1], ar2[y+1::]
        
        print (z)
        #ar2 = z
    #print (ar2)


    
    
def main():
    ar1 = [9,8,7,6,5,4,3,2,1]
    operations = [[0,9],[4,5],[3,6],[2,7],[1,8],[0,9]]
    theFunction(ar1, operations)

if __name__ == "__main__":
    main()