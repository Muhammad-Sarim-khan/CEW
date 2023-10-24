#include <stdio.h>

/* QUESTION:1) Write a C program that accepts an employee's ID, total worked hours in a month and
the amount received per hour. Print the ID and salary (with two decimal places) of the
employee for a particular month.*/

int main(){

	int empID;
	float workhours;
	float amountinhours;
	printf("enter the employee's ID : ");
	scanf("%d", &empID);
	printf("enter the total worked hours in months : ");
	scanf("%f", &workhours);
	printf("enter the amount received in hours : ");
	scanf("%f", &amountinhours);
	printf("the employee's ID is : %d and the salary is : %.4f",empID,workhours*amountinhours);
    printf("\n----------------------------------------------------------");

	// QUESTION:2) Write a C program that takes the height and width of a rectangle as an input from user
	//and compute the perimeter and area of a rectangle.

	float height;
	float width;
	printf("\nenter the height of rectangle : ");
	scanf("%f", &height);
	printf("\nenter the width of rectangle : ");
	scanf("%f", &width);
	printf("\nthe perimeter of the rectangle is : %.2f",2*(height+width));
	printf("\nthe Area of the rectangle is : %.2f",height * width);
    printf("\n----------------------------------------------------------");


	/* QUESTION:3) Write a C program to accept the height of a person in centimeters and categorize the
    person according to his height. (Height < 150cm – Dwarf, Height=150cm – Average,
    Height>=165cm – Tall).*/

    float heightincm;
    printf("\nenter the height in cm : ");
    scanf("%f",&heightincm);
    if (heightincm<150){
        printf("Dwarf");
    }else if(heightincm==150){
        printf("Average");

    }else if(heightincm>=165){
        printf("Tall");
    }
    printf("\n----------------------------------------------------------");


    // QUESTION:4) Write a program in C to convert a decimal number to a binary number using functions.
void decimalToBinary(int decimal) {
    if (decimal > 0) {
        decimalToBinary(decimal / 2); //calling the function recursively.
        printf("%d", decimal % 2);
    }
}


    int decimal;


    printf("\nEnter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal < 0) {
        printf("Please enter a non-negative decimal number.\n");
    }else if (decimal == 0) {
        printf("Binary equivalent: 0\n");
    }else {
        printf("Binary equivalent: ");
        decimalToBinary(decimal);

        printf("\n");
    }
    printf("\n----------------------------------------------------------");


// QUESTION:5) Write a function to calculate the nth Fibonacci number and call it recursively to print
//the Fibonacci series.

    int n;
    printf("\nenter value for n : ");
    scanf("%d",&n);
    int a=1;
    int b=1;
    printf("%d,%d",a,b);
    void fibonacciSeries(n){
        for(int i=3;i<=n+1;i++){
            int c= a+b;
            a=b;
            b=c;
            printf(",%d",c);
        }


}
    fibonacciSeries(n);
    printf("\n----------------------------------------------------------");

    return 0;
}


