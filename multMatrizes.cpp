#include <iostream>
#include <vector>

using namespace std;

#define Mat vector<vector<int>>

int main(){
    int m, n, p;

    Mat bMatrix;
    Mat aMatrix;
    Mat product;

    for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                // Multiply the row of A by the column of B to get the row, column of product.
                for (int inner = 0; inner < 2; inner++) {
                    product[row][col] += aMatrix[row][inner] * bMatrix[inner][col];
                }
                std::cout << product[row][col] << "  ";
            }
            std::cout << "\n";
        }
    return 0;
}
