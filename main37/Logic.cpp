#include <iostream>
#include <string>
#define N 5
#define M 5

using namespace std;
 
int find_group_with_highest_mark(int matrix[N][M], int mark) {
	int group_index = -2;
	int max_count = 0;

	for (int i = 0; i < N; i++)
	{
		int current_count = 0;
		for (int j = 0; j < M; j++)
		{
			if (matrix[i][j] == mark) {
				current_count++;
			}
		}
		if (current_count > max_count) {
			max_count = current_count;
			group_index = i;
		}
	}

	return group_index;
}

string find_group_with_lowest_marks(int matrix[N][M]) {
	string msg = "";
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (matrix[i][j] >= 0 && matrix[i][j] <= 3) {
				msg += "Group " + to_string(i + 1) + "\n";
				break;
			}
		}
	}

	return msg;
}

double find_avg_progress(int matrix[N][M]) {
	double avg = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			avg += matrix[i][j];
		}
	}
	
	return avg / (N * M);
}

double find_avg_progress_group(int matrix[N][M], int row_index) {
	double avg = 0;

	for (int i = 0; i < M; i++)
	{
		avg += matrix[row_index][i];
	}
	
	return avg / M;
}

void increase_mark_above_avg(int matrix[N][M], double avg) {
	
	for (int i = 0; i < N; i++)
	{
		double group_avg = find_avg_progress_group(matrix, i);
		
		for (int j = 0; j < M && group_avg > avg; j++)
		{
			matrix[i][j]++;
		}
	}
}

void find_avg_progress_each_group(int matrix[N][M], double* vector) {
	for (int i = 0; i < N; i++)
	{
		vector[i] = find_avg_progress_group(matrix, i);
		cout << vector[i] << endl;
	}
}

void sort_desc_progress(int matrix[N][M], double* vector) {
	for (int i = 0; i < N - 1; i++)
	{
		int current_min_index = i + 1;

		for (int j = i + 2; j < N; j++)
		{
			if (vector[current_min_index] < vector[j]) {
				current_min_index = j;
			}
		}

		if (vector[i] < vector[current_min_index]) {
			swap(vector[current_min_index], vector[i]);
			swap(matrix[current_min_index], matrix[i]);
		}
	}
}