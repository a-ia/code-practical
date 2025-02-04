#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<std::vector<int>> matrix(5, std::vector<int>(5));
    int row_pos = -1, col_pos = -1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cin >> matrix[i][j];
            
            if (matrix[i][j] == 1) {
                row_pos = i;
                col_pos = j;
            }
        }
    }

    int moves = std::abs(row_pos - 2) + std::abs(col_pos - 2);

    std::cout << moves << std::endl;

    return 0;
}

