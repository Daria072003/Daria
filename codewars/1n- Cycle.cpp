int cycle(int n) {
    int x = 1;
    int k = 0;
    if (n % 2 == 0 || n % 5 == 0){
      return -1;
    }
    else{
     do {
        while (x < n) {
            x *= 10;
            ++k;
        }
        x = x % n;
     } while (x != 1);  
     return k;
    }
}
