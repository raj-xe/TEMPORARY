#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(){
	char ip[40],s[40],ip2[40];
	int z = 0,c = 0,k = 0, l = 0,i = 0, j =0, start = 1, end = 3;
	char x;
	int flag = 0;
	clrscr();
	scanf("%s",ip);
	l = strlen(ip);
	ip2[0] = '\0';
	s[0] = '\0';
	for(k = 0; k < l; k++){
		x = ip[k];
		if(k == l - 1){
			flag = 1;
		}

		if(x == '.'){
			if(z == 0){
				ip2[c] = '0';
				c++;
			}
			z = 0;
			ip2[c] = '.';
			c++;
			flag = 0;
		}
		else if(x == '0' && flag == 0){

		}
		else {
			flag = 1;
			s[z] = x;
			z++;
			ip2[c] = x;
			c++;

		}


	}

	ip2[c] = '\0';

	printf("%s",ip2);
	getch();
	return 0;
}
