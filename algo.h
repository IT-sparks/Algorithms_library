// a library built for functions that are used frequently , such as max , min ,search, sort etc
// exploiting the modularity aspect of functional programming 
//hence ensuring a better readability of code.
//the functions are written to maintain optimality , reasonable or  less time complexity is ensured.
//function declarations begin

int compare(int a , int b);
//compare returns 1 if a is greater , -1 if b is greater , 0 if equal.

int factorial(unsigned int );
//returns factorial of a number

int power(int base,int exponent);
//returns base**exponent

void tower_of_hanoi(int no_of_disks );
//prints the moves in sequence for n disks

int gcd(int a , int b);
//returns gcd of 2 numbers (negative ints accepted)

int permute(int n ,int r);
//returns P(n,r)

int combination(int n,int r);
//returns C(n,r)

int lcm(int a,int b);
//returns LCM(a,b)

int max(int *a,int n);
//returns max element's offset of an int array;

int min(int *a,int n);
//returns min element's offset in an int array

int fibonacci(int n);
//returns nth fibonacci number 
//fibonacci(0)=0
//fibonacci(1)=1

void sort(int *a,int n,int reverse);
//sort the array in specified order if reverse=1 , then sort in non-increasing order
//else sort in non-decreasing order

char* int_to_binary(unsigned n);
//returns the binary equivalent of a number as a string 

int sum(int *a,int n);
//returns sum of elements in an array

void swap(int *,int *);
//swaps 2 elements


void bubblesort(int *a,int n);
//sorts the array in place with O(n^2) complexity,brute force

int search(int *a,int n,int key);
//returns first offset of the key in the array

int substring(char *source,char* pattern );
//returns the first occurring start index of the substring in the source string if found ,else returns -1
//naive string match 

int isSorted(int *a,int n);
//returns 1 if first n elements are sorted in nondecreasing order else -1


void printarray(int *a,int n);
//prints the array elements in sequence

void selectionsort(int *a,int n);
////sorts the array in place with O(n^2) complexity,brute force

void insertionsort(int* a,int n);
//sorts the array in place with O(n^2) complexity ,decrease and conquer

void shuffle(int *a,int n);
//shuffles the contents of the array ,without loss of data.