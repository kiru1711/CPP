class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix;
        for(int i=0;i<strs[0].size();i++){
            char ch = strs[0][i]; //First word , iterate
            bool valid = true; // initialise for every word
            for(int j=0;j<strs.size();j++){
                if(i>=strs[j].size()||strs[j][i]!=ch){ 
                //current index > word || current letter != iterating word
                    valid = false;
                    return prefix;
                }
            }
            if(valid) prefix +=ch;
        }  return prefix;
    }
};
