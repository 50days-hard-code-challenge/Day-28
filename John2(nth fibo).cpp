#include<bits/stdc++.h>
using namespace std;
int fs(int n)
{
   if(n==0)
   return 0;
   if(n==1)
   return 1;

   int fs1=fs(n-1);
   int fs2=fs(n-2);

   return fs1+fs2;
}
int main()
{
        int n;
        cin>> n;
        cout<<fs(n);
        
}
