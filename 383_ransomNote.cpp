    bool function(unordered_map<char,int>h,unordered_map<char,int>n){
        for(auto i : n){
            char c = i.first;
            int fneed = i.second;
            if(h[c]<fneed){
                return false;
            }
        }
        return true;
    }

    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>have;
        unordered_map<char,int>need;
        for(int i=0; i<magazine.size(); i++){
            have[magazine[i]]++;
        }
        for(int i=0; i<ransomNote.size(); i++){
            need[ransomNote[i]]++;
        }
        return function(have,need);
    }