#include <iostream>
 
using namespace std;
 
int main()
{
    int n,t;
    cin>>n>>t;
    int s=t;
    int i=1;
    while(s+i*5<=240 && i<=n){
        s+=i*5;
        i++;
    }
    cout<<i-1;
 
    return 0;
}
