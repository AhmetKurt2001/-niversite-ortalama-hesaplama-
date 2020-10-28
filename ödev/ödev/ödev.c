#include<stdio.h>


int main() {


	int vize; 
	int final;
    float ortalama;



	printf("---notunuzu giriniz---\n");


	printf("---vize notunzu giriniz---\n");
	scanf_s("%d", &vize);

	printf("---final notunuzu giriniz---\n");
	scanf_s("%d", &final);


	
	ortalama = vize * 0.3 + final * 0.7;
	printf("---ortalamaniz---\n%.3f",ortalama);



















		return 0;
}



