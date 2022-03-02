#include <iostream>
#include <vector>
#include <string>
using namespace std;

long Abs(long a){
    if (a >= 0) return a;
    else return -a;
}


int main(void){
    while(1){
        long a,b;
        cin >> a >> b;
        cout << Abs(a - b) << endl;
    }
}