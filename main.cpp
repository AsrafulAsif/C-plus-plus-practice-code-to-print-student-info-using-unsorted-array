#include<iostream>
#include"UnsortedType.cpp"
#include"StudentInfo.h"

using namespace std;

int main()
{

    StudentInfo s1(15234,"Jon",2.6);
    StudentInfo s2(13732,"Tyrion",3.9);
    StudentInfo s3(13569,"Sandor",1.2);
    StudentInfo s4(15467,"Ramsey",3.1);
    StudentInfo s5(16285,"Arya",3.1);

    UnsortedType<StudentInfo>myList;
    myList.InsertItem(s1);
    myList.InsertItem(s2);
    myList.InsertItem(s3);
    myList.InsertItem(s4);
    myList.InsertItem(s5);

    StudentInfo temp;
    for(int i=0;i<myList.LengthIs();i++)
    {
        myList.GetNextItem(temp);
        temp.Print();
        cout<<endl;
    }

    StudentInfo s6;
    s6.setId(15467);
    myList.DeleteItem(s6);

    cout<<"After Deleting:"<<endl;
    myList.ResetList();

    StudentInfo temp2;
     for(int i=0;i<myList.LengthIs();i++)
    {
        myList.GetNextItem(temp2);
        temp2.Print();
        cout<<endl;
    }

}
