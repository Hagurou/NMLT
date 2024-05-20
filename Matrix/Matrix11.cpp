#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int Matrix11(vector<vector<int>>& mat, int r, int c){
    vector<vector<int>> aux(r + 1, vector<int>(c + 1));
    for(int i = 0; i < c; i++){
        aux[0][i] = (mat[0][i] == 0 ? 0 : 1);
        //check element in every rows, cols;
        for(int j = 1; j < r; j++){
            aux[j][i] = (mat[j][i] == 0 ? 0 : aux[j - 1][i] + 1);
            //count consecutive 1 appears in a column;
        }
    }
    for(int i = 0; i < r; i++){
        int count[r + 1] = {0};
        for(int j = 0; j < c; j++){
            count[aux[i][j]]++;
            //count number of times a height appears in a row;
        }
        int col = 0;
        for(int j = r; j >= 0; j--){
            //start from r to sort in non-increasing order.
            if(count[j] > 0){
                //if count[j] > 0, means there are height in a cell
                for(int k = 0; k < count[j]; k++){
                    aux[i][col] = j;
                    //assign the height to the next j cells;
                    col++;
                    //incease col to assign to the next cell;
                }
            }
        }
    }
    int area, maxArea = INT_MIN;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            area = (j + 1) * aux[i][j];
            //iterate through all cases and calculate area;
            //calculate area of rectangle;
            if(area > maxArea){
                maxArea = area;
                //update maxArea;
            }
        }
    }
    return maxArea;
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
        cout << Matrix11(mat, r, c) << endl;
    }
}
