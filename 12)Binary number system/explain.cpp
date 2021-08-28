// 1 to 9 is decimal number system
// eg.
// 1234 = 1*1000 + 2*100 + 3*10 + 4*1


// binary number system 
// positioning in binary is not like unit tense hundreads

// in binary 32 16 8 4 2 1 
// eg. 45 ==  1  0 1 1 0 1
// 45 = 1*32 + 0*16 + 1*8 + 0*2 + 1*1

// how to convert decimal to binary 
// if there is number n and i want to find all number of it then i will devide it with the base and the remainder at every step will give me all digits 
// eg.
// decimal number  quotient n/10   remainder
// 1234                123             4
// 123                 12              3
// 12                  1               2   
// 1                   0               1
// in reverse order remainder is giving us our number 

// decimal number  quotient n/2  remainder n%2
// 45                  22              1
// 22                  11              0
// 11                  5               1
// 5                   2               1
// 2                   1               0
// 1                   0               1

// take it reverse order you will get binary representation of binary 



// binary to decimal 
// 1       0       1       1       0       1
// 2^5     2^4     2^3     2^2     2^1     2^0 
// and then multiplying and adding these 
// 1*2^5 + 0*2^4 + 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0 
// =====   ans----(45)
//                    10
