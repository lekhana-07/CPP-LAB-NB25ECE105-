#include <iostream>
#include <string>
#include <vector>

bool isAnagram(std::string s1, std::string s2) {
    if (s1.length() != s2.length()) return false;
    
    std::vector<int> count(256, 0);
    
    for (size_t i = 0; i < s1.length(); i++) {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) return false;
    }
    return true;
}

int main() {
    std::string word1, word2;
    
    std::cout << "Enter the first word: ";
    std::cin >> word1;
    
    std::cout << "Enter the second word: ";
    std::cin >> word2;
    
    if (isAnagram(word1, word2)) {
        std::cout << "\"" << word1 << "\" and \"" << word2 << "\" are anagrams." << std::endl;
    } else {
        std::cout << "\"" << word1 << "\" and \"" << word2 << "\" are NOT anagrams." << std::endl;
    }
    
    return 0;
}