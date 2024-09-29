using namespace std; 

#include <studio.h>
#include <sqlite3.h>


class InternalDatabaseInterface {

    private: 
        sqlite3 *db; 
        char *zErrMsg=0;
        int rc;
    
    public:
        InternalDatabaseInterface() {
            //Create logger 

        }


    private: 
        void connect(){
            rc = sqlite3_open("internal_db_cache.db",&db);

            //check for successful connection
        }
        void closeConnection(){
            sqlite3_close(db);
}


}