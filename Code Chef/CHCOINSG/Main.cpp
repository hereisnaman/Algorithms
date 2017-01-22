#include<iostream>
#include<math.h>
#include<cassert>
#define lli long long int
using namespace std;

int isprime(lli n)
{
    for(int i=2;i<n/2+1;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    lli t,n;
    int flag;
    cin>>t;
    while(t--)
    {
        cin>>n;
        assert(n>=1);
        if(n==1)
            cout<<"Chef"<<endl;
        else if(isprime(n))
            cout<<"Chef"<<endl;
        else
        {
            flag=0;
            for(int i=2;i*i<=n;i++)
            {
                if(isprime(i))
                {
                    for(int j=2;pow(i,j)<=n;j++)
                    {
                        if(pow(i,j)==n)
                        {
                            flag=1;
                            break;
                        }
                    }
                    if(flag)
                        break;
                }
            }
            if(flag)
                cout<<"Chef"<<endl;
            else
                cout<<"Misha"<<endl;
        }
    }
    return 0;
}