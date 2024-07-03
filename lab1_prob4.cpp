#include <iostream>


int binomialCoeff(int n, int k) {
    int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

void printSpaces(int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << " ";
    }
}


void printPascalPyramid(int rows) {
    
    for (int i = 0; i < rows; ++i) {
        printSpaces(rows - i - 1); 
        for (int j = 0; j < 2 * i + 1; ++j) {
            int coef = binomialCoeff(i, std::abs(j - i));
            if (coef != 0) {
                std::cout << coef << " ";
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    int rowNumber;
    std::cout << "Enter the row number: ";
    std::cin >> rowNumber;

    std::cout << "Pascal's pyramid up to row " << rowNumber << ":\n";
    printPascalPyramid(rowNumber);

    return 0;
}
