//Print the ganeshs swastik pattern
#include<bits/stdc++.h>
using namespace std;
void printSwastik(int n)
{
//first pattern
cout<<"*";
//we then have to print (n-3)/2 spaces;
for(int i=0;i<(n-3)/2;i++)
{
cout<<" ";
}
//we have to print n-(n-3)/2-1 stars=> ie. (n+2)/2
for(int i=0;i<(n+1)/2;i++)
{
cout<<"*";
}
cout<<endl;
//Pattern 2
for(int i=0;i<(n-3)/2;i++)
{
cout<<"*";
for(int i=0;i<(n-3)/2;i++)
{
cout<<" ";
}
cout<<"*"<<endl;
}
//pattern 3
for(int i=0;i<n;i++)
{
cout<<"*";
}
cout<<endl;
//pattern 4
for(int i=0;i<(n-3)/2;i++)
{
//spaces part
for(int i=0;i<((n-3)/2)+1;i++)
{
cout<<" ";
}
cout<<"*";
for(int i=0;i<(n-3)/2;i++)
{
cout<<" ";
}
cout<<"*"<<endl;
}
//pattern 5
for(int i=0;i<(n+1)/2;i++)
{
cout<<"*";
}
for(int i=0;i<(n-3)/2;i++)
{
cout<<" ";
}
cout<<"*\n";
}
int main()
{
int n;
char ch;
do
{
cout<<"Enter the swastik size\n";
cin>>n;
printSwastik(n);
cout<<"Do you wish to continue\n";
cin>>ch;
}while(ch=='y' || ch=='Y');
}



