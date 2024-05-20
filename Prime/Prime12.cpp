#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int solve(int n, int k){
    vector<int> v;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            v.push_back(i);
            n /= i;
        }
    }
    if(n > 1){
        v.push_back(n);
    }
    if(k < v.size()){
        return v[k - 1];
    }else{
        return -1;
    }
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    return 0;
}