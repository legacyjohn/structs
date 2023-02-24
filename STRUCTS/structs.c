#include <stdio.h>
#include <stdlib.h>

struct student {
    int age;
    char gender[20];
    char town[20];
     char Grade
};
int main(){
struct student mitchelle;
struct student johnson;


    printf("please enter mitchelle's age\n");
    scanf("%d",&mitchelle.age);

    printf("please enter mitchelle's gender\n");
    scanf(" %s",&mitchelle.gender);

    printf("please enter mitchelle's town \n");
    scanf(" %s",&mitchelle.town);

    printf("plz enter mitchelle's grade\n");
    scanf(" %c" ,&mitchelle.Grade);

    printf("please enter johnson's age\n");
    scanf("%d",&johnson.age);

    printf("please enter johnson's gender\n");
    scanf(" %s",&johnson.gender);

    printf("please enter johnson's town \n");
    scanf(" %s",&johnson.town);

    printf("plz enter johnsons's grade\n");
    scanf(" %c" ,&johnson.Grade);


    printf("mitchelle is %d years old and basically the gender is %s and she comes from %s\n" ,mitchelle.age , mitchelle.gender , mitchelle.town);
    printf("johnson is %d years old and basically the gender is %s and he comes from %s\n" ,johnson.age , johnson.gender , johnson.town);

switch (johnson.Grade){

    case 'A':
    printf("wewe ni mkuu manze");
    break;

    case 'B':
    printf("soma upate A buana");
    break;

    case 'C':
    printf("usikue fala boy");
    break;

    case 'D':
    printf("wewe ni ng'ombe");
    break;

    default:
        printf("plz enter a valid grade!KAZI NI KUNISUMBUA MJINGA WEWE");
        }
    return 0;
}




