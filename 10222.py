vocab = "1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./"

def Decode(x):
    y = ""
    for ch in x.lower():
        if ch == " ":
            y += ch
        else:
            y += vocab[vocab.find(ch) - 2]
    return y

def main():
    x = input()
    y = Decode(x)
    print(y)


if __name__ == "__main__":
    main()