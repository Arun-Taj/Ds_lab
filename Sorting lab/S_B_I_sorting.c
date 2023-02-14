#include <stdio.h>

int arr[8]={10,3,4,7,11,13,23,14};
//int n=9;
int n=sizeof(arr)/4;
int i,j,temp;

void selection(){
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                //swapping
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void bubble(){
    // i--j    j---j+1
    for(i=0;i<n;i++){
        for(j=0;j<=n-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void insertion(){
    /*  
         1. compare, 2. shift  3. insert....
     */
    for(i=1;i<n;i++){
        temp=arr[i];
        for(j=i-1;temp<arr[j]&&j>=0;j--){
            //shifting of elements
            arr[j+1]=arr[j];
        }
        //insert
        arr[j+1]=temp;
    }
}

void display(){
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}

int main(){
	
    //selection();printf("For selection\n");
    //bubble();
    insertion();
    display();
    return 0;
}
