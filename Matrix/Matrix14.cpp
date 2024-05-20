#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int Matrix14(vector<vector<int>>& mat, int r, int c){
    vector<vector<int>> aux(r, vector<int>(c));
    for(int i = 0; i < c; i++){
        aux[0][i] = mat[0][i];
    }
    for(int i = 0; i < r; i++){
        aux[i][0] = mat[i][0];
    }
    //copy first row and col cause maximum sub-square area will be 1;
    for(int i = 1; i < r; i++){
        for(int j = 1; j < c; j++){
            if(mat[i][j] == 1){
                aux[i][j] = min(aux[i - 1][j], min(aux[i][j - 1], aux[i - 1][j - 1])) + 1;
                //if mat[i][j] == 1, then check for the minimum of the three cells above, left and diagonal to the current cell cause the maximum sub-square area will be the minimum of the three cells + 1;
            }else{
                aux[i][j] = 0;
            }
        }
    }
    int max = INT_MIN;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(aux[i][j] > max){
                max = aux[i][j];
            }
        }
    }
    return max;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int r, c;
        cin >> r >> c;
        vector<vector<int>> mat(r, vector<int>(c));
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin >> mat[i][j];
            }
        }
        cout << Matrix14(mat, r, c) << endl;
    }
    return 0;
}
