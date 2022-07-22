class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;
        int a = x^y;
        while(a){
            a&=(a-1);
            count++;
        }
       
        return count;
    }
};