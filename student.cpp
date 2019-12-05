#include <iostream>
#include "student.h"

string name = "";

void student::setName(string& first, string& last)
{
    name.append(first);
    name.append(last);
}

string student::fullName()
{
    return name;
}
