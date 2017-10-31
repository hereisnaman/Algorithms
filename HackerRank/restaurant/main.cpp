#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int l,b,count=0,i,t,n1,n2;
    cin>>t;
    for(i=0;i<t;i++)
  {   
      cin >> n1 >> n2;
        l=n1;
        b=n2;
    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }

    cout << (l*b)/(n1*n1)<<endl;
  }
    
    return 0;
}
