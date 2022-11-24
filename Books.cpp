#include<iostream>
using namespace std;
class book{
    private:
    char book_title[20];
    int book_price = 80;
    int money;
    int copies;
    int total_cost;

    public:
    void getData(){
        cout<<"Enter the name book : ";
        cin>>book_title;
        cout<<"Enter the money : ";
        cin>>money;
        
        if(money >= book_price){
            cout<<"You can buy this book"<<endl;
            Total_cost();
            showData();
        }else{
            cout<<"You can't buy this book"<<endl;
        }
    }
    void Total_cost(){
        cout<<"Enter the copies of this book : ";
        cin>>copies;
        total_cost = book_price*copies;
    }
    void showData(){
        cout<<"The name of book is : "<<book_title<<endl;
        cout<<"Total cost of book is : "<<total_cost<<endl;
        cout<<"Thank for visiting our shop...........!";
    }
};
int main(){
    book b;
    b.getData();
    return 0;
}