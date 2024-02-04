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