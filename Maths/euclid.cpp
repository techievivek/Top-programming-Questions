#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
if(b==0)
return a;
gcd(b,a%b);
}
int main()
{
int a,b;
cout<<"Enter numbers whose GCD you want\n";
cin>>a>>b;
if(a<b)
swap(a,b);
cout<<gcd(a,b);
//We could can also used the __gcd() method provided in algorithm.
return 0;
}
