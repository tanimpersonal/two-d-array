#include <bits/stdc++.h>
using namespace std;
int main(){
    //diagonal=> must be square matrix. means same column same row, excluding diagonal other elements need to be 0

    int row=3, col=3;
    int matrix[row][col];
    for(int i=0; i<row; i++){
        for( int j=0; j<col; j++){
            cin >> matrix[i][j];
        }
    }
    for(int i=0; i<row; i++){
        for( int j=0; j<col; j++){
            cout << matrix[i][j] << " " ;
        }
        cout << endl;
    }
    int requiredCol= 2;
    for(int i=0; i<row; i++){
        cout << matrix[i][2] << " ";
    }
    //check if diagonal
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i!=j && matrix[i][j]==0){
                cout << "Diagonal";
                return 0;
            }
        }
    }
}