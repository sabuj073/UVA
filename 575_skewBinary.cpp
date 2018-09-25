#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,r,sum,l,n;
    string num;

    while(cin>>num && num!="0")
    {
        sum=0;
        i=0;
        l=num.length();

        while(num[i])
        {
            n=num[i]-48;
            sum+=n*(pow(2,(l-i))-1);
            i++;

        }

        printf("%lld\n",sum);

    }

    return 0;
}
