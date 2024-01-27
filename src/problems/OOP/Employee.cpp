#include <iostream>
#include <string>

using namespace std;

class Employee
{
private:
    string Name;
    int EmployeeId;
    double TotalSalary;

public:
    Employee(string name, int Id, double salary)
        : Name(name), EmployeeId(Id), TotalSalary(salary) {}

    void UpdateSalary(double updateSalary)
    {
        cout << "Updated Salary: $" << updateSalary << endl;
        TotalSalary = updateSalary;
    }

    void GetEmployeeDetails()
    {
        cout << "Employee details:" << endl;
        cout << "Employee Name: " << Name << endl;
        cout << "Employee Id: " << EmployeeId << endl;
        cout << "Employee Salary: $" << TotalSalary << endl;
    }
};

int main()
{
    Employee employee("Nodir", 230019, 30000.0);

    employee.GetEmployeeDetails();

    employee.UpdateSalary(55000.0);

    employee.GetEmployeeDetails();

    return 0;
}
