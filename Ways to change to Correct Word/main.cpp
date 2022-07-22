#include <iostream>

int maxWays(std::string wrong, std::string correct)
{
    int dp[correct.size()+1][wrong.size()+1];

    for (int i = 0; i <= correct.size(); ++i) {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= wrong.size(); ++i) {
        dp[0][i] = 1;
    }

    for (int i = 1; i <= correct.size(); ++i) {
        for (int j = 1; j <= wrong.size(); ++j) {
            if (correct[i-1] != wrong[j-1]) {
                dp[i][j] = dp[i][j-1];
            } else {
                dp[i][j] = dp[i][j-1] + dp[i-1][j-1];
            }
        }
    }

    return dp[correct.size()][wrong.size()];
}

int main()
{
    std::string str1, str2;

    std::cout << "Enter the wrong word :- ";
    getline(std::cin, str1);
    std::cout << "Enter the  correct word :- ";
    getline(std::cin, str2);

    std::cout << maxWays(str1, str2) << std::endl;
}
