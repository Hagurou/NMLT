#include<iostream>
#include<vector>
using namespace std;
vector<int> Matrix20(vector<vector<int>>& mat){
    vector<int> res;
    int h1 = 0, h2 = mat.size() - 1, c1 = 0, c2 = mat[0].size() - 1;
    while(h1 <= h2 && c1 <= c2){
        for(int i = c1; i <= c2; i++){
            res.push_back(mat[h1][i]);
        }
        h1++;
        for(int i = h1; i <= h2; i++){
            res.push_back(mat[i][c2]);
        }
        c2--;
        for(int i = c2; i >= c1; i--){
            res.push_back(mat[h2][i]);
        }
        h2--;
        for(int i = h2; i >= h1; i--){
            res.push_back(mat[i][c1]);
        }
    }
    return res;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> mat(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> mat[i][j];
            }
        }
        vector<int> res = Matrix20(mat);
        cout << res[k - 1] << endl;
    }
    return 0;
}