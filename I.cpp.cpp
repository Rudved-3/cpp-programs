#include <iostream>
using namespace std;
class Sort{
	int n;
	int *a;
	public:
	Sort(int num){
		n=num;
		a=new int [n];
		cout<<"Enter "<<n<<" elements :";
		for (int i=0;i<n;i++)
			cin >>a[i];
	}
	~Sort(){
		delete[] a;
	}
	void insertion(){
		for (int i=1;i<n;i++){
			int key =a[i];
			int j=i-1;
			while (j>=0&&a[j]>key){
				a[j + 1] = a[j]; 
                j--;	
			}
			a[j+1]=key;	
		}
		for (int i=0;i<n;i++)
			cout<<a[i]<<"\t";
			cout<<endl;
	}
};
int main(){
	int n;
	cout<<"enter to no of elements :";
	cin>>n;
	Sort s(n);
	s.insertion();
	return 0;
	
}