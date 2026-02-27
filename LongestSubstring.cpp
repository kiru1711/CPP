class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0,max=0;
        string ch ="";
        for(int i=0;i<s.length();i++){
            if(ch.find(s[i]) != string :: npos){ // if duplicate found - erase from 0 to that duplicate( so +1 )
                ch.erase(0,ch.find(s[i])+1);
            } ch += s[i];

            if(max < ch.length()) max = ch.length();
        } return max;
    }
};
