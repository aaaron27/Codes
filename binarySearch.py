def binarySearch(list, low, high, i):
    if low > high: return False
    m = (high + low)//2;

    if list[m] == i: return True
    if (m > i): return binarySearch(list, low, m-1, i)
    return binarySearch(list, m+1, high, i)

list = [1,2,3,4,5,6,7,8,9,10]

print(binarySearch(list, 0, len(list), 4))
