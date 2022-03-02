#include <iostream>
#include <vector>

using namespace std;

int Abs(int a){
    if (a < 0) return -a;
    else return a;
}

int Min(int a, int b){
    if (a >= b) return b;
    else return a;
}

vector<int> Sort(vector<int> inputPath){
    for (int i=1;i<=inputPath.size();i++){
        for (int j=0;j<inputPath.size()-i;j++){
            if (inputPath[j] > inputPath[j+1]){
                int temp = inputPath[j];
                inputPath[j] = inputPath[j+1];
                inputPath[j+1] = temp;
            }
        }
    }
    return inputPath;
}

int main(){
    int inputNums;
    cin >> inputNums;
    vector<vector<int>> inputPath;
    
    for (int i=0;i<inputNums;i++){
        int pathNums;
        cin >> pathNums;
        vector<int> tempPath;
        for(int j=0;j<pathNums;j++){
            int tempPoints;
            cin >> tempPoints;
            tempPath.push_back(tempPoints);
        }
        inputPath.push_back(tempPath);
    }

    for(int i=0;i<inputPath.size();i++){
        inputPath[i] = Sort(inputPath[i]);
        int medium = inputPath[i].size()/2;
        int distance = 0;
        int distance2 = 9999;
        for(int j=0;j<inputPath[i].size();j++){
            distance += Abs(inputPath[i][medium] - inputPath[i][j]);
        }
        if (inputPath[i].size()%2 == 1){
            distance2 = 0;
            for(int j=0;j<inputPath[i].size();j++){
                distance2 += Abs(inputPath[i][medium+1] - inputPath[i][j]);
            }
        }
        cout << Min(distance,distance2) << endl;
    }
}