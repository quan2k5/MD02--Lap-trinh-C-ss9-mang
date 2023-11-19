#include<stdio.h>
#include<stdlib.h>
int main(){
	int m,n;
	printf("nhap cot doc cua mang");
	scanf("%d",&n);
	printf("\nhap hang ngang cua mang");
	scanf("%d",&m);
	int numbers[n][m];
	do{
		printf("\n1.nhap gia tri cac phan tu cua mang\n");
		printf("2.in ra gia tri cua cac phan tu trong mang theo ma tran\n");
		printf("3.in ra gia tri cac phan tu le  va tinh tong\n");
		printf("4.in ra cac phan tu nam tren  duong bien va tinh tich\n");
		printf("5.in ra cac phan tu nam tren duong cheo chinh va duong cheo phu va tinh tong\n");
		printf("6.in ra gia tri lon nhat va gia tri nho nhat trong mang\n");
		printf("7.tinh gia tri trung binh cua cac phan tu trong mang va tinh xem co bao nhieu gia tri phan tu bang gia tri trung binh\n");
		printf("8.in ra dong co tong gia tri lon nhat trong mang\n");
		printf("9.sap xep mang heo thu tu tang dan theo hang ngang\n");
		printf("10.thoat\n");
		printf("nhap vao lua chon cua ban");
		int choice,sum=0,min,max;
		int sum1=1;
		int sumNumber;
		int averageValue;
		int count=0;
		int maxRow;
		int sumRow;
		int indexMaxRow;
		int k;
		scanf("%d",&choice);
		switch(choice){
			case 1:
			for(int i=0;i<n;i++){
		     for(int j=0;j<m;j++){
			   printf("mang[%d][%d]",i,j);
			    scanf("%d",&numbers[i][j]);
			    }
		       }
			break;
			case 2:
			for(int i=0;i<n;i++){
		     for(int j=0;j<m;j++){
		     	printf("%d  ",numbers[i][j]);
		        }
		        printf("\n");
	        }  
			break;
			case 3:
				printf("cac so le co trong mang la ");
			for(int i=0;i<n;i++){
		     for(int j=0;j<m;j++){
		     	if(numbers[i][j]%2==1){
		     		printf("%d ",numbers[i][j]);
		     		sum=sum+numbers[i][j];
				 }
			  }
		    }
		    printf("\ntong cac so le la %d",sum);
		    break;
		    case 4:
		    	printf("cac phan tu tren duong bien la ");
		    	for(int i=0;i<n;i++){
		         for(int j=0;j<m;j++){
		         	if(i==0||i==n-1||j==0||j==m-1){
		         		printf("%d ",numbers[i][j]);
		         		sum1=sum1*numbers[i][j];
					 }
				}
			}
			printf("\n tich gia tri phan tu tren duong bien la %d",sum1);
			break;
			case 5:
				if(n==m){
    			sumNumber=0;
    		printf("cac phan tu nam tren duong cheo chinh:\n");
    		   for(int i=0;i<n;i++){
    		     	for(int j=0;j<m;j++){
    				    if(i==j){
    				    	printf("%d\t",numbers[i][j]);
    				    	sumNumber+=numbers[i][j];
    				    	
						}
				    }
			   }
			   printf("\ntong cac phan tu tren duong cheo chinh:%d\n",sumNumber);
			   	sumNumber=0;
    		printf("cac phan tu nam tren duong cheo phu:\n");
    		   for(int i=0;i<n;i++){
    		     	for(int j=0;j<m;j++){
    				    if(i+j==n-1){
    				    	printf("%d\t",numbers[i][j]);
    				    	sumNumber+=numbers[i][j];
    				    	
						}
				    }
			   }
			   printf("\ntong cac phan tu tren duong cheo phu:%d\n",sumNumber);
			}else{
				printf("day khong phai ma tran vuong, khong co duong cheo chinh va cheo phu");
			}
			break;
			case 6:
    		min=numbers[0][0];
    		max=numbers[0][0];
    		for(int i =0;i<n;i++){
    			for(int j =0;j<m;j++){
    		     	if(min>numbers[i][j]){
    		     		min=numbers[i][j];
					 }	
					 if(max<numbers[i][j]){
					 	max=numbers[i][j];
					 }
    		    }
          	}
          	printf("gia tri lon nhat:%d\n nho nhat:%d\n",max,min);
    		break;
    		case 7:
    			for(int i =0;i<n;i++){
    			 for(int j =0;j<m;j++){
    				sum=sum+numbers[i][j];
    			}
    		    }	
    			averageValue=sum/(m*n);
    			for(int i =0;i<n;i++){
    			 for(int j =0;j<m;j++){
    			 	if(numbers[i][j]==averageValue);
    			 	count++;
    			 }
    		   }
    	       printf(" co %d phan tu co gia tri bang gia tri trung binh cua mang",count);
    	       break;
    	    case 8:
    	  	maxRow=0;
    		for(int j =0;j<m;j++){
    			maxRow+=numbers[0][j];
    		}
    		for(int i =0;i<n;i++){
    			maxRow=0;
    			for(int j =0;j<m;j++){
    				sumRow+=numbers[i][j];
    			}
    			if(maxRow<sumRow){
    				maxRow=sumRow;
    				indexMaxRow=1;
				}
    	    }
    		printf("dong %d co tong cac phan tu lon nhat la:\n",indexMaxRow);
    		for(int j =0;j<m;j++){
    			printf("%d\t",numbers[indexMaxRow][j]);
    		}
			break;
			case 9:
				k=m*n;
			for(int i=0;i<k-1;i++){
				for(int j=i+1;j<k;j++){
					if(numbers[i/n][i%n]>numbers[j/m][j%m]){
      	          			int temp=numbers[i/n][i%n];
      	          			numbers[i/n][i%n]=numbers[j/m][j%m];
      	          			numbers[j/m][j%m]=temp;
      	          			}
				}
			}	
			break;
		case 10:
			exit(0);
			default:
				printf("vui long nhap lai tu 1 den 10");
			}
	}while(1==1);
}

