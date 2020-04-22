#include <iostream>
#include <vector>
#include <string>

#include "include/v8config.h"

using namespace std;

int main()
{
//#if (V8_GLIBC_PREREQ(2, 3) == 0)
  cout << V8_GLIBC_PREREQ(2, 3);
//#endif

    cout << endl;
}