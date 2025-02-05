#include <vector>
#include <iostream>

//Matrix stuff
//Awesoooome


  // Matrix traversal function
  // std::vector<datatype> column_traverse(const std::vector<std::vector<datatype>>& matrix)
  std::vector<int> column_traverse(const std::vector<std::vector<int>>& matrix) {
    int rows = matrix.size(); // Member functs for size of rows
    int cols = matrix[0].size(); // Member functs size of cols
    
    std::string direction = "up"; // What direction?

    // Establish staring point bottom right of the matrix
    int row = rows - 1; // Total # of rows - 1 = bottom row
    int col = cols - 1; // Total # of col - 1 = right most col

    std::vector<int> output; // Vector to keep track of cells visited


    while (output.size() < rows * cols) {

        output.push_back(matrix[row][col]); //Update matrix rows and columns as row and col
  
        if (direction == "up") { // If traversing up

            if (row - 1 < 0) { // Row which was deincrementing has reached the top index "0" 

                direction = "down"; // Then direction state is down

                col -= 1; // And column deincrements by 1

            } else {

                row -= 1; // Else by default row deincrements by 1

            }

        } else {

            if (row + 1 == rows) { // If rows equals max # of row (3) meaning row which was incrementing has reached the bottom index "3"

                direction = "up"; // Change direction state to up

                col -= 1; // And column continues to deincrement by 1

            } else {

                row += 1; // Else by default row increments by 1

            }
        }
    }

    // Store the vector of units visited in order of the traversal preformed into the output of this function
    return output;
  }


int main() {

  // Matrix definition and initialization
  std::vector<std::vector<int>> matrix = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
  };

  // Call the Matrix Traversal function and pass our martix in the argument
  // the output is stored in result
  std::vector<int> result = column_traverse(matrix);

    // This prints the result from the output which is every unit from the vector in order of the traversal preformed 
    for (int unit : result) {
        std::cout << unit << " ";
    }

  return 0;
}
