#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>
#include <time.h>
int compare(int a , int b)
{
	if(a==b)
		return 0;
	return a > b ? 1 : -1;
}
int factorial(unsigned int n)
{
	if(n==1 || n==0 )
	{
		return 1;
	}

	int res_factorial=1;

	for(int i=n;i>1;i--)
	{
		res_factorial*=i;
	}

	return res_factorial;
}
int64_t power(int base,int exponent)
{
	if(exponent==0)
		return 1;

	if(exponent==1)
		return base;

	if(base==1)
		return 1;


	int64_t recursive_pow=power(base,exponent/2);

	if(exponent%2==0)
		return recursive_pow*recursive_pow;

	else
		return recursive_pow*recursive_pow*base;
}
static void TOH(int n,char a,char b,char c)
{
	if(n==1)
	{
		printf("%c ---> %c\n",a,c);
		
		return;
	}
	TOH(n-1,a,c,b);
	printf("%c ---> %c\n",a,c);
	TOH(n-1,b,a,c);
}

void tower_of_hanoi(int no_of_disks )
{
	TOH(no_of_disks,'A','B','C');
}

int gcd(int a , int b)
{
	
	if(b==0)
		return a;
	else 
		return gcd(b,a%b);
}
int permute(int n ,int r)
{
	if(r>n)
		return -1;
	int res_permute=1;
	int j=n;
	while(j!=n-r)
	{
		res_permute*=j;
		j--;
	}
	return res_permute;
}
int combination(int n,int r)
{
	if(r > n-r)
		r=n-r;
	int k=permute(n,r);
	if(k==-1)
		return -1;

	return k/factorial(r) ;
}
int lcm(int a,int b)
{
	return (a*b) / gcd(a,b);
}
int max(int *a,int n)
{
	int index=0;
	for(int h=1;h<n;h++)
	{
		if(a[index] < a[h])
			index=h;
	}
	return index;
}
int min(int *a,int n)
{
	int index=0;
	for(int h=1;h<n;h++)
	{
		if(a[index] > a[h])
			index=h;
	}
	return index;
}
int fibonacci(int n)
{
	 int fibo_0=0;
	 int fibo_1=1;
	 int res_holder;
	if(n==0)
		return fibo_0;
	if(n==1)
		return fibo_1;
	for(int fib=0;fib < n-1;fib++)
	{
		res_holder=fibo_0+fibo_1;
		fibo_0=fibo_1;
		fibo_1=res_holder;
	}

	return res_holder;
}
char* int_to_binary(unsigned int  n)
{
	unsigned int  k=n;
	int b=0;
	b=(int)log2(n) + 1;
	char *result=(char*)malloc(sizeof(char)*(b+1));
	result[b]='\0';
	while(n>0)
	{
		k=n%2;
		result[--b]=k+'0';
		n=n/2;
	}

	

	return result;
	
}

int sum(int *a,int n)
{
	int res=0;
	for(int h=0;h<n;h++)
	{
		res+=a[h];
	}
	return res;
}
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void bubblesort(int *a,int n)
{
	if(n<=1)
		return;
	int check=1;
	for(int swapper=0;swapper< n-1;swapper++)
	{
		if(a[swapper] > a[swapper+1])
			{
				swap(&a[swapper],&a[swapper+1]);
				check=0;
			}
	}
	if(check==1)
		return;
	else
		bubblesort(a,n-1);

}
int search(int *a, int n,int key)
{
	int k=0;
	while(k<n && a[k]!=key)
	{
		k++;
	}
	if(k==n)
		return -1;
	else
		return k;
}
int substring(char *source,char* pattern )
{
	int n=strlen(source);
	int m=strlen(pattern);
	int pattern_idx;
	for(int source_index=0;source_index<= n-m ; source_index++)
	{
		pattern_idx=0;
		while(pattern_idx!=m && pattern[pattern_idx]==source[source_index+pattern_idx])
			pattern_idx++;
		if(pattern_idx==m)
			return source_index;

	}
	return -1;
}
int isSorted(int *a,int n)
{
	for(int start=0;start < n-1;start++)
	{
		if(a[start]>a[start+1])
			return -1;
	}
	return 1;
}

void printarray(int *a,int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	return;
}

void selectionsort(int *a,int n)
{
	if(n==1)
		return;
	int max_index;
	int cpy=n;
	for(int reducer=n-1;reducer>=1;reducer--)
	{
		max_index=max(a,cpy--);
		swap(&a[max_index],&a[reducer]);

	}
	return;
}
void insertionsort(int* a,int n)
{
	int backward,key;
	for(int unsorted=1;unsorted < n;unsorted++)
	{
			key=a[unsorted];
			
			backward=unsorted-1;
			while(backward >= 0 && (a[backward] > key))
			{
					a[backward+1]=a[backward];
					backward--;
			}

			a[backward+1]=key;
		    
	}
}
void shuffle(int *a,int n)
{
	srand ( time(NULL) );
	int shuffler;
	for(int i=0;i<n;i++)
	{
		shuffler=rand() % n;
		swap(&a[i],&a[shuffler]);
	}
}