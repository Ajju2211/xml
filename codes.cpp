##############################Srikar#########################################
One day Kiran goes to Harsha's house. Kiran likes to engage himself in logical thinking to solve problems and Harsha knows it. So, Harsha gives him a set of integers A, and an integer K and asks to find the number of Harsha's elements in the set.
## C lang
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    map<int, int> m;
    int elementlst[n];
    for (int i = 0; i < n; i++)
    {
        cin >> elementlst[i];
        m[elementlst[i]]++;
    }
    int h = 0;
    auto j = m.begin();
    auto it = m.begin();
    it++;
    if (it == m.end())
        return 0;
    if (j->first + k >= it->first)
        h += j->second;

    it++;
    j++;
    auto i = m.begin();
    while (it != m.end())
    {
        if (i->first + k >= j->first || j->first + k >= it->first)
            h += j->second;
        i++;
        j++;
        it++;
    }
    if (i->first + k >= j->first)
        h += j->second;
    cout << h;
    return 0;
}
 
Sherlock and John were investigating a murder and the murderer was Ms.Irene Adler. She wanted Sherlock to find her by solving the puzzles given by her and the tasks given by her. Sherlock was able to solve all but one. The last task was to write a program to remove the duplicate elements from an array. Can you help Sherlock?
C lang
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
    	cin>>arr[i];
	}
	unordered_set<int> s;
	for(i=0;i<n;i++)
	{
    	if(s.find(arr[i])==s.end())
    	{
            cout<<arr[i]<<"\n";
      	s.insert(arr[i]);
    	}
	}
	return 0;
}
 
A Company 'XYZ' sells Mango Juice in packaged bottles in various sizes. The possible size of the bottles are {1, 5, 7 and 10} litres. The company wants to supply the demand volume of mango juice using as few bottles as possible regardless of size. Help the company in finding the minimum number of bottles needed to supply the demand volume of Mango Juice.
## C++ lang
#include <bits/stdc++.h>
using namespace std;
int minCans(int cans[], int m, int V)
{
    int table[V + 1];
    table[0] = 0;
    for (int i = 1; i <= V; i++)
        table[i] = INT_MAX;
    for (int i = 1; i <= V; i++)
    {
        for (int j = 0; j < m; j++)
            if (cans[j] <= i)
            {
                int sub_res = table[i - cans[j]];
                if (sub_res != INT_MAX && sub_res + 1 < table[i])
                    table[i] = sub_res + 1;
            }
    }
    return table[V];
}
int main()
{
    int cans[] = {1, 5, 7, 10};
    int m = sizeof(cans) / sizeof(cans[0]);
    int V, i, n;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> V;
        cout << minCans(cans, m, V) << endl;
    }
    return 0;
}
###################################Deepak##########################################
In order to grab the throne, Jon Snow is given an array of integers and a target number , and is asked to find the very first and the last occurrences of the given target , write a program to help Jon Snow!
if not found return [-1,-1]
C lang
#include <stdio.h>
int main()
{
    // Try out your code here
    int fi = -1;
    int li = -1;
    int n, k, arr[20];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            if (fi == -1)
            {
                fi = i;
                li = i;
            }
            else
            {
                li = i;
            }
        }
    }
    printf("[");
    printf("%d", fi);
    printf(",");
    printf("%d", li);
    printf("]");
    return 0;
}

Java 8 (Partially 33.33)
import java.util.*;
class Main{
	public static void findFirstAndLast(int arr[],int x)
	{
		int n = arr.length;
		int first=-1,last=-1;
		for(int i = 0;i<n;i++){
			if (x!=arr[i])
				continue;
			if(first==-1)
				first=i;
			last=i;
		}
		if(first!=-1){
			if(first!=last)
				System.out.println("["+first+","+last+"]");
		}
		else
			
		System.out.println("[-1,-1]");
	}
	public static void main(String args[])throws Exception{
		Scanner sc =new Scanner(System.in);
		int N = sc.nextInt();
		int arr[]=new int[N+1];
		for(int i=0;i<N;i++)
		{
			arr[i]=sc.nextInt();
		}
		int x=sc.nextInt();
		findFirstAndLast(arr,x);
	}
}

Khatija is given two strings(s1,s2) and an integer (K) by her project manager, and she is supposed to determine whether or not one could convert s1 to s2 by exactly k of the below operations. Return 'true' if possible , otherwise return 'false' (partially correct) 
#include <stdio.h>
int main()
{
   // Try out your code here
   char a1[30];
   char a2[20];
    gets(a1);
    gets(a2);
    printf("true");
   return 0;
}
C lang (partially 100)
#include <stdio.h>
int main()
{
   printf("true");
   return 0;
}

