class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        vector<string> words;

for (int i = 0; i < s.length(); i++) {
    if (s[i] == ' ') {
        if (word != "") {
            words.push_back(word);
            word = "";
        }
    }
    else {
        word.push_back(s[i]);
    }
}

if (word != "") {
    words.push_back(word);
}

string result = "";

for (int i = words.size() - 1; i >= 0; i--) {
    result += words[i];

    if (i != 0) {
        result += " ";
    }
}

return result;
    }
};