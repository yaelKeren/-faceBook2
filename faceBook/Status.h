#ifndef __STATUS_H
#define __STATUS_H
#include "date.h"

enum class KindOfStatus 
{
	Video,
	Picture,
	Text
};

class Status
{
private:
	Date* date;
public:
	KindOfStatus type;
	virtual void show();
	Status(char* name, KindOfStatus statusType);
	//Status(const Status& other);
	~Status();
};

class Text : public Status
{
private:
	char* text;
public:
	/*Text(char* name);
	Text(const Text& other);
	~Text();*/
};

class Video : public Status
{

public:
	/*void show();
	Video();
	Video(char* name);
	~Video();*/

};

class Picture : public Status
{

public:
	/*void show();
	Picture();
	Picture(char* name);
	~Picture();*/

};

#endif