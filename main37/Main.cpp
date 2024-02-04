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
string find_group_with_lowest_marks(int matrix[N][M]);
int find_avg_progress(int matrix[N][M]);

int main() {
	int matrix[N][M];

	random_matrix_init(matrix, 1, 9);

	int mark = 9;
	string msg = find_group_with_lowest_marks(matrix) == ""
		? "There is no grups which have unsatisfactory marks" :
		"Groups which have unsatisfactory marks:\n" + find_group_with_lowest_marks(matrix);

	cout << "Matrix:\n" << convert_matrix_to_string(matrix);
	cout << msg;

	return 0;
}