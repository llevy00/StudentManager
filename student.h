#include <iostream>
#ifndef _STUDENT_H_
#define _STUDENT_H_

using namespace std;

class student
{
    private: 
            string firstName;
            string lastName;
    public:
            void setName(string& a,string& b);
            string fullName();
};

#endif