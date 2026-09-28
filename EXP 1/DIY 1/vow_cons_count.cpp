#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    int vowels = 0;
    int consonants = 0;

    for (char c : s) {
        char lower = tolower(c);
        if (isalpha(lower)) {
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}
