t = int(input())

for i in range(t):
    a, b, c, x, y = [int(x) for x in input().split()]

    x = max(x - a, 0)
    y = max(y - b, 0)
    if c >= x + y:
        print("YES")
    else:
        print("NO")