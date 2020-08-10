#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h> // to use the time function which was not in ur code;


int main()
{


        int prompt;
        do
        {
            printf(" enter 69 to exit from the program and press any other number to continue to the program"); // u can use anyother input or string to exit from the program;
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            scanf("%d",&prompt);
            fflush(stdin); // this is use to clear the input buffer.
            if(prompt==69)
            {
                printf(" good bye User, See you next time") ;
                fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
                return 0;

            }

            // Logic part goes here of ur program

            float a,b,sum,i,sub,mul,div,squareroot;
        char name[20];
        char input[20];
        printf("Enter you name");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
        gets(name);
        //scanf("%s",name);
        printf("\n Hello %s,I am a Simple Workbot developed by babayaga69.\n",name);
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
        printf("\nGive me commands like \n time\n add\n sub\n multiply\n divide\n squareroot\n game\n namedesign\n encryptdecryptpassword\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
        scanf("%s",input);

        if (strcmp(input, "time") == 0)
        {
            time_t t;
            time(&t);
            printf("\n current time is : %s",ctime(&t));
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine

        }
         else if (strcmp(input, "add") == 0)
        {
            printf("enter two numbers");
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            scanf("%f%f",&a,&b);
            sum=a+b;
            printf("the sum is %f",sum);
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
        }
        else if (strcmp(input, "subtract") == 0)
        {
            printf("enter two numbers");
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            scanf("%f%f",&a,&b);
            sub=a-b;
            printf("the subtraction is %f",sub);
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
        }
        else if (strcmp(input, "multiply") == 0)
        {
            printf("enter two numbers");
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            scanf("%f%f",&a,&b);
            mul=a*b;
            printf("the multiplication is %f",mul);
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
        }
        else if (strcmp(input, "divide") == 0)
        {
            printf("enter two numbers");
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            scanf("%f%f",&a,&b);
            div=a/b;
            printf("the division is %f",div);
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
        }
        else if (strcmp(input, "squareroot") == 0)
        {
            printf("enter the number");
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            scanf("%f",&a);
            squareroot=sqrt(a);
            printf("the squareroot is %f",squareroot);
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
        }
        else if (strcmp(input, "game") == 0)
        {
            int high = 100000;
            int low = 0;
            int guess = 1;
            int myguess;
            char reply;

            printf("The Game of 20 Questions\n");
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            printf("Think of a number between 0 and %d\n", high);
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine

            while (high > low)
            {
            myguess = (high + low) / 2;
                printf("Guess #%d: Is your number higher than %d? (y/n)",
               guess++, myguess, high, low);
                fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
                scanf(" %c",&reply);

                if (reply == 'y')
                low = myguess = myguess + 1;
            else
                high = myguess;
            }
            printf("Your number is %d!\n", myguess);
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
        }
        else if (strcmp(input, "namedesign") == 0)
        {
        char r[25]; int i,l;
        printf("Enter your name\n");
        scanf("%s",r);
        l=strlen(r);
        for(i=0;i<l;i++)
        {
            if(r[i]=='a'||*(r+i)=='A')
            printf(" AAAAAA \n A    A\n AAAAAA\n A    A\n A    A\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='b'||*(r+i)=='B')
            printf(" BBBBBB\n B    B\n BBBBB\n B    B\n BBBBBB\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='c'||*(r+i)=='C')
            printf(" CCCCCC\n C\n C\n C\n CCCCCC\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='d'||*(r+i)=='D')
            printf(" DDDDDD\n D    D\n D    D\n D    D\n DDDDDD\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='e'||*(r+i)=='E')
            printf(" EEEEEE\n E\n EEEEEE\n E\n EEEEEE\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='f'||*(r+i)=='F')
            printf(" FFFFFF\n F\n FFFFF\n F\n F\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='g'||*(r+i)=='G')
            printf(" GGGGGG\n G\n G  GGG\n G    G\n GGGGGG\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='h'||*(r+i)=='H')
            printf(" H    H\n H    H\n HHHHHH\n H    H\n H    H\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='i'||*(r+i)=='I')
            printf(" IIIIII\n   II  \n   II  \n   II  \n IIIIII\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='j'||*(r+i)=='J')
            printf(" JJJJJJ\n   JJ  \n   JJ  \n   JJ  \n JJJ  \n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='k'||*(r+i)=='K')
            printf(" K   K\n K  K\n KKK\n K  K\n K   K\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='l'||*(r+i)=='L')
            printf(" L\n L\n L\n L\n LLLLLL\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='m'||*(r+i)=='M')
            printf(" M     M\n M M M M\n M  M  M\n M     M\n M     M\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
           if(*(r+i)=='n'||*(r+i)=='N')
           printf(" NN    N\n N N   N\n N  N  N\n N   N N\n N    NN\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine


            if(*(r+i)=='o'||*(r+i)=='O')
            printf("  OOOO \n O    O\n O    O\n O    O\n  OOOO \n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='p'||*(r+i)=='P')
            printf(" PPPPPP\n P    P\n PPPPPP\n P\n P\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='q'||*(r+i)=='Q')
            printf("  QQQQ \n Q    Q\n Q  Q Q\n Q   QQ\n  QQQ Q \n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='r'||*(r+i)=='R')
            printf(" RRRRRR\n R    R\n RRRRRR\n RR    \n R  R  \n R    R\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='s'||*(r+i)=='S')
            printf(" SSSSSS\n S\n SSSSSS\n      S\n SSSSSS\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='t'||*(r+i)=='T')
            printf(" TTTTTT\n   TT  \n   TT  \n   TT\n   TT\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='u'||*(r+i)=='U')
            printf(" U    U\n U    U\n U    U\n U    U\n UUUUUU\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='v'||*(r+i)=='V')
            printf(" V     V\n  V   V\n   V V\n    V\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='w'||*(r+i)=='W')
            printf(" W   W   W\n W   W   W\n W   W   W\n W   W   W\n WWWWWWWWW\n \n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='x'||*(r+i)=='X')
            printf(" X    X\n  X  X \n   XX  \n  X  X \n X    X\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='y'||*(r+i)=='Y')
            printf(" Y    Y\n Y    Y\n YYYYYY\n      Y\n YYYYYY\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)=='z'||*(r+i)=='Z')
            printf(" ZZZZZZ\n     Z\n    Z \n   Z\n ZZZZZZ\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
            if(*(r+i)==' ')
            printf("\n\n");
        fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine

        }
        }
        else if (strcmp(input, "encryptdecryptpassword") == 0)
            {
           int i, x,passwd;
           char str[20];
           printf("\nPlease enter a password from 8 to 20 characters:\t");
           fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
           scanf("%s",str);
           printf("\nPlease choose following options:\n");
           fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
           printf("1 = Encrypt the password.\n");
           fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
           printf("2 = Decrypt the password.\n");
           fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
           scanf("%d", &x);
           switch(x)
           {
           case 1:
              for(i = 0; (i < 20 && str[i] != '\0'); i++)
                str[i] = str[i] + 3;
                str[i] = str[i] + 25;
                str[i] = str[i] + 3;
             printf("\nEncrypted password: %s\n", str);
             fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
              break;

           case 2:

               printf("enter the password first");
               fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
               scanf("%d",&passwd);
               switch(passwd){
           case 69:

               for(i = 0; (i < 20 && str[i] != '\0'); i++)
                str[i] = str[i] - 3;
                str[i] = str[i] - 25;
                str[i] = str[i] - 3;
                printf("\nDecrypted password: %s\n", str);
                fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
              break;
           default:
            printf("sorry,you have no access");
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
        }}}


        else{
            printf("Sorry, i am currently not designed to understand what you typed,please choose from the commands above");
            fflush(stdout); // always use  fflush stdout after the printf otherwise it not gonna work in some compiler like it didn;t work in mine
        }



        }while(prompt!=123);



}

//Tips in the End
/*

1. Do while is the best technique u can use for menu driven program. It executes atlease once;
2. U can prefer other loops to like FOr and While
3. Always remember to clear the input and output buffer after printing and taking the input;
4. To clear the Input Buffer use fflush(stdin)
5. To clear the outpur Buffer use fflush(stdout)
6. I am using gcc compiler so time function didn;t work in mine. So i use <time.h>
*/

/* the same program can be use using while loop like this
int prompt;
printf(" enter 123 to ecit and any other number to continue to the program")
scanf("%d",&prompt);
while(prompt!=123)
{
    //logic of ur program goes her

    //once your logic end;

    printf(" enter 123 to ecit and any other number to continue to the program")
scanf("%d",&prompt);
}






*/
