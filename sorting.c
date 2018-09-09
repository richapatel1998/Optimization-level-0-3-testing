#include <stdio.h>

int main(){

int i;
int j; 
int size = 50;
int a[50];
int min_index;
int temp; 

for(i = 0; i < size - 1; i++){
	 min_index = i;
		for(j = i+1; j < size; j++){
			if(a[j] < a[min_index])
			{
				min_index= j;
			}
		}
		temp = a[min_index];
		a[min_index] = a[i];
		a[i] = temp;
}
return 0;
}