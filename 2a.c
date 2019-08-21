#include <stdio.h>
 
 void selectionsort(int arr[],int n,int k)
 {     int minpos,temp,i,j;
	 for(i=0;i<k;i++)
	 {
		minpos=i;
     for(j=minpos+1;j<n;j++) 
	 {
		  if(arr[j]<arr[minpos])
			  minpos=j;
	 }
	 temp=arr[minpos];
	 arr[minpos]=arr[j];
	 arr[j]=temp;
	 }
	 
	 printf("%dth smallest element in the array is %d \n",k,arr[k-1]);
 }
 
int main()
{  int n,k;
    printf("Enter number of elements to enter :");
	scanf("%d",&n);
	int arr[n];
    for(int i=0;i<n;i++)
		  scanf("%d",&arr[i]);
		  printf("Enter kth smallest to find : ");
		  scanf("%d",&k);
   selectionsort(arr,n,k);
   return 0;  
}