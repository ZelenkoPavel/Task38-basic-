#include <iostream>

using namespace std;

#define size 4


void random_init_matrix(int matrix[size][size], int max, int min);
string convert_matrix_to_string(int matrix[size][size]);

string triangular_matrix(int matrix[size][size]);

int main() {

	int max = 1, min = 0;
	int matrix[size][size];

	random_init_matrix(matrix, max, min);

	cout << convert_matrix_to_string(matrix) << endl;

	cout << "Result - " << triangular_matrix(matrix) << endl;

	return 0;
}