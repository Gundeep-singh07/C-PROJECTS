// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    long int pn;
    int rn;
    char clas[10];
    int ut1[5];
    int ut2[5];
    int hy1[5];
    int hy2[5];
};

void mn()
{
    char mob[15];
    int sum=0;
    while(1)
    {
        printf("Enter Your Mobile Number: ");
        scanf("%s",mob);
    
        if(strlen(mob)==10)
        {
            printf("Your Mobile Number is: %s",mob);
            break;
        }
        else if(strlen(mob)<10 || strlen(mob)>10)
        {
            printf("Mobile Number Should Be Having 10 Numbers!\n");
        }
    }
} 


int main() {
    
    int year[2]={2022,2023};
    
    int i,j,sumut1=0,sumut2=0,sumhy1=0,sumhy2=0;
    struct student stu;
    struct student *ptr;
    
    ptr=&stu;
    
        printf("Dear student Enter Your Name: ");
        scanf("%s",ptr->name);
        
    for(i=0;i<2;i++)
    {
        printf("Dear student Enter Your Roll no of Year %d: ",year[i]);
        scanf("%d",&ptr->rn);
        
        printf("Dear student Enter Your Class Name of Year %d: ",year[i]);
        scanf("%s",ptr->clas);
        
    }
    
    printf("\n\n YOUR MARKS SHOULD BE LESS THAN OR EQUAL TO 40 !!!!\n\n");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Dear student enter %d Sub marks of ut1 of year %d: ",j+1,year[i]);
            scanf("%d",&stu.ut1[j]);
            sumut1=sumut1+stu.ut1[j];
        }
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Dear student enter %d Sub marks of ut2 of year %d: ",j+1,year[i]);
            scanf("%d",&stu.ut2[j]);
            sumut2=sumut2+stu.ut2[j];
        }
    }
    
    
    printf("\n\n YOUR MARKS SHOULD BE LESS THAN OR EQUAL TO 80 !!!!\n\n");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Dear student enter %d Sub marks of Haf Yearly of year %d: ",j+1,year[i]);
            scanf("%d",&stu.hy1[j]);
            sumhy1=sumhy1+stu.hy1[j];
        }
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Dear student enter %d Sub marks of Finals of year %d: ",j+1,year[i]);
            scanf("%d",&stu.hy2[j]);
            sumhy2=sumhy2+stu.hy2[j];
        }
    }

    mn(); //function calling mobile
    
    printf("\n\n\n\n");
        
        printf("\n\nDear student Your Name is: %s\n\n",ptr->name);
        
    for(i=0;i<2;i++)
    {
        printf("\n\nDear student Your Roll No of year %d is: %d\n\n",year[i],ptr->rn);
        
        printf("\n\nDear student Your class name of year %d is: %s\n\n",year[i],ptr->clas);
    }   
        
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\n\nDear student Your %d Sub marks of ut1 of year %d is: %d\n\n",j+1,year[i],stu.ut1[j]);
        }
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\n\nDear student Your %d Sub marks of ut2 of year %d is: %d\n\n",j+1,year[i],stu.ut2[j]);
        }
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\n\nDear student Your %d Sub marks of Half Yearly of year %d is: %d\n\n",j+1,year[i],stu.hy1[j]);
        }
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("\n\nDear student Your %d Sub marks of Finals of year %d is: %d\n\n",j+1,year[i],stu.hy2[j]);
        }
    }
    
    int total=sumut1+sumut2+sumhy1+sumhy2;
    
    int lm=2000-total; //left marks
    
    if(total>=2000 && total<=2400)
    {
        printf("\n\nDear student you get a scholarship !!! HARDWORK PAYS ONE DAY :) ALL THE BEST !\n\n");
    }
    else
    {
        printf("Your Marks are: %d And you must Need %d marks to get a scholarship !!! WORK HARD FOR NEXT YEAR !!! BEST OF LUCK :) ",total,lm);
    }
    
    
    
    return 0;
}