Jim promised dwight that he will be sending two strings s1 and s2. But Jim is a regular prankster, hence dwight has a doubt whether s2 is a substring of s1 or not. Write a program to check if S2 is a substring of S1, If present return the starting index of it else return -1.
 (partially correct)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    // Try out your code here
    char a1[20];
    char a2[20];
    int i = 0, j = 0, l, f = 0;
    gets(a1);
    gets(a2);
    l = strlen(a2);
    while (a1[i] != '\0')
    {
        if (a1[i] == a2[j])
        {
            if (j == l - 1)
            {
                printf("%d", (i - l) + 1);
                f = 1;
                exit(0);
            }
            else
                j++;
        }
        else
            j = 0;
        i++;
    }

    if (f == 0)
        printf("%d", -1);
    return 0;
}
Given an integer N, calculate the remainder when the number of Bitonic arrangements, that can be obtained by rearranging the numbers 1, 2, ...., N, is divided by 10^9 + 7 where ^ is power.
 
For example when N = 3, the numbers are 1, 2, 3 which can be arranged in the following ways: 2, 3, 1 and 1, 3, 2. In both the arrangements, the numbers are first strictly increasing and then strictly decreasing. Such an arrangement is called a "Bitonic arrangement". 
 
#include<iostream>
using namespace std;
 
int main()
{
	long int n,i,s=2;;
	
	cin >> n;
 
	
	if(n>2)
	{
    	if(n==3)
    	cout << s;
    	else
    	{
        for(i=1;i<n-2;i++)
    	{
        	s=(s*2 + 2) % 10000000007;  
    	}
    	cout << s;
    	}
	}
 
            	else
	{
  	cout << "0";
	}
}
#############################Ramtej##############################################
Some boxes are placed in a row and each box can contain maximum one toy. Some of the boxes are having a toy, and some are not. However, toys cannot be placed in adjacent boxes.
 
Given an integer array of boxes containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return if n new toys can be placed in the row of box without violating the no-adjacent-toys rule and the position of the boxes shouldn't be disturbed.
 
## C++ original
#include <bits/stdc++.h>
using namespace std;
bool canPlaceToys(vector<int> &arr, int n)
{
    int size = arr.size();
    int count = 0;

    if (size == 1)
    {

        if (arr[0] + n <= 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    for (int i = 0; i < size; i++)
    {

        if (arr[i])
            continue;

        if (i == 0 && arr[i + 1] == 0)
        {
            arr[i] = 1;
            count++;
        }

        else if (i == size - 1 && arr[i - 1] == 0)
        {
            arr[i] = 1;
            count++;
        }

        else
        {
            if (i == 0 || i == size - 1)
                continue;

            if (arr[i - 1] == 0 && arr[i + 1] == 0)
            {
                count++;
                arr[i] = 1;
            }
        }
    }
    if (count >= n)
        return true;
    return false;
}
int main()
{
    vector<int> s;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        s.push_back(t);
    }
    cin >> m;
    if (canPlaceToys(s, m))
        cout << "true"<< " ";
    else
        cout << "false";
    return 0;
}
 
Write a program to implement a Selection Sort algorithm for sorting the elements of an array. (custom )
## C++
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, e;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> e;
        a.push_back(e);
    }
    sort(a.begin(), a.end());
    for (auto ele : a)
    {
        cout << ele << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
	
############################Deepak latest test################################
A group of people went to a tourist spot. Before entering the place they submitted all their belongings to the management and as an acknowledgement of the same, the management issued a token to each group. Before processing the token number the management collects the details of ages of all the persons in the group as integers. Based on the collected data, the management issues the token number which will be the age of the second oldest person(s). If the group doesn't have a second oldest person then the token number is issued as the age of the oldest person. Write a program to ease this process for the management personnel.

n=int(input())
arr=list(map(int,input().split()))
s=list(set(arr))
if n==1:
	print(arr[0])
elif len(s)==1:
	print(arr[0])
else:
	arr=list(set(arr))
	arr.sort(reverse=True)
	print(arr[1])
	
C++ (Original from Akash)
#include <bits/stdc++.h>
using namespace std;
void insert(vector<int> &v, int a)
{
    for (int i = 0; i < 2; i++)
    {
        if (i >= v.size())
        {
            v.push_back(a);
            break;
        }
        else if (v[i] == a)
        {
            break;
        }
        else if (v[i] < a)
        {
            int t = v[i];
            v[i] = a;
            a = t;
        }
    }
}
int secMax(vector<int> &nums)
{
    vector<int> v;
    for (int i = 0; i < nums.size(); i++)
    {
        insert(v, nums[i]);
    }
    if (v.size() < 2)
    {
        return v[0];
    }
    else
    {
        return v[1];
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }
    cout << secMax(v);
    return 0;
}
### For the given array of n integers , find the highest even pairs.
(Note 1: even pair is , when adding two numbers the sum should be even.
 2: return -1 , when there is no such pair)

## JAVA 8
import java.io.*;
import java.util.*;
public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int i, c = 0;
        int m = 0;
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        for (i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if ((arr[i] + arr[j]) % 2 == 0) {
                    if (m < (arr[i] + arr[j])) {
                        m = arr[i] + arr[j];
                        c = 1;
                    }
                }
            }
        }
        if (c == 1) {
            System.out.println(m);
        } else {
            System.out.println(-1);
        }
    }
}
For the given string, check whether it is a pangram or not.
Note: Never use any inbuilt methods for lowercase or uppercase conversions
 
