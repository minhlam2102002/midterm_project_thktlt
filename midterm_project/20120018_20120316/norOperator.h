#pragma once
#include "Struct.h"
#include "Function.h"
BigInt operator+(BigInt num1, BigInt num2);
BigInt operator-(BigInt num1, BigInt num2);
BigInt operator*(BigInt num1, BigInt num2);
BigInt operator/(BigInt num1, BigInt num2);
BigInt operator%(BigInt num1, BigInt num2);

string addString(string num1, string num2);
BigInt BigIntMultiInt(BigInt num1, int n);
string operator/(string number, const int& divisor);