class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        for (int i=0;i<operations.size();i++) {
            //cout<<stoi(operations[i])<<endl;
            if (operations[i]=="+") {
                int n = record.size();
                record.push_back(record[n-1]+record[n-2]);
            }
            else if (operations[i]=="C") {
                record.pop_back();
            }
            else if (operations[i]=="D") {
                int n = record.size();
                record.push_back(record[n-1]*2);
            }
            else {
                record.push_back(stoi(operations[i]));
            }            
        }
        int sum = 0;
        for (auto x:record) sum+=x;
        return sum;
    }
};