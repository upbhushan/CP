def solve(l, r, x):
    first = ((l + x - 1) // x) * x
    if first > r:
        return 0
    last = (r // x) * x
    return (last - first) // x + 1

def main():
    t = int(input())
    
    for _ in range(t):
        l, r, k = map(int, input().split())
        
        # all possible
        if k == 1:
            print(r - l + 1)
            continue
        
        #  not possible 
        if 2 * l > r:
            print(0)
            continue
        
        cnt = 0
        
        # Optimization
        for i in range(l, r + 1):
            if i * k > r:
                break
            count = solve(l, r, i)
            if count >= k:
                cnt += 1
        
        print(cnt)
main()
