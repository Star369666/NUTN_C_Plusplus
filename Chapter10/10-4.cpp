#include <iostream>
#include <string>
#include <vector>
#include <ostream>
using namespace std;

class Subscriber 
{
public:
	Subscriber() {}
	~Subscriber();
	Subscriber(const Subscriber& copyConstructor);
	void setAll(string, int, string*);
	void setName(string);
	void setNumChannels(int);
	void setChannelList(string*);
	string getName() const { return name; }
	int getNumChannels() const { return numChannels; }
	void getChannelList() const;
	void reset();
	friend bool operator ==(const Subscriber&, const Subscriber&);
	Subscriber& operator =(const Subscriber&);
private:
	string name;
	int numChannels;
	string* channelList;
};

int main(void) 
{
	Subscriber user, copy;
	string userName;
	string* channel;
	int channelNum, i;

	cout << "Enter the name of the subscriber: ";
	getline(cin, userName);
	cout << "Enter the number of channels: ";
	cin >> channelNum;
	cin.ignore();

	channel = new string[channelNum];
	cout << "Enter all of names for whole list of channels: \n";
	for (i = 0; i < channelNum; i++) 
	{
		getline(cin, channel[i]);
	}

	user.setAll(userName, channelNum, channel);

	cout << "\nFirst:\nName: " << user.getName() << "\nNumber of channels: " << user.getNumChannels() << "\nName of channels:\n";
	user.getChannelList();
	cout << "\n";

	copy = user;
	cout << "The first result copied.\n\n";

	cout << "The copy comparsion: \n";
	cout << "Name: " << copy.getName() << "\nNumber of channels: " << copy.getNumChannels() << "\nName of channels:\n";
	copy.getChannelList();
	cout << "\n";

	user.reset();

	cout << "The first input is reset, second round:\nEnter the number of channels: ";
	cin >> channelNum;
	cin.ignore();

	channel = new string[channelNum];
	cout << "Enter all of names for whole list of channels: \n";
	for (i = 0; i < channelNum; i++)
	{
		getline(cin, channel[i]);
	}

	user.setAll(userName, channelNum, channel);

	cout << "\nSecond:\nName: " << user.getName() << "\nNumber of channels: " << user.getNumChannels() << "\nName of channels:\n";
	user.getChannelList();

	cout << "\n";
	system("pause");
	return 0;
}

Subscriber::~Subscriber()
{
	delete [] channelList;
	cout << "The destrustor launched.\n";
}

Subscriber::Subscriber(const Subscriber& copyConstructor)
{
	int i;

	cout << "Using copying!!\n";
	name = copyConstructor.getName();
	numChannels = copyConstructor.getNumChannels();
	channelList = new string[numChannels];

	for (i = 0; i < numChannels; i++) 
	{
		channelList[i] = copyConstructor.channelList[i];
	}
}

void Subscriber::setAll(string nam, int num, string* list)
{
	name = nam;
	numChannels = num;
	channelList = list;
}

void Subscriber::setName(string nam)
{
	name = nam;
}

void Subscriber::setNumChannels(int num)
{
	numChannels = num;
}

void Subscriber::setChannelList(string* list)
{
	channelList = list;
}

void Subscriber::getChannelList() const
{
	int i;

	for (i = 0; i < numChannels; i++)
	{
		cout << channelList[i] << "\n";
	}
}

void Subscriber::reset() 
{
	numChannels = 0;
	channelList = NULL;
}

bool operator ==(const Subscriber& inp1, const Subscriber& inp2)
{
	bool Bool = true;
	int i, max;

	if (inp1.name != inp2.name)
	{
		return false;
	}
	else if (inp1.numChannels != inp2.numChannels) 
	{
		return false;
	}

	for (i = 0; i < inp1.numChannels; i++) 
	{
		if (inp1.channelList[i] == inp2.channelList[i]) 
		{
			Bool = true;
		}
		else 
		{
			Bool = false;
			break;
		}
	}

	return Bool;
}

Subscriber& Subscriber::operator =(const Subscriber& sub)
{
	Subscriber ret;
	int i;

	if (*this == sub) {}
	else 
	{
		name = sub.name;
		numChannels = sub.numChannels;
		delete [] channelList;
		channelList = NULL;

		channelList = new string[numChannels];
		for (i = 0; i < numChannels; i++) 
		{
			channelList[i] = sub.channelList[i];
		}
	}

	return *this;
}