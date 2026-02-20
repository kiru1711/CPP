class Solution {
public:
    bool checkIfPangram(string s) {
        bool valid[26]={false};
        for(int i=0;i<s.length();i++){
            char ch = tolower(s[i]);
            if(isalpha(ch))
            valid[ch-'a']=true; // once seen in its position
        }
        for(int i=0;i<26;i++){
            if(!valid[i]){
                return false; //position not seen
            }
        }
        return true;
    }
};
