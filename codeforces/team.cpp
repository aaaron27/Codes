#include <iostream>
using namespace std;

int main(){
    int n;
    int sum = 0;
    cin >> n;
    while(n--){
        bool ni;
        int sumNi = 0;
        for (int i = 0; i < 3; i++){
            cin >> ni;
            sumNi += ni ? 1 : 0;
        }
        sum += sumNi >= 2 ? 1 : 0;
    }
    cout << sum << '\n';
}
