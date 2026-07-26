#include <iostream>
using namespace std;

int main() {
    int a = 10;

    // ------------------ Single Pointer ------------------
    int *p = &a;
    // p stores the address of variable 'a'

    // ------------------ Double Pointer ------------------
    int **dp = &p;
    // dp stores the address of pointer 'p'

    // ------------------ Triple Pointer ------------------
    int ***tp = &dp;
    // tp stores the address of double pointer 'dp'

    cout << "Value of a        : " << a << endl;
    cout << "Using *p          : " << *p << endl;
    cout << "Using **dp        : " << **dp << endl;
    cout << "Using ***tp       : " << ***tp << endl;

    cout << endl;

    cout << "Address of a      : " << &a << endl;
    cout << "Stored in p       : " << p << endl;

    cout << "Address of p      : " << &p << endl;
    cout << "Stored in dp      : " << dp << endl;

    cout << "Address of dp     : " << &dp << endl;
    cout << "Stored in tp      : " << tp << endl;

    return 0;
}

/*
======================== SHORT NOTES ========================

Pointer (*)
-----------
- Stores the address of a variable.
- *p gives the value stored at that address.

Example:
int x = 5;
int *p = &x;

-------------------------------------------------------------

Double Pointer (**)
-------------------
- Stores the address of another pointer.
- **dp gives the original variable's value.

Example:
int **dp = &p;

-------------------------------------------------------------

Triple Pointer (***)
--------------------
- Stores the address of a double pointer.
- ***tp gives the original variable's value.

Example:
int ***tp = &dp;

-------------------------------------------------------------

Memory Diagram

a = 10

+------+      +------+      +------+      +------+
| 10   |<-----|  &a  |<-----|  &p  |<-----| &dp  |
+------+      +------+      +------+      +------+
   a             p             dp            tp

-------------------------------------------------------------

Variable   Stores
--------   -------------------------
a          Value (10)
p          Address of a
dp         Address of p
tp         Address of dp

-------------------------------------------------------------

Access

a      -> 10
*p     -> 10
**dp   -> 10
***tp  -> 10

=============================================================
*/