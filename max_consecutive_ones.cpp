// given an array find the max consecutive 1s.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 0, 1, 1, 0, 1, 1, 1, 0};
    int ans = 0, count = 0;
    for(auto& i : v) {
        if(i == 1) {
            count++;
        }
        else {
            count = 0;
        }
        ans = max(ans, count);
    }

    cout << ans;
    return 0;
}
