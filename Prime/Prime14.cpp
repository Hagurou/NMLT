#include<iostream>
#include<cmath>
using namespace std;
bool solve(int n){
    int count = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
            if(i != n / i){
                count++;
            }
        }
    }
    return count == 3;
}
int main(){
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            if(solve(i)){
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}