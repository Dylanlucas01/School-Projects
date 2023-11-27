def make_table(x,y):
    a = False
    b = False

    if x == "T":
        a = True

    if y == "T":
        b = True

    print("\n~" + x + " = " + truth_val(not a))
    print(x + " v " + y + " = " + truth_val(a or b))
    print(x + " ^ " + y + " = " + truth_val(a and b))

    if (a == True) and (b == False):
        print(x + " --> " + y + " = F")
    else:
        print(x + " --> " + y + " = T")

def truth_val(z):
    if z:
        return("T")
    else:
        return("F")

def main():
    while x not in ('T','F'):
        x = input("Enter T or F the 1st truth value: ")
        if not x:
            print("T or F is only excepted")
    #try:
        #y = input("Enter T or F the 2nd truth value: ")
        #if y != "T" and y != "F" :
            #raise Exception()
    #except:
        #print("Sorry, T or F is only excepted")

    #make_table(x,y)

if __name__ == "__main__":
    main()