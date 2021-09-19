#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    typedef struct student
    {
        int roll_no;
        char name[30];
        int marks;
    }STUDENT;
    STUDENT stud1;
    system("cls");
    fp = fopen("student_details.txt","a");
    if(fp == NULL)
    {
        printf("\n File opening error");
        return 0;
    }

    printf("\n Enter the roll number: ");
    scanf("%d",&stud1.roll_no);
    printf("\n Enter the name: ");
    scanf("%s",stud1.name);
    printf("\n Enter the marks: ");
    scanf("%d",&stud1.marks);

    fprintf(fp,"\n %d %s %d",stud1.roll_no, stud1.name , stud1.marks);

    /* after entering the record add a -1 to the file to denote the end of the records */
    fprintf(fp,"%d",-1);
    printf("\n DATA APPEND");
    fclose(fp);
}
