// Calculating the power of a number
float power(float base, int pow)
{
	int i;
	float mem = 1;
	for (i = 0; i < pow; i++)
	{
		mem *= base;
	}
	return mem;
}

// Calculating the fibonacci of a number
int fib(int term)
{
	// if the term is 1 return 0
	if (term == 1)
	{
		return 0;
	}
	if (term == 2)
	{
		return 1;
	}

	// recursive call to calculate the fibonacci
	return fib(term - 1) + fib(term - 2);
}

unsigned long long int calculateFact(int n){
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