// #include<stdio.h>

// int main(){ 
/*  HARDCODE, EMBEDDED */
   // int a = 4;
   // float b = 7;
   // printf("The area of a rectangle is %d,", a*b);

/* FOR USER INPUT */
// int a;
// int b;
// printf("Enter the value of length\n");
// scanf("%d", &a);

// printf("Enter the value of breadth\n");
// scanf("%d", &b);
// printf("The area of a rectangle is %d", a*b);

// VOLUME OF CYLINDER 
// int r = 4;
// printf("The area of a circle is %f\n", 3.14*r*r);

// int church = 1000;
// int school = 2000;
// printf("The number of church members is %d and %d\n", church, school);

// int h = 5;
// printf("The volume of a cylinder is %f", 3.14*r*r*h);

// printf(" |---|----|----|----|-------|\n");
// printf(" |    |    |    |    |      |\n");
// printf(" |     |    |    |    |     |\n");
// printf(" |      |    |    |    |    |\n");
// printf(" |-------|-----|---|----|---|\n");

//--------------BUILDING A BASIC CALCULATOR--------------//
// int num1;
// int num2;
// printf("Enter first number: ");
// scanf("%d", &num1);
// printf("Enter second number: ");
// scanf("%d", &num2);

// printf("Answer: %d", num1 + num2);

//------------------------------------//
// #include <stdio.h>
// int main()
// {
//    int num1;
//    int num2;
//    printf("Enter your 1st number:");
//    scanf("%d", &num1);
//     printf("Enter your second number:");
//    scanf("%d", &num2);

//    printf("Answer: %d", num1 == num2);
//    return 0;

// }

//---------------- BUILDING A BETTER CALCULATOR -------------//
// #include <stdio.h>
// int main()
// {
// double num1;
// double num2;
// char op;

// printf("Enter a number:");
// scanf("%lf", &num1);
// printf("Enter an operator:");
// scanf(" %c", &op);
// printf("Enter a number:");
// scanf("%lf", &num2); 


// if(op == '+'){printf("%lf", num1 + num2);}
// else if(op == '-'){printf("%lf", num1 - num2);}
// else if(op == '/'){printf("%lf", num1 / num2);}
// else if(op == '*'){printf("%lf", num1 * num2);}
// else{printf("Invalid Operator");}
 
//    return 0;
// }

//-----------------------------------------------//
// #include <stdio.h>
// int main()
// {
// int num1;
// int num2;
// char op;

// printf("Enter a number: ");
// scanf("%d", &num1);

// printf("Enter an operator: ");
// scanf(" %c", &op);

// printf("Enter a number: ");
// scanf("%d", &num2);

// if(op == '+'){printf("%d", num1 + num2);}
// else if(op == '-'){printf("%d", num1 - num2);}
// else if(op == '/'){printf("%d", num1 / num2);}
// else if(op == '*'){printf("%d", num1 * num2);}

// else{printf("Invalid operator");}
//    return 0;
// }

//-------------- SWITCH STATEMENTS (building a test app) ----------------//
// #include <stdio.h>
// int main()
// {
// int day = 4;
// switch(day)
// {
// case 1:
// printf("Monday");
// break;
// case 2:
// printf("Tuesday");
// break;
// case 3:
// printf("Wednesday");
// break;
// case 4:
// printf("Thursday");
// break;
// case 5:
// printf("Friday");
// break;
// default:
// printf("Type your own day of the week");
// break;
// } 
//    return 0;
// }

//-----------------------------------------//
// #include <stdio.h>
// int main()
// {
// char grade = 'B';

// switch (grade)
// {
//    case 'A':
//    printf("Excellent");
//    break;
// case 'B':
//    printf("Great");
//    break;
// case 'C':
//    printf("Good");
//    break;
// case 'D':
//    printf("Fair");
//    break;
// case 'F':
//    printf("Failed");
//    break;
// default:
// printf("Revert");
// break;
// }
//    return 0;
// }

//----------------- STRUCT ----------------------//
#include <stdio.h>
struct BlossomsStudents;
{
int age;
double gpa;
char name[50];
char major[50];
}

int main()
{
struct BlossomsStudents; 
student1.age = 25;
student1.gpa = 3.9;
strcpy( student1.name, "Nonso");
strcpy( student1.major, "Science");
   return 0;
}

