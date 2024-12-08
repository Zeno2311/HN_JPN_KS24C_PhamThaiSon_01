#include <stdio.h>
int main(){
int chonice,kits,vitr;
int arr[50];
do{
	printf("\n\t--MENU--\n");
	printf("1.Nhap so luong va gia tri cho cac phan tu.\n");
	printf("2.In mang arr[0]=...,arr[1]=....,...\n");
	printf("3.Dem so luong so hoan hao.\n");
	printf("4.Dem do luong so nguyen to.\n");
	printf("5.Tim gia tri lon thu hai.\n");
	printf("6.Tim gia tri nho thu hai.\n");
	printf("7.Them phan tu tai vi tri.\n");
	printf("8.Xoa phan tu tai vi tri.\n");
	printf("9.Sap xep mang tang dan.\n");
	printf("10.Sap xep mang giam dan .\n");
	printf("11.Tim kiem phan tu.\n");
	printf("12.Xoa phan tu trung lap.\n");
	printf("13.Sap xep vao in ra so chan truoc, so le sau.\n");
	printf("14.Dao nguoc mang.\n");
	printf("15.Thoat.\n");
	
	printf("\nLua chon cua ban : ");
	scanf("%d",&chonice);
	
	switch(chonice){
		case 1:
			int size;
				printf("Ban muon nhap bao nhieu phan tu : ");
				scanf("%d",&size);
				for(int i=0;i<size;i++){
					printf("Gia tri [%d] = ",i);
					scanf("%d",&arr[i]);
				}
				break;
		case 2:
			if(size>0){
				printf("In ra mang : ");
				for(int i=0;i<size;i++){
					printf("\tarr[%d]=%3d",i,arr[i]);
				}	
			}else{
				printf("Khong ton tai mang !!!!");
			}
			printf("\n");
			break;
		case 3:
			if(size>0){
				int check = 0;
				int sum;
				for(int i=0;i<size;i++){
					for(int j=1;j<=arr[i]/2;j++){
						if(arr[i]%j==0){
							sum+=j;
						}
					}
					if(sum==arr[i]){
					check++;
				}
				}
				printf("So luong cac so hoan hao co trong mang la : %d ",check);
			}else{
				printf("Khong ton tai mang !!!!");
			}
			printf("\n");
			break;
		case 4:
			if(size>0){
				int numbercheck=0;
				for(int i=0;i<size;i++){
					numbercheck++;
					if(arr[i]==2){
						numbercheck--;
					}
					for(int j=2;j*j<arr[i];j++){
						if(arr[i]%j==0){
							numbercheck--;
							break;
						}
					}
				}
				printf("So luong cac so nguyen to co trong mang la %d ",numbercheck);
			}else{
				printf("Khong ton tai mang !!!!");
			}
			printf("\n");
			break;
		case 5:
			if(size>0){
				int max=arr[0],max_2=arr[1];
				if(arr[0]<arr[1]){
					max=arr[1];
					max_2=arr[0];
				}
				for(int i=2;i<size;i++){
					if(arr[i]>max){
						max_2=max;
						max=arr[i];
					}else if(arr[i]<max_2 && arr[i!=max]){
						max_2=arr[i];
					}
				}
				printf("So lon thu 2 trong mang la %d",max_2);
			}else{
				printf("Khong ton tai mang !!!!");
			}
			printf("\n");
			break;
		case 6:
			if(size>0){
				int min = arr[0],min_2=arr[1];
				if(arr[0]>arr[1]){
					min=arr[1];
					min_2=arr[0];
				}
				for(int i=2;i<size;i++){
					if(arr[i]<min){
						min_2=min;
						min=arr[i];
					}else if(arr[i]<min_2 && arr[i]!=min){
						min_2=arr[i];
					}
				}
				printf("So nho thu 2 trong la %d",min_2);
			}else{
				printf("Khong ton tai mang !!!!");
			}
			printf("\n");
			break;
		case 7:
			if(size>0){
				printf("Ban muon them gia tri : ");
				scanf("%d",&kits);
				printf("Ban muon them gia tri do vao vi tri nao trong mang : ");
				scanf("%d",&vitr);
				for(int i=size;i>vitr;i--){
					arr[i]=arr[i-1];
				}
				arr[vitr]=kits;
				printf("Mang sau khi them phan tu : ");
				for(int i=0;i<size+1;i++){
					printf("\tarr[%d]=%d",i,arr[i]);
				}
			}else{
				printf("Khong ton tai mang !!!!");
			}
			printf("\n");
			break;
		case 8:
			if(size>0){
				printf("Ban muon xoa phan tu o vi tri thu may trong mang ( 0 -> %d ) : ",size);
				scanf("%d",&vitr);
				for(int i=vitr;i<size;i++){
					arr[i]=arr[i+1];
				}
				printf("Mang sau khi xoa phan tu theo yeu cau la : ");
				for(int i=0;i<size-1;i++){
					printf("\tarr[%d]=%d",i,arr[i]);
				}
			}else{
				printf("Khong ton tai mang !!!!");
			}
			printf("\n");
			break;
		case 9:
			if(size>0){
				for(int i=0;i<size-1;i++){
					for(int j=0;j<size-i-1;j++){
						if(arr[j]>arr[j+1]){
							int temp = arr[j];
							arr[j] = arr[j+1];
							arr[j+1] = temp;
						}	
					}
				}
				printf("Mang sau khi duoc sap xep theo thu tu tang dan : ");
				for(int i=0;i<size;i++){
					printf("\tarr[%d]=%d",i,arr[i]);
				}
			}else{
				printf("Khong ton tai mang !!!!");
			}
			printf("\n");
			break;
		case 10:
			if(size>0){
				for(int i=0;i<size-1;i++){
					for(int j=0;j<size-i-1;j++){
						if(arr[i]<arr[j+1]){
							int temp2 = arr[i];
							arr[i] = arr[j+1];
							arr[j+1] = temp2;
						}
					}
				}
				printf("Mang sau khi duoc sap xep theo thu tu giam dan : ");
				for(int i=0;i<size;i++){
					printf("\tarr[%d]=%d",i,arr[i]);
				}
			}else{
				printf("Khong ton tai mang !!!!");
			}
			printf("\n");
			break;	
		case 11:
			if(size>0){
				int seack=0;
				printf("Ban muon tim gia tri phan tu  nao trong mang : ");
				scanf("%d",&kits);
				for(int i=0;i<size;i++){
					if(arr[i]=kits){
						seack=i;
					}
				}
				if(seack>0){
					printf("gia tri phan tu ban muon tim o vi tri : %d",seack);
				}else{
					printf("Khong ton tai gia tri trong mang ");
				}
			}else{
				printf("Khong ton tai mang !!!!");
			}
			printf("\n");
			break;
		case 13:
			if(size>0){
				printf("Mang sau khi sap xep theo yeu cau : ");
				for(int i=0;i<size;i++){
					if(arr[i]%2==0){
						printf("%3d",arr[i]);
						}
					}
				for(int i=0;i<size;i++){
					if(arr[i]%2!=0){
						printf("%3d",arr[i]);
					}
				}
			}else{
				printf("Khong ton tai mang !!!!");
			}
			printf("\n");
			break;
		case 14:
			if(size>0){
				for(int i=size-1;i>=0;i--){
					printf("%3d",arr[i]);
				}
			}else{
				printf("Khong ton tai mang !!!!");
			}
			printf("\n");
			break;
		case 15:
			printf("Thoat!!!");
			break;																																					
	}
}while(chonice!=15);
}

