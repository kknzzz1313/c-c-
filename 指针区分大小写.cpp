#include<string.h>
#include<stdio.h>
	
int main() {
	char a[] = "C1o2M3p4U5t6E7r";
	char b[10] ="", c[10] ="",d[10]="", *q, *p, *r,*s;
	q = a;
	p = b;
	r = c;
	s = d;
	for (; *q != '\0'; q++)
	{
		if (*q >= 'A'&& *q <= 'Z') 
		{
			*p = *q;
			p++;
		}
		if(*q >= 'a'&& *q <= 'z')
		{
			*r = *q;
			r++;
		}
		if (*q >= '0'&& *q <= '9')
		{
			*s = *q;
			s++;
		}
	}
	printf("Ô­×Ö·û´® : %s\n",a);
	printf("×Ö·û´®ÖÐµÄ´óÐ´×ÖÄ¸ : %s\n",b);
	printf("×Ö·û´®ÖÐµÄÐ¡Ð´×ÖÄ¸: %s\n",c);
	printf("×Ö·û´®ÖÐµÄÊý×Ö: %s\n", d);
	return 0;
}