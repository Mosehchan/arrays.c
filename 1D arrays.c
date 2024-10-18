//arrays in c - 1D arrays program
/*
author:moses
reg no:CT101/G/22682/24
date:18/10/2024
*/
#include<stdio.h>
int main(){
	int i;
	int prices[6] = {45,78,65,98,56,43};
	for(i=0;i<6;i++){
		printf("prices[%d] = %d \n",i, prices[i]);
	}
	return 0;
}