#include<stdio.h>
#include<stdlib.h>
void main(){
	int *ptr,num,i;
	scanf("%d",&num);
	ptr=(int*)malloc(num * sizeof(int));
	for(i=0;i<num;++i)
		scanf("%d",ptr+i);
	for(i=0;i<num;++i)
		printf("%d   ",*(ptr+i));
		free(ptr);
}
