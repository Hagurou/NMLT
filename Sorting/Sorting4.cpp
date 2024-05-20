#include<iostream>
#include<set>
#include<vector>
using namespace std;
void sorting4(int n, int m, vector<int>& a, vector<int>& b){
//Lưu vào set để có mảng hợp.
    set<int> s1;
    set<int> s2(a.begin(), a.end());
    vector<int> v;
    for(int i = 0; i < n; i++){
        s1.insert(a[i]);
    }
    for(int i = 0; i < m; i++){
        s1.insert(b[i]);
    }
    for(int i = 0; i < b.size(); i++){
        if(s2.find(b[i]) != s2.end()){
            v.push_back(b[i]);
        }
    }
    for(auto i = s1.begin(); i != s1.end(); i++){
        cout << *i << " ";
    }
    cout << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        for(int i = 0; i < a.size(); i++){
            cin >> a[i];
        }
        for(int i = 0; i < b.size(); i++){
            cin >> b[i];
        }
        sorting4(n, m, a, b);
    }
    return 0;
}
//đề cho mảng, tuy nhiên mình đã chuyển sang vector. Thao tác thêm phần tử
//trong mảng vào vector thì cực kì dễ dàng r.
//code này cũng giải quyết vấn đề của sorting5.