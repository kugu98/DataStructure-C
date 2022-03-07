#include <stdio.h>

int main() {
    printf("0302 자료구조\n");
    int data[10]={1,2,3,4,5,6,7,8,9,10};
    int sum=0,i;
    for(i=0;i<10;i++){
        sum+=data[i];
    }
    printf("합=%d \n",sum);

    //최대값 구하기
    int max=data[0];
    for(i=0;i<10;i++){
        if(max<data[i]){
            max=data[i];
        }
    }
    printf("최대값=%d\n",max);

    //최소값 구하기
    int min;
    for(i=0;i<10;i++){
        if(data[i]<data[i+1]){
            min=data[i];
        }
    }
    printf("최소값=%d\n",min);
    //홀수의 수 구하기
    int count=0;
    for(i=0;i<10;i++){
        if(data[i]%2==1){
            count++;
        }
    }
    printf("홀수의수는 %d\n",count);
    //짝수의 수 구하기
    int countt=0;
    for(i=0;i<10;i++){
        if(data[i]%2==0){
            countt++;
        }
    }
    printf("짝수의수는 %d\n",countt);
    return 0;
}
