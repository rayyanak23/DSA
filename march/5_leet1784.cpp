//1784. Check if Binary String Has at Most One Segment of Ones

#include <string>

class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.length();

        int segmentEnd = 0;

        for(int i = 1; i< n ; i++){

            if(s[i]=='0'){
                break;
            }else{
                segmentEnd++;
            }
        }

        if(segmentEnd == n-1){
            return true;
        }

        for(int i = segmentEnd + 1; i < n; i++){
            if(s[i]=='1'){
                return false;
            }
        }

        return true;
        
    }
};