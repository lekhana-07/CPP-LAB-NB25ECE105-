#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    cout << "Enter a sentence: ";
    string sentence;
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    cout << "Reversed words: ";

    for (int i = words.size() - 1; i >= 0; --i) {
        cout << words[i];
        if (i > 0) {
            cout << " "; 
        }
    }
    cout << endl;

    return 0;
}