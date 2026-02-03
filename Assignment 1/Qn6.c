/*Assume that there is an marksay Marks [], such that the index of the
marksay specifies the roll number of the student and the value of a
particular element denotes the marks obtained by the student. For
example, if it is given Marks [4] =78, then the student whose roll
number is 4 has obtained 78 marks in the examination. Apply the
above context and write the program
a) To find the total number of students who have secured 80 or
more marks.
b) To print the roll number and marks of all the students who got
distinction.
*/
/*
Coded by: $up@rn0
*/
#include<stdio.h>
int main(){
    int totalStudent,count=0;
    printf("Enter total number of students:\n");
    scanf("%d",&totalStudent);
    int Marks[totalStudent];
    printf("Enter marks roll wise\n");
    for (int i = 0; i < totalStudent; i++)
    {
        scanf("%d",&Marks[i]);
    }
    
    for (int i = 0; i < totalStudent; i++)
    {
        if(Marks[i] >=80 && Marks[i] <= 100){
            count++;
        }
       
        
    }
    printf("Total number of studets who got 80 or more marks is :%d\n",count);
    for (int i = 0; i < totalStudent; i++)
    {
         if (Marks[i] >= 80 && Marks[i] <= 100)
        {
            printf("Roll no. %d got %d\n",i+1,Marks[i]);
        }
    }
    
    
    
    return 0;
}
