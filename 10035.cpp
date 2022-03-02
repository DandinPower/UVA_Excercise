#include <iostream>
#include <vector>
#include <string>

using namespace std;

string Format(int a){
    if (a == 0) return "No";
    else return to_string(a);
}

int Max(int a, int b){
    if (a >= b) return a;
    else return b;
}

int GetCarryOperation(int result,int larger){
    int total = 0;
    while(1){
        int a = larger%10;
        int b = result%10;
        if (b < a) total += 1;
        larger = larger/10;
        result = result/10;
        if (larger == 0)break; 
    }
    return total;
}

int main(void){
    int a, b;
    while(1){
        cin >> a >> b;
        if (a == 0 & b == 0) break;
        int result = a + b;
        cout << Format(GetCarryOperation(result,Max(a,b))) << " carry operation."<<endl;
    }
    return 0;
}