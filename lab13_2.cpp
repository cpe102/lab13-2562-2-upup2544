#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}
void inputMatrix(double x[][N]){
	for(int i=0;i<5;i++){
		cout<<"Row ["<<i+1<<"] : ";
		for(int j=0;j<5;j++){
			cin>>x[i][j];
		}
	}

}
void findLocalMax(const double x[][N],bool y[][N]){
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		if(i==0||j==0||i==4||j==4){ y[i][j]=false;continue;}
		if(x[i][j]>x[i-1][j]&&x[i][j]>x[i+1][j]&&x[i][j]>x[i][j+1]&&x[i][j]>x[i][j-1]) y[i][j]=true;
		else y[i][j]=false;
	}
}

}
void showMatrix(const bool y[][N]){
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		if(y[i][j]==false) cout<<0;
		else cout<<1;
	}cout<<"\n";}
}
