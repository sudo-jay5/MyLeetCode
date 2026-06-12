int longestPalindrome(string s) {
    unordered_map<char,int>f;
    for(int i=0; i<s.size(); i++){
        f[s[i]]++;
    }
    bool odd = false;
    int res = 0;
    for(auto i : f){
        int count = i.second;
        if(count%2==0){
            res = res + count;
        }
        else{
            res = res + (count - 1);
            odd = true;
        }
    }
    if(odd){
        return ++res;
    }
    return res;
}