int addDigits(int num) {
    int n = num;
    int sum = 0;

    while(n != 0){
        sum = sum + n % 10;
        n = n / 10;
        if(n == 0){
            if(sum >= 10){
                n = sum;
                sum = 0;
            }
        }
    }
    return(sum);
}
