#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cout<<"Enter the no whose no of zeroes you want to find\n";
cin>>n;
//You can find the factorial and then divided the number by 10 to get trailing zeroes.
int count=0;
int divisor=5;
while(n/divisor>0)
{
count+=ceil(n/divisor);
divisor*=5;
}
cout<<count<<endl;
return 0;
}
