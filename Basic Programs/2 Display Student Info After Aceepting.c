//Display all information after accepting from user
#include<stdio.h>
int main()
{
    int no;
    char name[15],city[10],course[5];

    printf("Enter Student Name,Roll No,City,Course\n");
    printf("\n==============================================================================\n");

    scanf("%s%d%s%s",&name,&no,&city,&course);

    printf("\n==============================================================================\n");
    printf("\n\t\tStudent Name Roll No     City Course");
    printf("\n\n\t\t%-15s%4d%10s%5s",name,no,city,course);

    printf("\n\n==============================================================================\n");

    return 0;
}
