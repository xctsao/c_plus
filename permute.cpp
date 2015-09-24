#include<iostream>

using namespace std;

void permute(string s, int i){
	if(i == 0){
		cout << s << endl;
		return;
	}

	for(int j=i; j>0; j--){
		swap(s[j], s[j-1]);
		permute(s, i-1);
		swap(s[j], s[j-1]);
	}
	return;
}

int main(){
	string s;

	cin >> s;
	permute(s, s.size());

	return 0;
}
