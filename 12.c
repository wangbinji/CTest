#include <stdio.h>

void SelectionSort(int *arr,int size){
	int i,j,k,temp;
	for(i = 0; i < size-1; i ++){
		k = i;
		for(j = i+1;j < size;j ++){
			if(arr[j] < arr[k]){
				k = j;
			}
		}

		temp = arr[k];
		arr[k] = arr[i];
		arr[i] = temp;
	}
}


void InsertionSort(int *arr,int size){
	int i, j , k, temp;
	for(i = 0; i < size; i ++){
		if(arr[i] < arr[i-1]){
			temp = arr[i];
			for(j = i -1;j>=0 && arr[j] > temp;j--){
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
	}
}

void BubbleSort(int *arr,int size){
	int i,j,temp;
	for(i = 0; i < size-1; i ++){
		for(j = 0; j < size-i-1; j++){
			if(arr[j] > arr[j + 1])
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
		}
	}
}


void print(int *arr, int size){
	printf("排序结果为:\n");
	for(int i = 0; i < size; i++){
		printf("%d\n",arr[i]);
	}

	printf("\n");
}




int main(){
	printf("************************************************************************************\n");
	printf("*                             欢迎来到我的排序程序                                 *\n");
	printf("*                             请选择您想采用的排序方式                             *\n");
	printf("*                             1.冒泡排序                                           *\n");
	printf("*                             2.选择排序                                           *\n");
	printf("*                             3.插入排序                                           *\n");
	printf("*                             Authors:BinJi Wang                                   *\n");	
	printf("************************************************************************************\n");
	
	int selectIndex;
	printf("请输入您的选择:\n");
	scanf("%d",&selectIndex);
	printf("您的输入为:%d\n",selectIndex);
	if(selectIndex == 1){
		printf("您想采用的排序方式为冒泡排序\n");
	}else if(selectIndex == 2){
	        printf("您想采用的排序方式为选择排序\n");
	}else{
		printf("您想采用的排序方式为插入排序\n");
	}
	
	printf("下面请输入10个数字\n");
	int i,a[10];
	for(i = 0; i < 10; i++){
		scanf("%d",&a[i]);
	}

	int size = sizeof(a) / sizeof(a[0]);
	if(selectIndex == 1){
		BubbleSort(a,size);
	}else if(selectIndex == 2){
              SelectionSort(a,size);
	}else{
	      InsertionSort(a,size);
	}
	print(a,size);
	printf("你本次服务收费10元，请用支付宝转账给18690961350，再会!\n");

}
