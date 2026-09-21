/* #include <bits/stdc++.h>

using namespace std;


int main()
{


    
    int integerType;
    float floatType;
    double doubleType;
    char charType;

    cout << "size of int is : " << sizeof(integerType) << endl;

    cout << "size of float is : " << sizeof(floatType) << endl;
    \
    cout << "size of double is : " << sizeof(doubleType) << endl;

    cout << "size of char is : " << sizeof(charType) << endl;
    
    double Principal = 10000, rate = 5, time = 2;

    double A = Principal * ((pow((1+ rate / 100), time)));

    double CI = A - Principal;

    cout << "Compound Interest is : " << CI; 
    int n =11;

    if( n % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd";  



    int a = 4, b = 8, c = 9;
    
    if(a > b && a > c){
        cout << "a is largest ";
    }else if(b > a && b > a){
        cout << "b largest ";

    }else{
        cout <<"c is the largest ";
    }

    int n = 29; int cnt = 0; int i = 0;
    if(n <= 1)
    cout << n << "is NOT prime ";
    else
    {
        for(i = 0; i <=n; i++)
        {
            if(n % i == 0)
            cnt++;

        }
    if(cnt <= 2)
    cout<< n << "is prime ";    
        
    } 


    int n = 1221;
    int t = n;
    int rev = 0;
    while(t <= 0)
    {
        int dig = t % 10;
        rev = rev * 10 + dig;
        t /= 10; 
    } 
    if(n == rev)  
    cout << "Palidrome";
    else
    cout << "Not Palidrome"; 
    


    char op;
    double a, b, res;
    cout << "Enter an operator(+, -  , * , /): "   ;
    cin >> op;  
    cout <<" Enter two numbers : ";
    cin >> a >> b;
    
    switch(op){
    case '+':
    res = a + b;
    break;
    case '-':
    res = a - b;
    break;
    case '*':
    res = a * b;
    break;
    case '/':
    res = a / b;
    break;
    default:
    cout << "Error! Operator is not correct ";
    res = -DBL_MAX;


    }
    if(res != -DBL_MAX)
    cout <<"Result :"<< res; 

    void reverse (string str)
    {
        if(str.size() ==  0)
        {
            return;
        }
        reverse(str.substr(1));
        cout <<str[0];
    }
    int main()
    {
        string a = "Geeks For Geeks";
        reverse(a);
        return 0;
    } 

    int fib(int n){
        if(n <= 1)
        return n;

        return fib( n - 1) + fib(n - 2);
    }
    int main(){
        int n = 5;
        cout << fib(n);
        return 0;
    } */
    /*
   #include<bits/stdc++.h>
    
    using namespace std;
    int main()
    {
        long long a, b, c;   /// HOW TO REDUCE USING COUT BY MAKING A VARIABLE ************************
        char s, q;
        cin>>a>>s>>b>>q>>c;

        long long ans;

        if(s == '+'){
            ans = a + b;
        
        }else if (s == '-'){
            ans = a - b;

        }else if(s == '*'){
            ans = a * b;
        }

        if( ans == c){
            cout<<"Yes"<<endl;

        }else{
            cout<<ans<<endl;
        }
        
        

      
         return 0;
    }
  */
 /*
  #include<bits/stdc++.h>
    
    using namespace std;
    int main(){
        long long l1, r1, l2, r2;
        cin>>l1>>r1>>l2>>r2;

        long long start = max(l1, l2);
        long long end = min(r1, r2);

        if(start <= end)
        cout<<start<<' '<<end<<endl;
        else
        cout<<"-1"<<endl;
        
        return 0;
    }
  */
 /*
  #include<bits/stdc++.h>
    
    using namespace std;
    int main(){
        long long a, b,c,d;
        cin>>a>>b>>c>>d;
        a %= 100;
        b %= 100;
        c %= 100;
        d %= 100;

        long long ans = (a * b * c * d) % 100;
        if(ans < 10){
            cout<<"0"<<ans<<endl;

        }else{
            cout<<ans<<endl;
        }



        return 0;
    }
        */
       /*
#include<bits/stdc++.h>
    
    using namespace std;
    int main(){
        //step 1
        long long a, b, c, d;
        cin>>a>>b>>c>>d;
        //step 2
        double val1 = pow(a, b);
        double val2 = pow(c, d);

        if(b*log(a) > d*log(c) ){
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
        }
        
    }
*/
/*
#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int x = a, y = b, z = c;
//assume x is min
    if( y < x){
    //we'll swap x and y
    int temp = x;
    x = y;
    y = temp;
    }
    if(z < x){
        //swap x and z 
        x = z + x;
        z = x - z;
        x = x - z;

    }
    if(z < y)
    swap(z,y);

    cout<<x<<endl<<y<<endl<<z<<endl<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
}
    */
