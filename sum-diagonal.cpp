#include <bits/stdc++.h>
using namespace std;
int main(){
    int row=3, col=3;
    int first[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> first[i][j];
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << first[i][j] << " ";
        }
        cout << endl;
    }
    int sum=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==j){
                sum=sum+first[i][j];
            }
        }
    }
    cout << sum;
}