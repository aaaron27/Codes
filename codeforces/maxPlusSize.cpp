#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int maxA = 0, maxB = 0;
        int aSize = 0, bSize = 0;
        bool bandera = false;

        while(n--){
            int ni;
            cin >> ni;

            if (bandera) {
                maxA = max(maxA, ni);
                aSize++;
            }
            else {
                maxB = max(maxB, ni);
                bSize++;
            }
            bandera = !bandera;
        }
        cout << max(aSize+maxA, bSize+maxB) << '\n';
    }

    return 0;
}
