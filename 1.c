#include<stdio.h>

int main(void)
{
    int data1,data2;
    char op;

    scanf("%d %d %c",&data1,&data2,&op);
    switch(op) {
    case'+':
        printf("%d\n",data1+data2);
        break;
    case'-':
        printf("%d\n",data1-data2);
        break;
    case'*':
        printf("%d\n",data1*data2);
        break;
    case'/':
        if(data2!=0) {
            if(data1%data2==0){
                printf("%d\n",data1/data2);
            }else{
                printf("%.2f\n",(float)data1/(float)data2);
            }
        } else {
            printf("error!");
        }
        break;
    default:
        printf("error");
        break;
    }

    return 0;
}
