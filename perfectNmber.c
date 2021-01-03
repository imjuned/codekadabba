	
	
	
	
	
	
#include<stdio.h>
int main(){
long long int n;
long long int high_bound,low_bound=2;
int sum=1;
printf("%d",1%3);
scanf("%lld",&n);

high_bound=n/low_bound;
while(low_bound<high_bound){
if (n%low_bound==0){
high_bound=n/low_bound;
sum=sum+low_bound+high_bound;
}
low_bound++;
}
if(sum==n)
printf("YES");
else
printf("NO");

return 0;
}