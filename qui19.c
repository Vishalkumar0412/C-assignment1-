        /*Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F */
#include <stdio.h>
#include <conio.h>
void main()
{
    int phy, chem, math, bio, comp, sum, per, grade, i;
    printf("Enter marks of physics  :");
    for (i = 0; i >= 0; i++)
    {
        scanf("%d", &phy);
        if (phy >= 0 && phy <= 100)
        {
           break;
        }
        else
        {
            printf("invalid marks\n");
            printf("please enter valid marks for physics     :");
            continue;
        }
    }
    printf("Enter marks of chemistry  :");
    for (i = 0; i >= 0; i++)
    {
        scanf("%d", &chem);
        if (chem >= 0 && chem <= 100)
        {
            break;
        }
        else
        {
            printf("invailed marks\n");
            printf("please enter vailed marks for chemistry   :");
            continue;
        }
    }
    printf("Enter marks of mathmatics  :");
    for (i = 0; i >= 0; i++)
    {
        scanf("%d", &math);
        if (math >= 0 && math <= 100)
        {
            break;
        }
        else
        {
            printf("invailed marks\n");
            printf("please enter vailed marks for mathmatics   :");
           continue;
        }
    }
    printf("Enter marks of biology  :");
    for (i = 0; i >= 0; i++)
    {
        scanf("%d", &bio);
        if (bio >= 0 && bio <= 100)
        {
            break;
        }
        else
        {
            printf("invailed marks\n");
            printf("please enter vailed marks for biology   :");
           continue;
        }
    }
    printf("Enter marks of computer  :");
   for (i = 0; i >= 0; i++)
    {
        scanf("%d", &comp);
        if (comp >= 0 && comp <= 100)
        {
            break;
        }
        else
        {
            printf("invailed marks\n");
            printf("please enter vailed marks for computer   :");
           continue;
        }
    }
    printf("marks in physics = %d\n",phy);
    printf("marks in chemistry = %d\n",chem);
    printf("marks in biology = %d\n",bio);
    printf("marks in mathmatics = %d\n",math);
    printf("marks in computer = %d\n\n\n\n",comp);
    sum = phy + chem + math + bio + comp;
    printf("\n sum is %d\n\n",sum);
    per=sum/5;
    printf("\n percentage is %d\n\n\n",per);
    if(per>=90)
    {
        printf("congratulation !! you got A Grade");
    }
    else if(per>=80&&per<90)
    {
        printf("wow ! you got B Grade");
    }
    else if(per>=70&&per<80)
    {
        printf("you got C Grade");
    }
    else if(per>=60&&per<70)
    {
        printf("you got D Grade");
    }
    else if(per>=40&&per<60)
    {
        printf("you got E Grade");
    }
    else
    {
        printf("oh !! you got F grade And you are fail \n");
        printf("you have to focus on study");
    }
}
