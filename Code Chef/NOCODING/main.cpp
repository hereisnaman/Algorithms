#include<iostream>
#include<cassert>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
    long long int t,i,sum;
    char str[1000];
    cin>>t;
    assert(t);
    cin.ignore();
    while(t--)
    {
        fgets(str,1000,stdin);
        sum=strlen(str);
        for(i=0;i<strlen(str)-2;i++)
        {
            if(str[i]==str[i+1])
                continue;
            else if((str[i]-str[i+1])<0)
                sum+=str[i+1]-str[i];
            else
                sum+=122-str[i]+str[i+1]-96;
        }
        cout<<sum<<" "<<11*(strlen(str)-1);
        if(sum>(11*(strlen(str)-1)))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}