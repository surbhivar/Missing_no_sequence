#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n-1;i++)
        {
            cin >> a[i];
        }
        int add;
        add=(n*(n+1))/2;
        int sum=0;

        for(int i=0;i<n-1;i++)
        {
            sum=sum+a[i];
        }

        int num;
        num=add-sum;

        cout<<num;
    }
}
