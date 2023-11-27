
from xml.dom.minidom import Element


def theFunction(x, y, count=0):

    a = anotherFunction(x)
    b = anotherFunction(y)

    union_ab = a | b
    print(f"{'A union B' : <19}", "=", f"{union_ab:b}".zfill(int(x,2).bit_length()))

    intersect_ab = a & b
    print(f"{'A intersect B' : <19}", "=", f"{intersect_ab:b}".zfill(int(x,2).bit_length()))

    complement_a = ~int(x,2)
    print(complement_a)
    print(f"{'The complement of A' : <19}", "=", f"{complement_a:b}".zfill(int(x,2).bit_length()))

    #count = max(count, int(a,2).bit_length(), 1)
    #x = 2 ** count - 1
    #complement = int(a,2) ^ x
    #print(f"{'The complement of A' : <19}", "=", f"{complement:b}".zfill(int(x,2).bit_length()))
    
def anotherFunction(num, count=0):
    x = 0
    count = len(num)
    for element in num:
        count = count -1
        z = 2 ** count
        if(int(element) == 1):
            x+=z
    return x
    
def main():
    bit_a = input("Enter the bit string representation of A: ")
    bit_b = input("Enter the bit string representation of B: ")
    theFunction(bit_a, bit_b)

if __name__ == "__main__":
    main()