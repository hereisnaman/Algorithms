#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,d,t;
    cin>>t;
    for(int i=0;i<t;i++)
  {
    cin>>n>>k;
    if(n%2==0)
    {
        if(k<n/2)
            cout<<2*k+2-1<<endl;
        else
            {
                d=(n-1)-k;
                cout<<2*d<<endl;
            }          
    }
     if(n%2!=0)
    {
        if(k<=(n/2-1))
            cout<<2*k+1<<endl;
        else
            {
                d=(n-1)-k;
                cout<<2*d<<endl;
            }          
    }/* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    } return 0;
}
