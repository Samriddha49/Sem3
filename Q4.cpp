#include<bits/stdc++.h>
using namespace std;
void pattern(int n)
{
    // int m=(n/2)+1;
    // n++;
    // for(int i=1;i<=m;i++)
    // {
    //     for(int j=1;j<=2*m;j++)
    //     if(j<=i || (j>n-i && j<=n))
    //     cout<<"*";
    //     else cout<<" ";
    //     cout<<endl;
    // }
    // for(int i=m-1;i>=1;i--)
    // {
    //     for(int j=1;j<=2*m;j++)
    //     if(j<=i || (j>n-i && j<=n))
    //     cout<<"*";
    //     else cout<<" ";
    //     cout<<endl;
    // }
    //here n is total number of rows
    int m=(n+1)/2;
    for(int i=1;i<=m;i++)
    {    
        if(i!=m)
        {
        cout<<setw(i+1)<<setfill('*')<<' '<<setw(2*(m-i)-1)<<setfill(' ')<<' ';
        // for(int space=1;space<=2*(m-i);space++)
        // cout<<" ";
        cout<<setw(i+1)<<setfill('*')<<' '<<endl;
        }
        else
        cout<<setw(2*m+1)<<setfill('*')<<' '<<endl;
    }
    m--;
    for(int i=m;i>=1;i--)
    {
        if(i==m)
        {
        cout<<setw(i+1)<<setfill('*')<<' '<<setw(2*(m-i))<<setfill(' ')<<' ';
        // for(int space=1;space<=2*(m-i);space++)
        // cout<<" ";
        
        }
        else
        {
            cout<<setw(i+1)<<setfill('*')<<' '<<setw(2*(m-i)+1)<<setfill(' ')<<' ';
        }
        cout<<setw(i+1)<<setfill('*')<<' '<<endl;
    }
}
signed main()
{
    int n;//here n is the total number of rows in the butterfly pattern
    cin>>n;
    pattern(n);
}