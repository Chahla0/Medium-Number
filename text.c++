#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a[3];
        for (size_t i = 0; i < 3; i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
        cout<<a[1]<<endl;
        
    }
    
}