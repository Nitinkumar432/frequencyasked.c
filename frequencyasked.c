#include<stdio.h>
 
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int fq[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	for(int i=0;i<n;i++){
		fq[i]=arr[i];
		
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(fq[i]==fq[j]){
				for(int k=j;k<n-1;k++){
					fq[k]=fq[k+1];
					
				}
				n--;
				j--;
			}
		}
	}
	int u=0;
	for(int i=0;i<n;i++){
		if(fq[i]>0){
			u=u+1;
		}
		
	}
	printf("Sixe are %d\n",u);
	int df=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<u;i++){
		int cf=0;
		for(int j=0;j<df;j++){
			if(arr[j]==fq[i]){
				cf=cf+1;
			}
		}
		printf("%d:%d\n",fq[i],cf);
	}
	
	return 0;
	

	
}
