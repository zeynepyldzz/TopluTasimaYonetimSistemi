#include <mysql.h>
#include <mysqld_error.h>
#ifndef DATABASE_H_
#define DATABASE_H_

class Database{
	private:
		
	int qstate;
    MYSQL* conn;
   MYSQL_ROW row;
   MYSQL_RES res; 
		
		
		
		
		
		public:
			Database();
			
			
			
			
};
#endif
