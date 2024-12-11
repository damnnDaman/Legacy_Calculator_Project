

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926535897932384626433832795
#include "factorial.h"
#include "matrices.h"
#include "conversions.h"
#include <string.h>

/**
   refacator lines: 61-94, 220-340
*/

// Getting user input and making sure an interger was entered
float input(char *displayPrompt)
{
	// float stores the user input while the char will grab invaild input
	float userInput;
	char temp[9999];

	// loop until vaild intger or float is entered
	do
	{
		// prompt to tell user what to enter
		printf("%s", displayPrompt);
		// check if input was a number otherwise display try again
		if (!scanf("%f", &userInput))
		{
			scanf("%s", temp);
			printf("Please try again!\n");
		}
		// if input is vaild return it
		else
		{
			return userInput;
		}
	} while (1);
}

// Creating an array of user entered values
float inputAry(char *displayPrompt, int num)
{
	// float stores the user input while the char will grab invaild input
	float userInput;
	char temp[9999];

	// loop until vaild intger or float is entered
	do
	{
		// prompt to tell user what to enter, followed by array position
		printf("%s[%d]: ", displayPrompt, num + 1);
		// check if input was a number otherwise display try again
		if (!scanf("%f", &userInput))
		{
			scanf("%s", temp);
			printf("Please try again!\n");
		}
		// if input is vaild return it
		else
		{
			return userInput;
		}
	} while (1);
}

// Adding to values together and returning the result
float plus(float num1, float num2)
{
	float sum;
	sum = num1 + num2;
	return sum;
}

// subtracting the first value from the second and returning the result
float minus(float num1, float num2)
{
	float result;
	result = num1 - num2;
	return result;
}

// Multiplying two values together and returning the result
float multiply(float num1, float num2)
{
	float product;
	product = num1 * num2;
	return product;
}

// Dividing the first value by the second and returning the result
float divide(float divisor, float dividend)
{
	float quotient;
	quotient = dividend / divisor;
	return quotient;
}

