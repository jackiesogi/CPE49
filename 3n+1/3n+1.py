def get_cycle(num: int):

    count = 1
    while num != 1:
        if num % 2 == 1:
            num = num * 3 + 1
        else:
            num = num / 2
        count += 1
    return count

while True:
    try:
        a, b = input().split(' ')
        a = int(a)
        b = int(b)

        max_cycle = 0

        for i in range(min(a,b), max(a,b)+1):
            
            tmp_cycle = get_cycle(i)
            
            if tmp_cycle > max_cycle:
                max_cycle = tmp_cycle
        
        print(f"{a} {b} {max_cycle}")


    except:
        break