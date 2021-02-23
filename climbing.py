#You are climbing a staircase. It takes n steps to reach the top.
#Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?


class Solution:
    def calc(self, n, store):
        if n in store:
            return store[n]
        if n == 1 or n == 0:
            return 1
        store[n] = self.calc(n-1, store) + self.calc(n-2, store)
        return store[n]
    
    def climbStairs(self, n: int) -> int:
        return self.calc(n, {})

ob = Solution()

print(ob.climbStairs(5))