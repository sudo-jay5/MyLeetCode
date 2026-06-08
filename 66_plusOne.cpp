vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        int i=len-1;
        digits[i]++;
        for(int j=i; j>=1; j--){
            if(digits[j]==10){
                digits[j] = 0;
                digits[j-1]++;
            }
        }
        if(digits[0]==10){
            digits[0] = 1;
            digits.push_back(0);
        }
        return digits;
    }