//  #include <stdio.h>
// #include <cmath>

// int main()

// {

// INTEGERS, FLOATS, DOUBLES, CHAR
// ----------------ADDING A VARIABLE----------------------------------------->
// int favNum = 90;
// char favChar = 'i';
// ------------------------------------------------------------------------>
// printf("My %s number is %f and, I also like the %c\n", "favorite", 500.567, '$');
// printf("My %s number is %d %s, I also like the %c", "favorite", 500, "and", favChar);

//------------------WORKING WITH NUMBERS----------------------------------->
// printf("My favorite number is %f\n", 8.9);
// printf("%f", 5 / 4.0);

// -----------------ADDING A VARIABLE-------------------------------------->
// int num = 6;
// char charSam [] = "Johnson";
// printf("This is the number %d his name is %s", num, charSam);

// ------------------FUNCTIONS--------------------------------------------->
// printf("%f \n", pow (4, 10) );
// printf("%f \n", sqrt (43) );
// printf("%f \n", ceil(36.335) );
// printf("%f \n", floor(36.335) ); 
// printf("%f", sqrt(24) );

// char favName[] = "Johnson";
// int favSum = 500;
// printf("%s %d\n", favName, favSum);

// ------------CREATING AN EXTRA LINE IN C-------------------------------->
// ------------Sequence \n adds a new line---------------------->
// printf("Print this file and leave a space\n\n");
// printf("Print this file and leave three spaces\n\n\n");
// printf("Print this file and leave four spaces\n\n\n\n");

// ------------Sequence \t adds spaces between words on a line--------------->
// printf("Add a space\t between these words\n");
// printf("Add two spaces\t\t between these words");

// -----------Sequence \" adds double quotes to a word----------------------->
// printf("Print this \"file with the name\" Titi\n"); //This is a comment
// printf("Print this \"file\" with the name \"Titi\". ");

// -----------Sequence \\" adds a slash between two lines-------------------->
// printf("Print this file with the name Sam Titi\\ \n");
// printf("Print this file with the name Titi ");

//------------C OPERATORS. ADDING, SUBTRACTING AND MULTIPLYING VARIABLES------------------>
// int x = 20;
// int y = 50;
// int sum = x + y;
// int sub = y - x;
// int multi = x * y;
// int division = y / x;
// printf("Add these two x + y = %i: Subtract these two %d\n", sum, sub);
// printf("Get the power of this %f\n", pow(10, 2) );
// printf("Get the ceiling for this %f\n", ceil(59.52) );
// printf("Get the floor for this %f\n", floor(59.52) );
// printf("Get the square root for this %f\n", sqrt(59) );
// printf("Multiply %d\n", multi);
// printf("divide these two %d", division);

//   int sum1 = 100 + 50;        
//   int sum2 = sum1 + 250;      
//   int sum3 = sum2 + sum2;     
//   printf("%d\n", sum1);
//   printf("%d\n", sum2);
//   printf("%d\n", sum3);

//------------DECLARING MULTIPLE VARIABLES------------------------------------>
// int x = 10, y = 15, z = 20;
// printf("Print this %d", x + y + z);

// int x, y, z;
// x = y = z = 50;
// printf("Print this %d", x + y + z);

// --------- C OPERATORS ----------------------------------------------------->
// int femaleStudents = 23;
// int maleStudents = 5;
// printf("This is the number of female students %d ", femaleStudents % maleStudents);

// int x = 5;
// int y = 2;
// printf("%d", x % y);

// --------- INCREMENT(you add ++ to the value)------------>
// int x = 5;
// int y = 10;
// printf("This increases the value of a variable by one %d %d", ++x, ++y);

// float favHome = 20.0115;
// int sumSport = 50;
// printf("This the house %lf, \nthis is the sport %i", ++favHome, ++sumSport );

// --------- INCREMENT(you add - - to the value)------------>
// int x = 10;
// int y = 20;
// printf("%d %d", --x, --y);

// double myHome = 15.555;
// int church = 100;
// printf("This is %f and this is %d", --myHome, --church);

//----------COMPARISON OPERATORS(used to compare two values, True(1) and false(0) ) ----------------->
//   int x = 5;
//   int y = 3;
//   printf("%d", x > y); // returns 1 (true) because 5 is greater than 3

