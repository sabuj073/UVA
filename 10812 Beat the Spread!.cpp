#include<bits/stdc++.h>
using namespace std;

int main()
{
    int TC;

    scanf("%d", &TC);

    int s, d, x, y;
    while (TC--)
    {
        scanf("%d %d", &s, &d);
        x = (s + d) / 2;
        y = abs(s - d)/2;

        if (d>s||(s-d)%2!=0)
        {

            printf("impossible\n");

        }
        else
            printf("%d %d\n", max(x, y), min(x, y));
    }

    return 0;
}