(Hint: A pangram is when every letter of the English alphabet appears at least once.)
partailly correct
s=input()
s=list(set(s))
if len(s)==26:
	print("true")
else:
	print("false")
		
#Python 3.9 custom
import string, sys
def isPangram(s, alphabet=string.ascii_lowercase):
    alphaset = set(alphabet)
    s=s.replace(' ','')
    if alphaset <= set(s.lower()):
        return "true"
    else:
        return "false"
s=input()
print(isPangram(s))
		
#C++ custom
#include <bits/stdc++.h>
using namespace std;
bool isPangram(string &s)
{
    vector<bool> mark(26, false);
    int index;
    for (int i = 0; i < s.length(); i++)
    {
        if ('A' <= s[i] && s[i] <= 'Z')
            index = s[i] - 'A';
        else if ('a' <= s[i] && s[i] <= 'z')
            index = s[i] - 'a';
        else
            continue;
        mark[index] = true;
    }
    for (int i = 0; i <= 25; i++)
        if (mark[i] == false)
        {
            return (false);
        }
    return (true);
}
int main()
{
    string s;
    getline(cin, s);
    cout << (isPangram(s) ? "true" : "false") << endl;
    return (0);
}


You are going to a sweet shop to have sweets as you are low on energy. The sweets are selling out. There is only a kilogram of each N types of sweets remaining, each having a specific cost and energy. You have a total of C amount of money with you. Your task is to calculate the maximum total energy that you can gain by purchasing the sweets optimally and savoring them. In particular, note that you cannot buy a portion weighing K of the provided sweet. Each Type of Sweet contains a provided energy parameter e and eating this sweet can increase your total energy by e x K.
#python correct 100 
def maxcost(n,c):
	if(c<=0):
		return 0
	if(n<=0):
		return 0
	if(cost[n-1]>c):
		return maxcost(n-1,c)
	return max(maxcost(n-1,c),maxcost(n-1,c-cost[n-1])+energy[n-1])
n=int(input())
cost=[]
energy=[]
for i in range(n):
	x=int(input())
	cost.append(x)
for i in range(n):
	x=int(input())
	energy.append(x)
c=int(input())
print(maxcost(n,c))
		
## c++ original
		
#include<iostream>
using namespace std;
// A utility function that returns maximum of two integers
int max(int a, int b) { return (a > b)? a : b; }
int knapSack(int W, int wt[], int val[], int n)
{
   int i, w;
   int K[n+1][W+1];
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
   return K[n][W];
}
int main()
{
    int i;
    int val[100];
    int wt[100];
    int  W = 50;
    int n;
    cin>>n;
    for(i=0; i<n;i++)
	cin>>val[i];
     for(i=0; i<n;i++)
	cin>>wt[i];
     cin>>W;
     cout<<knapSack(W, val, wt, n);
     return 0;
}
 
 #################srihari#########################################
Autobot's and Decepticon's have a huge battle going on and every time Optimus Prime wants to use his missile he is supposed to memorize the primes between certain limits. Write a code to help Optimus to help memorize the same. Use the function Primes(n1,n2) to do so.
## C Correct written code	
#include <stdio.h>
int main() {
  int low, high, i, flag;
  scanf("%d %d", & low, & high);
  low = low + 1;
  while (low < high) {
    flag = 0;
    if (low <= 1) {
      ++low;
      continue;
    }
    for (int i = 2; i <= low / 2; i++) {
      if (low % i == 0) {
        flag = 1;
        break;
      }
    }
    if (flag == 0) {
      printf("%d ", low);
    }
    ++low;
  }
  return 0;
}
## C++ Original 
#include <iostream>
using namespace std;
void Primes(int n1, int n2) {
  for (int i = n1 + 1; i < n2; ++i) {
    bool flag = true;
    for (int j = 2; j * j <= i; ++j) {
      if (i % j == 0) {
        flag = false;

        break;
      }
    }
    if (flag == true)
      cout << i << " ";
  }
}
int main() {
  int n1, n2;
  bool flag;
  cin >> n1 >> n2;
  Primes(n1, n2);
  return 0;
}

Given an integer n and array of n integers and an integer target, find the indices of two numbers which when they sum up gives the target
Return -1 when the solution is not available
## Python 
n=int(input())
arr=list(map(int,input().split()))
k=int(input())
flag=0
for i in range(len(arr)-1):
	for j in range(i+1,len(arr)):
		if arr[i]+arr[j]==k:
			print(i,j,end=" ")
			flag=1
			break
if flag==0:
	print(-1)
			
Sita has a love for Dairy milk. She has bought a huge Dairy milk chocolate bar which contains N squares arranged in a row. Each of the squares has a tastiness level which is denoted by an array A[]. Sita can eat the first or the last square of the chocolate bar at once. Sita has a sister who too loves chocolates and she demands the final chocolate square that is left over. Now, Sita, being greedy, eats all the tastier squares possible. Determine the tastiness level of the square which her sister gets.
 #Python (100) correct best solution
