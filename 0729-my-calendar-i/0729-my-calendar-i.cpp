class MyCalendar {
public:
    vector<pair<int,int>> cal;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto c:cal){
            // below condition will ensure overlap between two range
            if(max(start,c.first) < min(end,c.second)){
                return false;
            }
        }
        cal.push_back(make_pair(start,end));
        return true;
    }
};