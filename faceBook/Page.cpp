
#include "page.h"
#include <iostream>
using namespace std;



Page::Page(char* name) : BasicUser(name, KindOfBasicUser ::Page)
{
	/*this->size = 0;
	this->maxSize = 0;
	//this->allMembers = nullptr;*/
}

/*
Page::Page(char* name,KindOfBasicUser type) : BasicUser(name)
{
	this->size = 0;
	this->maxSize = SIZE;
	//this->allMembers = nullptr;
}
*/

/*void Page ::addFriend(BasicUser* user) {
	//if user == page then error
	//else add a friend in BasicUser Class
	if (user->type == KindOfBasicUser :: Page)
	{
		cout << "Page can't be a friend of page\n";
		//נרצה לבדוק האם צריך לשחררו כעט??
	}
	else
	{
		this->addFriend(user);
	}

}*/

/*
Page::Page(const Page& other)
{
	


}


*/

void Page::showMembers()
{
	this->showStatus();
}

void Page:: showPage()
{
	this->showBasicUser();
}

void Page::showFans()
{
	this->showFriends();
	/*if (this->allMembers != nullptr) {
		cout << "The friends are:\n";
		for (int i = 0; i < sizeof(this->allMembers); i++) {
			cout << i + 1 << ") ";
			this->allMembers[i]->showBasicUser();
		}
	}*/
	
}

 Page:: ~Page()
{
	 /*
	 if (this->allMembers != nullptr)
	 {
		 int i = 0;
		 for (; i < this->size; i++)
		 {
			 delete[]this->allMembers[i];
		 }
		 delete this->allMembers; //??
	 }
	 */

}