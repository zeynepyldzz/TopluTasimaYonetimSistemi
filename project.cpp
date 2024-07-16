#include <iostream>
#include "project.h"
#include <string>
#include <sstream>
#include <mysqld_error.h>
#include <mysql.h>

using namespace std;
/*int qstate;
MYSQL* conn;
MYSQL_ROW row;
MYSQL_RES res; */

int sec,devam; 

///////BUS/////////////
void arac::SeferGoster()
{
	cout<<endl<<" Lutfen Metro veya Otobus Hatti Seciniz:";
	cin>>sec;
	system("cls");
	//////Eðer metro veya otobüs hattý dýþýnda(databasedekiler dýþýnda) bi þey secerse hata versin
			 
	cout<<"122C"<<endl<<"      Kalkis:Tepeustu"<<endl<<"     "<<endl<<"06:00  06:30"<<endl<<"07:00  07:30"<<endl<<"08:00  08:15  08:30  08:45"<<endl<<"09:00"<<endl;
	cout<<endl<<"     "<<endl<<"      Kalkis:Mecidiyekoy"<<endl<<"     "<<endl<<"06:00  06:30"<<endl<<"07:00  07:30"<<endl<<"08:00  08:15  08:30  08:45"<<endl<<"09:00";
	
	
	
}


void arac::GuzergahGoster()
{
	cout<<endl<<" Lutfen Metro veya Otobus Hatti Seciniz:";
	cin>>sec;
	system("cls");
		//////Eðer metro veya otobüs hattý dýþýnda(databasedekiler dýþýnda) bi þey secerse hata versin
cout<<"M5"<<endl<<"           Kalkis:Uskudar"<<""<<endl<<""<<endl<<"[1]-Uskudar"<<endl<<"[2]-Fistikagaci"<<endl<<"[3]-Baglarbasi"<<endl<<"[4]-altunizade"<<endl<<"[5]-kisikli"<<endl<<"[6]-umraniye";
	
}

void arac::Listele()
{
	
	/*cout << "Otobusleri hatlarini göster";
	cin>>bus::busname;
	 qstate= mysql_query( conn, "SELECT * FROM PROJECT_SCHEMA");
	 if(!qstate){
	 	MYSQL_RES* res= mysql_store_result(conn);
	 	while((row=mysql_fetch_row(res)))
	 	{
	 		cout<<"id:"<<row[0]<<endl;
	 		cout<<"busname:"<<row[1]<<endl;

		 }
	 }
	else
	{
		cout<<"errorrr"<<mysql_errno(conn)<<endl;
	}*/
 }


void arac::Sil()
{
	cout << "Silmek istediginiz otobusu girin:";
	cin>>arac::name;
	///// databaseden silindi
	cout<<arac::name<<" hattý silindi";
}

void arac::Ekle()
{
	cout << "Eklemek istediginiz otobusu girin:";
	cin>>arac::name;
	//// databaseden eklendi.
	cout<<arac::name<<" hatti eklendi.";
}


void arac::Guncelle()
{
	cout << "Duzenlemek istediginiz otobusu girin:";
	cin>>arac::name;
	/// databaseden guncellendi.
    cout<<arac::name<<" hatti guncelle.";
}

void arac::Ara()
{
	cout << "Aramak istediginiz otobusu girin:";
	cin>>arac::name;

}
