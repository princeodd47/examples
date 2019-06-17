//--------------------------------------------------------
// File actor.h
// Purpose: Defining a single dynamic length string class.
//--------------------------------------------------------
#ifndef ACTOR_H
#define ACTOR_H
#endif

//if you define a pointer in your class, put it in the constructor

class Actor {
    private: // access specifier
        char *givenName;
    public:
        Actor(); // default constructor
        Actor(const char *str); // overloaded constructor
        ~Actor(); //destructor
        // if no destructor created, compiler will create one automatically, w/o any arguments
        void clearName();
        void setName(char *str);
        char *getName();
        int NameLength();
        void printName();
};
