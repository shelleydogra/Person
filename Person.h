//
//  Person.hpp
//  test
//
//  Created by Shelley Dogra on 1/19/17.
//  Copyright © 2017 Shelley Dogra. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Person {
    
protected:
    string firstName;
    string lastName;
    //Date here
    int ssn;
    
public:
    
    //Default Constructor
    Person();
    
    string getFirstName();
    string getLastName();
    int getSSN();
    
    
    void setFirstName(string);
    void setLastName(string);
    void setSSN(int);
};

#endif /* Person_hpp */
