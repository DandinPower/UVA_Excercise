def Summing(x):
    total = 0
    for ch in x:
        total += int(ch)
    if (total <= 9): return total 
    else: return Summing(str(total))

def main():
    while(1):
        x = input()
        if (x == "0"): break
        print(Summing(x))


if __name__ == "__main__":
    main()