#include <iostream>
#include <string>
using namespace std;

int main() {

    // =========================================================
    // 1. stoi() -> String To Int
    // =========================================================
    
    string s1 = "12345";

    int a = stoi(s1);

    // int range: approximately -2.1 billion to +2.1 billion
    // Use case: Jab number int ki range ke andar ho
    cout << "stoi  : " << a << endl;


    // =========================================================
    // 2. stol() -> String To Long
    // =========================================================

    string s2 = "123456789";

    long b = stol(s2);

    // long ka range system/compiler par depend karta hai.
    // Windows par usually long = 32-bit:
    // -2.1 billion to +2.1 billion
    // Linux 64-bit par usually long = 64-bit.
    // Use case: Jab long type ki zarurat ho
    cout << "stol  : " << b << endl;


    // =========================================================
    // 3. stoll() -> String To Long Long
    // =========================================================

    string s3 = "9223372036854775807";

    long long c = stoll(s3);

    // long long range:
    // -9,223,372,036,854,775,808
    // to
    //  9,223,372,036,854,775,807
    //
    // Use case: Bahut bade integer numbers ke liye
    cout << "stoll : " << c << endl;


    // =========================================================
    // 4. stof() -> String To Float
    // =========================================================

    string s4 = "12.345";

    float d = stof(s4);

    // float decimal number store karta hai.
    // Usually ~6-7 significant decimal digits precision.
    //
    // Use case: Jab decimal value chahiye aur high precision
    // required nahi hai.
    cout << "stof  : " << d << endl;


    // =========================================================
    // 5. stod() -> String To Double
    // =========================================================

    string s5 = "12345.678901234";

    double e = stod(s5);

    // double decimal number store karta hai.
    // Usually ~15-16 significant decimal digits precision.
    //
    // Use case: Decimal calculations mein zyada precision ke liye
    cout << "stod  : " << e << endl;


    return 0;
}