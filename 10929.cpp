#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void){
    int input;
    while(1){
        cin >> input;
        if (input == 0) break;
        string answer;
        if (input %11 == 0) answer = " is a multiple of 11.";
        else answer = " is not a multiple of 11.";
        cout << input << answer << endl;
    }
    return 0;
}