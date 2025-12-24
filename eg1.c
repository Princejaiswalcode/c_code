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
int position_in();
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
int position_in(int roll)
{
    int i;
    for(i=0;i<sizeof(Student);i++)
    {
        if(roll==k->roll_number)
            return i;
        else
            printf("No student with that roll number!!\ncheck roll number\n");
            printf("Press enter to continue....");
            getchar();
            switch (choice)
            {
                case 1:
                    display_list_of_student();
                    break;
                case 2:
                    add_student();
                    break;
                case 3:
                    update_student();
                    break;
                case 4:
                    search_student();
                    break;
                case 5:
                    delete_student();
                    break;
                default:
                    break;
            }
    }
}
void add_student(){
    printf("Enter First Name : ");
    scanf("%s",&k->first_name[number_of_student]);
    __fpurge(stdin);    
    printf("Enter Last Name : ");
    scanf("%s",&k->last_name[number_of_student]);
    __fpurge(stdin);
    printf("Enter roll_number : ");
    scanf("%d",&k->roll_number[number_of_student]);
    __fpurge(stdin);
    number_of_student++;
}
void update_student()
{
    int i=0,position=0,enter_roll=0;
    char first[35],last[35];
    printf("Enter Roll Number to continue : ");
    scanf("%d",&enter_roll);
    position=position_in(enter_roll);
    printf("01. Update First Name\n02. Update Last Name\n");
    printf("Enter Code To action performed : ");
    scanf("%d",&i);
    __fpurge(stdin);
    switch{
        case 1:
            printf("Enter New First Name : ");
            scanf("%s",&first);
            __fpurge(stdin);
            k->first_name[position]=first;
        case 2:
            printf("Enter New last Name :");
            scanf("%s",&last);
            __fpurge(stdin);
            k->last_name[position]=last;
        default :
            printf("Enter within the range(1-2)!!\n");
            printf("press enter to continue....");
            update_student();
    }
}

void search_student()
{
    int i=0,position=0;
    printf("Enter Roll number : ");
    scanf("%d",&i);
    __fpurge(stdin);
    position=position_in(i);
    printf("Roll number\tFirst Name\tLast Name\n");
    printf("%d\t%s\t%s\n",k->roll_number[position],k->first_name[position],k->last_name[position]);
}

void display_list_of_student()
{
    int i;
    printf("Roll number\tFirst Name\tLast Name\n");
    for(i=0;i<sizeof(Student);i++)
    {
        printf("%d\t%s\t%s\n",k->roll_number[i],k->first_name[i],k->last_name[i]);
    }
}