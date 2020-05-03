#include<bits/stdc++.h>
using namespace std;
void buildTree(int *a,int node,int start,int end,int *segment)
{
if(start==end)
{
segment[node]=a[start];
}
else
{
int mid=(start+end)/2;
//Left array elements
buildTree(a,2*node,start,mid,segment);
//Right array elements
buildTree(a,(2*node)+1,mid+1,end,segment);
segment[node]=segment[(2*node)+1]+segment[2*node];
}
}
int main()
{
int n;
int a[n];
cout<<"Enter the size of the array:\n";
cin>>n;
for(int i=0;i<n;i++)
{
cin>>a[i];
}
int segment[2*n];
buildTree(a,1,0,n-1,segment);
cout<<"Pritnting the tree\n";
for(int i=1;i<2*n;i++)
{
cout<<segment[i]<<" ";
}
cout<<endl;
return 0;
}
