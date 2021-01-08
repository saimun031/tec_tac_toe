#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>

struct info{
     char name[50];
     char id[15];
     float mith,ct1,ct2,ct3,assignment1,assignment2,assignment3,Final,mid;
     };
float high(float a,float b, float c,float d,float e)    //highest...... Topper.....
{
    float p,q,ct_ave;
     if(a>=b && a>=c && a>=d && a>=e)
    {
        p=a;
    }
    if(b>=a && b>=c && b>=d && b>=e)
    {
        p=b;
    }
    if(c>=b && c>=a && c>=d && c>=e)
    {
        p=c;
    }
    if(d>=a && d>=b && d>=c && d>=e)
    {
        p=d;
    }
    if(e>=a && e>=b && e>=c && e>=d)
    {
        p=e;
    }
    return p;
}

float CT(float a,float b, float c)         //highest and second highest........
{
    float p,q,ct_ave;
     if(a>=b && a>=c)
    {
        p=a;
    }
    if(b>=a && b>=c)
    {
        p=b;
    }
    if(c>=b && c>=a)
    {
        p=c;
    }


    if((a>=b && a<=c) || (a>=c && a<=b))
    {
        q=a;
    }
    if((b>=a && b<=c) || (b>=c && b<=a))
    {
        q=b;
    }
    if((c>=b && c<a) || (c>=a && c<=b))
    {
        q=c;
    }


    ct_ave=(p+q)/2;
    return ct_ave;
}

