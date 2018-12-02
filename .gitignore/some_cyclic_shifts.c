#include <stdio.h>

//Несколько циклических сдвигов
int main() {

	int n = 5;
	char a[5] ="12345";
	int i;
	int j;
	int c=a[n-1];

  for(j=0; j<n; j++) {
	  	c=a[n-1];
    for (i=n-1; i>0; i--) a[i]=a[i-1];
		a[0]=c;
		a[n]=0; //символ конца строки
    printf("%s\n", a);
	}

}
