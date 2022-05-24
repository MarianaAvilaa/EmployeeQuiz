#include <iostream>
#include "Employee.h"
using namespace std;

int main() {
 Employee robert("Robert",1994,"64C-WallsStreat");
 robert.display();
 Employee sam("Sam", 200, "G8D-WallsStreet");
 sam.display();
 Employee john("John",1999,"26B-WallsStreat");
 john.display();

}