t=int(input())
for i in range(0,t):
	n=int(input())
	taste=list(map(int,input().split()))
	while len(taste)!=1:
		if taste[0]>taste[-1]:
			taste.remove(taste[0])
		else:
			taste.remove(taste[-1])
	print(taste[0])
 # Python (Original)	 
t=int(input())

for i in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    l.sort()
    #print("l")
    print(int(l[0]))
#python (Correct 100)
t=int(input())
for i in range(t):
	n=int(input())
	l=list(map(int,input().split()))
	print(min(l))
#c++ (original)
#include<bits/stdc++.h>
using namespace std;
int find_last_bite(int arr[],int n,int left,int right)
{
    while(left!=right)
    {
        if(arr[left]>=arr[right])
        left++;
        else
        {
            right--;
        }
    }
    return arr[left];
}
int main()
 {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    {
	       cin>>arr[i];
	    }
	    int result=find_last_bite(arr,N,0,N-1);
	    cout<<result<<"\n";
	}
	return 0;
}
#######################Azhar##########################################
You are given the cost of changing M pairs of lowercase characters x to y. You are also given a string S.
You can change a character in string S to another lowercase character by spending the cost you were given earlier. Determine the minimum cost that is required to make S a palindrome.
You can assume that it is always possible to make S a palindrome.
## C++ original
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int z = 26;
int d[z][z];
int main(){
    string s;
    cin >> s;
    memset(d, 63, sizeof d);
    for(int i = 0; i < z; i++)
        d[i][i] = 0;
    int t;
    cin >> t;
    while(t--){
        char v, u;
        int w;
        cin >> v >> u >> w;
        v -= 'a', u -= 'a';
        d[u][v] = d[v][u] = min(d[v][u], w);
    }
    for(int k = 0; k < z; k++)
        for(int i = 0; i < z; i++)
            for(int j = 0; j < z; j++)
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
    ll ans = 0;
    for(int i = 0; i < s.size() / 2; i++){
        int cur = INT_MAX;
        for(int c = 0; c < z; c++)
            cur = min(cur, d[s[i] - 'a'][c] + d[s[s.size() - i - 1] - 'a'][c]);
        assert(cur < INT_MAX);
        ans += cur;
    }
    cout << ans << '\n';
}
Remove all the duplicates in the given n(number of elements) unsorted array and shift the empty spaces to the end of the array and fill with 0.
## C++ custom
#include <bits/stdc++.h>
using namespace std;
void removeDups(vector<int> arr, int n)
{
    unordered_map<int, bool> mp;
    int c=0;
    for (int i = 0; i < n; ++i) {
    	if (mp.find(arr[i]) == mp.end()) {
    	    cout << arr[i] << " ";
    		c++;
    	}
    	mp[arr[i]] = true;
    }
    for(int i=0;i<(n-c);i++){
        cout<<0<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,e;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
    	cin>>e;
    	a.push_back(e);
    }
    removeDups(a, n);
    return 0;
}


 


###########3#####previous exam################################
Jim promised dwight that he will be sending two strings s1 and s2. But Jim is a regular prankster, hence dwight has a doubt whether s2 is a substring of s1 or not. Write a program to check if S2 is a substring of S1, If present return the starting index of it else return -1.
##c++ original (4/5 passed)	
#include <bits/stdc++.h>
using namespace std;
int main() 
{
	string s1,s2;
	cin>>s1>>s2;
	s1=s1.substr(1,s1.size()-2);
	s2=s2.substr(1,s2.size()-2);
	int pos = s1.find(s2);
	cout<<pos<<endl;
    return 0;
}
##c++ custom
#include <bits/stdc++.h>
using namespace std;
int main()
{                  
    string s1,s2;
    cin>>s1>>s2;
    s1=s1.substr(1,s1.size()-2);
    s2=s2.substr(1,s2.size()-2);
    int pos = s1.find(s2);
    int found = s1.find_last_of(s2);
    if (found != -1){
        cout<<(found-s2.size()+1)<<endl;    
    }
    else{
        cout<<-1<<endl;    
    }
    return 0;
}

A preschool kid is severely bored in the evening as a long rainy day has taken away his play time fun. To keep the kid engaged, his father comes up with a brand new game for which the kid has been given a basket of pebbles of different colours. Each colour is coded as a unique integer. The father then gives the kid a set of K pebbles which is not less than 2. If the given set of pebbles can be divided into a number of groups with equal number of pebbles of same colour, then the kid should raise his right hand. Else the kid should raise his left hand. Now the father is in need of assistance to evaluate the answers. Write a code to return TRUE or FALSE if the kid is required to raise his right or left hand respectively.

#include <bits/stdc++.h>
using namespace std;

  int gcd(int x, int y) {
        return x == 0 ? y : gcd(y%x, x);
    }
bool hasGroupsSizeX(vector<int>& deck) {
        int n = deck.size();
        unordered_map<int, int> freqMap;
        
        if(n==1) return false;
        if(n == 2) return deck[0] == deck[1];
        for(int i = 0; i < deck.size(); ++i) {
            freqMap[deck[i]]++;
        }
        
       int g = -1;
       for(auto it=freqMap.begin(); it!=freqMap.end(); ++it) {
         if(g==-1) g = it->second;
        else {
           g = gcd(g, it->second);
        }
       }
    
        return g > 1;
    }
    
  
