#include <iostream>
#include <ctime>

using namespace std;

// int main() {



//     time_t timestamp;
//     time(&timestamp);

//     cout << ctime(&timestamp);

//     return 0;
// }


// clock() function

clock_t before;



int main(){

    int k =0;
    for (int i = 0 ; i<100000 ; i++){

        k+=i;

    }

    clock_t duration = clock() - before;
    cout << "this is the value of duration : " << duration << endl;

    cout << "Duration: " << (float)duration / CLOCKS_PER_SEC << " seconds";
}
