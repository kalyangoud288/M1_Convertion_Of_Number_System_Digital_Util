#include <stdio.h>
#include <math.h>
#include<string.h>
#include <conio.h>

long int BinarytoDecimal(long int); //1:BINARY TO DECIMAL
long int BinarytoOctal(long int); //2:BINARY TO OCTAL
long int BinarytoHexa(long int); //3:BINARY TO HEXA-DECIMAL
long int DecimaltoBinary(long int); //4:DECIMAL TO BINARY
long int DecimaltoOctal(long int); //5:DECIMAL TO OCTAL
long int DecimaltoHexa(long int); //6:DECIMAL TO HEXA-DECIMAL
long int OctaltoBinary(long int); //7:OCTAL TO BINARY
long int OctaltoDecimal(long int); //8:OCTAL TO DECIMAL
long int OctaltoHexa(long int); //9:OCTAL TO HEXA-DECIMAL
void Hexatobinary(char []); //10:HEXA-DECIMAL TO BINARY
void HexatoDecimal(char []); //11:HEXA-DECIMAL TO DECIMAL
void HexatoOctal(char []); //12:HEXA-DECIMAL TO OCTAL

int main()
{
    int Operation,num=1,Chk;
    long int K,L,M;
    char hex[100];
    int i,j,S;  //  FOR PATTERN
     
    printf("\t\tWELCOME TO NUMBER SYSTEM CONVERSION\n\n");
     
    while(num!=0)
    {
        printf("\t\tCHOOSE THE CONVERSION\n\n");
     
        printf("=> BINARY <=\n");
        printf("1: Binary to Decimal.\n2: Binary to Octal.\n3: Binary to Hexa-Decimal.\n");
 
        printf("\n=> DECIMAL <=\n");
        printf("4: Decimal to Binary.\n5: Decimal to Octal.\n6: Decimal to Hexa-Decimal.\n");
 
        printf("\nOCTAL\n");
        printf("7: Octal to Binary.\n8: Octal to Decimal.\n9: Octal to Hexa-Decimal.\n");
 
        printf("\nHEXA-DECIMAL\n");
        printf("10: Hexa-Decimal to Binary.\n11: Hexa-Decimal to Decimal.\n12: Hexa-Decimal to Octal.\n");
         
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&Operation);
         
        switch(Operation)
        {
            case 1:
                printf("\n***BINARY TO DECIMAL***\n");
                D:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&K);
                // CHECK INPUT IS IN BINARY FORM
                Chk=K;
                 
                while(Chk!=0)
                {
                    num=Chk%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",K);
                        printf("***TRY AGAIN****\n");
                        goto D;
                    }
                    else
                    Chk=Chk/10;
                }
                 
                BinarytoDecimal(K); break;
             
            case 2:
                printf("\n***BINARY TO OCTAL***\n");
                E:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&K);
                // CHECK INPUT IS IN BINARY FORM
                Chk=K;
                 
                while(Chk!=0)
                {
                    num=Chk%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",K);
                        printf("***TRY AGAIN****\n");
                        goto E;
                    }
                    else
                    Chk=Chk/10;
                }
                 
                BinarytoOctal(K); break;
             
            case 3:
                printf("\n***BINARY TO HEXA-DECIMAL***\n");
                F:
                printf("\nEnter the Number in Binary form (0s & 1s): ");
                scanf("%ld",&K);
                // CHECK INPUT IS IN BINARY FORM
                Chk=K;
                 
                while(Chk!=0)
                {
                    num=Chk%10;
                    if(num>1)
                    {
                        printf("\n%d IS NOT BINARY NUMBER.\n",K);
                        printf("***TRY AGAIN****\n");
                        goto F;
                    }
                    else
                    Chk=Chk/10;
                }
                 
                BinarytoHexa(K); break;
             
            case 4:
                printf("\n***DECIMAL TO BINARY***\n");
                printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&M);
                DecimaltoBinary(M); break;
             
            case 5:
                printf("\n***DECIMAL TO OCTAL***\n");
                printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&M);
                DecimaltoOctal(M); break;
             
            case 6:
                printf("\n***DECIMAL TO HEXA-DECIMAL***\n");
                printf("\nEnter the Number in Decimal form (0 to 9): ");
                scanf("%ld",&M);
                DecimaltoHexa(M); break;
             
            case 7:
                printf("\n***OCTAL TO BINARY***\n");
                A:
                printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&L);
                // CHECK INPUT IS IN OCTAL FORM
                Chk=L;
                 
                while(Chk!=0)
                {
                    num=Chk%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto A;
                    }
                    else
                    {
                    Chk=Chk/10;
                    i++;
                    }
                }
                OctaltoBinary(L); break;
             
            case 8:
                printf("\n***OCTAL TO DECIMAL***\n");
                B:
                printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&L);
                // CHECK INPUT IS IN OCTAL FORM
                Chk=L;
                 
                while(Chk!=0)
                {
                    num=Chk%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto B;
                    }
                    else
                    {
                    Chk=Chk/10;
                    i++;
                    }
                }
                OctaltoDecimal(L); break;
             
            case 9:
                printf("\n***OCTAL TO HEXA-DECIMAL***\n");
                C:
                printf("\nEnter the Number in Octal form (0 to 7): ");
                scanf("%ld",&L);
                // CHECK INPUT IS IN OCTAL FORM
                Chk=L;
                 
                while(Chk!=0)
                {
                    num=Chk%10;
                    if(num>7)
                    {
                        printf("\n%d IS NOT OCTAL NUMBER.\n",num);
                        goto C;
                    }
                    else
                    {
                    Chk=Chk/10;
                    i++;
                    }
                }
                OctaltoHexa(L); break;
             
            case 10:
                printf("\n***HEXA-DECIMAL TO BINARY***\n");
                X:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);
                //check
                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto X;
                    }
                }
                Hexatobinary(hex); break;
             
            case 11:
                printf("\n***HEXA-DECIMAL TO DECIMAL***\n");
                Y:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);
                //check
                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto Y;
                    }
                }
                HexatoDecimal(hex); break;
             
            case 12:
                printf("\n***HEXA-DECIMAL TO OCTAL***\n");
                Z:
                printf("\nEnter the Number in Hexa-Decimal form: ");
                scanf("%s",&hex);
                //check
                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\nYou have to Enter Hexa-Decimal Number.\n");
                        printf("'%c' IS NOT Hexa-Decimal Number.\n",hex[i]);
                        goto Z;
                    }
                }
                HexatoOctal(hex); break;
             
            default:
                printf("\n***INVALID NUMBER***\n");
                break;                                          
        }
        printf("\n\nDO YOU WANT TO CONTINUE = (1/0) :\n");
        scanf("%d",&num);
 
    }
     
    S = 3+35;
        for( i=1;i<=3;i++)
        {
            for( j=1;j<=S;j++)
            {
                printf(" ");
            }
            S--;
            for( j=1;j<=2*i-1;j++)
            {
                printf("ok");
                break;
            }
            printf("\n");
        }
        S = 37;
        for( i=1;i<=3;i++)
        {
            for( j=1;j<=S;j++)
            {
                printf(" ");
                break;
            }
            S++;
            for( j=1;j<=2*(3-i)-1;j++)
            {
                printf("");
               
            }
            
            printf("\n");
            
        }
}
long int BinarytoDecimal(long int K)
{
    int rem,sum=0,i=0;
    while(K!=0)
    {
        rem=K%10;
        K=K/10;
        sum=sum+rem*pow(2,i);
        i++;
    }
     
    printf("\nEquivalent Decimal Number : %d",sum);
}
 
