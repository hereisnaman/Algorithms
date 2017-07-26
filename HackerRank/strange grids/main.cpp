#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int r,c;
    cin>>r>>c;
    if(r%2==0)
        cout<<(r/2-1)*10+(2*c-1);
    else cout<<(r/2)*10+2*(c-1);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
