//
//  main.cpp
//  sample4
//
//  Created by yuki tamada on 2015/06/29.
//  Copyright (c) 2015年 CA Tech Kids. All rights reserved.
//

#include <iostream>
using namespace std;

//参照
//int main()
//{
//    int num = 0;
//    int &newnum = num;
//    
//    num = 200;
//    cout << "num=" << num << endl;
//    cout << "newnum=" << newnum << endl;
//    
//    newnum = 400;
//    cout << "num=" << num << endl;
//    cout << "newnum=" << newnum << endl;
//    return 0;
//}



//関数の引数に参照をとる
//void Changevalue(double &a){
//    a=200;
//}
//
//int main()
//{
//    double num1 = 100;
//    cout << "num1=" << num1 << endl;
//    Changevalue(num1);
//    cout << "num1=" << num1 << endl;
//    return 0;
//}

//引数にconst
//struct Person
//{
//    char name[50];
//    int age;
//};
//
//void PrintPersonRef(const Person &psn)
//{
//    cout << psn.name << "さん" << psn.age << "歳" << endl;
//}
//
//void PrintPersonPtr(const Person *psn)
//{
//    cout << psn->name << "さん" << psn->age << "歳" << endl;
//}
//
//int main(){
//    Person shain1 = {"shiori",18};
//    PrintPersonRef(shain1);
//    PrintPersonPtr(&shain1);//アドレス渡しでは「&」をつける
//    return 0;
//}






