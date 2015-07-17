//
//  main.cpp
//  sample5
//
//  Created by yuki tamada on 2015/06/29.
//  Copyright (c) 2015年 CA Tech Kids. All rights reserved.
//

#include <iostream>

using namespace std;

class MikanBox{
public:
    MikanBox(){
        cout << "MikanBoxオブジェクト生成" << endl;
    }
    
    ~MikanBox(){
        cout << "MikanBoxオブジェクト任務終了" << endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    MikanBox *pMikanBox = new MikanBox;
    delete pMikanBox;
    return 0;
}