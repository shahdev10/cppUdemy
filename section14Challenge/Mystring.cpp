#include<iostream>
#include<cstring>
#include"Mystring.h"

Mystring::Mystring()
    :str{nullptr}
    {
    str = new char[1];
    *str = '\0';
    }

Mystring::Mystring(const char *s)
    : str {nullptr} {
    if (s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char 
    }
