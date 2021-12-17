int centuryFromYear(int year) 
{
   if ((year % 10 >= 1) | (year % 100 != 0)) {
        return(year / 100 + 1);
   }
    else {
        return(year / 100);
    }
}
