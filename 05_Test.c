//-------- CALLING A FUNCTION IN MAIN -----------//
// #include <stdio.h>

// void myBirthday()
// {
// printf("\nHello my birthday is today!");
// printf("\nHello my birthday is today!");
// printf("\nHello my birthday is today!");
// }

// int main(){
// myBirthday();
// myBirthday();
// myBirthday();
//    return 0;
// }

//-------------- CALLING A FUNCTION IN MAIN EXAMPLE 2 ----------//
// #include <stdio.h>

// void myHome(char name[], int age, double gpa)
// {
//    printf("\n%s lives in London, she is %d years old and, her gpa is %.2lf", name, age, gpa);
//    printf("\n%s lives in London, she is %d years old and, her gpa is %.2lf", name, age, gpa);
//    printf("\n%s lives in London, she is %d years old and, her gpa is %.2lf", name, age, gpa);
// }

// int main(){
//    myHome("Blossom", 32, 3.8);
//    myHome("Blossom", 32, 3.8);
//    myHome("Blossom", 32, 3.8);
// }

//------------- UPPERCASE AND LOWERCASE WITH STRINGS --------------//
// #include <stdio.h>
// #include <string.h>

// int main(){
// char name1[] = "Blossom";
// char name2[] = "Ezeokeke";

// printf("\n%s", strlwr(name1) );
// printf("\n%s", strupr(name2) );
// printf("\n%s", strcat(name1, name2) );
// printf("\n%s", strncat(name2, name1, 4) );
// printf("\n%s", strcpy(name2, name1) );

// printf("\n%s", strset(name2, '?') );
// printf("\n%s", strnset(name2, '$', 4) );
// printf("\n%s", strrev(name1) );
//    return 0;
// }

//--------- FOR LOOPS(INCREMENT) --------//
// #include <stdio.h>

// int main(){

// for(double myFav = 1.5; myFav <= 5.5; myFav++)
// for(int index = 1; index <= 10; index++)
// {
// printf("\n%lf", myFav);
// printf("\n%d", index);
// }  
//    return 0;
// }

//-------- FOR LOOPS(DECREMENT) ----------//
// #include <stdio.h>

// int main(){
// for(int i = 0; i <= 32; i++ ){ 
// for(int i = 1; i <= 10; i+= 2 )
// for(int i = 10; i >= 1; i-- )
// for(int i = 10; i >= 1; i--)
// printf("%d\n", i);
// }
//    return 0;
// }

//-------- PRINT YES FIVE TIMES USING FOR LOOP ---------//
// #include <stdio.h>
// int main(){
// for(i = 0; i <= 5; i++)
// {
// printf("Yes\n");
// }
//    return 0;
// }

//---------- WHILE LOOP -----------//
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// char name[25];
// printf("\nWhat is your name? ");
// fgets(name, 25, stdin);
// name[strlen(name) - 1] = '\0';

// while(strlen(name) == 0)
// {
// printf("\nYou did not enter your name");
// printf("\nWhat is your name? ");
// fgets(name, 25, stdin);
// }

// printf("\nHello %s", name);
//    return 0;
// }

//------------- WHILE LOOP(INCREMENT) ------------------//
// #include <stdio.h>
// int main(){
// int i = 0;
// while(i <= 10)
// {
// printf("%d\n", i);
// i++;
// }
//    return 0;
// }

//------------- WHILE LOOP(DECREMENT) ------------------//
// #include <stdio.h>
// int main(){
// int i = 32;
// while(i >= 0){
// printf("%d", i);
// }
//    return 0;
// }

//---------- INCREMENT AND DECREMENT -----------------//
// #include <stdio.h>
// int main(){
// int i = 20;
// i++;
// i--;
// printf("%d", i);

//    return 0;
// }

//-------- DO WHILE LOOP ----------//
#include <stdio.h>
int main()
{
   int i = 7;
do{
printf("%d", i);

} while (i < 5);



   return 0;
}












