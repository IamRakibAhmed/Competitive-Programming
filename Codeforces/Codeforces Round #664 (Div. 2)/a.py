t = int(input())

for _ in range(t):
    r, g, b, w = map(int, input().split())
    color_List = [r, g, b, w]
    check = 0
    cnt = 0
    for i in range(len(color_List)):
        if color_List[i] % 2 == 0:
            check += 1
        else:
            cnt += 1
    if(r * g * b == 0):
        if(cnt <= 1):
            print('Yes')
            continue
        else:
            print('No')
            continue

    if(check == 4):
        print('Yes')
        continue
    elif check == 3 and cnt == 1:
        print('Yes')
        continue
    else:
        if(cnt == 4):
            print('Yes')
            continue
        elif cnt == 3 and check == 1:
            print('Yes')
            continue
        else:
            print('No')
            continue