// find the row with maximum number of 1s
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> arr = {{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};
    int n = arr.size();
    int m = arr[0].size();
    int i = 0, j = m-1, ans=-1;
    while(i <= n-1 && j >= 0) {
        if(arr[i][j] == 1) {
            j--;
            ans = i;
        }
        else {
            i++;
        }
    }
    cout << ans;
}
