#include<stdio.h>
int main(){
        int arr[100], n, i, key;
        int low=0, high, mid,found=0;
        printf("Enter number of elements: ");
        scanf("%d",&n);
        printf("enter sorted elements: ");
        for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
        }
        printf("enter element to search: ");
        scanf("%d", &key);
        high = n-1;
        while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==key){
        printf("Element found at position %d", mid+1);
        found=1;
        break;
        }
        else if(arr[mid]<key){
        low = mid+1;
        }
        else{
        high = mid-1;
        }
        }
        if(found==0){
        printf("Element not found");
        }
return 0;
}