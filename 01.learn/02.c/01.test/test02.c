#include <stdio.h>
// #include <iostream>

int FunAdd(int iPara1, int iPara2)
{
  int iAdd = 7;
  int iResult = iPara1 + iPara2 + iAdd;
  return iResult;
}

int main()
{
  int iVal1 = 5;
  int iVal2 = 6;
  int iRes = FunAdd(iVal1, iVal2);
  printf("iRes: %d\n", iRes);
  return 0;
}
