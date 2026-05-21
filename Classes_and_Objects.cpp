#include<iostream>
#include<vector>

class Student{

private:

    int scores [5];

public:

    void input(){
        for(int i = 0; i < 5; i++){
            std::cin >> scores[i];
        }
    }

    int calculateTotalScore(){
    int total = 0;
    for(int i = 0; i < 5; i++){
        total += scores[i];
    }
    return total;
    }
};

int main (){

    int n;

    std::cin >> n;

    std::vector <Student> s(n);

    for(int i = 0; i < n; i++){
        s[i].input();
    }

    int kristen_highscore = s[0].calculateTotalScore();
    int high_scores =0;

    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();

        if(total > kristen_highscore){
            high_scores++;
        }
    }

    std::cout << high_scores;

    return 0;
}
