class Solution {
public:
    static bool sporedi(vector<int> &p1, vector<int> &p2){
        if(p1[0] == p2[0])
            return p1[1] < p2[1];
        return p1[0] > p2[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), sporedi);
        vector<vector<int>> rezz;
        for(int i = 0; i < people.size(); i++)
            rezz.insert(rezz.begin() + people[i][1], people[i]);
        return rezz;
    }
};