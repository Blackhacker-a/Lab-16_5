 #include<stdio.h>
 int main(){
 	int ary[5];
 	for(int i=0;i<5;i++){
 		printf("Nhap gia tri thu %d: ",i);
 		scanf("%d",&ary[i]); 		
 	}
 	
 	int max=ary[0];
 	for(int i=0;i<5;i++){
 		if(ary[i]>max){
 			max=ary[i];
 			}
 	    }
 	printf("Gia tri lon nhat cua mang la %d ",max);    
 	}
 	
 	
 	
 	
 	
 	
