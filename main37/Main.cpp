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
double find_avg_progress(int matrix[N][M]);
void increase_mark_above_avg(int matrix[N][M], double avg);

int main() {
	int matrix[N][M];
	random_matrix_init(matrix, 1, 9);

	double avg = find_avg_progress(matrix);

	cout << "Matrix before:\n" << convert_matrix_to_string(matrix);
	increase_mark_above_avg(matrix, avg);
	cout << avg << endl;
	cout << "Matrix after:\n" << convert_matrix_to_string(matrix);


	return 0;
}