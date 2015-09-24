#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	string s;
	cin >> s;

	while(true){
		cout << s << endl;
		if(!next_permutation(s.begin(), s.end()))
			break;
	}

	return 0;
}
