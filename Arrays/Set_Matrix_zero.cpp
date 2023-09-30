//Code ninjas
vector<vector<int>> zeroMatrix(vector<vector<int>> matrix, int n, int m)
{
	vector<bool> row(n,false), col(m,false);
	for(int i=0;i<n;i++)
	{
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0){
              	row[i] = 1;
            	col[j] = 1;
          	}
        }
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(row[i]==1 || col[j]==1)
				matrix[i][j]=0;
		}
	}
	return matrix;
}