
def locate(x, y):
    i = 1
    j = len(x)

    if y > x[j-1]:
        return print(0)

    while i<j:
        m = (i+j)//2
        if y>x[m]:
            i=m+1
        else:
            j=m

    if y==x[i]:
        return print(i)
    else:
        return print(0)

    
def main():
    unordered = True
    while unordered:
        numbers = input("Enter 10 integers in ascending order: ")
        lstdNumbers = list(map(int, numbers.split()))
        if lstdNumbers == sorted(lstdNumbers):
            unordered = False
        else:
            print("Sorry, integers were not in ascending order. \nTry agian.")
    the_list = [None]
    the_list.extend(lstdNumbers)
    target = int(input("Enter a number to search: "))
    locate(the_list,target)

if __name__ == "__main__":
    main()