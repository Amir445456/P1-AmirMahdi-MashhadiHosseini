#include <iostream>

using namespace std;

class person
{
    protected:
        int id = 0;
        string name;
        string family;
};

class student:person
{
    public:
        double Avg;
        int GetStudentID()
        {
            id = 41564165;
        }
        double GetAvg(double av)
        {
            Avg = av;
        }

        string nameFamily(string nam,string fam)
        {
            name = nam;
            family = fam;
        }
};

class teacher:person
{
    public:
        double salary;
        int GetTeacherID()
        {
            id=46848486;
        }
        double GetSalary(double sa)
        {
            salary = sa;
        }
};
int main()
{
    student s;

    double avgTaker;
    cout<<"enter the Avrage of student: ";
    cin>>avgTaker;
    s.GetAvg(avgTaker);

    string nam2,fam2;
    cout<<"enter the name of student: ";
    cin>>nam2;
    cout<<"enter the family of student: ";
    cin>>fam2;
    s.nameFamily(nam2,fam2);


    teacher t;
    double salaryTaker;
    cout<<"enter the Salary of teacher: ";
    cin>>salaryTaker;
    t.GetSalary(salaryTaker);

    cout<<"-----------------------------------------------"<<endl;

    cout<<"the Salary of teacher is: "<<s.Avg<<endl;
    cout<<"the Salary of teacher is: "<<t.salary<<endl;
    cout<<"the name & family of student is: "<<s.name<<s.family<<endl;

}
