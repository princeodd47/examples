#include<iostream>
//if you don't have any include not ending with .h, must include namespace std
using namespace std;

//Pointers

void set_vars(int *arg1);

int main()
{
    int i_var;
    int *i_ptr = NULL;

    i_var = 16;
    i_ptr = &i_var;
    cout << "i_var = " << i_var << "\n";
    cout << "*i_ptr = " << *i_ptr << "\n";
    cout << "i_ptr = " << i_ptr << "\n";

    set_vars(&i_var);
    cout << "i_var = " << i_var << "\n";

    return 0;
}

void set_vars(int *arg1)
{
    cout << "set_vars\n";
    *arg1 = 14;
}

