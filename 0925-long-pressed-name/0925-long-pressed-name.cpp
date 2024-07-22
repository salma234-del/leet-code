class Solution {
public:
    bool isLongPressedName(string a, string b) {
        int i = 0, j = 0;
        
        a += ""; b += "";
        char prev = '$';
        
        while(i < a.size() && j < b.size()){
            if(a[i] == b[j]) prev = a[i], i++, j++;
            else {
                if(b[j] != prev) return false;
                j++;
            }
        }
        
        for(int i = j; i < b.size(); i++){
            if(b[i] != prev) return false;
        }
       
     
        return i == a.size();
    }
};