// int x = 3;
//   int y = 3;
//   printf("%d", x == y); // returns 1 (true) because 3 is equal to 3

// int x = 10;
// int y = 20;
//  printf("%d", x != y);  //returns 1 (true) because 10 is not equal to 20

//  int x = 50;
//  int y = 51;
//  printf("%d", x >= y); //returns false (0) because 50 isn't greater than or equal to 51


// -----------GETTING USER INPUT WITH SCANF ------------------->
// int age;
// printf("Please enter your age:");
// scanf("%d", &age);
// printf("Your age is %d", age);

// char grade;
// printf("Enter your grade:");
// scanf("%c", &grade);
// printf("Your grade is %c", grade);

// float favNum;
// printf("Enter your decimal:\n");
// scanf("%f", &favNum);
// printf("Your decimal number is: %f", favNum);

// -----------HOW TO OUTPUT STRINGS IN C--------------//
// char favCity[10];       //[10] is the size of the string
// printf("What is your favorite city?");
// scanf("%s", &favCity);
// printf("Your favorite city is: %s", favCity);

//-------------ENTERING ONE NAME BLOSSOM---------------//
//   char firstName[35];
//   printf("Enter your name: ");
//   scanf("%s", firstName); //you dont need to add & for string
//   printf("Your name is %s.", firstName);

//-------------ENTERING TWO NAMES BLOSSOM EZE WITH FGETS--------//
// char name[30];
// printf("Enter your name:");
// fgets(name, 30, stdin);
// printf("Your name is: %s", name);



// -----------HOW TO OUTPUT DOUBLES IN C--------------//
// double gpa;
// printf("Enter your gpa:");
// scanf("%lf", &gpa);
// printf("Your gpa is %lf", gpa);

//--------------- MATH FUNCTIONS(TWO METHODS) ---------------//
// #include <stdio.h>
// #include <cmath>

// int main() {
// double A = sqrt(9);
// double B = pow(2, 4);
// int C = round(3.14);
// int D = ceil(3.14);
// double E = floor(3.15); 
// double F = log(3);
// double G = sin(45);
// double H = cos(50);
// double I = tan(30);
// double J = fabs(-100);

// printf("Answer: %lf\n", J);

// int D;
// printf("%d", cos(4));

//    return 0;
// }

//---------------- FIND THE HYPOTENUSE OF A CIRCLE -------------//
// #include <stdio.h>
// #include <math.h>

// int main(){
// double A;
// double B;
// double C;

// printf("Enter side A: ");
// scanf("%lf", &A);

// printf("Enter side B: ");
// scanf("%lf", &B);

// C = sqrt(A*A + B*B);
// printf("Side C is %lf", C);

//    return 0;
// }

//------------ IF STATEMENTS ----------//
// #include <stdio.h>
// int main(){
//    int age;

// printf("Enter your age: ");
// scanf("%d", &age);

// if(age >= 18){
// printf("You are now signed up!");
// }
// else if(age <= 18){
// printf("You are too young");
// }

// else if(age == 0){
// printf("You haven't been born yet");
// }

// else{
//    printf("You are not eligible!");
// }
//    return 0;
// }

//-------------- SWITCH STATEMENTS ---------------//
// #include <stdio.h>

// int main(){

// char grade;
// printf("\nEnter a letter grade: ");
// scanf("%c", &grade);

// switch (grade){
// case 'A':
// printf("Perfect\n");
// break;

// case 'B':
// printf("Good\n");
// break;

// case 'C':
// printf("Fair\n");
// break;

// case 'D':
// printf("Atleast it is not an f\n");
// break;

// case 'F':
// printf("You failed!\n");
// break;

// default:
// printf("Please enter a valid letter grade");
// }
//    return 0;
// }

//------------------ USING ELSE IF FOR SAME QUESTION ------------//
// #include <stdio.h>
// int main(){

// char grade;
// printf("Enter your grade: ");
// scanf("%c", &grade);

// if(grade == 'A'){
// printf("Perfect");
// }

// else if(grade == 'B'){
// printf("Good");
// }
// else if(grade == 'C'){
// printf("Fair");
// }

// else{
//    printf("Please enter a valid letter grade");
// }

//    return 0;
// }





















