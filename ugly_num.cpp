#include <iostream>

using namespace std;

int dp[1000];
void init() {
  for(int i = 0; i < 1000; i++)
    dp[i] = -1;
}

int solve(int n) {
  if (n == 1) 
    return 1;
  if (dp[n] != -1) 
    return dp[n];
  return (dp[n] = );     
}


int main() {
  int n;
  cin >> n;
  solve(n);
}
