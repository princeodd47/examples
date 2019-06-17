//--------------------------------------------------------
// File actor.cpp
// Purpose: Implementation of a simple string class
//--------------------------------------------------------

#include "actor.h"
#include <cstring>
#include <iostream>
using namespace std;

//--------------------------------------------------------
// Default class constructor
// Initialize the string pointer to null
//--------------------------------------------------------
Actor::Actor()
{
    givenName = NULL;
}

//--------------------------------------------------------
// Class constructor
// Initialize string to str argument
//--------------------------------------------------------
Actor::Actor(const char *str)
{
    // Overloaded constructor
    // Allocate memory for new string using C++ syntax
    cout << str << endl;
    givenName = new char[strlen(str) +1];
    strcpy(givenName, str);
    cout << givenName << endl;
}

//--------------------------------------------------------
// Class Deconstructor
//
//--------------------------------------------------------
Actor::~Actor()
{
    delete[]givenName;
}

//--------------------------------------------------------
// Clear current string, set givenName to NULL
//--------------------------------------------------------
void Actor::clearName()
{
    // Free memory using C syntax: free(givenName);
    // Free memory using C++ syntax
    delete[]givenName;
    givenName = NULL;
}

//--------------------------------------------------------
// Reset the current string to a new value
//--------------------------------------------------------
void Actor::setName(char *str)
{
    clearName(); // Clear the current name, if any.
    // Allocat memory for new string using C syntax
    givenName = (char *)malloc(strlen(str) +1);
    strcpy(givenName, str); // Copy string arg into new memory space
}

//--------------------------------------------------------
// Get a copy of the current name
//--------------------------------------------------------
// This will expose a private variable
char *Actor::getName()
{
    char *newName = new char[strlen(givenName) +1];
    strcpy(newName, givenName);
    return newName;
}

//--------------------------------------------------------
// Return number o chars in current name
//--------------------------------------------------------
int Actor::NameLength()
{
    return strlen(givenName);
}

//--------------------------------------------------------
// Print the name
//--------------------------------------------------------
void Actor::printName()
{
    cout << "printName called" << endl;
    cout << givenName;
    cout << endl;
}
