
#include <iostream>
using namespace std;

class libraray{
    char **nbook;
    char**author;
    int *publishno;
    int R;
public:

 libraray(){
    nbook=new char *[1000];
    for(int i=0;i<1000;i++){
         nbook[i]=new char [1000];
    }
     author=new char *[1000];
    for(int i=0;i<1000;i++){
         author[i]=new char [1000];
    }
    publishno=new int [500];
    
}

         
  void addnew()
                {
        int i=0;
      bool status=false;
      for (;i<999;i++){
          
              cin.ignore();
              cout<<"Enter book title\n";
              cin.getline(nbook[i],30);
              cout<<"Enter author title\n";
              cin.getline(author[i],30);
              publishno[i]=i;
              cout<<"Press B to end\n";
              char no;
              cin>>no;
              if(no=='B')
                  break;
              
          }
          
          R=i;
      
    }
    
    void edit()
    {
        cout<<"Press 1 to edit name\n";
        cout<<"Press 2 to edit author name\n";
        int ch;
        cin>>ch;
        if(ch==1){
            cout<<"Enter the publishno.\n";
            int publish;
            cin>>publish;
            for(int i=publish;i<=publish;i++){
                nbook[i][0]='\0';
                cout<<"Enter name";
                cin.ignore();
                cin.getline(nbook[i],30);
                
                
            }
        }
            if(ch==2){
                cout<<"Enter the publishno.\n";
                int publish;
                cin>>publish;
                for(int i=publish;i<=publish;i++){
                    author[i][0]='\0';
                    cout<<"Enter name";
                    cin.ignore();
                    cin.getline(author[i],30);
                  
                    
                }
            
        }
    }
    
    void showall(){
        for (int i=0;i<=R;i++){
            cout<<nbook[i]<<" by "<<author[i]<<endl<<" Publish number "<<publishno[i]<<endl;
          
        }
        
    }
    
    void deletedata()
    {
        cout<<"Enter the publishno.\n";
        int publish;
        cin>>publish;
        for(int i=publish;i<=publish;i++){
            author[i][0]='\0';
            
        }
    }
    
    
};


int main(){
    libraray A;
    
    cout<<"........Library managemenet system........ \n";
   string choice;
    do
    {
      cout << "\n........Press 1 to Add a new book...... \n";
      cout << "........Press 2 to Edit details of book....  \n";
      cout << "........Press 3 to Delete a book...  \n";
      cout << "........Press 4 to  Display all books..... \n";
      cin >> choice;
        if(choice=="1"){
           A.addnew();
         
        }
        if(choice=="2"){
            A.edit();
        }
        if(choice=="3"){
            A.deletedata();
            
        }
        if(choice=="4"){
            A.showall();
        }
        
      cout << "Press N to exit and Y to continue";
      cin >> choice;
      cout << endl
           << endl;
    } while (choice != "N");
    return 0;
  }
    
    
    
    
    
    
    
    
    
    
  
