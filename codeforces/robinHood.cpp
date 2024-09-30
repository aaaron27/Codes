// Robin Hood in Town
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

float averageWealth(int n, int totalSum){
    return (float)totalSum/n;
}

// cantidad de personas infelices
int media(vector<int> people, float wealth){
    int c = 0;
    for (int i : people){
        if (i < wealth) c++;
        else break;
    }
    return c;
}

int problem(vector<int> people, int totalSum, int maxWealth){
    int n = (int)people.size();
    float wealth = averageWealth(n, totalSum);

    int m = media(people, wealth/2);
    if (m > (float)n/2) return 0; // no se necesita mas oro para llamar a robin


    return -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, totalSum = 0, maxWealth = 0;
        cin >> n;
        vector<int> people;

        while (n--){
            int ai;
            cin >> ai;
            maxWealth = max(maxWealth, ai);
            totalSum += ai;
            people.push_back(ai);
        }
        cout << problem(people, totalSum, maxWealth) << '\n';
    }
    return 0;
}
