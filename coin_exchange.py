def count(arr, m, n):
    if n == 0:
        return 1
    if n < 0:
        return 0
    if m <= 0 and n >= 1:
        return 0
    return count(arr, m-1, n)        


arr = [1, 2, 3]

m = len(arr)

count(arr, m, 4)