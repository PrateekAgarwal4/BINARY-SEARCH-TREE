#include <bits/stdc++.h>
using namespace std;
int setBit(int n)
{
  	int count=0;
  	while(n!=0)
    {
      	n=n&(n-1);
      	count++;
    }
  return count;
}
int lsb(int n)
{
  	if(n==0)
      return 0;
  	return (int) (log2(n & -n));
}
int msb(int n)
{
   if(n==0)
     return 0;
   return (int) (log2(n));
}
int main() 
{
   	int n;
  	cin>>n;
  	cout<<setBit(n)<<"#"<<lsb(n)<<"#"<<msb(n);
    return 0;
}
