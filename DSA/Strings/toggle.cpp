// toggle string change Upper to lower and vica versa

#include <iostream>
#include<string>
using namespace std;

int main() {
    
    string s;
    cout << "Enter string : ";
    getline(cin, s);
    
    string final;
    for(int i=0;i<s.size();i++){
        if(s[i]>=65  && s[i]<=90){
            final.push_back(s[i]+32);
        }
        else if(s[i]>=97  && s[i]<=122)
        {
            final.push_back(s[i]-32);
        }
        else{
            final.push_back(s[i]);
        }
    }
    cout<<"Toggle output: "<<final;



    return 0;
}











// or 


/* 
#include <iostream>
#include <string>
#include <cctype> // For isupper, islower, tolower, toupper

using namespace std;

int main() {
    string s;
    cout << "Enter string : ";
    getline(cin, s); // Reads full line including spaces
    
    string final;
    for (size_t i = 0; i < s.size(); i++) {
        if (isupper(s[i])) {
            final.push_back(tolower(s[i]));
        }
        else if (islower(s[i])) {
            final.push_back(toupper(s[i]));
        }
        else {
            final.push_back(s[i]); // Keep numbers, spaces, and symbols unchanged
        }
    }

    cout << "Toggle output: " << final << endl;

    return 0;
} */