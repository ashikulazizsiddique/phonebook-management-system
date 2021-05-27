#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct phonebook
{
    char name[50];
    int mobileNumber;
    char profession, address;

};

int main()
{
    struct phonebook std;
    stcrpy(std.name "Md Ashiul Aziz Siddique");
    std.mobileNumber 01521210973;
    strcpy(std.profession "Student");
    strcpy(std.address "Sobahanbag, Dhanmndi");

    printf("Name is: %s\n", std.name);
    printf("Mobile Number is: %s\n", std.mobileNumber);
    printf("Profession is: %s\n", std.profession);
    printf("Address is: %s\n", std.address);




    stcrpy(std.name "Jannatul Ferduse");
    std.mobileNumber 01774966349;
    strcpy(std.profession "Student");
    strcpy(std.address "Sobahanbag, Dhanmndi");

    printf("Name is: %s\n", std.name);
    printf("Mobile Number is: %s\n", std.mobileNumber);
    printf("Profession is: %s\n", std.profession);
    printf("Address is: %s\n", std.address);


    stcrpy(std.name "Susmita Baroi");
    std.mobileNumber 01728791138;
    strcpy(std.profession "Student");
    strcpy(std.address "Monipuripara, farmgate");

    printf("Name is: %s\n", std.name);
    printf("Mobile Number is: %s\n", std.mobileNumber);
    printf("Profession is: %s\n", std.profession);
    printf("Address is: %s\n", std.address);


    return 0;
}

