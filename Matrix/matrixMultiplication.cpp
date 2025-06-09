#include <iostream>
using namespace std;

const int R1 = 2; 
const int C1 = 2; 
const int R2 = 2; 
const int C2 = 3; 

void multMatrix(int A[][C1], int B[][C2]) {
  int result[R1][C2]; 

  cout << "Multiplcation of given two matricies is:\n";

  for (int i = 0; i < R1; i++) {
    for (int j = 0; j < C2; j++) {
      result[i][j] = 0; // setting values in result matrix to 0

      for (int k = 0; k < R2; k++) {
        result[i][j] += A[i][k] * B[k][i];
      }

      cout << result[i][j] << "\t"; 
    }

    cout << endl;
  }
}



int main() {
  int A[R1][C1] = { {1, 1}, {2, 2}};
  int B[R2][C2] = { {1, 1, 1,}, {2, 2, 2}};

  if (C1 != R2) {
    cout << "The number of columns in Matrix 1 must be equal to the number of rows in Matrix 2" << endl;
    exit(EXIT_FAILURE);
  }

  multMatrix(A, B);

  return 0; 
}