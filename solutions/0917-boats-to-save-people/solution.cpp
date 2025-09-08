class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int boats = 0;
        int light = 0, heavy = people.size() - 1;

        while (light <= heavy) {
            if (people[light] + people[heavy] <= limit) {
                light++;  // pair lightest with heaviest
            }
            heavy--; // heaviest always boards
            boats++;
        }
        return boats;
    }
    
};
