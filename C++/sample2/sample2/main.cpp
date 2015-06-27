//
//  main.cpp
//  sample2
//
//  Created by yuki tamada on 2015/06/27.
//  Copyright (c) 2015年 CA Tech Kids. All rights reserved.
//

#include <iostream>

//プロトタイプ宣言
int DelNum(int,int);
const int BUFFFA = 1000;
enum Colors {red=100,brue=200,yellow,green,white};
int main(int argc, const char * argv[]) {
//    int ans = DelNum(10, 4);
//    printf("%d\n",ans);
    for (int i=0; i<BUFFFA; i++) {
        printf("%d\n",i);
    }
    printf("\n%d\n",red);
    return 0;
}

int DelNum(int a,int b)
{
    return a - b;
}