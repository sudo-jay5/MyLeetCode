    int maxNumberOfBalloons(string text) {
        string s = "balloon";
        unordered_map<char,int>n;
        for(int i=0; i<s.size(); i++){
            n[s[i]]++;
        }
        unordered_map<char,int>f;
        for(int i=0; i<text.size(); i++){
            f[text[i]]++;
        }
        int minCount = INT_MAX;
        for(auto i : n){
            char c = i.first;
            int fneed = i.second;
            int fhave = f[c];
            if(fhave<fneed){
                return 0;
            }
            else{
                minCount = min(minCount,fhave/fneed);
            }
        }
        return minCount;
    }