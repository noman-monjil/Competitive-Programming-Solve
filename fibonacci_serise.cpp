#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    //base case

    if(n==0)return 0;
    else if(n==1) return 1;
        //body
    else {
        int result=fibo(n-1)+fibo(n-2);
        return result;

    }

}

int main()
{
    cout<<fibo(0)<<" "<<fibo(1)<<" "<<fibo(2)<<" "<<fibo(3)<<" "<<fibo(4)<<" "<<fibo(5)<<endl;
}


/*return 1; মানে ঠিকই হলো fibo(1) এর মান 1।

চলো ধাপে ধাপে দেখাই 👇

🔹 তোমার কোডের অংশ:
if(n == 1) return 1;   // base case


যখন fibo(1) call হয়, n = 1 → এই condition সত্য

তাই function ঠিক এই 1 মানটাকে return করে

অর্থাৎ fibo(1) = 1

🔹 Fibonacci context-এ বোঝো:

Fibonacci সিরিজের প্রথম দুইটি সংখ্যা:

Index: 0  1  2  3  4  5
Value: 0  1  1  2  3  5


fibo(0) = 0

fibo(1) = 1 ✅ ← এই 1 return 1 থেকেই আসে

🔹 Recursion flow:

যদি fibo(3) call করি:

fibo(3) = fibo(2) + fibo(1)


fibo(2) → recursion চলে নিচে, eventually base case এ গিয়ে fibo(1) return 1, fibo(0) return 0

এখন উপরের কলগুলো যোগ করে 1 + 1 = 2

আর fibo(1) এর মান ঠিকই return 1 — এটা fibo(3) এর যোগফলে ব্যবহার হয়

সংক্ষেপে:

return 1; ঠিকই fibo(1) এর মান 1 হিসেবে ফাংশনের বাইরে যায়, উপরের recursive call গুলো সেই মান ব্যবহার করে পরবর্তী সংখ্যা হিসাব করে। */


