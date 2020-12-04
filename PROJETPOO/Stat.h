#pragma once
#include "SQL_CMD.h"

using namespace System::Data;
using namespace System;

ref class Stat {
private:
    SQL_CMD^ connexion;
   
public:
    Stat();
    array<String^>^ GetR1();
    array<String^>^ GetR2();
    array<String^>^ GetR3();
    array<String^>^ GetR4();
    array<String^>^ GetR5();
    array<String^>^ GetR6();
    array<String^>^ GetR7(String^, String^);
    array<String^>^ GetR8(String^);
    array<String^>^ GetR9(double, double, double, double);
};
