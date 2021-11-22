#include<stdio.h>

int main(){
	int rad, h;
	
	scanf("%d", &rad);
	scanf("%d", &h);
    
	int s_area, volume;
	s_area=22.0/7*rad*(rad+2*h);
	volume=22.0/7*rad*rad*h;
	printf("%d\n%d",s_area,volume);
	// Insert your code here
	
	return 0;
}
