#include<iostream>
#include<map>
#include<set>
using namespace std;
void Matrix2(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    map<int, set<int>> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            m[a[i][j]].insert(i);
        }
    }
    int count = 0;
    for(const auto &pair : m){
        if(pair.second.size() == n){
            count++;
        }
    }
    cout << count << endl;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        Matrix2();
    }
    return 0;
}
