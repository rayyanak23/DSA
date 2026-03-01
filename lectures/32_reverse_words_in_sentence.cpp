#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reverseWords(string s) {
    int n = size(s);
    string ans = "";
    reverse(s.begin(), s.end());
    // now find words
    
    for(int i = 0; i < n; i++){
        string word = "";
        while(i<n && s[i]!= ' '){ // stops when we get a complete word
            word += s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0){
            ans += " " + word;
        }
    }

    return ans.substr(1);   // 1 is starting point of str 
    
    
}