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
    for(int i=0;i<=n;i++){
        for(int j =0;j<=i;j++){


            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;5
        
    }
}
