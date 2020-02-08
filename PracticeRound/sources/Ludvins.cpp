
/**
 * HashCode practice problem 2020
 *
 * More Pizza
 *
 * Ludvins
 *
 * Total points: 1.505.004.541 out of 1.505.004.617
 */

#include <vector>
#include <iostream>

void print_sol(std::vector<int> sol){
    std::cout << sol.size() << std::endl;

    for (long long i = sol.size()-1; i >= 0 ; i--){
        std::cout << sol[i];
        if (i > 0)
            std::cout << " ";
    }
    std::cout << std::endl;
}

int main(){

    // Input data

    unsigned long long max;
    unsigned long long types;
    std::vector<int> value_per_type;

    // Read input
    std::cin >> max;
    std::cin >> types;

    int aux;
    for (unsigned long long i = 0; i < types; i++){
        std::cin >> aux;
        value_per_type.push_back(aux);
    }

    std::vector<int> best_sol;

    unsigned long long max_score = 0;

    for (long long i = types-1; i >= 0; i--) {
        unsigned long long curr_score = 0;
        std::vector<int> curr_sol;

        for (long long j = i; j >= 0; j--){

            int current_value = value_per_type[j];
            unsigned long long temp_score = curr_score + current_value;

            if (temp_score == max){
                curr_sol.push_back(j);
                break;
            }
            else if (temp_score < max){
                curr_score = temp_score;
                curr_sol.push_back(j);
            }
        }

        if (curr_score > max_score){
            max_score = curr_score;
            best_sol = curr_sol;
        }

        if (curr_score == max || curr_sol.size() == types)
            break;

    }

    print_sol(best_sol);

}
