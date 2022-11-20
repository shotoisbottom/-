/*#include <iostream>
using namespace std;

int main()
{
   int a[500][500] = {1};
	int n;
	cin >> n;
	for (int i = 1;i <= n;++i){
		for (int j = 0;j < i;++j){
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
/*	for (int i = 1; i <= n; ++i){
        for(int k = 0;k < n - i;k++){
            cout<<" ";
        }
		for (int j = 0; j < i; ++j){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}*/
	/*for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
}*/

#include <iostream>
using namespace std;

int main()
{
   int a[500][500] = {1};
	int n;
	cin >> n;
/*	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++){
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}*/
	for (int i = 1;i <= n;++i){
		for (int j = 0;j < i;++j){
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	for (int i = 1; i <= n; ++i){
        for(int k = 0;k < n - i;k++){
            cout<<" ";
        }
		for (int j = 0; j < i; ++j){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
}