#include <iostream>
using namespace std;
class Employee{

    string EmployeeName;
    const int EmployeeId;
    static int emp;
    public:
    Employee():EmployeeId(emp)
    {EmployeeName="A";}
    static int employeeidadd()
    {
        emp++;
    }

     Employee(string Name):EmployeeId(emp)
    {
        EmployeeName=Name;
        Employee::employeeidadd();
    }

    void setN(string y)
    {
        EmployeeName=y;
    }

    string getname() const
    {
        return EmployeeName;
    }

    int getid() const
    {
        return EmployeeId;
    }

};

int Employee::emp=220;

int main()
{
    Employee E1("Ibad"),E2("Abdeali"),E3("Ali");
    cout<<"Name 1: "<<E1.getname();
    cout<<"\nID: "<<E1.getid();
    cout<<"\nName 2: "<<E2.getname();
    cout<<"\nID: "<<E2.getid();
    cout<<"\nName 3: "<<E3.getname();
    cout<<"\nID: "<<E3.getid();
    
}