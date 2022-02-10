
#include <stdio.h>
#include <math.h>
#include<string.h>
#include <conio.h>
 
long int Binaryary_to_Decimalimal(long int); //1:BinaryARY TO DecimalIMAL
long int Binary_to_Octal(long int); //2:BinaryARY TO OctalAL
long int Binary_to_Hexa-Decimal(long int); //3:BinaryARY TO Hexa-DecimalA-DecimalIMAL
long int Decimal_to_Binary(long int); //4:DecimalIMAL TO BinaryARY
long int Decimal_to_Octal(long int); //5:DecimalIMAL TO OctalAL
long int Decimal_to_Hexa-Decimal(long int); //6:DecimalIMAL TO Hexa-DecimalA-DecimalIMAL
long int Octal_to_Binary(long int); //7:OctalAL TO BinaryARY
long int Octal_to_Decimal(long int); //8:OctalAL TO DecimalIMAL
long int Octal_to_Hexa-Decimal(long int); //9:OctalAL TO Hexa-DecimalA-DecimalIMAL
void Hexa-Decimal_to_Binary(char []); //10:Hexa-DecimalA-DecimalIMAL TO BinaryARY
void Hexa-Decimal_to_Decimal(char []); //11:Hexa-DecimalA-DecimalIMAL TO DecimalIMAL
void Hexa-Decimal_to_Octal(char []); //12:Hexa-DecimalA-DecimalIMAL TO OctalAL
 
