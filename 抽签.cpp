#include<iostream> 
#include<time.h>
using namespace std;
int name[51];
main(){
	srand(time(NULL));
	int ans,n;
	cout<<"��������Ҫ��ȡ��������"; 
	cin>>n;
	name[9]=name[37]=1;
	while(n){
		n--;
		while(name[ans=rand()%50+1]);
		name[ans]=1;
		cout<<ans<<" ";
	}
	system("pause");
}
