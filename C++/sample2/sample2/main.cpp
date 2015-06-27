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

int main(int argc, const char * argv[]) {
    // insert code here...
    int ans = DelNum(10, 4);
    printf("%d\n",ans);
    return 0;
}

int DelNum(int a,int b)
{
    return a - b;
}