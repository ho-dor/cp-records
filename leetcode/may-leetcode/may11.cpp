class Solution {
public:
    
    vector<vector<int>> fill(vector<vector<int>>& image, int n, int m, int sr, int sc, int initColor,int newColor){
        
        if(sr<0 || sr>=n || sc<0 || sc>=m){
            return image;
        }
        
        if(image[sr][sc]==initColor){
            
            image[sr][sc]=newColor;
            
            image = fill(image,n,m,sr+1,sc,initColor,newColor);
            image = fill(image,n,m,sr-1,sc,initColor,newColor);
            image = fill(image,n,m,sr,sc+1,initColor,newColor);
            image = fill(image,n,m,sr,sc-1,initColor,newColor);
        
        }
        return image;
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        int n=image.size();
        int m=image[0].size();
        
        int initColor = image[sr][sc];
        
        if(initColor==newColor)
            return image;
        
        vector<vector<int>> res = fill(image,n,m,sr,sc,initColor,newColor);
        
        return res;
        
    }
};