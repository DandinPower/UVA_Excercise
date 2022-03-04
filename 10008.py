AIndex = 65
aIndex = 97
offset = 32
ZIndex = 65 + 25
zIndex = 97 + 25

def CheckInt(x):
    if (ord(x) >= AIndex and ord(x) <= ZIndex) or (ord(x) >= aIndex and ord(x) <= zIndex): return True 
    return False

def main():
    while(1):
        answer = dict()
        a = int(input())
        for i in range(a):
            text = input().upper()
            print(text)
            for ch in text:
                if (CheckInt(ch)):
                    num = answer.get(ch)
                    if (num == None): num = 0
                    answer[ch] = num + 1
        answer = {k: v for k, v in sorted(answer.items(), key=lambda item: item[1],reverse=True)}
        for k,v in answer.items():
            print(k,v)

if __name__ == "__main__":
    main()