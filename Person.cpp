//
//  Person.cpp
//  test
//
//  Created by Shelley Dogra on 1/19/17.
//  Copyright © 2017 Shelley Dogra. All rights reserved.
//

#include "Person.hpp"

Person::Person() {
    firstName = " ";
    lastName = " ";
    ssn = 0;
}

string Person::getFirstName() {
    return firstName;
}

string Person::getLastName() {
    return lastName;
}

int Person::getSSN() {
    return ssn;
}


void Person::setFirstName(string firstname) {
    this->firstName = firstname;
}
void Person::setLastName(string lastName) {
    this->lastName = lastName;
}

void Person::setSSN(int ssn) {
    this->ssn = ssn;
}

