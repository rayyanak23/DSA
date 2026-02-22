#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

bool isAlphaNum(char ch){
    if((ch>='0' && ch <= '9') ||
        (tolower(ch)>= 'a' && tolower(ch)<='z')){
            return true;
        }

    return false;
}
    
bool isPalindrome(string s) {
    bool ans = true;
    int st = 0, end = s.length()-1;
    while(st<end){
        if(! isalnum(s[st])){ // isalnum() is in built
            st++; continue;
        }
        if(! isalnum(s[end])){
            end--; continue;
        }

        if(tolower(s[st]) != tolower(s[end])){
            ans = false; 
            return ans;
        }

        st++, end--;
    }

    return ans;
}