#include<stdio.h>
#include<stdlib.h>
int main(){
	int numbers[100],currentIndex=0;
	do{
		printf("\n1.nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2.in ra gia ti cac phan tu dang quan li\n");
		printf("3.in ra gia tri cac phan tu chan va tnh tong\n");
		printf("4.in ra gia tri lon nnhat va nhp nhat tong mang\n");
		printf("5.in ra cac phan tu  la so nguyen to trong mang va tinh tong\n");
		printf("6.nhap vao 1 so va thong ke trong mang co bao nhieu phan tu nhu vay\n");
		printf("7.them phan tu vao vi tri chi dinh\n");
		printf("8.sap xep mang theo thu tu tang dan\n");
		printf("9.thoat\n");
		printf("nhap lua chon cua ban\n");
		int choice,n;
		int sum=0;
		int findNumber;
		int max,min;
		int count=0;
		int addIndex,addValue;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("nhap so phan tu n vao mang\n");
				scanf("%d",&n);
				for (int i=0;i<n;i++){
					printf("mang[%d]=",currentIndex);
					scanf("%d",&numbers[currentIndex]);
					currentIndex++;
				}
				break;
			case 2:
				for(int i=0;i<currentIndex;i++){
					printf("%d ",numbers[i]);
				}
				break;
			case 3:
					for(int i=0;i<currentIndex;i++){
						if(numbers[i]%2==0){
					printf("%d ",numbers[i]);
					sum=sum+numbers[i];
				     }
				}
				printf("\ntong cac so chan la %d",sum);
				break;
			case 4:
				max=numbers[0];
				min=numbers[0];
					for(int i=1;i<currentIndex;i++){
					if(max<numbers[i]){
						max=numbers[i];
					}
					if(min>numbers[i]){
						min=numbers[i];
					}
				}
				printf("gia tri lon nhat la %d va gia tri nho nhat la %d",max,min);
				break;
			case 5:
				printf("cac so nguyen to trong mang la ");
					for(int i=0;i<currentIndex;i++){
						for(int j=numbers[i];j>0;j--){
							if(numbers[i]%j==0){
								count++;
							}
						}if(count==2){
							printf("%d ",numbers[i]);
							sum=sum+numbers[i];
						}
						count=0;
					}
					printf("\ntong cac so nguyen to la %d",sum);
					break;
			case 6:
				printf("nhap 1 so bat ky");
				scanf("%d",&findNumber);
				for(int i=0;i<currentIndex;i++){
					if(numbers[i]==findNumber){
						count=count+1;
					}
				}
				printf("co %d phan tu bang voi findNumber",count);
			break;
			case 7:
			printf("\nnhap vi tri can them vao ",&addIndex);
			scanf("%d",&addIndex);
			printf("\nnhap gia tri can chen vao",addValue);
			scanf("%d",&addValue);
			if(addIndex>=0 && addIndex<100){
					if(addIndex==currentIndex){
						numbers[currentIndex]=addValue;
						currentIndex++;
					}else if(addIndex>currentIndex){
						for(int i=currentIndex;i<addIndex;i++){
							numbers[i]=0;
						}
						currentIndex=addIndex+1;
						numbers[addIndex]=addValue;	
					}else{
						for(int i=currentIndex;i>=addIndex;i--){
							numbers[i+1]=numbers[i];
					    }
					    numbers[addIndex]=addValue;
					    currentIndex++;
					}
				}else{
					printf("vi tri chen vao khong hop le");
				}
					break;
				case 8:
					for(int i=0; i<currentIndex-1;i++){
						for(int j=i+1;j<currentIndex;j++){
							if(numbers[i]>numbers[j]){
								int temp=numbers[i];
								numbers[i]=numbers[j];
								numbers[j]=temp;
							}
						}
					}
				break;
				case 9:
					exit(0);
				default:
					printf("vui long nhap lai tu1 den 9");
		}	
	}while(1==1);
}
