//
// Created by studentloaner on 5/5/2022.
//
#include<iostream>
#include <string>
using namespace std;

#ifndef EMPLOYEEQUIZ_EMPLOYEE_H
#define EMPLOYEEQUIZ_EMPLOYEE_H


class Employee {
public:
    Employee(string name,int year, string address);
    void setItsName(string name);
    string getItsName();
    void setItsYear(int year);
    int getItsYear();
    void setItsAddress(string address);
    string getItsAddress();
    void display();
private:
    string name;
    int year;
    string address;
};


#endif //EMPLOYEEQUIZ_EMPLOYEE_H
