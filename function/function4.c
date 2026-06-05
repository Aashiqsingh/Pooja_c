#include<stdio.h>
void science(float per)
{

    printf("Pooja your admision confirm in science stream with per = %f",per);
}

void commerce(float per)
{
    printf("Pooja your admision confirm in commerce stream with per = %f",per);
}

void arts(float per)
{
    printf("Pooja your admision confirm in arts stream with per = %f",per);
}

void main()
{

    int math,eng,hindi;
    float percentage;

    printf("Enter math marks :");
    scanf("%d",&math);

    printf("Enter english marks :");
    scanf("%d",&eng);
    
    printf("Enter hindi marks :");
    scanf("%d",&hindi);

    percentage=(math+eng+hindi)/3;
    // printf("Your percentage is %f",percentage);

    if(percentage > 90)
    {
        science(percentage);
    }
    else if(percentage > 80)
    {
        commerce(percentage);
    }
    else if(percentage > 70)
    {
        arts(percentage);
    }
    else{
        printf("Pooja you are not admitted in any stream");
    }


}
