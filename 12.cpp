//binary search
/*
	if last<first then locn =-1
		return false
	else
		mid=last+first/2;
		if ta<list mid
			return recursive (list,first,mid-1,target locn)
		else if(ta>list of mid)
			return recursive (list,mid+1,last,target locn)
		elsse 
		loc==mid
		return true	*/
#inslude <iostream>
using namespace std;
class Bin{
	int n;
	int *a;
	public:
	Bin(int num){
		n=num;
		a=new int [n];
		cout<<"Enter "<<n<<" elements :";
		for (int i=0;i<n;i++)
			cin >>a[i]; 
	}
	bool search(int first,int last,int target,int &locn){
		int mid=(first+last)/2;
		if(first>last){
			locn=-1;
			return false;
		}
		else{
			if(target<a[mid])
				return search(first,mid-1,target,locn);
			else if(target>a[mid])
				return search(mid+1,last,target,locn);
			else{
				locn=mid;
				return true;
			}	
		}
	}
};		
int main(){
	int n,target,locn;
	bool b;
	cout<<"enter to no of elements :";
	cin>>n;
	Bin s(n);
	cout<<"enter your target to search :";
	cin>>target;
	b=s.search(0,n,target,locn);
	if (b==1)
		cout<<"The element is found at "<<locn+1;
	else
		cout<<"The element is not found";
}