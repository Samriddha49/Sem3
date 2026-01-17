#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
  cout<<"Here is your pattern for n="<<n<<endl;
  for(int i=1;i<=n;i+=2)
  {
    // for(int space=n-1;space>=i;space--)//space loop
    // cout<<" ";
    cout<<setw(n-i+1);
    for(int j=i;j>=1;j--)//backward
    cout<<j;
    for(int k=2;k<=i;k++)//forward
    cout<<k;
    cout<<endl;
  }
  for(int i=n-2;i>=1;i-=2)
  {
    // for(int space=i;space<n;space++)
    // cout<<" ";
    cout<<setw(n-i+1);
    for(int j=i;j>=1;j--)
    cout<<j;
    for(int k=2;k<=i;k++)
    cout<<k;
    cout<<endl;
  }
}
signed main()
{
  int n;
  cin>>n;
  if(n%2) 
  pattern(n);
  else cout<<"Please press odd number!\n";
}