int main()
{
    //part 1
    int i,j,press,n,p,q,r,s,t,x,y,z,u,v,input_1,input_2;
    float average_assignment,ct_mark,total_marks,h,hight,weight,final_hight,final_weight,bmi;
    char a[15];
    struct info student[5];      //structure student name hardcore........
    {
        strcpy(student[0].name,"Raihan Chowdhury");
        strcpy(student[0].id,"011161016");

        strcpy(student[1].name,"Rahama Trisha");
        strcpy(student[1].id,"011161017");

        strcpy(student[2].name,"Lubaba Sulsabil");
        strcpy(student[2].id,"011161018");

        strcpy(student[3].name,"Mahir Shahriar");
        strcpy(student[3].id,"011161024");

        strcpy(student[4].name,"Romana Kabir Piu");
        strcpy(student[4].id,"011161206");

    };


    printf("For calculating student marks press 1\nFor calculating students BMI press 2\nWaiting for your decision=");
    scanf("%d",&press);

    if(press==1)
    {
    printf("How many student information you want to calculate =");
    scanf("%d",&n);
    fflush(stdin);
    printf("\n");

        for(j=1;j<=n;j++)
        {
        printf("Enter id= \n");
        gets(a);
        fflush(stdin);
        printf("\n");
        for(i=0;i<=4;i++)
        {
            if(strcmp(a,student[i].id)==0)    //comparing id.....
            {
                puts(student[i].name);
                puts(student[i].id);
                printf("\n");

                printf("Enter math CT1 marks=");   //scaning marks......
                scanf("%f",&student[i].ct1);
                    fflush(stdin);
                printf("Enter math CT2 marks=");
                scanf("%f",&student[i].ct2);
                  fflush(stdin);
                printf("Enter math CT3 marks=");
                scanf("%f",&student[i].ct3);
                    fflush(stdin);
                    printf("\n");
                printf("Enter math assignment1 marks=");
                scanf("%f",&student[i].assignment1);
                  fflush(stdin);
                printf("Enter math assignment2 marks=");
                scanf("%f",&student[i].assignment2);
                      fflush(stdin);
                printf("Enter math assignment3 marks=");
                scanf("%f",&student[i].assignment3);
                        fflush(stdin);
                        printf("\n");
                printf("Enter math Mid marks=");
                scanf("%f",&student[i].mid);
                  fflush(stdin);
                  printf("\n");
                printf("Enter math Final marks=");
                scanf("%f",&student[i].Final);
                  fflush(stdin);
                   printf("\n");

            printf("\n\n");

                ct_mark=CT(student[i].ct1,student[i].ct2,student[i].ct3);
                printf("Best 2 CT marks average is = %0.2f\n",ct_mark);

                average_assignment=(student[i].assignment1+student[i].assignment2+student[i].assignment3)/3;
                printf("Assignment average mark is = %.2f\n",average_assignment);

                printf("\n\n");
                total_marks=student[i].mid+student[i].Final+ct_mark+average_assignment;
                printf("Total marks =%.2f\n",total_marks);



                if(j==1)
                {
                    p=total_marks;
                    x=i;
                }

                if(j==2)
                {
                    q=total_marks;
                    y=i;
                }

                if(j==3)
                {
                    r=total_marks;
                    z=i;
                }

                if(j==4)
                {
                    s=total_marks;
                    u=i;
                }

                if(j==5)
                {
                    t=total_marks;
                    v=i;
                }

            }

        }

        printf("\n");
        }

        if(n==1)
        {
             float q=0,r=0,s=0,t=0;
             h=high(p,q,r,s,t);
        }
        if(n==2)
        {
             float r=0,s=0,t=0;
             h=high(p,q,r,s,t);
        }
        if(n==3)
        {
             float s=0,t=0;
             h=high(p,q,r,s,t);
        }
        if(n==4)
        {
             float t=0;
             h=high(p,q,r,s,t);
        }
         if(n==4)
        {
             float num=n;
             h=high(p,q,r,s,t);
        }
        printf("\n");

        printf("Hight marks=%f\n",h);

        if(h==p)
        {
            printf("Topper is ");
            puts(student[x].name);
            printf("\nCongratulation.......  ");
            puts(student[x].name);
        }
        if(h==q)
        {
            printf("Topper is ");
            puts(student[y].name);
            printf("\nCongratulation....... ");
            puts(student[y].name);
        }
        if(h==r)
        {
            printf("Topper is ");
            puts(student[z].name);
            printf("\nCongratulation....... ");
            puts(student[z].name);
        }
        if(h==s)
        {
            printf("Topper is ");
            puts(student[u].name);
            printf("\nCongratulation....... ");
            puts(student[u].name);
        }
        if(h==t)
        {
            printf("Topper is ");
            puts(student[v].name);
            printf("\nCongratulation....... ");
            puts(student[v].name);
        }

    }
 if(press==2)
 {

         printf("\n\nWhat Type of hight you want to put\nIf in foot put 1\nIf inch put 2\nIf miter put 3\nIf CM put 4\n=");
         scanf("%d",&input_1);

          printf("\nput hight=");
             scanf("%f",&hight);


         if(input_1==1)
            {
                final_hight=hight*0.3048;
            }
         if(input_1==2)
            {
                final_hight=hight*0.0254;
            }

        if(input_1==3)
            {
                final_hight=hight*1;
            }

        if(input_1==4)
            {
                final_hight=hight*100;
            }

        printf("\n\nWhat Type of weight you want to put\nIf it in Pound put 1\nIf it in Gram put 2\nIf it in Ounce put 3\nIf it in KG put 4\n=");
         scanf("%d",&input_2);
          printf("\nput weight = ");
             scanf("%f",&weight);


         switch(input_2)
         {
             case 1:
                 final_weight=weight*0.453592;
                 break;
             case 2:
                 final_weight=weight*0.001;
                 break;
             case 3:
                 final_weight=weight*0.0283495;
                 break;
             case 4:
                 final_weight=weight*1;
                 break;
             default:
                printf("\nWrong input for weight\n");
                break;


         }

            bmi=final_weight/pow(final_hight,2);

            printf("\nThe result of Body Mass Index(BMI) is=%.2f\n\n",bmi);

        if(bmi<18.50)
        {
            printf("Under Weight\n");
        }
        else if(bmi>=18.50 && bmi<=22.99)
        {
            printf("Normal\n");
        }
        else if(bmi>=23.00 && bmi<=30.00)
        {
            printf("Over Weight.You are in pre-Obses... be Alert!.......\n");
        }
        else
        {
            printf("OBSES.......\n");
        }
 }
 getch();
 return 0;

}
