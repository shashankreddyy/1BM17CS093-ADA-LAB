#include <stdio.h>

void main()
{   int tc,i,j,N,f,l,ele,mid,arr[10],flag=0;
	
	scanf("%d",&tc);
	printf("\n");
	for(j=0;j<tc;j++)
	{

	scanf("%d%d",&N,&ele);
	   for(i=0;i<N;i++)
   {
	   scanf("%d",&arr[i]);
   }
   
	f=0;l=N;
    
	while(f<=l)
	{ 	mid=(f+l)/2;
	  if(ele==arr[mid])
	  {  
		flag=1;
		break;
	  }
	  else if(ele>arr[mid])
	  {
		  f=mid+1;
	  }	
	  else
	  {
		  l=mid-1;
	  }
	  
	}
	
	if(flag==1)
	{
		printf("1\n");
	}
         else
	        printf("-1\n");
		
        flag=0;		
	
	
 }
}
