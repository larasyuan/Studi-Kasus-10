#include <iostream>
using namespace std;

class studi{
  private:
    int *nim;
    int nimMhs[5];
    string *nama;
    string namaMhs[5];
    
  public:
  void input(){
    cout << "\tMasukkan Data Mahasiswa Yang Lolos \n";
cout << "\t  Babak Final Lomba Parmatika"<<endl<<endl;
    for (int i=0; i<5; i++){
      cout << "Masukkan NIM Finalis : ";
      cin >> nimMhs[i];
      cout << "Masukkan Nama Finalis : ";
      cin >> namaMhs[i];
    }
  }
  void proses(){
  	cout << "\n================";
  	cout << "\nMenyimpan data \n";
  	cout << "==================\n";
    nim = new int[5];
    nama = new string[5];
    for(int i=0; i<5; i++){
      *nim = nimMhs[i];
      nim += 1;
      *nama = namaMhs[i];
      nama+=1;
    }
  }
  void output(){
    nim -=5 ;
    nama -= 5;
    cout<<"Menampilkan data mahasiswa "<<endl;
    for (int i=0; i<5; i++) {
      cout << "\nData ke-" << i+1 << " : ";
      cout << *nama ;
      nama += 1;
      cout << "\nNim : " ;
      cout << *nim ;
      nim += 1;
    }
  }

};
int main(){
  studi x;
  x.input();
  x.proses();
  x.output();
  
}