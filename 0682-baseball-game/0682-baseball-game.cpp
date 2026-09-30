class Solution {
public:
    int calPoints(vector<string>& operations) {

        vector<int> scores;

        for(auto& op : operations){
            
            if(op == "+"){
                    int n1 = scores[scores.size() - 1];
                    int n2 = scores[scores.size() - 2];
                    
                    int sum = n1 + n2;
                    scores.push_back(sum);
            }
            else if(op == "D"){
                    int n1 = scores[scores.size() - 1];
                
                    int prod = n1 * 2;
                    scores.push_back(prod);

            }
            else if(op == "C")
                scores.pop_back();
            else
                scores.push_back(stoi(op));
        }

        int sum = 0;
        for(auto& score : scores)
            sum += score;
        
        return sum;
        
    }
};