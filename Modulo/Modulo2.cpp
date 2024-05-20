#include<iostream>
using namespace std;
void find(int a, int m){
    for(int i = 1; i < m; i++){
        if(a*i % m == 1){
            cout << i << endl;
            break;
        }
    }
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int a, m;
        cin >> a >> m;
        find(a, m);
    }
    return 0;
}