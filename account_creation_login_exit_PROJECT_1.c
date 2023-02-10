// ACCOUNT CREATION , LOGIN , EXIT PROGRAM
#include <stdio.h>
#include <string.h>

void mn()
{
    while(1)
    {
        long int mob;
        int sum=0;
    
        printf("Enter Your Mobile Number: ");
        scanf("%ld",&mob);
    
        do
        {
            sum=sum+1;
            mob=mob/10;
        }   
        while(mob!=0);
        
        if(sum==10)
        {
            break;
        }
        else if(sum<10 || sum>10)
        {
            printf("Mobile Number Should Be Having 10 Numbers!\n");
        }
        
        
    }
} 


void pass()
{
    
    while(1)
    {
        
    printf("\n\n Your Password Must Contain atleast 1 Special character 1 Number And 1 Capital Letter and N small letters And Size of Password Must be Greater Than 8 !!! \n\n");    
    char pass[30];
    
    int i=0,spc=0,num=0,sl=0,cl=0;
    
        printf("Create a password: ");
        scanf("%s",pass);
        
        int len=strlen(pass);

        
        for(i=0;i<len;i++)
        {
            if(pass[i]>='0' && pass[i]<='9')
            {
                num++;
            }
            else if(pass[i]>=97 && pass[i]<=122)
            {
                sl++;
            }
            else if(pass[i]>=65 && pass[i]<=90)
            {
                cl++;
            }
            else if( pass[i]=='!' || pass[i]=='^' || pass[i]==';' || pass[i]=='@' || pass[i]=='&' || pass[i]=='`' || pass[i]=='#' || pass[i]=='*' || pass[i]=='~' || pass[i]=='$' || pass[i]==':' || pass[i]=='|' || pass[i]=='%' || pass[i]=='?' || pass[i]=='/' || pass[i]=='.' || pass[i]=='<' || pass[i]=='>' || pass[i]==',' || pass[i]=='{' || pass[i]=='}' || pass[i]=='[' || pass[i]==']' || pass[i]=='(' || pass[i]==')' || pass[i]=='-' || pass[i]=='_' || pass[i]=='+' || pass[i]=='=')
            {
                spc++;            
            }
        }
        if(len>=8 && num >=1 && sl>=1 && cl >=1 && spc>=1)
        {
            printf("Password  Created Succsesfully\n");
            break;
        }
        if(!(len>=8 && num >=1 && sl>=1 && cl >=1 && spc>=1))
        {
        
        }
    }
}

void id()
{
    while(1)
    {
        printf("\n\nYour Id should be less than 30 characters and ' @' should be given at end !!! It is automatically linked to Your Gmail Account !\n\n");
        
        char id[30];
        char gm[10]="gmail.com";
        
        printf("Create id: ");
        scanf("%s",id);
        
        int len=strlen(id),i,sum=0,count=0;

        for(i=0;i<len;i++)
        {
            if(id[len-1]=='@')
            {
                sum=sum+1;
                break;
            }
        }
        
        for(i=0;i<len;i++)
        {
            if(id[i]=='@')
            {
                count=count+1;
            }
        }
        
        if(len<=30 && sum==1 && count==1)
        {
            strcat(id,gm);
            printf("Your Id: %s",id);
            break;
        }
        else
        {
            
        }
        
    }
}

int main() {
    
    printf("OPTIONS \n\n");
    
    printf("1. Account Creation\n");
    printf("2. Login\n");
    printf("3. Exit\n");
    
    int opt;
    printf("Enter your Choice: ");
    scanf("%d",&opt);
    
    
    char fn[20],ln[20],pas[30],iden[30];
    long int pn;

    
    switch(opt)
    {
        case 1:
        printf("Enter Your First Name: ");
        scanf("%s",fn);
        
        printf("Enter Your Last Name: ");
        scanf("%s",ln);
        
       
        mn();
        
        pass();
        
        id();
        
        printf("\n\n\n");
        
        /*case 2:
    
        printf("Enter Your Id: ");
        scanf("%s",iden);
        
        printf("Enter Your Password: ");
        scanf("%s",pas);
        
        printf("Enter Your Phone Number: ");
        scanf("%ld",pn);*/
        
    }
        
    
    
    
    return 0;
}
