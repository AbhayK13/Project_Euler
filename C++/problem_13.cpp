#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<string> s;
  for(int i=0;i<5;i++)
  {
      string ss;
       cin>>ss;
      s.push_back(ss);
  }
  string s2;
   int l=s[0].length();
   long long int x=0;
 
       for(int j=l-1;j>=0;j--)
       {
           
             for(int i=0;i<5;i++)
          { 
              
              x+=s[i][j]-'0';
              
          }  
          int y=x%10;
          string temp=to_string(y);
          x/=10;
          s2+= temp;
       }
       string n=to_string(x);
       int nl=n.length();
       int xl=s2.length();
       xl--;
       if(nl>=10)
       {
           for(int i=0;i<10;i++)
           {
               cout<<n[i];
           }
       }
      
       else
       {
           cout<<n;
           for(int i=0;i<10-nl;i++)
           {
               cout<<s2[xl];
               xl--;
               
           }
       }
   return 0;
}
