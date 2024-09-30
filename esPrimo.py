def esPrimo(n):
    if n < 2: return False
    if n == 2: return True
    if not n % 2: return False

    i = 3
    while (i * i < n):
        if not i % n: return False
        i += 2

    return True

print(esPrimo(338))