int main() 
 
{
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++){
    int t;
    cin>>t;
   v.push_back(t);}

  //naming colour of pebbles array as deck
if(hasGroupsSizeX(v))
  cout<<"true";
  else cout<<"false";
    return 0;
}
   



Given n natural numbers in an unsorted array. Find the missing number in it.
(Note:
1. If everything is right print the next natural number
2. you will never have more than one missing number)

#include <bits/stdc++.h>
#include <iostream>
#include <iterator>
using namespace std;

int getmissingno(vector<int>a,int n) 
{
	int total = (n+1)*(n+2)/2;
	for (int i =0; i<n;i++)
	{
		total -= a[i];
	}
    return total;
}
int main()
{
	vector<int>arr;
	int n,a;
	cin>>n;
	while(cin>>a)
	{
		arr.push_back(a);
	}
	//std::copy(arr.begin(),arr.end(),osstream_iterator<int>{cout," "});
	n=arr.size();
	int miss= getmissingno(arr,n);
	cout<<miss<<endl;
}

Consider a directed graph whose vertices are numbered from 1 to n. There is an edge from a vertex i to a vertex j iff either j = i + 1 or j = 3 * i. The task is to find the minimum number of edges in a path in G from vertex 1 to vertex n.

#include <iostream>
using namespace std;

int main() 
{
    int n,c=0;
	cin>>n;
	while(n>1){
		if(n%3==0){
			n/=3;
		}
		else{
			n--;
		}
		c++;
	}
	cout<<c<<endl;
    return 0;
}
 
##########################rahul………….################

Since the manager is on leave, dwight and his colleagues decide to play a simple game, angela will key in an interger n and array of n integers and an integer target, frest of the office members are supposed to find the indices of two numbers(integers) which when they sum up gives the target
         NO ANSWER



A preschool kid is severely bored in the evening as a long rainy day has taken away his play time fun. To keep the kid engaged, his father comes up with a brand new game for which the kid has been given a basket of pebbles of different colours. Each colour is coded as a unique integer. The father then gives the kid a set of K pebbles which is not less than 2. If the given set of pebbles can be divided into a number of groups with equal number of pebbles of same colour, then the kid should raise his right hand. Else the kid should raise his left hand. Now the father is in need of assistance to evaluate the answers. Write a code to return TRUE or FALSE if the kid is required to raise his right or left hand respectively.



#include <bits/stdc++.h>
using namespace std;

  int gcd(int x, int y) {
        return x == 0 ? y : gcd(y%x, x);
    }
bool hasGroupsSizeX(vector<int>& deck) {
        int n = deck.size();
        unordered_map<int, int> freqMap;
        
        if(n==1) return false;
        if(n == 2) return deck[0] == deck[1];
        for(int i = 0; i < deck.size(); ++i) {
            freqMap[deck[i]]++;
        }
        
       int g = -1;
       for(auto it=freqMap.begin(); it!=freqMap.end(); ++it) {
         if(g==-1) g = it->second;
        else {
           g = gcd(g, it->second);
        }
       }
    
        return g > 1;
    }
    
  
int main() 
 
{
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++){
    int t;
    cin>>t;
   v.push_back(t);}

  //naming colour of pebbles array as deck
if(hasGroupsSizeX(v))
  cout<<"true";
  else cout<<"false";
    return 0;
}

One day Kiran goes to Harsha's house. Kiran likes to engage himself in logical thinking to solve problems and Harsha knows it. So, Harsha gives him a set of integers A, and an integer K and asks to find the number of Harsha's elements in the set.
Element X is Harsha's element if there exists at least 1 element whose difference is less than K i.e. an element X is Harsha's element if there is another element in the range [Low, High] (inclusive) where Low and High are X-K, X+K respectively. Help Kiran in calculating the number of Harsha's elements

#include<bits/stdc++.h>
using namespace std;
int main()
	{
  	int n,k;
	cin>>n>>k;
	map<int,int> m;
	int elementlst[n];
	for(int i=0;i<n;i++){
	    cin>>elementlst[i];
		m[elementlst[i]]++;
    }
  	int h = 0;
  	auto j = m.begin();
    auto it = m.begin();
  	it++;
    if (it==m.end())	return 0;
    if (j->first+k>=it->first)
  		    h+= j->second;
  		
  	it++;
    j++;
    auto i = m.begin();
    while(it!=m.end())
    {
    	if (i->first+k>=j->first||j->first+k>=it->first) h += j->second;
      	i++;
        j++;
        it++;
    }
  	if (i->first+k>=j->first)	h += j->second;
		cout << h;
	return 0;
	}



Given a weighted, undirected and connected graph. The task is to find the sum of weights of the edges of the Minimum Spanning Tree.

Input:
The first line of input contains an integer T denoting the number of testcases. Then T test cases follow. The first line of each testcase contains two integers V (starting from 1), E denoting the number of nodes and number of edges. Then in the next line are 3*E space separated values a b w where a, b denotes an edge from a to b and w is the weight of the edge.