long int BinarytoOctal(long int K)
{
    int i=0,rem,sum=0,remain[100],len=0;
     
    while(K!=0)
    {
        rem=K%10;
        K=K/10;
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
    printf("\nEquivalent Octal Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",remain[i]);
    }
}
 
long int BinarytoHexa(long int K)
{
    int rem,i=0,sum=0,remain[100],len=0;
     
    while(K!=0)
    {
        rem=K%10;
        K=K/10;
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
    printf("\nEquivalent Hexa-Decimal Number : ");
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
 
long int DecimaltoBinary(long int M)
{
    int rem[50],i,len=0;
    do
    {
        rem[i]=M%2;
        M=M/2;
        i++;
        len++;
    }
    while(M!=0);
     
    printf("\nEquivalent Binary Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}
 
long int DecimaltoOctal(long int M)
{
    int rem[50],i,len=0;
    do
    {
        rem[i]=M%8;
        M=M/8;
        i++;
        len++;
    }
    while(M!=0);
     
    printf("\nEquivalent Octal Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}
 
long int DecimaltoHexa(long int M)
{
    int rem[50],i,len=0;
    do
    {
        rem[i]=M%16;
        M=M/16;
        i++;
        len++;
    }
    while(M!=0);
     
    printf("\nEquivalent Hexa-Decimal Number : ");
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
 
long int OctaltoBinary(long int L)
{
    int rem[50],len=0,decimal=0,i=0,num,ans;
     
    while(L!=0)
    {
        ans=L % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        L = L/10;
    }
     
    i=0;
    do
    {
        rem[i]=decimal%2;
        decimal=decimal/2;
        i++;
        len++;
    }
    while(decimal!=0);
     
    printf("\nEquivalent Binary Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
}
 
long int OctaltoDecimal(long int L)
{
    int decimal=0,i=0,num,ans;
     
    while(L!=0)
    {
        ans=L % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        L = L/10;
    }
    printf("\nEquivalent Decimal Number : %d",decimal);
}
 
long int OctaltoHexa(long int L)
{
    int rem[50],len=0,decimal=0,i=0,num,ans=0;
    while(L!=0)
    {
        ans=L % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        L = L/10;
    }
    i=0;
    while(decimal!=0)
    {
        rem[i]=decimal%16;
        decimal=decimal/16;
        i++;
        len++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
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
 
void Hexatobinary(char hex[])
{
    int i=0;
    printf("\nEquivalent Binary Number : ");
    for(i=0;i<strlen(hex);i++)
    {
        switch (hex[i])
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
            printf("\n Invalid hexa digit %c ", hex[i]);            
        }
    }
 
}
 
void HexatoDecimal(char hex[])
{
    int i,num=0,power=0,decimal=0;
     
    for(i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]=='A'||hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'||hex[i]=='f')
        {
            num=15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            num=hex[i]-48;
        }
         
        decimal=decimal+num*pow(16,power);
        power++;
    }
    printf("\nEquivalent Decimal Number : %d",decimal);
 
}
 
void HexatoOctal(char hex[])
{
    int i,len,num=0,power=0,decimal=0,rem[100];
     
    for(i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]=='A'||hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'||hex[i]=='f')
        {
            num=15;
        }
        else
        //(a[i]>=0 || a[i]<=9)
        {
            num=hex[i]-48;
        }
         
        decimal=decimal+num*pow(16,power);
        power++;
    }
     
    i=0,len=0;
    while(decimal!=0)
    {
        rem[i]=decimal%8;
        decimal=decimal/8;
        i++;
        len++;
    }
    printf("\nEquivalent Octal Number : ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d",rem[i]);
    }
     
}
 
