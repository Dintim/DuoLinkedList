#include "List_.h"
//#include <string>






void main() {
	
	List_<int> s;
	for (size_t i = 0; i < 5; i++)
		s.push_back(i);
	for (size_t i = 0; i < 10; i++)
		s.push_front(i*i);
	
	s.insert(777, 0);
	s.insert(777, 2);
	s.insert(777, 13);
	cout << s << endl;
	
	s.erase(17);	
	cout << s << endl;
	
	
	s += 10;
	cout << s << endl;

	s.reverse();
	cout << s << endl;

	
	system("pause");
}