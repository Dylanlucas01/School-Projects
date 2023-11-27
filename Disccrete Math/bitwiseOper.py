
def theFunction(a, b, count=0):
    union_ab = int(a,2) | int(b,2)
    print(f"{'A union B' : <19}", "=", f"{union_ab:b}".zfill(int(a,2).bit_length()))

    intersect_ab = int(a,2) & int(b,2)
    print(f"{'A intersect B' : <19}", "=", f"{intersect_ab:b}".zfill(int(a,2).bit_length()))

    count = max(count, int(a,2).bit_length(), 1)
    x = 2 ** count - 1
    complement = int(a,2) ^ x
    print(f"{'The complement of A' : <19}", "=", f"{complement:b}".zfill(int(a,2).bit_length()))
    
def main():
    bit_a = input("Enter the bit string representation of A: ")
    bit_b = input("Enter the bit string representation of B: ")
    print("\n")
    theFunction(bit_a,bit_b)

if __name__ == "__main__":
    main()