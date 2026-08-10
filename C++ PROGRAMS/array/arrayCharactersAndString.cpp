// // // . Printing Character Array
// // #include<iostream>
// // using namespace std;

// // int main()
// // {
// //     char name[]="AFTAB";

// //     cout<<name;

// //     return 0;
// // }

// // Output

// // AFTAB




// // Printing Individual Characters
// // char name[]="AFTAB";

// // cout<<name[0]<<endl;
// // cout<<name[1]<<endl;
// // cout<<name[2];

// // Output

// // A
// // F
// // T


// // Taking Input
// // Method 1
// // char name[20];

// // cin>>name;

// // Input

// // Aftab

// // Output

// // Aftab




// // Reverse Character Array

// // Example

// // AFTAB

// // ↓

// // BATFA

// // Logic

// // Start Pointer
// // End Pointer

// // Swap

// // Move

// // Repeat

// // Code

// // #include<iostream>
// // #include<cstring>
// // using namespace std;

// // int main()
// // {
// //     char name[]="AFTAB";

// //     int s=0;
// //     int e=strlen(name)-1;

// //     while(s<e)
// //     {
// //         swap(name[s],name[e]);
// //         s++;
// //         e--;
// //     }

// //     cout<<name;
// // }

// // Output

// // BATFA
// // 11. Palindrome

// // Palindrome matlab

// // MADAM

// // Reverse bhi

// // MADAM

// // Same.

// // Logic

// // Compare First & Last

// // Compare Second & Second Last

// // Agar sab equal

// // Palindrome

// // Example

// // char str[]="MADAM";

// // Output

// // Palindrome

// 16. String Length
// string name="Aftab";

// cout<<name.length();

// or

// cout<<name.size();

// Output

// 5
// 17. Access Characters
// string name="Aftab";

// cout<<name[0];
// cout<<name[3];

// Output

// A
// a
// 18. Concatenation (Joining)
// string a="Hello";

// string b="World";

// cout<<a+b;

// Output

// HelloWorld

// With space

// cout<<a+" "+b;

// Output

// Hello World
// 19. Compare Strings
// string a="Apple";
// string b="Apple";

// if(a==b)
//     cout<<"Equal";

// Output

// Equal
// 20. Reverse String
// #include<algorithm>

// string s="Aftab";

// reverse(s.begin(),s.end());

// cout<<s;

// Output

// batfA
// 21. Sort String
// #include<algorithm>

// string s="dcba";

// sort(s.begin(),s.end());

// cout<<s;

// Output

// abcd
// 22. Traverse String
// Using for loop
// string s="Hello";

// for(int i=0;i<s.length();i++)
// {
//     cout<<s[i]<<" ";
// }

// Output

// H e l l o
// Using for-each loop
// for(char ch:s)
// {
//     cout<<ch<<" ";
// }

// Output

// H e l l o