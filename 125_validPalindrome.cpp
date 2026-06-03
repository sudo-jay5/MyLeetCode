string trim(string s){
    for(int i=0; i<s.size(); i++){
        if((s[i]>96 && s[i]<123) || (s[i]>47 && s[i]<58)){
            continue;
        }
        else if(s[i]>64 && s[i]<91){
            s[i] = s[i] + 32;
        }
        else{
            s.erase(i,1);
            i--;
        }
    }
    return s;
}

bool isPalindrome(string s){
    s = trim(s);
    int i = 0, j = s.size()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++, j--;
    }
    return true;
}
