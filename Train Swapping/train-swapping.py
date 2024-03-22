cases = int(input())
for case in range(cases):
    N = int(input())
    data = []
    
    x = input()
    for xx in x.split(' '):
        data.append(xx)

    count = 0
    n = len(data)
    for i in range(n, 1, -1):
        for j in range(0, i-1, 1):
            if data[j] > data[j+1]:
                data[j], data[j+1] = data[j+1], data[j]
                count += 1
    print(f"Optimal train swapping takes {count} swaps.")