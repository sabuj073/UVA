#include<bits/stdc++.h>
using namespace std;


main()
{
    double cow, car, show;
    while(scanf("%lf %lf %lf", &cow, &car, &show) == 3)
    {
        double tot, left;
        tot = cow+car;
        left = tot-show-1;
        printf("%.5lf\n", cow/tot * car/left +car/tot * (car-1)/left);
    }
}
