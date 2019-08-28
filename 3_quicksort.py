def quickSort(arr): 
    for i in range(1, len(arr)): 
        key = arr[i] 
        j = i-1
        while j >= 0 and key < arr[j] : 
                arr[j + 1] = arr[j] 
                j -= 1
        arr[j + 1] = key
n=int(input("Enter number of elements in the array :"))
arr = [ int(input("Enter array elements :")) for i in range(n)]
print ("Given array is", end="\n")  
for i in range(len(arr)): 
    print (arr[i]) 
quickSort(arr)
print ("Sorted array is", end="\n")
for i in range(len(arr)): 
    print (arr[i]) 
