class Solution {
public:
    int firstUniqChar(string s) {
        
        /*for(int i=0;i<s.length();i++){ 
            bool valid = true;
            for(int j=0;j<s.length();j++){
                if(i!=j && s[i]==s[j]){
                    valid = false;
                    break;
                }
            }
            if(valid) return i;
        } -> 14 ms 
        OPTIMIZED : */ 

        int freq[26]={0};
        for(char ch : s){
            freq[ch-'a']++; //COUNT OF EACH LETTER BY INDEX
        }
        for(int i=0;i<s.length();i++){
            if(freq[s[i]-'a']==1) return i;
        }
        return -1;
    }
};
