# My learnings in Competitive programming

1. `cool conditional trick`: `if( i && d.back() > x)` put this inside a loop from 0 to n when our array is empty and we wanted to check only from 1st element not from 0th element then this will work as 0 && d.back() will get false and won't check d.back() this will when i is not zero.	

2. `Note point`: when `d` array is empty and then using `d.back()` will crash our program.

3. `a%b == 0`: then `b` is `divisor` of `a`.