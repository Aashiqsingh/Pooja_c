#include<stdio.h>
float science(float per)
{

    return per;
}

float commerce(float per)
{
    return per;
}

float arts(float per)
{
    return per;
}

void main()
{

    int math,eng,hindi;
    // float ans;
    float percentage;

    printf("Enter math marks :");
    scanf("%d",&math);

    printf("Enter english marks :");
    scanf("%d",&eng);
    
    printf("Enter hindi marks :");
    scanf("%d",&hindi);

    percentage=(math+eng+hindi)/3;
    // printf("Your percentage is %f",percentage);

    float ans;
    if(percentage > 90)
    {
        
        ans = science(percentage);
        printf("Pooja your admision confirm in science stream with per = %f",ans);
    }
    else if(percentage > 80)
    {
        ans = commerce(percentage);
        printf("Pooja your admision confirm in commerce stream with per = %f",ans);
    }
    else if(percentage > 70)
    {
        ans = arts(percentage);
        printf("Pooja your admision confirm in arts stream with per = %f",ans);
    }
    else{
        printf("Pooja you are not admitted in any stream");
    }

    // printf("Your percentage is %f",ans);


}
