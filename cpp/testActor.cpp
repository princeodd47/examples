//--------------------------------------------------------
// File testActor.cpp
// Purpose: Demonstrate program using a simple class
//--------------------------------------------------------
#include "actor.h"
#include <iostream>
using namespace std;

// int main(int argc, char **argv)
// {
//     Actor *actor = new Actor;   // Use the default constructor
//     actor->setName("foo");      // Set the name
//     actor *otherString = new Actor("bar");  // use the parameterized constructor
// }

int main()
{
    Actor *actor = new Actor("foo");   // Use the default constructor
    actor->printName();
    return 0;
}

