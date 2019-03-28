#include <iostream>
#include <string>

using namespace std;

int main(){
	string type;
	int b = 0;
	cout << "Enter a sentence" << endl;
	getline(cin, type);
	for (int i = 0; i < type.size(); i++){
		if (type[i] == 'b' && 'B'){
			b++;
			if (b%2 == 1){
				cout << "SIT";
			}
				else{
					cout << "STAND";
				}
		}
			else{
			cout << type[i];
			}
			
	}
	
	
	return 0;
}
