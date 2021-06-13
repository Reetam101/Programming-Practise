#include <iostream>
#include <cstring>
using namespace std;

int maxGold(int gold[][3], int m, int n) {
	int goldTable[m][n];
	memset(goldTable, 0, sizeof(goldTable));
	int right, right_up, right_down;
	for(int col = n-1; col >= 0; col--) {
		for(int row = 0; row < m; row++) {
			if(col == n-1) {
				right = 0;
			} else {
				right = goldTable[row][col+1];
			}

			if(row==0 || col==n-1) {
				right_up = 0;
			} else {
				right_up = goldTable[row-1][col+1];
			} 

			if(row==m-1 || col==n-1) {
				right_down = 0;
			} else {
				right_down = goldTable[row+1][col+1];
			}

			goldTable[row][col] = gold[row][col] + max(right, max(right_up, right_down));
		}
	}

	int res = goldTable[0][0];
	for (int i = 1; i < m; i++) {
		res = max(res, goldTable[i][0]);
	}

	return res;
}

int main () {
	int gold[][3] = {
		{1, 3, 3},
        {2, 1, 4},
        {0, 6, 4}
	};

	cout << maxGold(gold, 3, 3);
	return 0;
}