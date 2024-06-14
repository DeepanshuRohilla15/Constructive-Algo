class Solution {
  public:
    string armstrongNumber(int n) {
        // code here
        int num =n;
        int sum = 0;
        while(n>0){
            int x = n%10;
            sum = sum + pow(x,3);
            n = n/10;
        }
        if(num==sum) {
            return "true";
        }
        return "false";
    }
};
