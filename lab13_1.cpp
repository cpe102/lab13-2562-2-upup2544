#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
int x,y=1;
for(int end=0;end<9;end++){
x=y;
for(int i=0;i<N;i++){
	if(i==x)cout<<"["<<d[i]<<"]"<< " ";
	else cout<<d[i]<< " ";	
}
 cout << "=>" << " ";
for(int j = x;j>0;j--){
   if(d[j]>d[j-1]){
    swap(d,j,j-1);
    x--;}}

for(int t=0;t<N;t++){
	if(t==x)cout<<"["<<d[t]<<"]"<< " ";
	else cout<<d[t]<< " ";	
}
cout<<"\n" ;
y++;
}

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
