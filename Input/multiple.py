SIZE = 5

def arr_mult(a):
    print('Enter ',SIZE,' numbers')
    for i in range(SIZE):
        ls.append(input())

def same():
    print('Enter ',SIZE,' numbers on the same line')
    a = input().split()
    print(a)
    
if __name__ ==  "__main__":
    
    ls = []
    arr_mult(ls)
    print(ls)

    same()