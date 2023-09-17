#include<iostream>
using namespace std;
// int main(){
// 	//no present early>no present later
// 	//swap both
// 	//ek bucket mein bubbles hain toh sabse bda bubble phele upr jayega hence sabse bda element apni correct position par aayega 
// 	int arr[100];
// 	int n;
// 	cin>>n;
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	for(int i=0;i<=n-2;i++){
// 		int cnt=0;
// 		for(int j=0;j<=n-2-i;j++){
// 			if(arr[j]>arr[j+1]){
// 				//swap
// 				//with another variable
// 				// int temp=arr[j];
// 				// arr[j]=arr[j+1];
// 				// arr[j+1]=temp;
// 				// without temp
// 				// arr[j]=arr[j]+arr[j+1];
// 				// arr[j+1]=arr[j]-arr[j+1];
// 				// arr[j]=arr[j]-arr[j+1];
// 				// one line
// 				// b=(a+b)-(a=b);
// 				// inbuild fun
// 				swap(arr[j],arr[j+1]);
// 				cnt++;
// 			}
// 		}
// 		if(cnt==0){
// 			break;
// 		}

// 	}

// 	for(int i=0;i<n;i++){
// 		cout<<arr[i]<<" ";

// 	}
// 	cout<<endl;
// 	return 0;
// }


//---------------------RECURSION------------------------------------
void bubble_sort(int *arr,int n,int i){
	//base case
	if(i==n-1){
		return;
	}
	//recursive case
	for(int j=0;j<=n-2-i;j++){
 		if(arr[j]>arr[j+1]){
 			swap(arr[j],arr[j+1]);
				
		}
 	}
 	bubble_sort(arr,n,i+1);
}
void bubble_sort_without_loop(int *arr,int n,int i,int j){
	//base case
	if(i==n-1){
		return;
	}
	if(j==n-1-i){//ek iteration ho gyi hogi
		bubble_sort_without_loop(arr,n,i+1,0);

	}
	else{
		if(arr[j]>arr[j+1]){
 			swap(arr[j],arr[j+1]);
				
		}
		bubble_sort_without_loop(arr,n,i,j+1);
	}

}
int main(){
	int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	bubble_sort(arr,n,0);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";

	}
	cout<<endl;
	bubble_sort_without_loop(arr,n,0,0);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";

	}
	cout<<endl;
	return 0;
}