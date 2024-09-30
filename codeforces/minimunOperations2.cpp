#include <bits/stdc++.h>
using namespace std;

// O(logk n)
int operations(int n, int k){
    if (k == 1) return n;
    int operations = 0;
    while (n>0){
        operations += n % k;
        n = n/k;
    }
    return operations;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        cout << operations(n,k) << '\n';
    }
    return 0;
}
