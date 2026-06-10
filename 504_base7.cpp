string convertToBase7(int num) {
    if(num==0){
        return "0";
    }
    string s = "";
    for(int i=abs(num); i>0; i=i/7){
        s = s + to_string(i%7);
    }
    if(num<0){
        s.push_back('-');
    }
    reverse(s.begin(),s.end());
    return s;
}