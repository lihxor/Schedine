/*
This code is meant to find the smallest number with multiplication
persistence 12.
*/
#include <iostream>
#include <cstdlib>
#include "C:\Users\Lorenzo\Documents\Atom\Schedine\libxl-3.9.4.3\include_cpp\libxl.h"
using namespace libxl;



int form_1[3];
int form_2[3];

int squad_1[11]; //Valori giocatori prima squadra
int squad_2[11]; //Valori giocatori seconda squadra

const int max_1=0; //Massimo normalizzato per prima squadra
const int max_2=0; //Massimo normalizzato per seconda squadra

int tot_1=0;
int tot_2=0;

int diff_f=0;
int diff_s=0;
int diff_v=0;

int partite_1[5]; //Risultati ultime 5 partite (Prima squadra)
int partite_2[5]; //Risultati ultime 5 pratite (Seconda squadra)
float vantaggio=0;

void compute(int a)
{
  if(a<0)
  {
    vantaggio+=(a)/10;
  }
  else
  {
    if(a>0)
    {
      vantaggio+=(a)/10;
    }
    else
    {
      vantaggio=vantaggio;
    }
  }
}
void compute_f(float a, float b)
{
  if((a-b)<(-5))
  {
    vantaggio+=(a-b)/10;
  }
  else
  {
    if((a-b)>5)
    {
      vantaggio+=(a-b)/10;
    }
    else
    {
      vantaggio=vantaggio;
    }
  }
}

void result(int a)
{
  if(a<0)
  {
    std::cout<<std::endl<<"Risultato probabile: 2"<<std::endl;
  }
  else
  {
    if(a>0)
    {
      std::cout<<std::endl<<"Risultato probabile: 1"<<std::endl;
    }
    else
    {
      std::cout<<std::endl<<"Risultato probabile: X"<<std::endl;
    }
  }
}

int main()
{
  int perc_1=0;
  int perc_2=0;

  float perfm_1=0;
  float perfm_2=0;



  int val_1=0; //Punteggio prima squadra
  int val_2=0; //Punteggio seconda squadra
  int gol_f_1=0; //Gol fatti dalla prima squadra
  int gol_s_1=0; //Gol subiti dalla prima squadra
  int gol_f_2=0; //Gol fatti dalla seconda squadra
  int gol_s_2=0; //Gol subiti dalla seconda squadra
  std::cout<<"Inserire classifica prima squadra"<<std::endl;
  std::cin>>val_1;
  std::cout<<"Inserire gol fatti prima squadra"<<std::endl;
  std::cin>>gol_f_1;
  std::cout<<"Inserire gol subiti prima squadra"<<std::endl;
  std::cin>>gol_s_1;
  std::cout<<"Inserire classifica seconda squadra"<<std::endl;
  std::cin>>val_2;
  std::cout<<"Inserire gol fatti seconda squadra"<<std::endl;
  std::cin>>gol_f_2;
  std::cout<<"Inserire gol subiti seconda squadra"<<std::endl;
  std::cin>>gol_s_2;



  /*
  cout<<"Formazione prima squadra:"<<endl;
  for(int i=0; i<3; i++)
  {
    cin>>form_1[i];
  }
  for(int i=0; i<11; i++)
  {
    cout<<"Inserire valore ";
    if(i<form_1[0])
    {
      cout<<"attaccante ";
    }
    else
    {
      if(i<form_1[1])
      {
        cout<<"centrocampista ";
      }
      else
      {
        cout<<"difensore ";
      }
    }
    cout<<i<<endl;
    cin>>squad_1[i];
    tot_1+=squad_1[i];
  }
  cout<<"_________________________________________"<<endl;
  cout<<"Formazione seconda squadra:"<<endl;
  for(int i=0
  ; i<3; i++)
  {
    cin>>form_2[i];
  }
  for(int i=0; i<11; i++)
  {
    cout<<"Inserire valore ";
    if(i<form_2[0])
    {
      cout<<"attaccante ";
    }
    else
    {
      if(i<form_2[1])
      {
        cout<<"centrocampista ";
      }
      else
      {
        cout<<"difensore ";
      }
    }
    cout<<i<<endl;
    cin>>squad_2[i];
    tot_1+=squad_2[i];
  }
  */
  std::cout<<"Valore squadra 1:"<<std::endl;
  std::cin>>perfm_1;
  std::cout<<"Valore squadra 2:"<<std::endl;
  std::cin>>perfm_2;
  diff_v=val_1 - val_2;
  compute(diff_v);
  diff_f=gol_f_1 - gol_f_2;
  compute(diff_f);
  diff_s=gol_s_2 - gol_s_1;
  compute(diff_s);
  /*
  perfm_1=(tot_1/max_1)*val_1;
  perfm_2=(tot_2/max_2)*val_2;*/
  compute_f(perfm_1, perfm_2);
  result(vantaggio);
  system("pause");
  return 0;
}
