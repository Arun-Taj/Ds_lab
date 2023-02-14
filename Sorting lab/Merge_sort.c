#include <stdio.h>

int a[]={10,11,7,3,12,1,13,7,3,7};
int n=sizeof(a)/4;

void merge(int lb,int mid,int ub){
    int i,j,k,b[n];
    i=lb;
    j=mid+1;
    k=lb;
    //loop till lb to ub...
    while(i<=mid && j<=ub){
        //checking which element is small..
        if(a[i]<=a[j]){
            b[k]=a[i];  //copy to b array..
            i++;k++;
        }else{
            b[k]=a[j];
            j++;k++;
        }
    }
    //Check Remaining
    if(i>mid){   //a[j] is remaining
        while(j<=ub){ 
            b[k]=a[j];
            j++;k++;
        }
    }else{
        while(i<=mid){
            b[k]=a[i];
            i++;k++;
        }
    }
    
    //exchanging elements
    for(k=lb;k<=ub;k++){
        a[k]=b[k];
    }
}

void mergeSort(int lb, int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergeSort(lb, mid);
        mergeSort(mid+1, ub);
        merge(lb,mid,ub);
    }
}

int main(){
    mergeSort(0,n-1);
    int i;
    for( i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
