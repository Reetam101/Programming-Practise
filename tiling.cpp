#include <iostream>
using namespace std;

int solve(int n, int dp[1000]) {
  if(n == 0) 
    return 0;
  if(n == 1)
    return 1;  
  if(dp[n] != -1) 
    return dp[n]; 
  return (dp[n] = solve(n - 1, dp) + solve(n - 2, dp));     
}

int main () {
  int n;
  cin >> n;
  int dp[1000];
  for(int i = 0; i < 1000; i++) 
    dp[i] = -1;
  cout << solve(n, dp);
  return 0;
}