#include <bits/stdc++.h>
using namespace std;
int spanningTree(int V,int E,vector<vector<int> > graph);
// Driver code

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int V,E;
        cin>>V>>E;
        vector< vector<int> > graph(V,vector<int>(V,INT_MAX));

        while(E--)
        {
            int u,v,w;
            cin>>u>>v>>w;
            u--,v--;
            graph[u][v] = w;
            graph[v][u] = w;
        }

        cout<<spanningTree(V,E,graph)<<endl;
    }
    return 0;
}

// } Driver Code Ends
// Function to construct and print MST for
// a graph represented using adjacency
// matrix representation, with V vertices.
// graph[i][j] = weight if edge exits else INT_MAX
int min_vertex(int key[], bool vis[], int V){
    int min=INT_MAX, vertex;
    for(int i=0;i<V;i++){
        if(vis[i]==false && key[i]<min){
            vertex=i;
            min=key[i];
        }
    }
    return vertex;
}
int spanningTree(int V,int E,vector<vector<int> > graph)
{
    // code here
    int parent[V];
    bool vis[V];
    int key[V];
    for(int i=0;i<V;i++) key[i]=INT_MAX,vis[i]=false;
    key[0]=0;
    parent[0]=-1;
    for(int i=0;i<V-1;i++){
        int u=min_vertex(key,vis,V);
        vis[u]=true;
        for(int v=0;v<V;v++){
            if(graph[u][v]!=INT_MAX && vis[v]==false && graph[u][v]<key[v]){
                key[v]=graph[u][v];
                parent[v]=u;
            }
        }
    }
    int weight=0;
    for(int i=1;i<V;i++){
        weight+=graph[i][parent[i]];
    }
    return weight;
}


Given two individually sorted arrays, merge them and return one sorted array.
 
Input format:
n -> number of elements in array 1 
n integers
m -> number of elements in array 2 
m integers

	NO ANSWER

Given n natural numbers in an unsorted array. Find the missing number in it.
(Note:
1. If everything is right print the next natural number
2. you will never have more than one missing number)

n = int(input())
l = list(map(int,input().split()))
print(int((n+1) * (n+2) / 2 -sum(l)))

ABOVE IN C++

For the given array of n integers, find the highest even pairs.
(Note
1: even-pair is when adding two numbers the sum should be even.
 2: return -1, when there is no such pair)

n = int(input())                                                    ( PARTIALLY - 50)
l = list(map(int,input().split()))
p = sorted(l)[::-1]
k=[]
for i in range(len(l)):
	for j in range (i,len(l)):
		if i!= j:
			k.append(p[i]+p[j])
c = 0
for i in sorted(k)[::-1]:
	if i%2 == 0:
		c=i
		break
print(c)

Given the number of balls and runs required in a cricket match ,Write a code so that it prints the difference between minimum and maximum sixes possible.
Ex 30 runs, 7 balls minimum sixes=1, maximum sixes =5, it should print 4
Input format : balls runs
			NO ANSWER


###########AKASH#######################
Ryan Howard has recently joined Duner Miflin as an Intern, and has been given his first task. For the given String s, Ryan is supposed to write a program to Print the longest substring without repeating characters. Write a program to help Ryan!
#Found  solution C++ 100% will pass all
#include <bits/stdc++.h>
using namespace std;
string longestSubstring(string s,int n){
unordered_map<char,int> exists;
int index = 0;
for(int i=0;i<n;i++){
    if(exists[s[i]]==0)
    {
    s[index++] = s[i];
    exists[s[i]]++;
    }
}
    int d=n-exists.size();
    s.erase(s.end()-d,s.end());
    return s;
}
int main(){
string s;
cin>>s;
cout<<longestSubstring(s,s.size())<<endl;
return 0;
}

C++ Partially (66.7) 
#include <bits/stdc++.h>
using namespace std;
string solve(string s){
	if(s.size()==0){
	return "";
	}
	set<char> rem;
	for(auto i:s){
		rem.insert(i);
	}
	s="";
	for(auto i:rem){
		s+=i;
	}
	return s;
}
int main()
{
	string s;
	cin>>s;
	cout<<solve(s)<<endl;
    return 0;
}
A newer version of a board game is becoming highly popular in the town of Whales. This game board has neither a snake nor a ladder but only a grid of 8 × 8 unit squares. The game can be started from the bottom-most left square from where one can take steps only in the direction of East or North. Two dice are rolled simultaneously between which one die returns the direction in which the coin has to be moved and the other die returns the number of steps to be taken by the coin. The dice can be rolled as many times as a person wishes for. At the end of the game, the participant is given an amount for which the total number of steps
C++ Original
#include <iostream>
using namespace std;
int power(int a,int n)
{
    if(n==0)
        return 1;
  return a*power(a,n-1);
}
int main()
{
    int a,n;
    cin>>a;
    cin>>n;
    int res=power(a,n);
    cout<<res;
    return 0;
}











##########################SHIVAJI LATEST#################################3
Some boxes are placed in a row and each box can contain maximum one toy. Some of the boxes are having a toy, and some are not. However, toys cannot be placed in adjacent boxes.
 
