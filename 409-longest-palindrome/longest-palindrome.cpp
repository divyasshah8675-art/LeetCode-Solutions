class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for(char c:s){
            m[c]++;
        }
        bool haveodd=false;
        int len=0;
        for (const auto& [character, count] : m){
            if(count%2==0){
                len+=count;
            }
            else{
                haveodd=true;
                if(count>1){
                    len+=count-1;
                }
            }
        }
        if(haveodd) return len+1;
        return len;
    }
};