#include <numeric>
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int gcd = std::gcd(str1.length(), str2.length());
        string x = str1.substr(0,gcd);
        string temp1 = "";
        string temp2 = "";
        for(int i=0; i<str1.length()/x.length();i++){
            temp1+=x;
        }
        for(int j=0; j<str2.length()/x.length();j++){
            temp2+=x;
        }
        if (temp1 == str1 && temp2 == str2){
            return x;
        }

        else 
        return "";
    }
};