
#include "func.h"
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