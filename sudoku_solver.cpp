#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

bool check(int sudoku[9][9], int row, int col, int num);
bool solve(int sudoku[9][9], int row, int col);
void print(int sudoku[9][9]);

int main() {
    srand(time(0));
    int sudoku[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            sudoku[i][j] = rand() % 9 + 1;
        }
    }

    print(sudoku);
    if (solve(sudoku, 0, 0)) {
        std::cout << "Solved sudoku: " << std::endl;
        print(sudoku);
    } else {
        std::cout << "No solution exists for the given sudoku." << std::endl;
    }

    return 0;
}
 
bool check(int sudoku[9][9], int row, int col, int num) {
    for (int i = 0; i < 9; i++) {
        if (sudoku[row][i] == num || sudoku[i][col] == num) {
            return false;
        }
    }

    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (sudoku[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}

bool solve(int sudoku[9][9], int row, int col) {
    if (row == 9) {
        return true;
    }

    if (col == 9) {
        return solve(sudoku, row + 1, 0);
    }

    if (sudoku[row][col] != 0) {
        return solve(sudoku, row, col + 1);
    }

    for (int num = 1; num <= 9; num++) {
        if (check(sudoku, row, col, num)) {
            sudoku[row][col] = num;
            if (solve(sudoku, row, col + 1)) {
                return true;
            }
        }
    }

    sudoku[row][col] = 0;
    return false;
}

void print(int sudoku[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            std::cout << sudoku[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
