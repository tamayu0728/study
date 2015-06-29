//
//  main.cpp
//  recordCalcSample
//
//  Created by yuki tamada on 2015/06/29.
//  Copyright (c) 2015年 CA Tech Kids. All rights reserved.
//

#include <iostream>
#include <string.h>

using namespace std;

//生徒クラス
class Student{
public:
    void SetId(int num)
    {
        id = num;
    }
    
    void SetName(char *str)
    {
        strcpy(name, str);
    }
    
    int GetID()
    {
        return id;
    }
    
    char *GetName() const {
        return (char *)name;
    }
    
private:
    int id;
    char name[30];
};

enum Subjects{Math,Englis,Science};

//テストクラス
class Exam{
public:
    void SetInfo(int id,char *name,Subjects s,int num);
    int GetPoint() const {return point;};
    void GetResult(char *buf) const;
    Student student;
    
private:
    Subjects subjects;
    int point;
};

void Exam::SetInfo(int id, char *name, Subjects s, int num)
{
    student.SetId(id);
    student.SetName(name);
    subjects = s;
    point = num;
}

void Exam::GetResult(char *buf) const
{
    char *subname[] = {"数学","英語","理科"};
    sprintf(buf, "%s:%d点",subname[subjects],point);
}

void PrintResult(const Exam &Exam)
{
    cout << Exam.student.GetName() << endl;
    char buf[30];
    Exam.GetResult(buf);
    cout << buf << endl;
}

double GetAvg(const Exam *Exam,int num)
{
    double sum = 0;
    for(int i=0;i<num;i++){
        sum += Exam[i].GetPoint();
    }
    return sum / num;
}

int main(int argc, const char * argv[]) {
    Exam Exam[3];
    Exam[0].SetInfo(1, "しおり", Math, 60);
    Exam[1].SetInfo(1, "しおり", Englis, 75);
    Exam[2].SetInfo(1, "しおり", Science, 90);
    
    PrintResult(Exam[0]);
    PrintResult(Exam[1]);
    PrintResult(Exam[2]);
    cout << "平均：" << GetAvg(Exam,3) << "点" << endl;
    return 0;
}






















