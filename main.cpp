#include <iostream>
#include <mysql.h> 
#include <mysqld_error.h>
#include "project.h"

using namespace std;
int main() {
	cout<<"******************************************************************"<<endl;
	cout<<"*                                                                *"<<endl;
	cout<<"*                                                                *"<<endl;
	cout<<"*                        TOPLU TASIMA                            *"<<endl;
	cout<<"*                      YONETIM SISTEMINE                         *"<<endl;
	cout<<"*                        HOS GELDINIZ!                           *"<<endl;
	cout<<"*                                                                *"<<endl;
	cout<<"*                                                                *"<<endl;
	cout<<"******************************************************************"<<endl;
	cout<<endl<<endl<<"[1]- Admin Girisi Icin Seciniz."<<endl<<"[2]- Kullanici Girisi Icin Seciniz. "<<endl<<endl;
	
	int giris;
	cout<<"Lutfen Girmek Istediginiz Paneli seciniz:";
	cin>>giris;
	cout<<endl;
	
	arac object;
	int devam; 
	int islem,sifre=1234, sifreal;
	if(giris==1)
    {   cout<<"Hesap Sifreninizi Giriniz:";
        cin>>sifreal;
        system("cls");
        ///////system("pause");
        
        if(sifre==sifreal){
		
    	cout<<endl<<"**********ADMIN PANELINE HOS GELDINIZ!**********"<<endl<<endl;
    	cout<<"[1]-Sefer Saatlerini Duzenlemek Icin Seciniz."<<endl;
    	cout<<"[2]-Guzergahlari Duzenlemek Icin Seciniz."<<endl;
    	cout<<"[3]-Yeni Hat Eklemek Icin Seciniz."<<endl;
    	cout<<"[4]-Hat Silmek Icin Seciniz."<<endl;
    	cout<<"[5]-Ana Menuye Donmek Icin Seciniz."<<endl;
		cout<<"[6]-Cikis Yapmak Icin Seciniz."<<endl;
    	cout<<endl<<"Lutfen Yapmak Istediginiz Islem Numarasini seciniz:";
		cin>>islem;
	
		///////////////////////////////////////////
    	switch (islem)
		{   case 1:
                object.Guncelle();
		     	break;
		
		    case 2:
		   	    object.Guncelle();
			    break;
	
		    case 3:
                object.Ekle();
		        break;
		   
		   case 4: 
		        object.Sil();
		         break;
		   
		    case 5:
		    	return main();
		    	break;
		   
		    case 6:
		        exit (0);
		        break;
		
	    	default:
	    	    system("cls");
                cout<<"Lutfen dikkatli secin!"<<endl<<endl;  
                return main(); 
	     	    break;
	     	
	   	}
	   	///////////////////////////////////////
        }
     
	  else
      {
      	
        cout<<"                         "<<endl;
      	cout<<" Girdiginiz Sifre Yanlis. Lutfen Tekrar Deneyiniz."<<endl;
      	cout<<"                         "<<endl;
        return main();                      
      	
	  }
   	}
    else if(giris==2)
	{
		system("cls");
		
		cout<<endl<<"**********KULLANICI GIRISINE HOS GELDINIZ!**********"<<endl<<endl;
	
		cout<<"[1]-Sefer Saatlerine Bakmak Icin Seciniz."<<endl;
		cout<<"[2]-Guzergahlara Bakmak Icin Seciniz."<<endl;
		cout<<"[3]-Ana Menuye Donmek Icin Seciniz."<<endl;
		cout<<"[4]-Cikis Yapmak Icin Seciniz."<<endl;
		
		cout<<endl<<"Lutfen Yapmak Istediginiz Islem Numarasini seciniz:";
		cin>>islem;
		int hat;
		
		/////////////////////////////////////
			if(islem==1) {
				system("cls");
				object.SeferGoster(); 
			
	
			}
			    
		
		    else if(islem==2) {
		    	system("cls");
		    	object.GuzergahGoster();
		        
		        /*cout<<endl<<endl<<"1)Ana menuye geri don"<<endl<<"2)Cikis yap"<<endl;
            	
				cout<<"sec:";
	            cin>>devam;
	             
				 if(devam==1){
		           return main();
				  }
			     else{
	            	exit (0);
	            	}*/
			}
		        
			
			else if(islem==3){
				return main();
			}
				
			
				
			else if (islem==4){
				exit(0);
			}
			
		
		   else{
		   	cout<<"Lutfen dikkatli secin!"<<endl<<endl;
	            return main();
		   	
		   }
		    
		///////////////////////////////////////////////////////
	
	}
	else 
	{
		system("cls");
		cout<<"Lutfen Dogru Numarayi Giriniz!"<<endl<<endl;
		return main();
	}

	return 0;
}

