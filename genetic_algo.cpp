#include <iostream>
#include <random>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

auto randint(int a, int b){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(a, b);
    return dist(gen);
}

auto random_val(){

    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dist(0, 1);
    return dist(gen);

}

auto sample_population(const vector<int>& population, int k) {

    vector<int> temp = population;   // copy so original isn't modified

    random_device rd;
    mt19937 gen(rd());

    shuffle(temp.begin(), temp.end(), gen);

    return vector<int>(temp.begin(), temp.begin() + k);
}


int pop_size = 6;
int generations = 20;
double mutation_rate = 0.3;
int x_min = 0, x_max = 31;


auto random_individual(){
    return randint(x_min, x_max);
}

auto fitness(int x){
    return pow(x, 2);
}

auto select_parent(vector<int> population){
    vector<int> res = sample_population(population, 2);
    
    int a = res[0], b = res[1];


    if (fitness(a) >= fitness(b)){
        return a;
    }
    else {
        return b;
    }
}

auto crossover(int p1, int p2){
    return randint(min(p1, p2), max(p1, p2));
}

auto mutate(int x){
    if (random_val() < mutation_rate){
        x += randint(-3, 3);
        x = max(x_min, min(x_max, x));
    }

    return x;
}

vector<int> population;


int main() {

    for (int i = 0 ; i<pop_size ; i++){

        auto pop = random_individual();
    
        population.push_back(pop);
    
    }

    for (int gen = 0 ; gen < generations ; gen++){

        auto score = population ;

        sort(score.begin(), score.end(),
        [](int a, int b) {
            return fitness(a) > fitness(b); // reverse=True
        });

        auto best = score[0];
        // setw is a C++ I/O manipulator from <iomanip> that sets the width of the next printed field.
        // If you don't want to use it, you can format without it. Here is an alternative:
        cout << "Gen " << (gen + 1)
             << " | best x=" << best
             << " | x²=" << fitness(best) << endl;

        vector<int> new_population = {best};

        while (new_population.size() < pop_size){
            auto child = crossover(select_parent(population), select_parent(population));
            child = mutate(child);
            new_population.push_back(child);
        }

        population = new_population;

        
    }

    auto best = max_element(
        population.begin(),
        population.end(),
        [](int a, int b) {
            return fitness(a) < fitness(b);
        }
    );

    cout << "\n" << "Best x: " << *best ;

    return 0;
}