/*
    ///PROBLEM **U*
#include <iostream>
using namespace std;
int main(){

    double x;
    cin>>x;

    int integer_part = x; 
    if(x == integer_part)
    {
      //purely integer
      cout<<"int "<<integer_part<<endl;
    }
    else
    {
        //decimal number
        cout<<"float "<<integer_part<<' '<<x - integer_part<<endl;
    }
}
*/
/*
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cin>>a>>c>>b;
    if(c == '>')
    {
        if(a > b){
            cout<<"Right";
            
        }else{
            cout<<"Wrong";  /// Lenghty version of if-else statement very loong very very long or optimise bhi nhi h*************
        }

    }
    else if(c == '<')
    {
        if(a < b){
            cout<<"Right";
            
        }else{
            cout<<"Wrong";
        }

    }
    else if(c == '=')
    {
        if(a == b){
            cout<<"Right";
            
        }else{
            cout<<"Wrong";
        }

    }
    return 0;

}
*/
/*
////optimise version of above code *********
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char c;
    cin>>a>>c>>b;
    if((c == '>' && a > b) || (c == '<' && a < b) || (c == '=' && a == b))
    cout<<"Right";
    else
    cout<<"Wrong";


    return 0;

}
    */
   /*
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    char sg,eq;
    cin>>a>>sg>>b>>eq>>c;

    int ans = a + b;

    if(sg == '-')
    ans = a - b;
    else if(sg == '*')
    ans = a * b;

//
    if(ans == c)
    cout<<"Yes"; //// here we can use ternary ooperator 
    else 
    cout<<ans<<endl; 

    //cout<<((ans == c)? "Yes": to_string(ans))<<endl;
}
*/
/*
#include <iostream>
using namespace std;
#include <iomanip>
int main(){
    int X;
    double P;
    cin>>X>>P;
    double res, y,ans;


    res = 100 - X;
    y = res/100;
    ans = P/y; 

    cout<< fixed << setprecision(2) << ans<< endl;
   return 0;

}
*/  
/*
#include <iostream>
using namespace std;
int main()
{
    long long a,b,k;
    cin>>a>>b>>k;

    string ans;
    
    if(a % k == 0 && b % k == 0){
        ans = "Both";
    }
    else if(a % k == 0 && b % k != 0){
        ans = "Memo";
    }
    else if(a % k != 0 && b % k == 0){
        ans = "Momo";
    }
    else if(a % k != 0 && b % k != 0){
        ans = "No One";

    }
    cout<<ans<<endl;

    return 0;
} 
*/
/*
#include <iostream>
using namespace std;
int main()
{
    char C;
    cin >> C;
    char ans;

    if(C >= 'a' && C < 'z') //// **agar z isme include krdiya ho niche wale me use nhi kr skti iss baat ka aage se dhyan rkhna **
        ans = C + 1;
     /// 2 cout hone se bhala kya dikkat ho skti h  

    
    else if( C == 'z')
        ans = 'a';
    
    cout<<ans<<endl;

    return 0;

}    
*/

