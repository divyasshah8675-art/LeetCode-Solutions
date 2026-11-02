class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int count = 0;
        int i = 0;

        for (int j = 0; j < trainers.size() && i < players.size(); j++) {
            if (players[i] <= trainers[j]) {
                count++;
                i++;
            }
        }

        return count;
    }
};
