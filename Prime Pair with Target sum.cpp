class Solution {
  public:
    
        // code here
        bool isPrime(int n){
        if(n == 1)
            return false;
        if(n==2 || n ==3)
            return true;
        if(n%2 == 0 || n%3 == 0)
            return false;
        for(int i=5; i*i<=n; i+=6){
            if(n%i==0 || n%(i+2)==0)
                return false;
        }
        return true;
    }
    vector<int> getPrimes(int n) {
        // code here
        for(int i = 2; i<=n/2; i++){
            if(isPrime(i) && isPrime(n-i))
                return{i, n-i};
        }
        return {-1, -1};
    
    }
};
