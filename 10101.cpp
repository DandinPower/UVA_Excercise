#include <iostream>
#include <vector>
#include <string>

using namespace std;

void OutCheck(int value, string type, int index){
    if (value == 0){
        return;
    }
    if(type == " kuti " & index == 0) cout << value;
    else cout << value << type;
}

int main(void){
    while(1){
        long long a;
        cin >> a;
        vector<long long> normal;
        vector<long long> shata;
        vector<long long> hajar;
        vector<long long> lakh;
        while(1){
            normal.push_back(a % 100);
            a /= 100;
            shata.push_back(a % 10);
            a /= 10;
            hajar.push_back(a % 100);
            a /= 100;
            lakh.push_back(a % 100);
            a/= 100; 
            if (a < 1) break;
        }
        for (int i=normal.size()-1;i>=0;i--){
            OutCheck(lakh[i]," lakh ",i);
            OutCheck(hajar[i]," hajar ",i);
            OutCheck(shata[i]," shata ",i);
            OutCheck(normal[i]," kuti ",i);      
        }
        cout << endl;
    }
    return 0;
}