#include <iostream>
using namespace std;

int fact(int n)
{
    int fa=1;
    for(int i=2;i<=n;i++)
    {
        fa*=i;
    }
    return fa;
}
int main() 
{    
    int n,r;
    cin>>n>>r;
    int ans =fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
}
