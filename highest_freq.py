hashmap={}
arr=[2,2,5,20,5,5,9,8,8,2]
for i in arr:
    hashmap[i]=hashmap.get(i,0)+1
smallest=len(arr)
largest_index=0
smallest_index=0
largest=0

for i in arr:

    if (smallest >hashmap[i]):

        smallest=hashmap[i]
        smallest_index=i
    if(largest >hashmap[i]):
        smallest=hashmap[i]
        smallest_index=i

        
print(largest_index)
print(smallest_index)