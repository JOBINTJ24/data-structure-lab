#include<stdio.h>
void main(){

int a,b,temp;
printf("Enter the size of 1st arry\n");
scanf("%d",&a);
printf("enter the size of 2nd array\n");
scanf("%d",&b);
int arr1[100],arr2[100],c[200];
printf("enter the elements of the 1st array\n");
for(int i=0;i<a;i++){
    scanf("%d",&arr1[i]);
    c[i]=arr1[i];

    }
printf("enter the elements of the 2nd array\n");
for(int i=0;i<b;i++){
    scanf("%d",&arr2[i]);

    }

for(int j=0;j<b;j++){
    c[j+a]=arr2[j];
    }
printf("merged array is\n");
for(int i=0;i<a+b;i++){
printf("%d\t",c[i]);}

printf("\nsorted array is\n");


for(int j=0;j<a+b;j++){
    for(int k=0;k<(a+b)-1;k++){
        if(c[k]>c[k+1]){
            temp=c[k+1];
            c[k+1]=c[k];
            c[k]=temp;
        }
        }
}
for(int i=0;i<a+b;i++){
printf("%d\t",c[i]);}


}
