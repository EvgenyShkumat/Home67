#include <iostream>
#define N 5
#define M 5

using namespace std;

#include <iostream>
#define N 5
#define M 5

using namespace std;

void random_matrix_init(int matrix[N][M], int min, int max);
string convert_matrix_to_string(int matrix[N][M]);

int find_group_with_highest_mark(int matrix[N][M], int mark);

int main() {
	int matrix[N][M];

	random_matrix_init(matrix, 1, 9);

	int mark = 9;

	cout << "Matrix:\n" << convert_matrix_to_string(matrix);
	cout << "Group with the highest amount of " << mark <<
		" is " << find_group_with_highest_mark(matrix, mark) + 1 << " (-1 = none)";

	return 0;
}