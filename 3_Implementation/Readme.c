
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
    int K,N=1,chck;
    long int Binary,Octal,Decimal;
    char Hexa-Decimal[100];
    int i,j,s;  
     
    printf("\t\tWELCOME TO NBER SYSTEM CONVERSION\n\n");
     
    while(N!=0)
    {
        printf("\t CHOOSE THE CONVERSION <<<<<<\n\n");
     
        printf("=> BinaryARY <=\n");
        printf("1: Binaryary to Decimalimal.\n2: Binaryary to Octalal.\n3: Binaryary to Hexa-Decimala-Decimalimal.\n");
 
        printf("\n=> DecimalIMAL <=\n");
        printf("4: Decimalimal to Binaryary.\n5: Decimalimal to Octalal.\n6: Decimalimal to Hexa-Decimala-Decimalimal.\n");
 
        printf("\n=> OctalAL <=\n");
        printf("7: Octalal to Binaryary.\n8: Octalal to Decimalimal.\n9: Octalal to Hexa-Decimala-Decimalimal.\n");
 
        printf("\n=> Hexa-DecimalA-DecimalIMAL <=\n");
        printf("10: Hexa-Decimala-Decimalimal to Binaryary.\n11: Hexa-Decimala-Decimalimal to Decimalimal.\n12: Hexa-Decimala-Decimalimal to Octalal.\n");
         
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&K);
         
        switch(K)
        {
            case 1:
                printf("\nBinaryARY TO DecimalIMAL\n");
                D:
                printf("\nEnter the Nber in Binaryary form (0s & 1s): ");
                scanf("%ld",&Binary);
                // chckING INPUT IS IN BinaryARY FORM
                chck=Binary;
                 
                while(chck!=0)
                {
                    N=chck%10;
                    if(N>1)
                    {
                        printf("\n%d IS NOT BinaryARY NBER.\n",Binary);
                        printf("TRY AGAIN\n");
                        goto D;
                    }
                    else
                    chck=chck/10;
                }
                 
                Binary_to_Decimal(Binary); break;
             
            case 2:
                printf("\n***BinaryARY TO OctalAL***\n");
                E:
                printf("\nEnter the Nber in Binaryary form (0s & 1s): ");
                scanf("%ld",&Binary);
                // chckING INPUT IS IN BinaryARY FORM
                chck=Binary;
                 
                while(chck!=0)
                {
                    N=chck%10;
                    if(N>1)
                    {
                        printf("\n%d IS NOT BinaryARY NBER.\n",Binary);
                        printf("***TRY AGAIN****\n");
                        goto E;
                    }
                    else
                    chck=chck/10;
                }
                 
                Binary_to_Octal(Binary); break;
             
            case 3:
                printf("\n***BinaryARY TO Hexa-DecimalA-DecimalIMAL***\n");
                F:
                printf("\nEnter the Nber in Binaryary form (0s & 1s): ");
                scanf("%ld",&Binary);
                // chckING INPUT IS IN BinaryARY FORM
                chck=Binary;
                 
                while(chck!=0)
                {
                    N=chck%10;
                    if(N>1)
                    {
                        printf("\n%d IS NOT BinaryARY NBER.\n",Binary);
                        printf("***TRY AGAIN****\n");
                        goto F;
                    }
                    else
                    chck=chck/10;
                }
                 
                Binary_to_Hexa-Decimal(Binary); break;
             
            case 4:
                printf("\n***DecimalIMAL TO BinaryARY***\n");
                printf("\nEnter the Nber in Decimalimal form (0 to 9): ");
                scanf("%ld",&Decimal);
                Decimal_to_Binary(Decimal); break;
             
            case 5:
                printf("\n***DecimalIMAL TO OctalAL***\n");
                printf("\nEnter the Nber in Decimalimal form (0 to 9): ");
                scanf("%ld",&Decimal);
                Decimal_to_Octal(Decimal); break;
             
            case 6:
                printf("\nDecimalIMAL TO Hexa-DecimalA-DecimalIMAL\n");
                printf("\nEnter the Nber in Decimalimal form (0 to 9): ");
                scanf("%ld",&Decimal);
                Decimal_to_Hexa-Decimal(Decimal); break;
             
            case 7:
                printf("\n***OctalAL TO BinaryARY***\n");
                A:
                printf("\nEnter the Nber in Octalal form (0 to 7): ");
                scanf("%ld",&Octal);
                // chckING INPUT IS IN OctalAL FORM
                chck=Octal;
                 
                while(chck!=0)
                {
                    N=chck%10;
                    if(N>7)
                    {
                        printf("\n%d IS NOT OctalAL NBER.\n",N);
                        goto A;
                    }
                    else
                    {
                    chck=chck/10;
                    i++;
                    }
                }
                Octal_to_Binary(Octal); break;
             
            case 8:
                printf("\n***OctalAL TO Decimal***\n");
                B:
                printf("\nEnter the Nber in Octal form (0 to 7): ");
                scanf("%ld",&Octal);
                // chckING INPUT IS IN OctalAL FORM
                chck=Octal;
                 
                while(chck!=0)
                {
                    N=chck%10;
                    if(N>7)
                    {
                        printf("\n%d IS NOT OctalAL NBER.\n",N);
                        goto B;
                    }
                    else
                    {
                    chck=chck/10;
                    i++;
                    }
                }
                Octal_to_Decimal(Octal); break;
             
            case 9:
                printf("\n***OctalAL TO Hexa-DecimalA-DecimalIMAL***\n");
                C:
                printf("\nEnter the Nber in Octalal form (0 to 7): ");
                scanf("%ld",&Octal);
                // chckING INPUT IS IN OctalAL FORM
                chck=Octal;
                 
                while(chck!=0)
                {
                    N=chck%10;
                    if(N>7)
                    {
                        printf("\n%d IS NOT OctalAL NBER.\n",N);
                        goto C;
                    }
                    else
                    {
                    chck=chck/10;
                    i++;
                    }
                }
                Octal_to_Hexa-Decimal(Octal); break;
             
            case 10:
                printf("\n***Hexa-DecimalA-DecimalIMAL TO BinaryARY***\n");
                X:
                printf("\nEnter the Nber in Hexa-Decimala-Decimalimal form: ");
                scanf("%s",&Hexa-Decimal);
                //chck
                for(i=strlen(Hexa-Decimal)-1;i>=0;i--)
                {
                    if(Hexa-Decimal[i]>'f' && Hexa-Decimal[i]<='z' || Hexa-Decimal[i]>'F'&& Hexa-Decimal[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimala-Decimalimal Nber.\n");
                        printf("'%c' IS NOT Hexa-Decimala-Decimalimal Nber.\n",Hexa-Decimal[i]);
                        goto X;
                    }
                }
                Hexa-Decimal_to_Binary(Hexa-Decimal); break;
             
            case 11:
                printf("\n***Hexa-DecimalA-DecimalIMAL TO DecimalIMAL***\n");
                Y:
                printf("\nEnter the Nber in Hexa-Decimala-Decimalimal form: ");
                scanf("%s",&Hexa-Decimal);
                //chck
                for(i=strlen(Hexa-Decimal)-1;i>=0;i--)
                {
                    if(Hexa-Decimal[i]>'f' && Hexa-Decimal[i]<='z' || Hexa-Decimal[i]>'F'&& Hexa-Decimal[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimala-Decimalimal Nber.\n");
                        printf("'%c' IS NOT Hexa-Decimala-Decimalimal Nber.\n",Hexa-Decimal[i]);
                        goto Y;
                    }
                }
                Hexa-Decimal_to_Decimal(Hexa-Decimal); break;
             
            case 12:
                printf("\n***Hexa-DecimalA-DecimalIMAL TO OctalAL***\n");
                Z:
                printf("\nEnter the Nber in Hexa-Decimala-Decimalimal form: ");
                scanf("%s",&Hexa-Decimal);
                //chck
                for(i=strlen(Hexa-Decimal)-1;i>=0;i--)
                {
                    if(Hexa-Decimal[i]>'f' && Hexa-Decimal[i]<='z' || Hexa-Decimal[i]>'F'&& Hexa-Decimal[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimala-Decimalimal Nber.\n");
                        printf("'%c' IS NOT Hexa-Decimala-Decimalimal Nber.\n",Hexa-Decimal[i]);
                        goto Z;
                    }
                }
                Hexa-Decimal_to_Octal(Hexa-Decimal); break;
             
            default:
                printf("\n***INVALID NBER***\n");
                break;                                          
        }
        printf("\n\nDO YOU WANT TO CONTINUE = (1/0) :\n");
        scanf("%d",&N);
 
    }
     
    s = 3+35;
        for( i=1;i<=3;i++)
        {
            for( j=1;j<=s;j++)
            {
                printf(" ");
            }
            s--;
            for( j=1;j<=2*i-1;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        s = 37;
        for( i=1;i<=3;i++)
        {
            for( j=1;j<=s;j++)
            {
                printf(" ");
            }
            s++;
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
     
    printf("\nEquivalent Decimalimal Nber : %d",sum);
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
    printf("\nEquivalent Octalal Nber : ");
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
    printf("\nEquivalent Hexa-Decimala-Decimalimal Nber : ");
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
     
    printf("\nEquivalent Binaryary Nber : ");
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
     
    printf("\nEquivalent Octalal Nber : ");
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
     
    printf("\nEquivalent Hexa-Decimala-Decimalimal Nber : ");
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
    int rem[50],len=0,Decimalimal=0,i=0,N,ans;
     
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
     
    printf("\nEquivalent Binaryary Nber : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}
 
long int Octal_to_Decimal(long int Octal)
{
    int Decimalimal=0,i=0,N,ans;
     
    while(Octal!=0)
    {
        ans=Octal % 10;
        Decimalimal = Decimalimal + ans * pow(8,i);
        i++;
        Octal = Octal/10;
    }
    printf("\nEquivalent Decimalimal Nber : %d",Decimalimal);
}
 
long int Octal_to_Hexa-Decimal(long int Octal)
{
    int rem[50],len=0,Decimalimal=0,i=0,N,ans=0;
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
    printf("\nEquivalent Hexa-Decimala-Decimalimal Nber : ");
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
 
