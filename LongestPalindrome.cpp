class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0, max = 1;
        for(int i=0;i<s.length();i++){
            // odd index
            int left = i;
            int right = i;
            while(left >= 0 && right < s.length() && s[left]==s[right]){
                if(right - left + 1 > max){ //substring length > max
                    start = left; //substring starting pos
                    max = right - left + 1;
                }
                left--;
                right++;
            }
            left = i+1; // even index
            right = i;
            while(left >= 0 && right < s.length() && s[left]==s[right]){
                if(right - left + 1 > max){
                    max = right - left + 1;
                    start = left;
                }
                left--;
                right++;
            }
        }return s.substr(start,max);
    }
};
