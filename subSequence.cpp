class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(s.length()>i && t.length()>j){
            if(s[i]==t[j]){
                i++; //if matches , move to next character
            }j++; // always move
            
        }return i==s.length();
    }
};
