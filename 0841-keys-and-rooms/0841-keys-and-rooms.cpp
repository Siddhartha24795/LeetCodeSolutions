class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        queue<int> to_visit;
        unordered_set<int> vis;
        to_visit.push(0);
        while(!to_visit.empty()){
            int front = to_visit.front();
            to_visit.pop();
            vis.insert(front);
            for(auto k:rooms[front]){
                if(vis.find(k) == vis.end()){
                    to_visit.push(k);
                }
            }
        }
        return (vis.size()==n) ? true:false; 
    }
};