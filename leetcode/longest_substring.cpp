#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

//finding length of longest substring in a string using sliding window in c++
class Solution {
public:
    int lengthOfLongestSubstring(string s){
        int start = 0;
        int initialstart = 0;
        int end = 0;
        unordered_set<char> uniquechars;
        int maxlen = 0;
        
        while (end<s.length()){
            //not duplicate char
            if (uniquechars.count(s[end])==0) {
                //insert char into set
                uniquechars.insert(s[end]);
                end++;
            }
            
            //duplicate char
            else{
                maxlen = max(maxlen, end-1-start+1);
                initialstart = start;
                end++;
                while (start!=end){
                    uniquechars.erase(s[start]);
                    start++;
                }
                
                //updating start and end to be index immediately after original start
                start = initialstart+1;
                end = start;
            }
        }
        maxlen = max(maxlen, end-1-start+1);
        return maxlen;
        
    }
};
    

int main() {
    string s = "abcadehfera";
    Solution sol;
    cout << sol.lengthOfLongestSubstring(s) << endl;
    return 0;
}