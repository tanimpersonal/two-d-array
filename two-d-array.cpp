#include <bits/stdc++.h>

using namespace std;
int main(){
    int matrixOne[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> matrixOne[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << matrixOne[i][j] << " ";
        }
        cout << endl;
    }
}