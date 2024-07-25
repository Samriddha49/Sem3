#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    int m=(n/2)+1;
    n++;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=2*m;j++)
        if(j<=i || (j>n-i && j<=n))
        cout<<"*";
        else cout<<" ";
        cout<<endl;
    }
    for(int i=m-1;i>=1;i--)
    {
        for(int j=1;j<=2*m;j++)
        if(j<=i || (j>n-i && j<=n))
        cout<<"*";
        else cout<<" ";
        cout<<endl;
    }
}
signed main()
{
    int n;//here n is the total number of rows in the butterfly pattern
    cin>>n;
    pattern(n);
}