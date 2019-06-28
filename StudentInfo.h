#include<string>
using namespace std;
#ifndef STUDENTINFO_H
#define STUDENTINFO_H

class StudentInfo
{
    public:
        StudentInfo();
        StudentInfo(int,string,double);
        void Print();
        bool operator!=(StudentInfo);
        bool operator==(StudentInfo);
        void setId(int);

    protected:

    private:
        int id;
        string name;
        double cg;
};

#endif // STUDENTINFO_H
