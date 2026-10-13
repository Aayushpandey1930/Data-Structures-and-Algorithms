class Solution {
public:
    int calPoints(vector<string>& operations) {
        int totalSum = 0;
        vector<int> score;
        for (auto x : operations) {
            if (x != "+" && x != "D" && x != "C") {
                int number = stoi(x);
                score.push_back(number);
                totalSum += number;
            } else if (x == "+") {
                int number = score[score.size() - 1] + score[score.size() - 2];
                score.push_back(number);
                totalSum += number;
            } else if (x == "D") {
                int number = 2*(score.back());
                score.push_back(number);
                totalSum += number;
            } else if (x == "C") {
                totalSum -= score.back();
                score.pop_back();
            }
        }
        return totalSum;
    }
};