// Calculating the factorial of a number
int factorial(int term)
{
	// if the term is 0 return 1
	if (term == 0)
	{
		return 1;
	}

	// recursive call to calculate the factorial
	return term * factorial(term - 1);
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

// Calculating the sine of a number
float sine(float radius)
{
	float val, sin;
	val = radius * (PI / 180);
	sin = val - (power(val, 3) / factorial(3)) + (power(val, 5) / factorial(5)) - (power(val, 7) / factorial(7));
	return sin;
}

// Calculating the cosine of a number
float cosine(float radius)
{
	float val, cos;
	val = radius * (PI / 180);
	cos = 1 - (power(val, 2) / factorial(2)) + (power(val, 4) / factorial(4)) - (power(val, 6) / factorial(6));
	return cos;
}

int spprint(char *screen, char *sym, int ini, int res)
{
	printf("%s %d%s = %d\n", screen, ini, sym, res);

	return 0;
}

float spprintf(char *screen, char *sym, float ini, float res)
{
	printf("%s %.4f%s = %.4f\n", screen, ini, sym, res);

	return 0.0;
}

float print(char *screen, char *sym, float ini, float upt, float res)
{
	printf("%s %.4f %s %.4f = %.4f\n", screen, ini, sym, upt, res);

	return 0.0;
}

float Aryprint(char *screen, float ans)
{
	printf("%s : %.4f\n", screen, ans);

	return 0.0;
}

int divideChecker(float divisor)
{
	if (divisor == 0)
	{
		printf("Denominator can not be zero!");
		return 0;
	}
	return 1;
}

// Main - start of excuting code
int main(int argc, char *argv[])
{
	// Declaring varibles
	// User inputted numbers to be used in operations
	float inputNum1, inputNum2, inputNum3;
	float inputFibNum1, inputFibNum3;
	float inputSineNum1, inputCosineNum2;
	// User inputted menu choice
	int menu, rmenu, smenu;

	do
	{
		// Displaying menu options for each calculator
		printf("\n======\n");
		printf("Menu\n");
		printf("======\n");
		printf("1.Regular Calculator\n");
		printf("2.Scientific Calculator\n");
		printf("3.Acountant Calculator\n");
		printf("4.Read Help and Notice\n");
		printf("0.Exit\n");
		// Getting users input for menu option
		menu = input("Select Menu: ");
		system("clear");

		// Going to regular calculator for +/-/*/÷ operations
		if (menu == 1)
		{

			do
			{
				// Dispaying basic math operations
				printf("\n======================\n");
				printf("Regular Calculator Menu\n");
				printf("=======================\n");
				printf("1.PLUS\n");
				printf("2.MINUS\n");
				printf("3.MULTIPLY\n");
				printf("4.DIVIDE\n");
				printf("0.BACK\n");
				// Getting users inputted menu choice
				rmenu = input("Select Menu: ");
				system("clear");

				// Plusing two user inputted integers
				if (rmenu == 1)
				{
					// Getting two values from the user
					inputNum1 = input("Enter value 1: ");
					inputNum2 = input("Enter value 2: ");
					// Adding both inputted values together
					inputNum3 = plus(inputNum1, inputNum2);
					// printing the operation and result
					printf("\n");
					print("sum of", "plus", inputNum1, inputNum2, inputNum3);
				}

				// Subtracting two user inputted integers
				if (rmenu == 2)
				{
					// Getting two values from the user
					inputNum1 = input("Enter value 1: ");
					inputNum2 = input("Enter value 2: ");
					// Subtracting the first inputted value by the second
					inputNum3 = minus(inputNum1, inputNum2);
					// printing the operation and result
					printf("\n");
					print("result of", "minus", inputNum1, inputNum2, inputNum3);
				}

				// Multiplying two user inputted integers
				if (rmenu == 3)
				{
					// Getting two values from the user
					inputNum1 = input("Enter value 1: ");
					inputNum2 = input("Enter value 2: ");
					// Multiplying both inputted values together
					inputNum3 = multiply(inputNum1, inputNum2);
					// printing the operation and result
					printf("\n");
					print("result of", "x", inputNum1, inputNum2, inputNum3);
				}

				// Dividing two user inputted integers
				if (rmenu == 4)
				{
					// Getting two values from the user
					inputNum1 = input("Enter value 1: ");
					inputNum2 = input("Enter value 2: ");
					// Dividing the first inputted value by the second
					inputNum3 = divideChecker(inputNum2);
					if (inputNum3 == 1)
					{
						inputNum3 = divide(inputNum1, inputNum2);
						// printing the operation and result
						printf("\n");
						print("result", "/", inputNum1, inputNum2, inputNum3);
					}
				}

				// Returning to main menu if 0 is entered otherwise looping regular menu
			} while (rmenu != 0);
		}

		if (menu == 2)
		{

			// Displaying scientific calculator menu
			do
			{
				printf("\n===========================\n");
				printf("Scientific Calculator Menu\n");
				printf("===========================\n");
				printf("1.Power function (x^y)\n");
				printf("2.Square Root\n");
				printf("3.Cube Root \n");
				printf("4.Factorial Series (x!)\n");
				printf("5.Fibonacci Series \n");
				printf("6.Sine (Sin x)\n");
				printf("7.Cosine (cos x)\n");
				printf("8.Tangent (Tan x)\n");
				printf("9.Cosec (cosec x)\n");
				printf("10.Sec (sec x)\n");
				printf("11.Cot (cot x)\n");
				printf("12.Matrix functions\n");
				printf("13.Conversion functions\n");
				printf("0.Back\n");
				smenu = input("Select Menu: ");

				// Calculating the power of a number
				if (smenu == 1)
				{
					inputNum1 = input("Enter base(x): ");
					inputNum2 = input("Enter power(y): ");
					inputNum3 = power(inputNum1, inputNum2);
					printf("\n");
					print("result of", "^", inputNum1, inputNum2, inputNum3);
				}
				// Calculating the square root of a number
				if (smenu == 2)
				{
					inputNum1 = input("Enter your value: ");
					inputNum3 = sqrt(inputNum1);
					printf("\n");
					spprintf("Square root of", " ", inputNum1, inputNum3);
				}

				// Calculating the cube root of a number
				if (smenu == 3)
				{
					inputNum1 = input("Enter your value: ");
					inputNum3 = cbrt(inputNum1);
					printf("\n");
					spprintf("Cube root of", " ", inputNum1, inputNum3);
				}


				// Calculating the factorial of a number
				if (smenu == 4)
				{
					inputFibNum1 = input("Enter numbers of term: ");
					inputFibNum3 = factorial(inputFibNum1);
					printf("\n");
					spprint("Factorial of", "!", inputFibNum1, inputFibNum3);
				}

				// Calculating the fibonacci of a number
				if (smenu == 5)
				{
					inputFibNum1 = input("Enter numbers of term: ");
					inputFibNum3 = fib(inputFibNum1);
					printf("\n");
					spprint("Fibonacci of", " ", inputFibNum1, inputFibNum3);
				}

				// Calculating the sine of a number
				if (smenu == 6)
				{
					inputNum1 = input("Enter your value: ");
					inputNum3 = sine(inputNum1);
					printf("\n");
					spprintf("Sine of", " ", inputNum1, inputNum3);
				}

				// Calculating the cosine of a number
				if (smenu == 7)
				{
					inputNum1 = input("Enter your value: ");
					inputNum3 = cosine(inputNum1);
					printf("\n");
					spprintf("Cosine of", " ", inputNum1, inputNum3);
				}

				// Calculating the tangent of a number
				if (smenu == 8)
				{
					inputNum1 = input("Enter your value: ");
					inputSineNum1 = sine(inputNum1);
					inputCosineNum2 = cosine(inputNum1);
					inputNum3 = inputSineNum1 / inputCosineNum2;
					printf("\n");
					spprintf("Tangent of", " ", inputNum1, inputNum3);
				}

				// Calculating the cosec of a number
				if (smenu == 9)
				{
					inputNum1 = input("Enter your value: ");
					inputNum3 = sine(inputNum1);
					printf("\n");
					spprintf("Cosec of", " ", inputNum1, 1 / inputNum3);
				}

				// Calculating the sec of a number
				if (smenu == 10)
				{
					inputNum1 = input("Enter your value: ");
					inputNum3 = cosine(inputNum1);
					printf("\n");
					spprintf("Sec of", " ", inputNum1, 1 / inputNum3);
				}

				// Calculating the cot of a number
				if (smenu == 11)
				{
					inputNum1 = input("Enter your value: ");
					inputSineNum1 = sine(inputNum1);
					inputCosineNum2 = cosine(inputNum1);
					inputNum3 = inputSineNum1 / inputCosineNum2;
					printf("\n");
					spprintf("Cot of", " ", inputNum1, 1 / inputNum3);
				}

				// Matrix functions
				if (smenu == 12)
				{
					int operation_number = 0;
					printf("\n\t\tSum of Matrices(1)\t\tTranspose(2)\t\tProduct of Matrices(3)");
					printf("\n\tEnter an operation command:");
					scanf("%d", &operation_number);

					// Matrix sum
					switch (operation_number)
					{
					case 1:
						matrix_sum();
						break;
					case 2:
						matrix_transpose();
						break;
					case 3:
						matrix_product();
						break;
					}
				}

				// Conversion functions
				if (smenu == 13)
				{
					int operation_number = 0;
					printf("\n\n\n\t\tTemperature(1)\t\tTime(2)");
					printf("\n\n\n\t\tPlease choose an operation number:");
					scanf("%d", &operation_number);

					// Temperature conversion
					switch (operation_number)
					{
					case 1:
						temp();
						break;
					case 2:
						time();
						break;
					}
					break;
				}

			} while (smenu != 0);
		}

		// Accountant calculator
		while (menu == 3)
		{
			// Displaying accountant calculator menu
			printf("\n===========================\n");
			printf("Accountant Calculator Menu\n");
			printf("===========================\n");
			printf("Please set value first\n");
			printf("\n");

			// Declaring varibles
			int n, i, j, amenu;
			float rest, max, min, x_bar = 0, sum = 0;
			float med;
			int temp;
			menu = 0;

			// Getting user input for number of terms
			n = input("Enter number of term: ");

			// Declaring arrays and variables
			float set[n];
			int numtemp[n];

			// Getting user input for each term
			for (i = 0; i < n; i++)
			{
				set[i] = inputAry("Enter value terms", i);
			}

			// Sorting the array using bubble sort
			for (i = 0; i < n; i++)
			{
				for (j = 0; j <= i; j++)
				{
					if (set[j] > set[i])
					{
						rest = set[j];
						set[j] = set[i];
						set[i] = rest;
					}
				}
			}

			// Calculating max, min, x-bar, median, mode
			min = set[0];
			max = set[n - 1];

			// Calculating x-bar
			for (i = 0; i < n; i++)
			{
				sum += set[i];
			}
			x_bar = (sum / n);

			// Calculating median
			if ((n % 2) != 0)
			{
				med = set[((n + 1) / 2) - 1];
			}
			else
			{
				med = (set[((n + 1) / 2)] + set[((n + 1) / 2) - 1]) / 2;
			}

			// Calculating mode
			for (i = 0; i < n; i++)
			{
				numtemp[i] = 0;
			}
			for (i = 0; i < n; i++)
			{
				temp = set[i];
				for (j = i; j < n; j++)
				{
					if (set[j] == temp)
					{
						numtemp[i]++;
					}
				}
			}
			temp = numtemp[0];
			for (i = 1; i < n; i++)
			{
				if (numtemp[i] > temp)
				{
					temp = numtemp[i];
				}
			}

			do
			{
				printf("\n===========================\n");
				printf("Accountant Calculator Menu\n");
				printf("===========================\n");
				printf("1.Show max\n");
				printf("2.Show min\n");
				printf("3.Show x-bar\n");
				printf("4.Show range\n");
				printf("5.Show Med\n");
				printf("6.Show Mode\n");
				printf("7.Show value(sort)\n");
				printf("8.Set new value\n");
				printf("0.Back\n");
				amenu = input("Select Menu: "); // input acountant  menu
				system("clear");

				// Displaying the max value
				if (amenu == 1)
				{
					printf("\n");
					Aryprint("Max is", max);
				}

				// Displaying the min value
				if (amenu == 2)
				{
					printf("\n");
					Aryprint("Min is", min);
				}

				// Displaying the x-bar value
				if (amenu == 3)
				{
					printf("\n");
					Aryprint("X-bar is", x_bar);
				}

				// Displaying the range value
				if (amenu == 4)
				{
					printf("\n");
					Aryprint("Range is", max - min);
				}

				// Displaying the median value
				if (amenu == 5)
				{
					printf("\n");
					Aryprint("Med is", med);
				}

				// Displaying the mode value
				if (amenu == 6)
				{
					printf("\n");
					int j = 0;

					for (i = 0; i < n; i++)
					{
						if (numtemp[i] == temp)
						{
							j++;
						}
					}

					if (j == 1)
					{
						for (i = 0; i < n; i++)
						{
							if (numtemp[i] == temp)
							{
								printf("Mode is : %.4f\n", set[i]);
							}
						}
					}

					else
					{
						printf("Not have mode value\n");
					}
				}

				// Displaying the sorted array
				if (amenu == 7)
				{
					printf("\n");
					printf("Set of number is(sort): ");
					for (i = 0; i < n; i++)
					{
						printf("%.3f ", set[i]);
					}
				}

				if (amenu == 8)
				{
					menu = 3;
					break;
				}

			} while (amenu != 0);
		}

		if (menu == 4)
		{
			// Displaying help and notice
			char text;
			FILE *help;

			// Opening the file and displaying the contents
			help = fopen("User_helping.txt", "r");

			// Displaying the contents of the file
			while ((text = fgetc(help)) != EOF)
			{
				fprintf(stdout, "%c", text);
			}

			// Closing the file
			fclose(help);
		}
	} while (menu != 0);

	return 0;
}