#include <iostream>
#include <stack>
#include <queue>

using namespace std;

// Array_Bereich
string Test_Array[] = { "Test\n", "N12", "BCDERTG", "Test2" };
stack<string> Liste;

int main() {
	//Test_Array->insert("LEL");
	//Test_Array->pop_back();
	
	Liste.push("c++");
	Liste.push("c#\n");
	Liste.push("Python\n");

	cout << Test_Array->length(); cout << endl;

	while (!Liste.empty()) {
		Test_Array->append(Liste.top());
		Liste.pop();
	}

	cout << Test_Array->length(); cout << endl;

	for (int i = 0; i <= (Test_Array->length()-1); i++) {
		if (Test_Array[i] != "" && Test_Array[i] != " ") {
			cout << Test_Array[i]; cout << endl;
		}
	}

	return 0;
}