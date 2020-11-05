

//Write your code here

class MyCalculator implements AdvancedArithmetic{
    public int divisor_sum(int n){
        int i, sum = 0;
        for(i = 1; i <= n; i++){
            if(n % i == 0){
                sum += i;
            }
        }
        return sum;
    }
}

