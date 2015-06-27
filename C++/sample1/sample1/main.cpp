//
//  main.cpp
//  sample1
//
//  Created by yuki tamada on 2015/06/27.
//  Copyright (c) 2015年 CA Tech Kids. All rights reserved.
//

#include <iostream>

//クラスの定義
class OrangeBox
{
private:
    int total;
    
public:
    void Add(int addOrange)
    {
        total += addOrange;
    }
    void Delete(int deleteOrange)
    {
        total -= deleteOrange;
        if(total < 0){
            Empty();
        }
    }
    void Empty()
    {
        total = 0;
    }
    
    int GetTotal()
    {
        return total;
    }
};

int main(int argc, const char * argv[]) {
    OrangeBox myOrangeBox;
    myOrangeBox.Empty();
    myOrangeBox.Add(10);
    myOrangeBox.Delete(3);
    printf("箱の中のみかん：%d個\n",myOrangeBox.GetTotal());
    return 0;
}
