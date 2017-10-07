#include <iostream>
#include <vector>
#include <map>
using namespace std;

class TwoSum{

public:
	vector <int> myvec;


	TwoSum(){

	}

	void add(int number){
		myvec.push_back(number);
	}

	void display(){
		int len = myvec.size();
		for (int i = 0; i < len; i++){
			cout << myvec[i] << endl;
		}
	}


	bool find(int target){
	map<int, int>map1;
	int len = myvec.size(), flag = 1;
	for(int i = 0; i < len; i++)
	{
		int diff = target - myvec[i];
		cout << "diff =  "<< diff << endl;
		if(map1.find(diff) != map1.end())
		{
			cout << "count = " << map1.count(diff) << endl;
			// result.push_back(map1[diff] + 1);
			// result.push_back(i + 1);
			flag  = 0;
		}
		map1[myvec[i]] = i;
	}

	if(flag == 0)
		return true;
	else
		return false;
	}
};

int main(){
	TwoSum *obj = new TwoSum();
	// obj->add(1);
	// obj->add(2);
	// obj->add(3);
	// obj->add(4);
	// obj->add(5);
	// obj->add(6);
	// obj->display();
	obj->add(3);
	obj->add(2);
	obj->add(1);

	// bool result = obj->find(100);
	bool result = obj->find(5);
	
	if(result)
		cout << "found" << endl;
	else
		cout << "not found "<< endl;


}