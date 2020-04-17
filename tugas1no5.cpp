#include <iostream>
using namespace std;

int main (){
	int c=1,a,b;
	int box[3][3]={{2,4,6},{8,10,12},{14,16,18}};
	cout<<"jumlah nomor : 9"<<endl;
	cout<<"nomor dus : ";
	for (a=2; a<=18; a+=2){
		cout<<a<<" ";
	}cout<<endl;
	for(int a=0; a<3; a++){
		for(int b=0; b<3; b++){
			cout<<"Jumlah box "<<c++<<": "<<box[a][b]<<endl;
		}
	}

	return 0;
}
