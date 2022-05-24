//
// Created by studentloaner on 5/5/2022.
//

#include "Employee.h"
#include <iostream>
using namespace std;
Employee::Employee(string name, int year, string address) {
    setItsName(name);
    setItsYear(year);
    setItsAddress(address);
}
void Employee::setItsName(string name) {
    name=name;
}
void Employee::setItsYear(int year) {
    year=year;
}
void Employee::setItsAddress(string address) {
    address=address;
}
string Employee::getItsName() {
    return name;
}
int Employee::getItsYear() {
    return year;
}
string Employee::getItsAddress() {
    return address;
}
void Employee::display() {
    cout<< name<<"  "<<year<<"  "<<address;
    cout<<endl;
}