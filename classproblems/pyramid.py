n=5
for i in range(5):
    for j in range(n-i,0,-1):
        print(" ",end=" ")
    for k in range(i*2-1):
        print("*",end=" ")
    print()