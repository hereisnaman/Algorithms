#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;
    if(n%2==0&&m%2==0)
        cout<<(n/2)*(m/2);
    if(n%2!=0&&m%2==0)
        cout<<(n/2)*(m/2)+(m/2);
    if(n%2==0&&m%2!=0)
        cout<<(n/2)*(m/2)+(n/2);
    if(n%2!=0&&m%2!=0)
        cout<<(n/2)*(m/2)+(n/2)+(m/2)+1;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
