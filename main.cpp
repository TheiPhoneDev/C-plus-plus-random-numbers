#include <iostream>
#include <time.h>

using namespace std;

const int dimensioneMax = 10;


// intervallo di valori casuali.
// in questo caso la costante MAX definisce il limite
// di numeri che voglio che il programma mi generi.
// il mio intervallo va da 0...MAX
// che nel mio caso e' da 0...90.
const int MAX = 100; 


//prototipi
void caricaVettore(int v[]);
void stampaVettore(int v[]);
void quadrato(int v[]);
int Menu();



int main() {
    
    int vettore[dimensioneMax];
    int scelta;
    
    do{
      scelta=Menu();
      switch(scelta){
        case 1:
          caricaVettore(vettore);
          break;
        case 2:
          stampaVettore(vettore);
          break;
        case 3:
          quadrato(vettore);
          break;
        case 0:
          cout<<"Esci"<<endl;
          break;	
        default:
          cout<<"Attenzione, scelta sbagliata!"<<endl;
          break;
      } 
  }while (scelta!=0);

    return 0;
}



int Menu(){
  int scegli;
  cout<<"-------MENU'-------"<<endl;
  cout<<"1-Carica il vettore"<<endl;	
  cout<<"2-Stampa il vettore"<<endl;
  cout<<"3-Calcola il quadrato"<<endl;	
  cout<<"0-Fine"<<endl;	

    cout<<"Scegli un operazione: "<<endl;
    cin>>scegli;

    return scegli;	
}


void caricaVettore(int v[]) {
    int i=0;
    srand(time(0)); // Inizializzo il seme della sequenza
    
    cout<<endl;
    
    while(i<dimensioneMax) {
        v[i]=(rand()%MAX);
        i++;
    }
    
    cout<<endl;
    
}


void stampaVettore(int v[]) {
    int i=0;
    
    cout<<endl;
    
    while(i<dimensioneMax) {
        cout<<v[i]<<endl;
        i++;
    }
    
    
    cout<<endl;
}

void quadrato(int v[]) {
    int i=0;
    int quadrato;
    
    cout<<endl;
    
    while(i<dimensioneMax) {
        quadrato=v[i]*v[i];
        cout<<quadrato<<endl;
        i++;
    }
    
    
    cout<<endl;
}
