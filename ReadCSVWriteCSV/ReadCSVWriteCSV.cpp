#include <iostream>
#include "employee.h"
using namespace std;

int main()
{
    employee edy("C:/Users/wrl123u/Desktop/Lab 7/ReadCSVWriteCSV/employees.csv", "newemployees.csv");
    edy.ReadFromFile();
    edy.WriteToFile();
    edy.CloseFile();

}

