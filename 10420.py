def main():
    while(1):
        answer = dict()
        a = int(input())
        for i in range(a):
            text = input().split(" ")
            country = text[0]
            if (answer.get(country) == None):answer[country] = 0
            answer[country] = answer.get(country) + 1
        answer = {k:v for k,v in sorted(answer.items(),key = lambda item:item[1],reverse=True)}
        for k,v in answer.items():
            print(k,v)
if __name__ == "__main__":
    main()