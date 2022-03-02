#include <iostream>
#include <vector>
#include <string>

using namespace std;


int ThreeNPlusOne(int n){
    int result = 0;
    while(1){
        result += 1;
        if (n == 1) break;
        else if(n % 2 == 1) n = 3*n + 1;
        else n/= 2;
    }
    return result;
}

int ThreeNPlusOne_Recursive(int n){
    if (n== 1) return 1;
    else if(n % 2 == 1) return ThreeNPlusOne_Recursive(3*n + 1) + 1;
    else return ThreeNPlusOne_Recursive(n/2) + 1;
}

void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int GetCycleLength(int a,int b){
    int Max = 0;
    if (a > b) Swap(&a,&b);
    for (int i=a;i<=b;i++){
        int result = ThreeNPlusOne_Recursive(i);
        if (result > Max) Max = result;
    }
    return Max;
}

int main(void){
    int a,b;
    while(1){
        cin >> a >> b;
        cout << a << " " << b << " " << GetCycleLength(a,b) << endl;
    }
    return 0;
}