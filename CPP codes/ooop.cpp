#include<iostream>
using namespace std;
class Books
{	public:
	string title;
	string author;
	float price;
	int pages;
	
	void details()
	{
		cout<<"\nThe book "<<title<<" is written by "<<author;
		cout<<"\n This book is priced at "<<price<<" and have pages "<<pages;
	}
	
};
int main()
{
	Books book1;
	book1.title="Chava";
	book1.author="Shivaji Sawant";
	book1.price=550;
	book1.pages=1000;
	
	Books book2;
	book2.title="sex ke rang razz evam rehesya";
	book2.author="surendra nath saxena";
	book2.price=221;
	book2.pages=211;
	
	
	
	book1.details();
	book2.details();
	
	return 0;
}
