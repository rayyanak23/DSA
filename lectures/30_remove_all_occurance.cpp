#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string removeOccurrences(string s, string part) {
    while(s.length() && s.find(part) < s.length()){
        int st = s.find(part);
        s.erase(st, part.length());
    }

    return s;
}