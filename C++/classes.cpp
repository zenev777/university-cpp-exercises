#include iostream
using namespace std;

class Student
{
private
    string fNumber;
    string name;
    string surname;
    double grade;

public
    Student(string fnum, string stName, string surName, double avgGrade){
        fNumber=fnum;
        name=stName;
        surname=surName;
        grade=avgGrade;
    }


string GetStudent()
{
    return name +   + surname +  -  + fNumber;
}
double GetGrade()
{
    return grade;
}

};


int Main()
{
    Student Vaniooo(Zhan,Enev,050071000054,5.13);

    cout << Vaniooo.GetStudent(), grade Vaniooo.GetGrade();

    return 0;
}




