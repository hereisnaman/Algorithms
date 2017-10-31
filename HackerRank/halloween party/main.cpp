#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,t,i;
    cin>>t;
    for(i=0;i<t;i++)
        {   cin>>n;
            if(n%2==0)
                cout<<n/2*n/2<<endl;
            else
                cout<<(n/2)*(n/2+1)<<endl;
        }
        
        
        
        
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