//////************************* TRY 1****
/*
#include <iostream>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;

    string ans;
    long long res;


    if(d = a + b - c){
        res = d;
        cout<<"Yes";
    }else{
        ans = "No";
    }
    if(d = a + b * c){
        res = d;
        cout<<"Yes";
    
    
       
    }else{
        ans = "No";
    }
    if( d = a * b - c){
        res = d;
        cout<<"Yes";
    }else{
        ans = "No";
    }
    if(d = a * b + c){
        res = d;
        cout<<"Yes";
    }else{
        ans = "No";
    }
    if( d = a - b * c){
         res = d;
        cout<<"Yes";
    }else{
        ans = "No";
    } 
    if(d = a - b + c){
         res = d;
        cout<<"Yes";
    }else{
        ans = "No";
    } 
    cout<<ans<<endl;

    return 0;

}    long long ans = a + b - c; 
    long long ans = a + b * c; 
    long long ans = a * b - c; 
    long long ans = a * b + c; 
    long long ans = a - b * c; 
    long long ans = a - b + c; 
*/
/*
#include <iostream>
using namespace std;
int main()
{
  
    long long a,b,c,d;
    cin>>a>>b>>c>>d;

    __int128 A = a, B = b, C = c, D = d; ///precedence kaa bahuttt dhyam dena hoga

   if((D == A + B - C) || (D == A + B * C) || (D == A * B - C) || (D == A * B + C) || (D == A - B * C) || (D == A - B + C))
   {
    cout<<"YES";
   }             //************** Fuckkk bhai jitna mere ko iss problem ne rulaya h na rona aa
                     //// rha my logic was correct but this overflow le dubaa :(

    else
    {
        cout<<"NO";
    }
    return 0;
}
    */
   /*
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    /*
    if(a == b || b == a -1 || b == a +1)
    //if(a && b && (a == b || b == a -1 || b == a +1))**** 0 1 nhi dega *********iski jgh we can use fun abs(a - b) <= 1
    //if(a || b && (a == b || b == a -1 || b == a +1))**** 0 1 
    //if((a || b) && (a == b || b == a -1 || b == a +1))**** 0 1 
    cout<<"YES";
    else
    cout<<"NO"; 
    if(a == 0 && b == 0) 
    cout<<"no"<<endl;
    else if(a == b || b == a -1 || b == a +1)
    cout << "yes"<<endl;
    else 
    cout <<"no"<<endl;
    return 0;

} */
/*
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    if(a == 0 && b == 0)
    {
        cout << "NO" <<endl;
    }
    else if(abs(a -b) <= 1)
    {
        cout <<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
    */
/*
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;  ///*********bitwise manupulation

    cout<<(a^b)<<endl;
} 
    */
   /*
#include <iostream>
using namespace std;
int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    int maxi ;

    if( (n >= 1 && n <= 2) || (m == 1) || (k ==1))
    maxi = min(n,k);
    cout<<maxi<<endl;
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k;
    cin>>n>>m>>k;
    /// make D 3 as much as possible
    long long d3 = min({n, m, k });
    n -= d3;
    m -= d3;
    k -= d3;
    /// make d 1 as much as possible 
    long long d1 = min(n/2, k);

    cout<<d1 + d3<<endl;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int main(){
    long long n,k,a;

    long long type = (n * k)/a;
    if()
}
    */
/*  
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int second = a % 10; ************ye meri liye bahut valuable question hai ***************
    int first = a / 10;
    bool cod1 = (second != 0) && (first % second == 0);
    bool cod2 = (first != 0 ) && (second % first == 0);


    if( cod1 || cod2)
    cout<<"YES";
    else
    cout<<"NO";

}   
    */    
