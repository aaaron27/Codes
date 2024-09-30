#include <bits/stdc++.h>

using namespace std;

#define ll long long int

vector<ll> table(int n, int k){
    vector<ll> tabla;
    ll current = 1;
    tabla.push_back(current);

    for (int i = 1; current * k <= n; i++){
        current *= k;
        tabla.push_back(current);
    }
    return tabla;
}

ll binarySearch(vector<ll> table, int n){
    int low = 0;
    int high = table.size() - 1;
    ll res = -1;

    while (low <= high) {
        int medio = low + (high - low) / 2;

        if (table[medio] <= n) {
            res = medio;
            low = medio + 1;
        } else {
            high = medio - 1;
        }
    }
    return (res != -1) ? table[res] : -1;
}

ll operations(int n, int k){
    if (k == 1) return n;
    ll c = 0;
    vector<ll> tabla = table(n,k);

    while(n > 0){
        n -= binarySearch(tabla, n);
        c++;
    }
    return c;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;
        cout << operations(n,k) << '\n';
    }
    return 0;
}
