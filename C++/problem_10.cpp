#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n=10;
  cin>>n;
  int sum=0;
  vector<int> arr;
  arr.push_back(0);  
  for(int i=1;i<=n;i++)   
  {
      arr.push_back(i);
  }
   for(int i=2;i<=n;i++)   //Marking all non primes as 1 and adding all primes in sum using sieve
  {

      if(arr[i]!=1)
      {
          sum+=arr[i];
          for(int j=i+i;j<=n;j+=i)
          {
              arr[j]=1;
          }
      }
  }
  cout<<sum;
   return 0;
}