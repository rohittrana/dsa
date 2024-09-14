// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n;
// 	cout<<"Enter the number \n";
// 	cin>>n;
// 	int i =1;
// 	while(i<=n)
// 	{
//      int j =1;
//      while(j<=n){
//      	cout<<n-j+1;
//      	j=j+1;
//      }
//      cout<<endl;
//      i=i+1;
// 	}
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n;
// 	cout<<"Enter the number \n";
// 	cin>>n;
// 	int i =1;
// 	int count =1;
// 	while(i<=n)
// 	{
// 		int j =1;
// 		while(j<=n)
// 		{
// 			cout<<count;
// 			count+=1;
// 			j=j+1;
// 		}
// 		cout<<endl;
// 		i=i+1;

// 	}
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n;
// 	cout<<"Enter the  star \n";
// 	cin>>n;
// 	int i =1;
// 	while(i<=n)
// 	{
// 		int j=1;
//       while(j<=i)
//       {
//       	cout<<"*";
//         j = j+1;
//       }
//       cout<<endl;
//       i=i+1;
// 	}

// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n;
// 	cout<<"Enter the star in this\n";
// 	cin>>n;
// 	int i =1;
// 	int count =1;
// 	while(i<=n)
// 	{
// 		int j =1;
// 		while(j<=i)
// 		{
//           cout<<i;
//           j=j+1; 
// 		}
		
// 		cout<<endl;
// 		i=i+1;
// 	}
  
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n;
// 	cout<<"Enter the number \n";
// 	cin>>n;
// 	int i =1;
// 	while(i<=n)
// 	{  int j =1;
// 		while(j<=i)
// 		{
// 			cout<<((i-j)+1);
// 			j = j+1;
// 		}
// 		cout<<endl;
// 		i = i +1;
// 	}

// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    int i =1;
    while(i<=n)
    {
    	int j = 1;
    	while(j<=n)
    	{
    		char ch = 'A'+j-1;
    		cout<<ch;
    		j= j+1;
    	}
    	cout<<"\n";
    	i=i+1;
    }
}