int main()
{
    int op,num=1,check;
    long int Binary,Octal,Decimal;
    char Hexa-Decimal[100];
    int i,j,space;  //  FOR PATTERN
     
    printf("\t\tWELCOME TO NUMBER SYSTEM CONVERSION\n\n");
     
    while(num!=0)
    {
        printf("\t\t>>>>>> CHOOSE THE CONVERSION <<<<<<\n\n");
     
        printf("=> BinaryARY <=\n");
        printf("1: Binaryary to Decimalimal.\n2: Binaryary to Octalal.\n3: Binaryary to Hexa-Decimala-Decimalimal.\n");
 
        printf("\n=> DecimalIMAL <=\n");
        printf("4: Decimalimal to Binaryary.\n5: Decimalimal to Octalal.\n6: Decimalimal to Hexa-Decimala-Decimalimal.\n");
 
        printf("\n=> OctalAL <=\n");
        printf("7: Octalal to Binaryary.\n8: Octalal to Decimalimal.\n9: Octalal to Hexa-Decimala-Decimalimal.\n");
 
        printf("\n=> Hexa-DecimalA-DecimalIMAL <=\n");
        printf("10: Hexa-Decimala-Decimalimal to Binaryary.\n11: Hexa-Decimala-Decimalimal to Decimalimal.\n12: Hexa-Decimala-Decimalimal to Octalal.\n");
         
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&op);
         
        switch(op)
        {
            case 1:
                printf("\n***BinaryARY TO DecimalIMAL***\n");
                D:
                printf("\nEnter the Number in Binaryary form (0s & 1s): ");
                scanf("%ld",&Binary);
                // CHECKING INPUT IS IN BinaryARY FORM
                check=Binary;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BinaryARY NUMBER.\n",Binary);
                        printf("***TRY AGAIN****\n");
                        goto D;
                    }
                    else
                    check=check/10;
                }
                 
                Binary_to_Decimal(Binary); break;
             
            case 2:
                printf("\n***BinaryARY TO OctalAL***\n");
                E:
                printf("\nEnter the Number in Binaryary form (0s & 1s): ");
                scanf("%ld",&Binary);
                // CHECKING INPUT IS IN BinaryARY FORM
                check=Binary;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BinaryARY NUMBER.\n",Binary);
                        printf("***TRY AGAIN****\n");
                        goto E;
                    }
                    else
                    check=check/10;
                }
                 
                Binary_to_Octal(Binary); break;
             
            case 3:
                printf("\n***BinaryARY TO Hexa-DecimalA-DecimalIMAL***\n");
                F:
                printf("\nEnter the Number in Binaryary form (0s & 1s): ");
                scanf("%ld",&Binary);
                // CHECKING INPUT IS IN BinaryARY FORM
                check=Binary;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BinaryARY NUMBER.\n",Binary);
                        printf("***TRY AGAIN****\n");
                        goto F;
                    }
                    else
                    check=check/10;
                }
                 
                Binary_to_Hexa-Decimal(Binary); break;
             
            case 4:
                printf("\n***DecimalIMAL TO BinaryARY***\n");
                printf("\nEnter the Number in Decimalimal form (0 to 9): ");
                scanf("%ld",&Decimal);
                Decimal_to_Binary(Decimal); break;
             
            case 5:
                printf("\n***DecimalIMAL TO OctalAL***\n");
                printf("\nEnter the Number in Decimalimal form (0 to 9): ");
                scanf("%ld",&Decimal);
                Decimal_to_Octal(Decimal); break;
             
            case 6:
                printf("\n***DecimalIMAL TO Hexa-DecimalA-DecimalIMAL***\n");
                printf("\nEnter the Number in Decimalimal form (0 to 9): ");
                scanf("%ld",&Decimal);
                Decimal_to_Hexa-Decimal(Decimal); break;
             
            case 7:
                printf("\n***OctalAL TO BinaryARY***\n");
                A:
                printf("\nEnter the Number in Octalal form (0 to 7): ");
                scanf("%ld",&Octal);
                // CHECKING INPUT IS IN OctalAL FORM
                check=Octal;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OctalAL NUMBER.\n",num);
                        goto A;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
                Octal_to_Binary(Octal); break;
             
            case 8:
                printf("\n***OctalAL TO Decimal***\n");
                B:
                printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&Octal);
                // CHECKING INPUT IS IN OctalAL FORM
                check=Octal;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OctalAL NUMBER.\n",num);
                        goto B;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
                Octal_to_Decimal(Octal); break;
             
            case 9:
                printf("\n***OctalAL TO Hexa-DecimalA-DecimalIMAL***\n");
                C:
                printf("\nEnter the Number in Octalal form (0 to 7): ");
                scanf("%ld",&Octal);
                // CHECKING INPUT IS IN OctalAL FORM
                check=Octal;
                 
                while(check!=0)
                {
                    num=check%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OctalAL NUMBER.\n",num);
                        goto C;
                    }
                    else
                    {
                    check=check/10;
                    i++;
                    }
                }
                Octal_to_Hexa-Decimal(Octal); break;
             
            case 10:
                printf("\n***Hexa-DecimalA-DecimalIMAL TO BinaryARY***\n");
                X:
                printf("\nEnter the Number in Hexa-Decimala-Decimalimal form: ");
                scanf("%s",&Hexa-Decimal);
                //check
                for(i=strlen(Hexa-Decimal)-1;i>=0;i--)
                {
                    if(Hexa-Decimal[i]>'f' && Hexa-Decimal[i]<='z' || Hexa-Decimal[i]>'F'&& Hexa-Decimal[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimala-Decimalimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimala-Decimalimal Number.\n",Hexa-Decimal[i]);
                        goto X;
                    }
                }
                Hexa-Decimal_to_Binary(Hexa-Decimal); break;
             
            case 11:
                printf("\n***Hexa-DecimalA-DecimalIMAL TO DecimalIMAL***\n");
                Y:
                printf("\nEnter the Number in Hexa-Decimala-Decimalimal form: ");
                scanf("%s",&Hexa-Decimal);
                //check
                for(i=strlen(Hexa-Decimal)-1;i>=0;i--)
                {
                    if(Hexa-Decimal[i]>'f' && Hexa-Decimal[i]<='z' || Hexa-Decimal[i]>'F'&& Hexa-Decimal[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimala-Decimalimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimala-Decimalimal Number.\n",Hexa-Decimal[i]);
                        goto Y;
                    }
                }
                Hexa-Decimal_to_Decimal(Hexa-Decimal); break;
             
            case 12:
                printf("\n***Hexa-DecimalA-DecimalIMAL TO OctalAL***\n");
                Z:
                printf("\nEnter the Number in Hexa-Decimala-Decimalimal form: ");
                scanf("%s",&Hexa-Decimal);
                //check
                for(i=strlen(Hexa-Decimal)-1;i>=0;i--)
                {
                    if(Hexa-Decimal[i]>'f' && Hexa-Decimal[i]<='z' || Hexa-Decimal[i]>'F'&& Hexa-Decimal[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimala-Decimalimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimala-Decimalimal Number.\n",Hexa-Decimal[i]);
                        goto Z;
                    }
                }
                Hexa-Decimal_to_Octal(Hexa-Decimal); break;
             
            default:
                printf("\n***INVALID NUMBER***\n");
                break;                                          
        }
        printf("\n\nDO YOU WANT TO CONTINUE = (1/0) :\n");
        scanf("%d",&num);
 
    }
     
    space = 3+35;
        for( i=1;i<=3;i++)
        {
            for( j=1;j<=space;j++)
            {
                printf(" ");
            }
            space--;
            for( j=1;j<=2*i-1;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        space = 37;
        for( i=1;i<=3;i++)
        {
            for( j=1;j<=space;j++)
            {
                printf(" ");
            }
            space++;
            for( j=1;j<=2*(3-i)-1;j++)
            {
                printf("*");
               
            }
            
            printf("\n");
            
        }
        
}
 
long int Binary_to_Decimal(long int Binary)
{
    int rem,sum=0,i=0;
    while(Binary!=0)
    {
        rem=Binary%10;
        Binary=Binary/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
     
    printf("\nEquivalent Decimalimal Number : %d",sum);
}
 
long int Binary_to_Octal(long int Binary)
{
    int i=0,rem,sum=0,remain[100],len=0;
     
    while(Binary!=0)
    {
        rem=Binary%10;
        Binary=Binary/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        remain[i]=sum%8;
        sum=sum/8;
        i++;
        len++;
    }
    printf("\nEquivalent Octalal Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",remain[i]);
    }
}
 
long int Binary_to_Hexa-Decimal(long int Binary)
{
    int rem,i=0,sum=0,remain[100],len=0;
     
    while(Binary!=0)
    {
        rem=Binary%10;
        Binary=Binary/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        remain[i]=sum%16;
        sum=sum/16;
        i++;
        len++;
    }
    printf("\nEquivalent Hexa-Decimala-Decimalimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(remain[i])
        {
            case 10:
                printf("A"); break;
             
            case 11:
                printf("B"); break;
                 
            case 12:
                printf("C"); break;
                 
            case 13:
                printf("D"); break;
                 
            case 14:
                printf("E"); break;
                 
            case 15:
                printf("F"); break;
                 
            default:
                printf("%d",remain[i]);
        }
         
    }
}
 
long int Decimal_to_Binary(long int Decimal)
{
    int rem[50],i,len=0;
    do
    {
        rem[i]=Decimal%2;
        Decimal=Decimal/2;
        i++;
        len++;
    }
    while(Decimal!=0);
     
    printf("\nEquivalent Binaryary Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}
 
long int Decimal_to_Octal(long int Decimal)
{
    int rem[50],i,len=0;
    do
    {
        rem[i]=Decimal%8;
        Decimal=Decimal/8;
        i++;
        len++;
    }
    while(Decimal!=0);
     
    printf("\nEquivalent Octalal Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}
 
long int Decimal_to_Hexa-Decimal(long int Decimal)
{
    int rem[50],i,len=0;
    do
    {
        rem[i]=Decimal%16;
        Decimal=Decimal/16;
        i++;
        len++;
    }
    while(Decimal!=0);
     
    printf("\nEquivalent Hexa-Decimala-Decimalimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(rem[i])
        {
            case 10:
                printf("A"); break;
             
            case 11:
                printf("B"); break;
                 
            case 12:
                printf("C"); break;
                 
            case 13:
                printf("D"); break;
                 
            case 14:
                printf("E"); break;
                 
            case 15:
                printf("F"); break;
                 
            default:
                printf("%d",rem[i]);
        }
         
    }
}
 
long int Octal_to_Binary(long int Octal)
{
    int rem[50],len=0,Decimalimal=0,i=0,num,ans;
     
    while(Octal!=0)
    {
        ans=Octal % 10;
        Decimalimal = Decimalimal + ans * pow(8,i);
        i++;
        Octal = Octal/10;
    }
     
    i=0;
    do
    {
        rem[i]=Decimalimal%2;
        Decimalimal=Decimalimal/2;
        i++;
        len++;
    }
    while(Decimalimal!=0);
     
    printf("\nEquivalent Binaryary Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}
 
long int Octal_to_Decimal(long int Octal)
{
    int Decimalimal=0,i=0,num,ans;
     
    while(Octal!=0)
    {
        ans=Octal % 10;
        Decimalimal = Decimalimal + ans * pow(8,i);
        i++;
        Octal = Octal/10;
    }
    printf("\nEquivalent Decimalimal Number : %d",Decimalimal);
}
 
long int Octal_to_Hexa-Decimal(long int Octal)
{
    int rem[50],len=0,Decimalimal=0,i=0,num,ans=0;
    while(Octal!=0)
    {
        ans=Octal % 10;
        Decimalimal = Decimalimal + ans * pow(8,i);
        i++;
        Octal = Octal/10;
    }
    i=0;
    while(Decimalimal!=0)
    {
        rem[i]=Decimalimal%16;
        Decimalimal=Decimalimal/16;
        i++;
        len++;
    }
    printf("\nEquivalent Hexa-Decimala-Decimalimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(rem[i])
        {
            case 10:
                printf("A"); break;
             
            case 11:
                printf("B"); break;
                 
            case 12:
                printf("C"); break;
                 
            case 13:
                printf("D"); break;
                 
            case 14:
                printf("E"); break;
                 
            case 15:
                printf("F"); break;
                 
            default:
                printf("%d",rem[i]);
        }
         
    }
}
 
void Hexa-Decimal_to_Binary(char Hexa-Decimal[])
{
    int i=0;
    printf("\nEquivalent Binaryary Number : ");
    for(i=0;i<strlen(Hexa-Decimal);i++)
    {
        switch (Hexa-Decimal[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
        case 'a':   
            printf("1010"); break;
        case 'B':
        case 'b':
            printf("1011"); break;
        case 'C':
        case 'c':   
            printf("1100"); break;
        case 'D':
        case 'd':   
            printf("1101"); break;
        case 'E':
        case 'e':   
            printf("1110"); break;
        case 'F':
        case 'f':   
            printf("1111"); break;
         
        default:
            printf("\n Invalid Hexa-Decimala digit %c ", Hexa-Decimal[i]);            
        }
    }
 
}
 
void Hexa-Decimal_to_Decimal(char Hexa-Decimal[])
{
    int i,num=0,power=0,Decimalimal=0;
     
    for(i=strlen(Hexa-Decimal)-1;i>=0;i--)
    {
        if(Hexa-Decimal[i]=='A'||Hexa-Decimal[i]=='a')
        {
            num=10;
        }
        else if(Hexa-Decimal[i]=='B'||Hexa-Decimal[i]=='b')
        {
            num=11;
        }
        else if(Hexa-Decimal[i]=='C'||Hexa-Decimal[i]=='c')
        {
            num=12;
        }
        else if(Hexa-Decimal[i]=='D'||Hexa-Decimal[i]=='d')
        {
            num=13;
        }
        else if(Hexa-Decimal[i]=='E'||Hexa-Decimal[i]=='e')
        {
            num=14;
        }
        else if(Hexa-Decimal[i]=='F'||Hexa-Decimal[i]=='f')
        {
            num=15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            num=Hexa-Decimal[i]-48;
        }
         
        Decimalimal=Decimalimal+num*pow(16,power);
        power++;
    }
    printf("\nEquivalent Decimalimal Number : %d",Decimalimal);
 
}
 
void Hexa-Decimal_to_Octal(char Hexa-Decimal[])
{
    int i,len,num=0,power=0,Decimalimal=0,rem[100];
     
    for(i=strlen(Hexa-Decimal)-1;i>=0;i--)
    {
        if(Hexa-Decimal[i]=='A'||Hexa-Decimal[i]=='a')
        {
            num=10;
        }
        else if(Hexa-Decimal[i]=='B'||Hexa-Decimal[i]=='b')
        {
            num=11;
        }
        else if(Hexa-Decimal[i]=='C'||Hexa-Decimal[i]=='c')
        {
            num=12;
        }
        else if(Hexa-Decimal[i]=='D'||Hexa-Decimal[i]=='d')
        {
            num=13;
        }
        else if(Hexa-Decimal[i]=='E'||Hexa-Decimal[i]=='e')
        {
            num=14;
        }
        else if(Hexa-Decimal[i]=='F'||Hexa-Decimal[i]=='f')
        {
            num=15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            num=Hexa-Decimal[i]-48;
        }
         
        Decimalimal=Decimalimal+num*pow(16,power);
        power++;
    }
     
    i=0,len=0;
    while(Decimalimal!=0)
    {
        rem[i]=Decimalimal%8;
        Decimalimal=Decimalimal/8;
        i++;
        len++;
    }
    printf("\nEquivalent Octalal Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
     
}