#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	char s[50];
	while(t--)
	{
		scanf("%s",s);
		int len = strlen(s);
		
		if(strcmp(s,"1")==0 || strcmp(s,"4")==0 || strcmp(s,"78")==0)
			printf("+\n");
		else if(s[len-1] =='5' && s[len-2]=='3')
			printf("-\n");
		else if(s[0]==9 && s[len-1]==4)
			printf("*\n");
		else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
			printf("?\n");
		else
			printf("+\n");
		
	}
	return 0;
}