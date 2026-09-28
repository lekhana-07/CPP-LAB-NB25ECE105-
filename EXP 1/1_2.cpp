#include<iostream>
#include<string> 
using namespace std;

int main() {
    string s; 
    cout << "Enter a string: ";
    cin >> s;
    cout <<"The given string is:" << s << endl;

    for (char c : s)
    cout << (char)toupper(c);
   
    bool pal;
    size_t i=0, j=s.size()-1;

    for(i=0; i<j; i++, j--){
        if(s[i]!=s[j]){
            cout <<" is not a palindrome" << endl;
            break;
        }
        else{
          cout <<" is a palindrome" << endl;
        }
    }

    size_t pos=s.find("ad");
    if (pos==1){
        cout <<"Substring found"<< endl;
    }
    else{
        cout <<"Substring is not found"<< endl;
    }
    return 0;
}