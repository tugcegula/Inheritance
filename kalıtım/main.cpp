/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tugce
 *
 * Created on 29 Mayıs 2020 Cuma, 13:24
 */

#include <iostream>
#include <conio.h>
using namespace std;

class sekil // ortak özellikler sınıfı
{
 public:
 int alan;
 string birim;
 string sekilturu; 
 
 void alanyazdir()//fonksiyon
 {
 cout<<sekilturu<<" "<<alan<<" "<<birim<<" "<<endl;
 } 
 sekil()
 {
     cout<<"Sekil() cagrildi"<<endl;// bu satır sayesinde mainde nesne oluştururken yapıcılar çağırıldığında
                                 //hangi sırayla (önce kalıtım alınan sekil sınıfı) çağrıldığı görülür.

     
     birim="cm2";
 }
 
 ~sekil(){
     cout<<"~Sekil() cagrildi"<<endl;// yıkıcı metodlarda ise yapıcının tam tersi olarak önce son kullanılan 
                                 // sınıf çağırılır daha sonra kalıtım aldığı sınıf çağırılır.
    
}
};

class ucgen:public sekil  // :public ile sekil sınıfından kalıtım aldık. (genelde public kullanılır en uygunu odur)
{
 public:
 int yukseklik,taban;
 ucgen()// constructor -kurucu
 {
      cout<<"ucgen() cagrildi"<<endl;// bu satır sayesinde mainde nesne oluştururken yapıcılar çağırıldığında
                                 //hangi sırayla (önce kalıtım alınan sekil sınıfı) çağrıldığı görülür.
 sekilturu="ucgen";
 }
 ~ucgen(){ 
 cout<<"~ucgen() cagrildi"<<endl;// yıkıcı metodlarda ise yapıcının tam tersi olarak önce son kullanılan 
                                 // sınıf çağırılır daha sonra kalıtım aldığı sınıf çağırılır.
}
};


class dikdortgen:public sekil
{
 public:
 int en,boy;
 dikdortgen()
 {
 sekilturu="dikdortgen";
 }
};

class kare:public sekil
{
 public:
 int kenar;
 kare()
 {
   cout<<"kare() cagrildi"<<endl;// bu satır sayesinde mainde nesne oluştururken yapıcılar çağırıldığında
                                 //hangi sırayla (önce kalıtım alınan sekil sınıfı) çağrıldığı görülür.
   sekilturu="kare";
 }
 
 ~kare(){ 
 cout<<"~kare() cagrildi"<<endl;// yıkıcı metodlarda ise yapıcının tam tersi olarak önce son kullanılan 
                                 // sınıf çağırılır daha sonra kalıtım aldığı sınıf çağırılır.
}
};

class daire:public sekil
{
 public:
 int yaricap;
 daire()
 { 
    cout<<"daire() cagrildi"<<endl;// bu satır sayesinde mainde nesne oluştururken yapıcılar çağırıldığında
                                 //hangi sırayla (önce kalıtım alınan sekil sınıfı) çağrıldığı görülür.
    sekilturu="daire";
 }
 ~daire(){ 
 cout<<"~daire() cagrildi"<<endl;// yıkıcı metodlarda ise yapıcının tam tersi olarak önce son kullanılan 
                                 // sınıf çağırılır daha sonra kalıtım aldığı sınıf çağırılır.
}
};

int main()
{
 kare k1;// nesne oluşturduk
 k1.kenar=10;
 k1.alan=k1.kenar*k1.kenar;
 k1.alanyazdir();//fonksiyon
 
 cout<<"------------------"<<endl;
 daire d1;
 d1.yaricap=10;
 d1.alan=3.14*d1.yaricap*d1.yaricap;
 d1.alanyazdir();
 
  cout<<"------------------"<<endl;
}