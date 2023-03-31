#include "../library/mylib.hpp"

int import::ImportFile(int choice){
    ifstream myfile ; 
        if (choice >= 1 && choice <= 3){
                switch (choice){
                    case 1 : 
                        filename = "../text/word.txt";
                        break;
                    case 2 : 
                        filename = "../text/animal.txt";
                        break;
                    case 3 : 
                        filename = "question/daily.txt";
                        break;
                }
                myfile.open(filename);
                if (!myfile){
                    cout << "Error" << endl ;
                    exit(0);
                }
                    while (!myfile.eof()){
                    getline(myfile,line);
                    words[index] = line ;
                    index ++ ;
            } 
            myfile.close() ;
            index = 0 ;  
            return 1 ; // if complete  it will return 1 
        };
};
void import::showFile(){
    for (int i = 0 ; i < 2 ; i++){
        cout << words[i] << endl ;
    }
}

