#include <stdlib.h>
#include <iostream> 
#include <time.h>
#include <map>

#define SIZE 150

using namespace std;

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    map<int, int> S;


    for (int i = 0; i < SIZE; i++) {
        int a = rand() % 1000 + 1;
        S.insert(i, a);
    }
    cout << "Size: " << S.size() << endl;
    system("pause");
    return 0;
}

/*
 #include <iostream>
#include <map>

using namespace std;

int main(){
    int size = 0.75*(19*5 + 50);
    
    map<int, int> S;

    srand(time(0));

    for(int i=0; i<size; i++)
        S.insert({i, rand()%1000+1});

    cout << "Size: " << S.size() << endl;

    for(auto const& [key, val] : S){
        if(val % 2 == 0)
            S.erase(key);
    }

    for(auto const& [key, val] : S){
        cout << key << ": " << val << endl;
    }
}
}*/







 
    /*
    for (int i = 0; i < MAX_SIZE; i++) {
        int a = rand() % 1000 + 1;                  // згенерувати випадкове число від 1 до 1000
        
        q.push(a);  // добавляємо елемент в чергу
    }
    cout << endl;
    if (q.empty())
        return 1;

    
    cout << "Прості числа" << endl;
    for (int i = 0; i < MAX_SIZE; i++) {
        int k = 0;
        for (int i = 2; i <= q.front(); i++) {
            if (q.front() % i == 0) {
                k++;
            }
        }
        if (k == 1 && q.front() != 1) {
            cout  << q.front() << '\t';
        }
        q.pop();  // видаляємо елемент з черги 
      
    }

    
 
    cout << endl;
    if (q.empty())
        cout << "Черга порожня!";  // перевіряємо порожня чи ні 
    cout << endl;
    system("pause");
    return 0;

}
*/