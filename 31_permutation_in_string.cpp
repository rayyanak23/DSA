#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isFreqSame(int arr1[], int arr2[]){

    for(int i = 0; i < 26; i++){
        if(arr1[i]!=arr2[i]){
            return false;
        }
    }

    return true;
}
bool checkInclusion(string s1, string s2){
    int freq[26] = {0};
    for(int i = 0; i < s1.length(); i++){
        int idx = s1[i]-'a'; // a -> 0, b -> 1 and so on
        freq[idx]++;
    }
    if(s1.length()>s2.length()){
        return false;
    }
    for(int i = 0; i < s2.length()-s1.length() + 1; i++){
        int wFreq[26] = {0};

        for(int j = i; j < i + s1.length(); j++){
            int idx = s2[j]-'a'; // a -> 0, b -> 1 and so on
            wFreq[idx]++;
        }
        // compare loop
        if(isFreqSame(freq,wFreq)){
            return true;
        }
    }

    return false;

}