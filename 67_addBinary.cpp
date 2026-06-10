    string addBinary(string a, string b) {
        int i=a.size()-1, j=b.size()-1;
        int carry = 0;
        string result = "";

        while(i>=0 || j>=0 || carry){
            int x = 0, y = 0;
            if(i>=0){
                x = a[i] - '0';
            }
            if(j>=0){
                y = b[j] - '0';
            }

            if(x+y+carry==0){
                carry=0;
                result = "0" + result;
            }
            else if(x+y+carry==1){
                result = "1" + result;
                carry = 0;
            }
            else if(x+y+carry==2){
                carry = 1;
                result = "0" + result;
            }
            else{
                result = "1" + result;
                carry = 1;
            }
            i--, j--;
        }
        return result;
    }