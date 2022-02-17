#include <bits/stdc++.h>

void update(int *a, int *b){
	int add = *a + *b;
	int abs_difference = abs(*a-*b);
	*a = add;
	*b = abs_difference;
} 

int main(){
	int a, b;
	int *pa = &a, *pb = &b;
	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);
	return 0;
}
