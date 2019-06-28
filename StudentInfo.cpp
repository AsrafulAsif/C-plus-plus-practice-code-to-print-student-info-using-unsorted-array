#include"StudentInfo.h"
#include<string>
#include<iostream>
using namespace std;

StudentInfo::StudentInfo()
{
    id=0;
    name="";
    cg=0;
}
StudentInfo::StudentInfo(int i,string n,double c)
{
    this->id=i;
    this->name=n;
    this->cg=c;
}
void StudentInfo::setId(int s)
{
    this->id=s;
}
void StudentInfo::Print()
{
    cout<<"Name:"<<this->name<<endl<<"ID:"<<this->id<<endl<<"CGPA:"<<this->cg<<endl;
}
bool StudentInfo::operator!=(StudentInfo s)
{
    return(this->id!=s.id);
}
