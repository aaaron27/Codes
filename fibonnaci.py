# fibonnaci dp
# O(n)

memo = [0 for i in range(1000)]
def fib(n):
    if n == 0: return 0
    if n <= 2: return 1

    if memo[n] != 0: return memo[n]
    memo[n] = fib(n-1) + fib(n-2)
    return memo[n]

for i in range(10):
    print(fib(i) % 337)
