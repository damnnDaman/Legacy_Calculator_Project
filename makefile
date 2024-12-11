CC= gcc
CFLAGS = -Wall -std=c99

calculator: cis3250-legacy-calculator.o
	$(CC)  $(CFLAGS) -o calculator cis3250-legacy-calculator.o -lm

cis3250-legacy-calculator.o: cis3250-legacy-calculator.c conversions.h factorial.h matrices.h
	$(CC)  $(CFLAGS) -c cis3250-legacy-calculator.c 

TestCode.o: TestCode.c unity.o unity.h
	$(CC)  $(CFLAGS) -c TestCode.c

unity.o: unity.c unity.h
	$(CC)  $(CFLAGS) -c unity.c
	
TestCodeRunner.o: TestCodeRunner.c unity.h
	$(CC)  $(CFLAGS) -c TestCodeRunner.c

test: TestCode.o unity.o TestCodeRunner.o unity.h codeUnderTest.h
	$(CC)  $(CFLAGS) -o test TestCode.o unity.o TestCodeRunner.o -lm

clean:
	rm -f *.o calculator
