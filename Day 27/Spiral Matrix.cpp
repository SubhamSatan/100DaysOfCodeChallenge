//LeetCode 54

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> output;
        int row = matrix.size();
        int column = matrix[0].size();
        int count = 0;
        int total = row*column;
        
        //Initialization 
        int startingRow = 0;
        int startingColumn = 0;
        int endingRow = row -1 ;
        int endingColumn = column - 1;
        
        
        while(count<total)
        {
            //Print Starting Row 
            for(int index = startingColumn ;count<total && index<=endingColumn ; index++)
            {
                output.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            //Print Ending Column
            for(int index = startingRow;count<total && index<=endingRow;index++)
            {
                output.push_back(matrix[index][endingColumn]);
                count++;
            }
            endingColumn--;
            
            //Print Ending Row
            for(int index = endingColumn;count<total && index>=startingColumn;index--)
            {
                output.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //Print Starting Row 
            for(int index = endingRow ;count<total &&  index>=startingRow ; index--)
            {
                output.push_back(matrix[index][startingColumn]);
                count++;
            }
            startingColumn++;
        }
        return output;
        
    }
