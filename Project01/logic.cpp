#include <iostream>

using namespace std;

#define size 4

string triangular_matrix(int matrix[size][size]) {

	string result = "";

	bool upper_triangular_matrix = true;
	bool lower_triangular_matrix = true;

	for (int i = 0; i < size; i++)
	{
		if (!upper_triangular_matrix) {
			break;
		}
		for (int j = i + 1; j < size; j++)
		{
			if (matrix[i][j] != 0) {
				upper_triangular_matrix = false;
				break;
			}
		}
	}

	for (int k = 1; k < size; k++)
	{
		if (!lower_triangular_matrix) {
			break;
		}
		for (int l = 0; l < k; l++)
		{
			if (matrix[k][l] != 0) {
				lower_triangular_matrix = false;
				break;
			}
		}
	}

	if (upper_triangular_matrix || lower_triangular_matrix) {
		result += "Yes, this ";
		result += upper_triangular_matrix && lower_triangular_matrix ? "are " : "is ";
		result += upper_triangular_matrix ? "an upper " : "";
		result += upper_triangular_matrix && lower_triangular_matrix ? "and " : "";
		result += lower_triangular_matrix ? "a lower " : "";
		result += "triangular matrix";
	}
	else {
		result += "No, this isn't triangular matrix";
	}
	return result;
}