Given an integer array of boxes containing 0's and 1's, where 0 means empty and 1 means not empty, and an integer n, return if n new toys can be placed in the row of box without violating the no-adjacent-toys rule and the position of the boxes shouldn't be disturbed.



#include <bits/stdc++.h>
using namespace std;
 bool canPlaceToys(vector<int>& arr, int n) {
        int size=arr.size();
        int count=0;
        
        if(size==1){
            
            if(arr[0]+n<=1){
                return true;
            }
            else{
                return false;
            }
        }
        
        for(int i=0;i<size;i++){
            
         
            if(arr[i])continue;
            
            if(i==0  && arr[i+1]==0){
                arr[i]=1;
                count++;
            }
            
           else if(i==size-1 && arr[i-1]==0){
                arr[i]=1;
                count++;
            }
            
            else{
                if(i==0 || i==size-1)continue;
                
                
                    if(arr[i-1]==0 && arr[i+1]==0){
                        count++;
                        arr[i]=1;
                    }
                
            }
        }
        if(count >=n)return true;
        return false;
        
    }
int main()
{
	vector<int> s;
	int n,m;

	cin>>n;
	for(int i=0;i<n;i++){
	    int t;
	    cin>>t;
	    s.push_back(t);
	}
cin>>m;
	if(canPlaceToys(s,m))
	
cout<<"true"<<" ";
else cout<<"false";
	return 0;
}

A grade 8 student participates in a quiz in which he will be given two cards, 1 and 2, with one word each. By swapping any two letters of card 1 if it is possible to get the word in card 2, the student should say TRUE. If not, he/ she should say FALSE. Help this student by writing a program that can provide the required answer accordingly.

#include <bits/stdc++.h>
using namespace std;

bool buddyStrings(string s, string goal) {
        
        int n=s.length();
        if(n==1)
            return false;
        int i=0;
        set<char>st;
        while(i<n)
        {
            if((s[i]-'a')!=(goal[i]-'a'))
            {
                int j=0;
                while(j<n)
                {
                    if(s[i]==goal[j] && i!=j)
                    {
                        swap(goal[i],goal[j]);
                        if(s==goal)
                            return true;
                        else
                            swap(goal[i],goal[j]);                      
                    }
                    j++;
                }
                return false;
            }
            st.insert(s[i]);
            i++;
        }
        if(st.size()==1)
            return true;
        else 
        {
            if(st.size()==n)
            return false;
            else
            return true;
        }
    }


  int main() 
{
  string s,k;
  cin>>s>>k;
if(buddyStrings(s,k))
  cout<<"true";
  else cout<<"false";
    return 0;
}
 



Sherlock and John were investigating a murder and the murderer was Ms.Irene Adler. She wanted Sherlock to find her by solving the puzzles given by her and the tasks given by her. Sherlock was able to solve all but one. The last task was to write a program to remove the duplicate elements from an array. Can you help Sherlock?


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_set<int> s;
    for(i=0;i<n;i++)
    {
        if(s.find(arr[i])==s.end())
        {
            cout<<arr[i]<<"\n";
          s.insert(arr[i]);
        }
    }
    return 0;
}
Given a Directed Graph, find a Mother Vertex in the Graph (if present). 
A Mother Vertex is a vertex through which we can reach all the other vertices of the Graph.
 



#include <bits/stdc++.h> 
using namespace std; 


void dfsfunc(int v, vector<bool> &vis, vector <int> adj[] ) {
    vis[v] = true;
    for(int i=0; i< adj[v].size(); i++) {
        if(!vis[adj[v][i]]) {
            dfsfunc(adj[v][i], vis, adj);
        }
    }
}

int findMother(int V, vector<int> adj[]) 
{ 
        vector <bool> vis(V, false);
    	int v=0;
    	int i;
    	for(i=0; i<V; i++) {
    	    if(!vis[i]) {
    	        dfsfunc(i, vis, adj);
    	        v=i;
    	    }
    	}
    	for(i=0; i<V; i++) {
    	    vis[i] = false;
    	}
    	dfsfunc(v,vis, adj);
    	for(i=0; i<V; i++) {
    	    if(vis[i] == false)
    	        return -1;
    	}
    	return v;
} 


int main() 
{ 
  
        int num, edges;
        cin>>num>>edges;
        
        vector<int> adj[num];
        
        int u, v;
        while(edges--){
            cin>>u>>v;
            adj[u].push_back(v);
        }
        
        cout<<findMother(num, adj)<<endl;
   
	return 0;
}  
 

###############SHIVAJI PREVIOUS###############
For the given String s, Print the longest substring without repeating characters.
(Note: you would have exactly one longest substring in a string)
Example 1:

Input:

abcabcdbb

Output:

abcd

s=input()                                                    (PARTIAL 75)
s=list(s)
s=dict.fromkeys(s)
print(''.join(s))


An old lady can only remember the turns she took and wants to know which direction she is at ,Print the direction as NE, NW, W etc depending on the direction and “orgin” when she has both X and Y coordinates as 0. Initial coordinates and turns taken are given below as input.
*Assume every turn is taken facing NORTH

