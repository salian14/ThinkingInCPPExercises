#include <iostream>
#include <mutex>
#include <thread>
#include <vector>
using namespace std;

//Write a program that uses two nested for loops and the modulus operator (%) to detect and print prime numbers (integral numbers that are not evenly divisible by any other numbers except for themselves and 1).
//screw it turn this into a threading program! because i didn't really know how to do synchronization in c++
int count = 1;
const int MAX = 10000000;
mutex readeth, writeth;
const int MAXTHREADS = 4;

int nextToCheck(){
    int next = -1;
    readeth.lock();
    if(count < MAX){
        next = count;
        count++;
    }
    readeth.unlock();
    return next;
}

void findPrime(){
    int x = nextToCheck();
    while(x != -1){
        bool isPrime = true;
        for(int y = 2; y < x; y++){
            if((x % y) == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
          writeth.lock();
          cout << x << '\n';
          writeth.unlock();
        }
        x = nextToCheck();
    }
}

int main(){
    vector<thread> threaders;
    for(int i = 0; i < MAXTHREADS; i++){
        threaders.push_back(thread(findPrime));
    }

    for(int i = 0; i < threaders.size(); i++){
        threaders[i].join();
    }
}
