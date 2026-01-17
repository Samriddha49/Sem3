#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        // for(int space=1;space<i;space++)
        // cout<<" ";
        cout<<setw(i);
        for(int k=i;k<=n;k++)
        cout<<k;
        for(int j=4;j>=i;j--)
        cout<<j;
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--)
    {
        // for(int space=1;space<i;space++)
        // cout<<" ";
        cout<<setw(i);
        for(int j=i;j<=n;j++)
        cout<<j;
        for(int k=n-1;k>=i;k--)
        cout<<k;
        cout<<endl;
    }
}
signed main()
{
    int n;
    cin>>n;
    pattern(n);
}