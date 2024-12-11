#include <stdio.h>
#include <stdint.h>

/** The function CalulateFact takes an integer as a parameter and calulates the factorial for that integer. 
since factorilas aundefined for negative numbers, the conditional statement checks if number enetered is less than 0. 
it then displays an error message is the condition is true and returns 0. 
if the number is positive and greater than 20, the resultant overflows as factorials of number larger than 20 are very large and 
cannot be stored without using special libraries. The function displays an error messgae in this case as well and returns 0.
The function calculates the factorial using a for loop  and stores and returns the resultaant factorial in the variable resultFact. 
*/
unsigned long long int calulateFact(int n){
    // unsigned long long int type used as foctorials grow into very large numbers rapidly. 
    unsigned long long int resultFact = 1;

    if(n<0){
        printf("Error: Negative number, factorial undefined!");
        return 0; 
    }
    
    if(n>20){
        printf("Error: very large value, Overflow! range: 0 - 20");
        return 0;
    }

    for(int i = 1; i <=n; i++){
        resultFact*=i;
    }
    return resultFact;
}