/*#include <iostream>
using namespace std;
int main(){
    long long n,k,a;
    cin>>n>>k>>a;
    long long prod = n*k;

    if( prod % a != 0)
    cout<<"double"<<endl;
    else{
        long long res = prod / a;
        if(res <= 2147483647)
        {
        cout<<"int"<<endl;
        }
        else{
            cout<<"long long"<<endl;
        }

    }
    return 0 ;
    
}  */
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    if(n >= 1)
    cout<<"helloword"<<endl;
    if(n >= 2)
    cout<<"helloword"<<endl;
    if(n >= 3)
    cout<<"helloword"<<endl;
    if(n >= 4)
    cout<<"helloword"<<endl;
    if(n >= 5)
    cout<<"helloword"<<endl;
    if(n >= 6)
    cout<<"helloword"<<endl; ///if condition me this is so cool like really cool i didn't know this before**********
    if(n >= 7)
    cout<<"helloword"<<endl;
    if(n >= 8)
    cout<<"helloword"<<endl;
    if(n >= 9)
    cout<<"helloword"<<endl;
    if(n >= 10)
    cout<<"helloword"<<endl;

}*/
/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        cout<<i<<endl;
    }
    return 0 ;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2 == 0){
        
    }


    return 0;

}*/
/*
#include <iostream>
using namespace std;
int main()
 {
    int n;
    cin>>n;
    bool found = false;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            cout<<i<<endl;
             found = true;

        }
    }
        if(found == false)
        {
        
             cout<<"-1"<<endl;
        }
    
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for( int i = 2; i <= n; i += 2){
        cout <<i<<endl;     /////************** "this sol: is much more optimise and clean one then the previous one"
    

    }

    if(n <= 1)
    cout<<"-1"<<endl;
    

}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(i%2 == 0){
            sum += 1;
            cout<<i<<endl;
        }
    }
    if( sum == 0){
        cout<<"-1"<<endl;
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;
    
    

    ///what would i'll do to convert those number
    //how would i iterate it one by one including the negative one's as well 
     ///how to create loops that would actually operate sequencing 

    for( int i = 0; i < n; i++)
    {
        int x;
        cin>>x; ///***** 

        if(x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        } 
        if( x > 0)
        {
            positive++;
        }else if(x < 0){
            negative++;
        }
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<positive<<endl;
    cout<<"Negative: "<<negative<<endl;


    return 0;

}*/
/*#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int pass = 1999;

    for( int i = 0; i < x; i++)
    {
        if(pass = x)
        {
            cout<<"Correct"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    
    for(; ;)
    {
    cin>>i;
    if(i == 1999)
    {
        cout<<"Correct"<<endl;
        break;

    }else{
        cout<<"Wrong"<<endl;
    }
    }
    return 0;

}*/
/*#include <iostream>
using namespace std;
int main()
{
    int i;
    cin>>i;
    for(;;)
    {
        if(i == 1999)
        cout<<"Correct"<<endl;

    }else{
        cout<<"Wrong"<<endl;
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n,max,current;
    cin>>n;
    cin>>max;
    
    for( int i = 1; i < n; i++)
    {
        cin>>current;
        if(current > max)
        {
            max = current;
            
 
        }    
    }
    cout<<max<<endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 1; i <= 12; i++)
    {
        
        int ans = n*i;
        cout<<n<<" * "<<i<<" = "<<ans<<endl;
    }
    return 0;


}*/