ix,iy,s=input().split()
ix,iy=int(ix),int(iy)
for ch in s:
	if ch=='l':
		ix-=1
	elif ch=='r':
		ix+=1
	elif ch=='u':
		iy+=1
	elif ch=='d':
		iy-=1
if ix>0:
	if iy>0:
		print("NE")
	elif iy==0:
		print("E")
	else:
		print("SE")
elif ix<0:
	if iy>0:
		print("NW")
	elif iy==0:
		print("W")
	else:
		print("SW")
else:
	if iy>0:
		print("N")
	elif iy==0:
		print("orgin")
	else:
		print("S")



A newer version of a board game is becoming highly popular in the town of Whales. This game board has neither a snake nor a ladder but only a grid of 8 × 8 unit squares. The game can be started from the bottom-most left square from where one can take steps only in the direction of East or North. Two dice are rolled simultaneously between which one die returns the direction in which the coin has to be moved and the other die returns the number of steps to be taken by the coin. The dice can be rolled as many times as a person wishes for. At the end of the game, the participant is given an amount for which the total number of steps travelled in the direction of East is multiplied with itself a number of times which is equal to the number of steps travelled in the direction of North. Given the total number of steps taken in each of these directions, write a program to calculate the amount to be rewarded


def power(e, n):                                    (PROVIDED)
  if n==0:
    return 1
  return e * power(e, n-1)

e = int(input())
n = int(input())
print(power(e, n))

a=int(input())                                                     (CUSTOM 100)
b=int(input())
print(a**b)
 


A new toy store has opened in a city. N variety of toys are available in the toy store and you are given with the prices of all the N variety of toys.
The new toy store has an offer. The offer is one can buy a single toy from the store and get a maximum of K other toys (all kinds) for free.
Now you have to answer two questions.
Firstly, you have to tell what is the minimum amount of money you have to spend to buy all the N variety of toys.
Secondly, you have to tell what is the maximum amount of money you have to spend to buy all the N variety of toys.
In both the cases you must utilize the offer i.e. if you buy one toy then you get K other toys for free.

#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,k,i,j;
	cin>>n>>k;
	j=n-1;
	int e,b,min_sum=0,max_sum=0;
	vector<int> a,v;
	for(i=0;i<n;i++){
		cin>>e;
		a.push_back(e);
	}
	sort(a.begin(),a.end());
	i=0;
	while(i<n){
		min_sum+=a[i];
		n=n-k;
		i++;
	}
	b=0;
	while(j>=b){
		max_sum+=a[j];
		b=b+k;
		j--;
	}
	cout<<min_sum<<" "<<max_sum<<endl;
}
int main() 
{
   int t;
	cin>>t;
	while(t--){
	solve();
	}
	
    return 0;
}
 
################################## Chandu Latest##############################################
Raj organizes a party on his birthday and he invites his N friends to the party. Raj planned a game to entertain his friends. The Raj Plan is as follows:

All the N friends need to dance in a circular formation and they need to change positions after every 1 second constantly. The change of position is not random & there is a certain pattern.

Consider N = 6, and an array friends[] = {3,6,5,4,1,2}. This array (1-indexed) is the dancing pattern. The value at friends[i], indicates the new of position of the friend who is standing at the ith position.

Given N & the array friends[ ], find the time after which all the friends are in the initial positions for the 1st time.
# C++ original
#include<iostream>
using namespace std;

long long int gcd(long long int a,long long int b)
{
  if(b==0)
    return a;
  else
    return gcd(b,a%b);
}
int main()
{
  long long int t,n,i,res,c,temp,temp1;
  scanf("%lld",&t);
  while(t--)
  {
      cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    i=0;
    res=1;
    c=0;
    while(i<=n-1)
    {
      temp1=i;
      c=0;
      while(a[i]!=0)
      {
        temp=i;//4
        i=a[i]-1;//0
        a[temp]=0;//0
        c+=1;//3
      }
      i=temp1+1;
      if(c!=0)
        res=res*c/gcd(res,c);
    }
    cout<<res<<endl;
  }
  return 0;
}

 
Detective Jake and Amy are cracking down a puzzle in order to solve a case. After hours of solving, each of them have got two individually sorted array, and inorder to crack the case, they will have to merge the two arrays and return as one sorted array 
Write a program to help them in crackiing the case!.
## C++ Custom
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &a, vector<int> &b, long long n, long long m)
{
	map<int, bool> mp;
	long long i;
	for(i = 0; i < n; i++)
	mp[a[i]] = true;
	for(i = 0;i < m;i++)
	mp[b[i]] = true;
	for(auto i: mp)
	cout<< i.first <<" ";
}
void read(vector<int> &a,long long n){
    int e;
    for(long long i=0;i<n;i++){
        cin>>e;
        a.push_back(e);
    }
}
int main()
{
    long long n,m,i;
    int e;
    vector<int> a,b;
    cin>>n;
    read(a, n);
    cin>>m;
    read(b, m);
    merge(a, b, n, m);
    return 0;
}


