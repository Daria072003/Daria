int twice_as_old(int dad, int son) {
    int k = 0;
    if (dad > son * 2) { 
        while (dad != son * 2) {
           ++dad;
           ++son;
           ++k;
        }
    }
    else {
        while (dad != son * 2) {
            --dad;
            --son;
            ++k;
        }
    }
   return k;
}
