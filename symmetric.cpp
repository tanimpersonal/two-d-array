#include <bits/stdc++.h>
using namespace std;
//symmetric if row,col == col, row
int main(){
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
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matrix[row][col]!=matrix[col][row]){
                cout << "NO" <<endl;
                return 0;
            } else{
                cout << "YES";
            }
        }
    }
}