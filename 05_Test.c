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

#include <stdio.h>

void myHome(char Blossom[],int age, double gpa)
{
   printf("\n%s lives in London, she is %d years old and, her gpa is %lf", Blossom, age, gpa);
}

int main(){
   myHome("Blossom");
   myHome("Blossom");
   myHome("Blossom");
}