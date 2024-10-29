#include <stdio.h>

int main() {
	
	long long int n;
	scanf("%lld", &n); getchar();
	
	long long int damage = 0;
	for(int i = 0; i < n; i++){
		damage = damage + 100 +50 * i;
	}
	
	printf("%lld\n", damage);
	
}
