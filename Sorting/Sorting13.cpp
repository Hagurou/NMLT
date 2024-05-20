#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Sorting13(){
    int i = 0, j = 0;
    vector<int> c;
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    while(i < n || j < m){
        if(j == m || (i < n && a[i] <= b[j])){
            c.push_back(a[i++]);
        }else{
            c.push_back(b[j++]);
        }
    }
    for(auto it = c.begin(); it != c.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        Sorting13();
    }
    return 0;
}