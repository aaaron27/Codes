#include <pthread.h>
#include <vector>
#include <iostream>

using namespace std;

class UnionFind{
private:
    vector<int> parent;
    vector<int> rank;
public:
    UnionFind(int n){
        parent.resize(n);
        rank.resize(n,0);
        for (int i = 0; i < n; i++){
            parent[i] = i;
        }
    }

    int find(int x){
        if (parent[x] != x){
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void unionSets(int x, int y){
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY){
            if (rank[rootX] > rank[rootY]){
                parent[rootY] = rootX;
            }
            else if (rank[rootX] < rank[rootY]){
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }

};
void unionFindMatrix(vector<vector<bool>> M){
    int n = (int)M.size();
    UnionFind uf(n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (M[i][j] == 1){
                uf.unionSets(i,j);
            }
        }
    }

    for (int i = 0; i < n; i++){
        cout << i << ' ' << uf.find(i) << '\n';
    }
}

void printM(vector<vector<bool>> M){
    for (vector<bool> i : M){
        for (bool j : i){
            cout << j << " ";
        }
        cout << '\n';
    }
}

void createMatrix(vector<int> arr){
    int n = (int)arr.size();
    vector<vector<bool>> M(n, vector<bool>(n, false));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (i == j) M[i-1][j-1] = 0;
            else if ((i % 2) != (j % 2)) M[i-1][j-1] = 0;
            else M[i-1][j-1] = 1;
        }
    }
    printM(M);
    unionFindMatrix(M);
}

int main(){
    int n;
    cin >> n;
    vector<int> a;

    while(n--){
        int ni;
        cin >> ni;
        a.push_back(ni);
    }
    createMatrix(a);
    return 0;
}
