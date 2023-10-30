class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count[2] = {0};  

        for (int student : students) {
            count[student]++; 
        }

        for (int sandwich : sandwiches) {
            if (count[sandwich] > 0) {
                count[sandwich]--; 
            } else {
              
                return count[0] + count[1]; 
            }
        }

        return 0; 
    }
};
