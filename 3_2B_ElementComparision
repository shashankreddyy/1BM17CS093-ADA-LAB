x=0
y=0
def mergeSort(arr):
    global x
    if len(arr) >1: 
        mid = len(arr)//2
        L = arr[:mid] 
        R = arr[mid:]
  
        mergeSort(L) 
        mergeSort(R) 
  
        i = j = k = 0
          
        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                x+=1
                arr[k] = L[i] 
                i+=1
            else:
                arr[k] = R[j] 
                j+=1
            k+=1

        while i < len(L):
            arr[k] = L[i] 
            i+=1
            k+=1
          
        while j < len(R):
            arr[k] = R[j] 
            j+=1
            k+=1
  
if __name__ == '__main__':
    arr = [4,7,6,9,3]
    mergeSort(arr) 
    print("Sorted array is: ", end="\n") 
    for i in range(len(arr)): 
      print (arr[i])
    print("Number of comparisons in Merge Sort = ",x)

def bubbleSort(arr):
    global y
    n = len(arr) 
    for i in range(n): 
        for j in range(0, n-i-1): 
            if arr[j] > arr[j+1] :
                y+=1
                arr[j], arr[j+1] = arr[j+1], arr[j]
arr = [4,7,6,9,3]
bubbleSort(arr)
print ("Sorted array") 
for i in range(len(arr)): 
    print("%d" %arr[i]),
print("Number of comparisons in Bubble Sort = ",y)

import sys
z=0
A = [4,7,6,9,3]
for i in range(len(A)): 
    min_idx = i 
    for j in range(i+1, len(A)): 
        if A[min_idx] > A[j]:
            z+=1
            min_idx = j         
    A[i], A[min_idx] = A[min_idx], A[i] 
print ("Sorted array") 
for i in range(len(A)): 
    print("%d" %A[i])
print("Number of comparisons in Selection Sort = ",z)
