n = int(input())
X = 0
for i in range(n):
    i = input()
    if i[1] == "+": X += 1
    else: X -= 1

print(X)
