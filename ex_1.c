/**********************
 * Nadav Menirav
 * 330845678
 * ex_1 
 **********************/

#include <stdio.h>
#include <math.h>
int main() {
	/*
	Exercise 1
	Input: 2 4-digit binary strings
	Output: the xor of their digits
	*/
	// The chars of the 2 4-digit numbers
	char a0='\0', a1='\0', a2='\0', a3='\0';
	char b0='\0', b1='\0', b2='\0', b3='\0';

	printf("Exercise 1:\nPlease enter 2 binary strings with 4 digits:\nBinary 1: ");
	scanf("%c%c%c%c", &a0, &a1, &a2, &a3);
	printf("Binary 2: ");
	scanf(" %c%c%c%c",&b0, &b1, &b2, &b3);
	printf("\n%c%c%c%c", a0, a1, a2, a3);
	printf("\n^");
	printf("\n%c%c%c%c", b0, b1, b2, b3);
	printf("\n--------");
	/*	
	The value of the chars are either '0' or '1' and their Ascii representation
	 is 48 and 49
	 */
	printf("\n%d", (a0 - 48) ^ (b0 - 48));
	printf("%d", (a1 - 48) ^ (b1 - 48));
	printf("%d", (a2 - 48) ^ (b2 - 48));
	printf("%d", (a3 - 48) ^ (b3 - 48));

	/*
	Exercise 2 
	Input: 2 hexadecimal numbers 
	Output: sum of them in hexadecimal, and the 4 most right digits in binary display
	*/
	printf("\n\nExercise 2:\nEnter 2 hexadecimal numbers:\nHex 1: ");
	int hex1=0, hex2=0, sum=0;
	scanf("%x", &hex1);
	printf("Hex 2: ");
	scanf("%x", &hex2);
	sum = hex1 + hex2;
	printf("\n%X + %X = %X\n", hex1, hex2, sum);
	printf("The last 4 binary digits of the sum are %u",(sum>>3)&0B1);
	printf("%u", (sum >> 2) & 0B1);
	printf("%u", (sum >> 1) & 0B1);
	printf("%u", sum & 0B1);

	/*
	Exercise 3
	input: base value between 2 and 9 and a 5-digit number in the entered base
	output: the decimal representation of the num
	*/
	printf("\n\nExercise 3:\nChoose a base between 2 to 9: ");
	int base=0,num=0,keepNum=0, newNum=0;
	scanf("%d", &base);
	printf("Enter a 5 digit number using that base: ");
	scanf("%d", &num);
	keepNum = num;
	// From base-n to decimal
	newNum += (num % 10) * pow(base, 0);
	num = num / 10;
	newNum += (num % 10) * pow(base, 1);
	num = num / 10;
	newNum += (num % 10) * pow(base, 2);
	num = num / 10;
	newNum += (num % 10) * pow(base, 3);
	num = num / 10;
	newNum += (num % 10) * pow(base, 4);
	printf("The decimal value of %d in base %d is %d", keepNum, base,newNum);

	/*
	Exercise 4
	input: number, and a desired bit number
	output: the value of the desired bit of the num
	*/
	printf("\n\nExercise 4:\nEnter a number: ");
	int number=0, bitNum=0, correctNum=0;
	scanf("%d", &number);
	printf("I want to know the value of bit number: ");
	scanf("%d", &bitNum);
	correctNum = number;
	number=number >> (bitNum - 1);
	printf("\nThe value of the %d bit in %d is %d",bitNum,correctNum,number&0B1);

	printf("\nCongrats! You've found the philosopher's stone!");
	return 0;
}