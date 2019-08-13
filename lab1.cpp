#include<iostream>
#include<stdio.h>
#include<fstream>
#include<vector>
using namespace std;


int binarys(vector<int> a,int low,int high,int ele)
{
int mid;
while(low<=high)
{
mid=(low+high)/2;
if(a[mid]==ele)
{
return ele;										//Binary search
}
else if(a[mid]>ele)
{
high=mid-1;
}
else
{
low=mid+1;
}
}
return -1;
}
//-----------------------------------------------------------------MAIN FUNCTION()--------------------------------------------------------------------------


int main()
{
int n,x,ele,pos,t;
freopen("lab0.txt","r",stdin);
vector<int> arr;
cin>>t;      //testcases

while(t--)
{
pos=-1;
//cout<<"\n\nEnter the number of elements in the array\n";
cin>>n;
//cout<<"\n\nEnter the element to be searched\n";
cin>>ele;
for(int i=0;i<n;i++)
{
//cout<<"\nEnter element to be inserted\n";
cin>>x;
arr.push_back(x);
}
pos=binarys(arr,0,n-1,ele);
if(pos>-1)
cout<<"\n\n1\n\n";

else
cout<<"\n\n-1\n\n";

}
return 0;
}
