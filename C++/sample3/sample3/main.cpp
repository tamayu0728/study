//
//  main.cpp
//  sample3
//
//  Created by yuki tamada on 2015/06/27.
//  Copyright (c) 2015年 CA Tech Kids. All rights reserved.
//

#include <iostream>

double GetCircleArea(int radius = 1, double pi = 3.14);

double GetCircleArea(int radius,double pi)
{
    return radius * radius * pi;
}

int main(int argc, const char * argv[]) {
    double area1,area2,area3;
    area1 = GetCircleArea();
    area2 = GetCircleArea(10);
    area3 = GetCircleArea(15,3);
    printf("%lf,%lf,%lf\n",area1,area2,area3);
    return 0;
}