/*#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while(T--)
    {
        int N;
        cin >> N;

        long long fact = 1;

        for(int i = 1; i <= N; i++)
        {
            fact = fact * i;
        }

        cout << fact << endl;
    }

    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    
    while(t--)
    {
        long long fact = 1;
        int n;
        cin>>n;
        for(int i = 1; i <= n; i++)
        {
            
            fact = fact*i;
            
        }
    }
     cout<<fact<<endl;

    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    bool divisor = false;
    
    for(int i = 2; i < x; i++)
    {
        if(x % i == 0 ){
            divisor = true;
            
            break;
        }

    }
    if(divisor == true)
    {
        cout<<"NO"<<endl;
    }
    
    
    else
    cout<<"YES"<<endl;

    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int original = n;

    int rev = 0;
    while(n>0)
    {
        int digit = n%10;
        rev = rev*10+digit;
        n =n/10;

    }
    if(original==rev){
        cout<<"YES"<<endl;
    }else
    cout<<"NO"<<endl;
    
  
    return 0;

}*/
/*#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    bool divisor = false;
    
    for(int i = 2; i < x; i++)
    {
        if(x % i == 0 ){
            divisor = true;
            
            break;
        }
        else if (x%i != 0){
            cout<<x<<endl;
        }

    }
    
    
    
   

    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        long long prod = 1;

        for(int j = 1; j <= n; j++)
        {
            prod *= j;
            //cout<<prod<<endl;

        }cout<<prod<<endl;
    }
    return 0;

}*/
/*#include <iostream>
using namespace std;
int main()
{
    int t = 2;
    while(t--)
    {
        cout<<"Hello World"<<endl;
        
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    
        if(n%i == 0)
        
            cnt++;
        
        cout<<(cnt == 2 ? "Yes" : "NO")<<endl;
    
    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int cnt =0;

    if(n == 1)
    cout<<"no"<<endl;
    return 0;   

    bool isPrime = true;
    for(int i = 2; i*i <= n;i++)

    {
        if(n%i == 0)
        {
            isPrime = false;
            break;
        //cnt++;
        //cout<<"NO"<<endl;
        //return 0;
        cout<<(isPrime ? "Yes": "No")<<endl;
        }
    }      
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rev = 0;
    int temp = n;
    while(temp)
    {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    cout<<rev<<endl;
    cout<<(rev == n ? "YES" : "NO")<<endl;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
   
    for(int i = 2; i <= n; i++)
    {
        bool isPrime = true;
        for(int j = 2; j*j <= i; j++)
        {
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<< i <<" ";
        }
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main ()
{
    int n, max,current,secondmax;
    cin>>n;
    cin>>max;
    cin>>secondmax;
    int freq = 1;
    for(int i =1;i<n;i++)
    {
        cin>>current;
        if(current>max){
        max = current;
        secondmax = max;
        
        }
        else if(current > secondmax)
        secondmax = current;
        
        
    }cout<<max<<endl;
    cout<<freq<<endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n,previous,current;
    cin>>n;
    int currentLength = 1;
    int bestLength = 1;
    cin>>previous;
    for(int i = 1;i<n;i++)
    {
        cin>>current;
        if(current>previous){
        currentLength++;
        }
        else 
        {
            currentLength = 1;
        }
        if(currentLength > bestLength)
        {
            bestLength = currentLength;
        }
        previous = current;
    }
    cout<<bestLength<<endl;
    
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++)
    cin>>a[i];
    int current = 1; 
    int answer =1;
    for(int i =1;i<n;i++)
    {
        if(a[i]>a[i-1])
        current++;
        else
        current = 1;
        answer = max(answer,current)

    }
    cout<<answer<<endl;

}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n,max,firstcurr,current,index;
    cin>>n;
    firstcurr = 1;
    
    cin>>max;
    for(int i = 1;i<n;i++)
    {
        cin>>current;
        
        if(current>max)
        {
            max = current;
            firstcurr++;
        }else
        firstcurr = 1;
        if(current>max)
        firstcurr = i;
        cout<<i<<endl;
        
    }
    cout<<max<<endl;
    //cout<<i<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main ()
{
    int n, max,current,secondmax;
    cin>>n;
    cin>>max;
    cin>>secondmax;
    int firstcurrence = 1;
    for(int i =1;i<n;i++)
    {
        cin>>current;
        if(current>max){
        
        secondmax = max;
        max = current;
        firstcurrence++;
        
        }
        else if(current > secondmax)
        secondmax = current;
        
        
    }cout<<max<<endl;
    cout<<????<<endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n,max,secondmax,current,maxindex;
    cin>>n;
    cin>>max;
    maxindex = 0;
    cin>>secondmax;

    for(int i=1;i<n;i++)
    {
    cin>>current;
    if(current>max)
    {
        secondmax = max;
        max = current;
        maxindex = i;
    }
    }
    cout<<max<<endl;
    cout<<maxindex<<endl;
    return 0;

}*/
/*#include <iostream>
using namespace std;
int main()
{
    int current,max,secondmax,maxindex,n;
    cin>>n;
    cin>>max;
    maxindex = 0;
    cin>>secondmax;
    if(secondmax>max)
    {
        int temp = max;
        max = secondmax;
        secondmax = temp;
        maxindex=1;
    }
    for(int i =2;i<n;i++)
    {
        cin>>current;
        if(current>max)
        {
            secondmax = max;
            max = current;
            maxindex = i;
        }else if (current>secondmax && current != max)
        {
            secondmax = current;
        }
    }cout<<max<<endl;
    cout<<secondmax<<endl;
    cout<<maxindex<<endl;

    return 0;
}*/
/*#include <iostream>
using namespace std;
int main ()
{
    int n,current,bestlength;
    cin>>n;
    int previous;
    cin>>previous;
    bestlength = 1;
    
    
    int firstcurrence = 1;
    for(int i =1;i<n;i++)
    {
        cin>>current;
        if(current>previous){

        firstcurrence++;
        
        }
        else{
            firstcurrence = 1;
        }
        if(firstcurrence>bestlength){
            bestlength = firstcurrence;
        }
        previous = current;
        
    }
    cout<<bestlength<<endl;
    return 0;
}*/
//#include <iostream>
//#include <iomanip>
/*#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, max;
    cin>>n;
    int mx = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x>mx)
        //mx = x;
        mx = max(mx,x);
    }cout<<mx<<endl;
    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;
    //printing the addresses of the first element
    cout<<arr<<endl;
    cout<<arr+0<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<*arr<<endl;
    for(int i=0; i<5;i++)
    cout<<*arr+i<<endl;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
        
        if(n%i == 0){
            
             cout<<i<<endl;
            
        }
        
        
    }
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int mx = 0;
    for(int i=1;i<=min(a,b);i++)
    {
        if(a%i==0 && b%i==0){
            mx = max(mx,i);
        }
    }cout<<mx<<endl;
}
#include <iostream>
using namespace std;   ///////////*****GCD
int main()
{
    int a,b;
    cin>>a>>b;
    while(b != 0)
    {
        int rem = a%b;
        a=b;
        b=rem;
    }cout<<a<<endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    bool isLucky = true;

    for(int i=a;i<=b;i++)
    {
        if(i==4 || i==7)
        {
            int digit = a%10;
            int num = a/10;
        }
        
        else
        {
            cout<<"-1"<<endl;
    
        }
    }    
}
*/
/*#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    bool found = false;
    for(int i=a;i<=b;i++)
    {
        int n = i;
        bool lucky = true;
        while(n>0)
        {
            int digit = n%10;
            if(digit != 4 && digit != 7)
            {
                lucky = false;
                break;

            }
            n = n/10;
        }
        if(lucky)
        {
            cout<<i<<" ";
            found = true;
        }
    }
    if(found == false)
    {
        cout<<-1<<" ";
    }
     return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    char s;
    cin>>s;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) //**************** wala question 
    {
        int x;
        cin>>x;
        for(int j=1;j<=x;j++)
        {
            cout<<s;

        }
        cout<<endl;
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<= n-i+1;j++)
        {
            cout<<"*";

        }
        cout<<endl;
       
    }    
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            cout<< 0 <<endl;
        }
        else
        {
            while(x!=0)
            {
                int digit = x%10;
                cout<<digit<<" ";
                x = x/10;
            
           
            }
            cout<<endl;
        }   
    }
   
}*/
/*#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    

    
        while(true)
        {
            cin >>n >>m;
            
            

            if(n<=0 || m<=0)
            {
                break;
                
            }else{
                int start = min(n,m);
                int end = max(n,m);
                int sum = 0;
                for(int i=start;i<=end;i++)
                {
                    
                    cout<<i<<" ";
                    sum += i;


                }
                cout<<"sum ="<<sum<<endl;
            }
        }
        
    
    return 0;
}*/
/*#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x,y;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>x>>y;
        
                int sum = 0;
                int start = min(x,y);
                int end = max(x,y);
                for(int i = start+1;i<end;i++)
                {
                    if(i%2!=0)
                    {
                        sum += i;

                    }                                                      
                }
                cout<<sum<<endl;        
    }    
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int j =1;j<=t-i;j++)
        {
            cout<<" ";
        }    
            for(int k =1;k<=2*i-1;k++)
            {
                cout<<"*";
            }
        
        cout<<endl;

    }
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int ans = 0;
    for(int i =1;i<=n;i++)
    {
        int digitsum = 0;
        int temp = i;
        while(temp>0)
        {
            int digit = temp%10;
            digitsum += digit;
            temp = temp/10;
        }if(digitsum>=a && digitsum<=b)*************digit extraction
        {
            ans += i;
        }
     

    }
    
      cout<<ans<<endl;
      return 0;

    
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int start = 1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<start+j <<" ";
         

        }
        cout<<"PUM"<<endl;
        start = start+4;
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //start of loop the bucket
    for(int i=1;i<=n;i++)
    {  //spaces ke liye 
        for(int j=0;j<n-i;j++) cout<<" ";
        for(int j=0;j<2*i-1;j++) cout<<"*";//stars ke liye
        cout<<endl;//har line ke bad line change
    }
    for(int i=n;i>=1;i--) //n se start matlb last se start hoga or will end at 1
    {
        for(int j=0;j<n-i;j++) cout<<" ";
        for(int j=0;j<2*i-1;j++) cout<<"*";
        cout<<endl;
    }
    
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a=0,b=1;
    for(int i=0;i<n;i++)
    {
        cout<<a<<" ";
        long long next = a+b; //********** fibonacci series**********
        a=b;
        b=next;

    }
    cout<<endl;
}*/
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    //our assumption is a<=b
    if(b<a) swap(a,b);
    int g = 1;
    //just iterate over all divisors of a
    for(int i=1;i*i<=a;i++)
    {
        if(a%i == 0)
        {
            //i -> divisor, a/i -> divisor
            //let's inquire from i
            int div1 = i, div2 = a/i;
            if(b%div1 == 0)
            {
                g = max(g,div1);
            }
            if(b% div2 == 0)
            {
                g = max(g,div2);
            }

        }
    }cout<<g<<endl;
}