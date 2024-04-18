#include <iostream>
using namespace std;
int main (){

int numero;
cin>>numero;

for(int iterador = 0; iterador<=numero; iterador++){
 if (iterador%2==0 && iterador!=0){
    cout<< iterador <<endl;
 }
}
return 0;
}
