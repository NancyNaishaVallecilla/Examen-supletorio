#include<iostream>
#include<string.h>

using namespace std;
void total(float sb,float precio[10],float iva,float descuento,float t);

int main(){
	string articulo[10];
	float precio[10],sb,iva=0.12,descuento=0.10,t;
	cout<<"\t\t\t============================FACTURACIÓN============================"<<endl<<endl;
	cout<<"INGRESE SUS ARTICULOS:"<<endl<<endl;
	cout<<"AR1: ";
	cin>>articulo[0];
	cout<<"AR2: ";
	cin>>articulo[1];
	cout<<"AR3: ";
	cin>>articulo[2];
	 cout<<"AR4: "; 
    cin>>articulo[3];
    cout<<"AR5: ";
	cin>>articulo[4];
	cout<<"AR6: ";
	cin>>articulo[5];
	cout<<"AR7: ";
	cin>>articulo[6];
	cout<<"AR8: ";
	cin>>articulo[7];
	cout<<"AR9: ";
	cin>>articulo[8];
	cout<<"AR10: ";
	cin>>articulo[9];
	
	cout<<"INGRESE EL PRECIO DE SUS ARTICULOS :"<<endl<<endl;
	cout<<"PRE1: ";
	cin>>precio[0];
	cout<<"PRE2: ";
	cin>>precio[1];
	cout<<"PRE3: ";
	cin>>precio[2];	
	cout<<"PRE4: ";
	cin>>precio[3];	
	cout<<"PRE5: ";
	cin>>precio[4];	
	cout<<"PRE6: ";
	cin>>precio[5];	
	cout<<"PRE7: ";
	cin>>precio[6];	
	cout<<"PRE8: ";
	cin>>precio[7];	
	cout<<"PRE9: ";
	cin>>precio[8];	
	cout<<"PRE10: ";
	cin>>precio[9];	
		
	cout<<"========================================================"<<endl;
	    cout<<"ARTICULOS"<<"\t"<<"PRECIOS"<<"\t"<<endl;
	    cout<<articulo[0]<<"\t"<<precio[0]<<"\t"<<endl;
		cout<<articulo[1]<<"\t"<<precio[1]<<"\t"<<endl; 
		cout<<articulo[2]<<"\t"<<precio[2]<<"\t"<<endl;
		cout<<articulo[3]<<"\t"<<precio[3]<<"\t"<<endl;
		cout<<articulo[4]<<"\t"<<precio[4]<<"\t"<<endl;
		cout<<articulo[5]<<"\t"<<precio[5]<<"\t"<<endl;
		cout<<articulo[6]<<"\t"<<precio[6]<<"\t"<<endl;
		cout<<articulo[7]<<"\t"<<precio[7]<<"\t"<<endl;
		cout<<articulo[8]<<"\t"<<precio[8]<<"\t"<<endl;
		cout<<articulo[9]<<"\t"<<precio[9]<<"\t"<<endl;
	cout<<"========================================================="<<endl;
		total(sb,precio,iva,descuento,t);
	  
	return 0;
}
void total(float sb,float precio[10],float iva,float descuento,float t){
	sb=precio[0]+precio[1]+precio[2]+precio[3]+precio[4]+precio[5]+precio[6]+precio[7]+precio[8]+precio[9];
	cout<<"SUBTOTAL: "<<sb<<endl<<endl;
	iva*=sb;
	cout<<"IVA: "<<iva<<endl;
	descuento*=sb;
	cout<<"DESCUENTO: "<<descuento<<endl;
	t=sb+iva-descuento;
	cout<<"TOTAL A PAGAR : "<<t<<endl;
}

