#include "binomial.h"

   Binomial::Binomial(int x){

     for(int i=1; i<3; i++){
       if(power[i]<1){
         power[i]=1;
       }
       else{
         power[i]=power[i];
       }
     }

   }

   Binomial::GetCoefficient(float m){
     for(int i=1;i<3;i++){
       if(coefficient[i]!=1){
         coefficient[i]=-1;;
       }
       else if(coefficient[i]=1){
         coefficient[i+1]=coefficient[i]+1;
       }
     }
     return coefficient;
   }
   Binomial::GetPower(int c){
     for(int i=1;i<3;i++){
       if(power[i]!=1){
         power[i]=-1;;
       }
       else if(power[i]=1){
         power[i+1]=power[i]+1;
       }
     }
     return power;
   }
   Binomial::SetPower(int d, int e){
     for(int i=1;i<3;i++){
       if(power[i]<0){
         power[i]=1;
       }
       else if(power[i]=1){
         power[i+1]=power[i]+1;
       }
       else if(power[i]!=1){
         power[i]=power[i];
       }
     }
    //return value
   }
   Binomial::Add(Binomial o){
     for(int i=1;i<3;i++){
       if(binomial[i]=binomial[i+1]){
       int totalbinomial;
       totalbinomial=totalbinomial+binomial;
       }
       else if(binomial[i]!=binomial[i+1]){
       int totalbinomial;
       totalbinomial=totalbinomial-1;
       }
     }
     //return value
   }
   Binomial::Multiply(float h){
     for (int i=1;i<3;i++){
       float product=binomial[i]*1;
       //check real number
       }
   }
   Binomial::Multiply(float h, int k){
     for (int i=1;i<3;i++){
       float product=coefficient[i]*power[i];
       }

   }



