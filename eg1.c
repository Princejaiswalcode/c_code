#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>

struct Student{
    int roll_number;
    char first_name[35];
    char last_name[35];
};
int choice=0;
int number_of_student=0;
struct Student k[20];
void menu();
void add_student();
void update_student();
void delete_student();
void search_student();
void display_list_of_student();
int main()
{
    do{
        menu();
        switch(choice)
        {
            case 1:
                display_list_of_student();
            case 2:
                add_student();
            case 3:
                update_student();
            case 4:
                search_student();
            case 5:
                delete_student();
        }

    }while(choice!=6);
    printf("logging out from the system......\n\n");
    return 0;
}

int menu()
{
    printf("menu\n01. Display List Of Student\n02. Add new student\n03. Update Student record\n04. Search student\n 05. Delete Student\n06. logout\n\n\n");
    printf("Enter action to be performed : ");
    scanf("%d",&choice);
    __fpurge(stdin);
    getchar();
    if(choice<0 && choice>6)
    {
        printf("Enter code within the range(1-6)");
        menu();
    }
    else{
        return choice;
    }

}
void add_student(){
    printf("Enter First Name : ");
    scanf("%s",&k->first_name);
    __fpurge(stdin);    
    printf("Enter Last Name : ");
    scanf("%s",&k->last_name);
    __fpurge(stdin);
    printf("Enter roll_number : ");
    scanf("%d",&k->roll_number);
    __fpurge(stdin);
    number_of_student++;
}
void update_student()
{
    int i=0;
    printf("Enter Roll Number to continue : ");
    scanf("%d",);
    printf("01. Update First Name\n02. Update Last Name\n");
    printf("Enter Code To action performed : ");
    scanf("%d",&i);
    __fpurge(stdin);
    switch{
        case 1:
            Update
    }
}