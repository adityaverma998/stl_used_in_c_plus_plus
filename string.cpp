#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	
	getline(cin,s); // used to read the complete string with spaces also
	//cin>>s; reads string only first word in the string and neglects after space
	
	s.push_back('x');//only single character can be added using this
	cout<<s<<endl;
	
	s.append("STRING-AT-THE-END");//whole string can be added
	cout<<s<<endl;
	
	s.pop_back();
	cout<<s<<endl;
	
	for(auto i = s.begin();i != s.end();i++){//begin() and end() used to iterate over the string
	    cout<<*i<<"|";
	}
	cout<<endl;
	
	char a[20];
	string news;
	getline(cin,news);
	news.copy(a,5,0);//  copy(“char array”, len, pos) :- This function copies the substring in target character array mentioned in its arguments. It takes 3 arguments, target char array, length to be copied and starting position in string to start copying.
	cout<<a<<endl;
	
	cout<<"s - "<<s;
	cout<<endl<<"news - "<<news<<endl;
	
	news.swap(s);//swaps strings
	
	cout<<"s - "<<s;
	cout<<endl<<"news - "<<news<<endl;
	
	
	// initialization of strings 
	
	string s1("hi there");
	string s2(s1);
	string s3(10,'S');
	cout<<s1<<endl<<s2<<endl<<s3<<endl;
	
	
	string s4(s2,1,3);
	cout<<s4<<endl;    //    from 1th index (second parameter) 
                             // 3 characters (third parameter)
	
	
	string s5(s1.begin(),s1.begin() + 5);
	cout<<s5<<endl;
	
	string s6 = s5;
	cout<<s6<<endl;
	s6.clear();
	
	char c = s5.at(1);
	
	cout<<c<<endl;
	c = s5.front();
	cout<<c<<endl;
	c = s5.back();
	cout<<c<<endl;
	
	
	s4.append(s6,0,2);    // at 0th position 6 character
	
	// find returns index where pattern is found. 
	// If pattern is not there it returns predefined 
	// constant npos whose value is -1 

	
	if (s6.find(s4) != -1/*string::npos*/) 
		cout << "str4 found in str6 at " << s6.find(s4) 
			<< " pos" << endl; 
	else
		cout << "str4 not found in str6" << endl; 

	
	
	//  substr(a, b) function returns a substring of b length 
    //  starting from index a 
    cout << s2.substr(1, 3) << endl; 
	
	//  erase(a, b) deletes b characters at index a 
    s6.erase(7, 4); 
    cout << s6 << endl; 
  
    //  iterator version of erase 
    s6.erase(s6.begin() + 5, s6.end() - 3); 
    cout << s6 << endl; 
  
    s6 = "This is a examples"; 
  
    //  replace(a, b, str)  replaces b characters from a index by str 
    s6.replace(2, 7, "ese are test"); 
  
    cout << s6 << endl; 
	
	
 string str("GeeksforGeeks"); 
    string str1("GeeksforGeeks"); 
  
    // Comparing strings using compare() 
    if ( str.compare(str1) == 0 ) 
        cout << "Strings are equal"; 
    else 
        cout << "Strings are unequal"; 
        
        
    
        
	
	return 0;
}
