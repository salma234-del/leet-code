class Solution {
public:
    int findComplement(int num) {
        int res = 0;
        for(int i = 0; i < __lg(num); i++){
          if(!(num & (1 << i))) res |= 1 << i;        
        }
       return res;
    }
};