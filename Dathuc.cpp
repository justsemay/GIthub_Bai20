#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#hahaah
class DT{
	private:
	int bac;
	float *hs;
	public:
	DT(){
		bac=0;
	}	
	DT( int &bac,  float *hs){
		this->bac=bac;
		hs= new float[bac+1];
	}
	void nhap(){
		cout<<"Nhap bac:";cin>>bac;
		hs=new float[bac+1];
		cout<<"Nhap he so:"<<endl;
		for(int i=0;i<=bac;i++){
			cout<<"Hs "<<i<<":";
			cin>>hs[i];
		}
	}
	void xuat(){
		int i;
		cout<<hs[0];
		for( i=1;i<=bac;i++){
			cout<<" + "<<hs[i]<<".x^"<<i;
		}
		cout<<endl;
	}	
	float tinh(const float d){
		int i;
		float kq;
		for (i=0;i<=bac;i++){
			kq=kq+hs[i]*pow(d,i);
		}
		return kq;
	}
	DT operator+ (const DT &p1){
		int i;
		DT p;
		
		if(this->bac>=p1.bac){
			p.bac=this->bac;
			p.hs=new float[p.bac+1];
			for(int i=0;i<=this->bac;i++){
				p.hs[i]=this->hs[i]+p1.hs[i];
			}
			
		}
		if (this->bac<p1.bac){
			p.bac=p1.bac;
			p.hs=new float[p.bac+1];
			for(int i=0;i<=p1.bac;i++){
				p.hs[i]=this->hs[i]+p1.hs[i];
			}
		}
		return p;
	}
	DT operator- (const DT &p1){
		DT p;
		int i;
		if(this->bac>=p1.bac){
			p.bac=this->bac;
			p.hs=new float[p.bac+1];
			for(i=0;i<=this->bac;i++){
				p.hs[i]=this->hs[i]-p1.hs[i];
			}
		}
		if(this->bac<p1.bac){
			p.bac=p1.bac;
			p.hs=new float[p.bac+1];
			for(i=0;i<=p1.bac;i++){
				p.hs[i]=this->hs[i]-p1.hs[i];
			}
		}
		return p;
	}
	~DT(){
		
	}
};
int main(){
	DT a,b,c;
	a.nhap();
	a.xuat();
	b.nhap();
	b.xuat();
	c=a-b;
	c.xuat();
	float ketqua=c.tinh(2);
	cout<<" Ket qua:"<<ketqua;
	
}
