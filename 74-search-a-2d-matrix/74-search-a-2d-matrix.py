class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int main_row = 0;
        for(int i=0;i<matrix.length;i++){
            int n = matrix[i].length-1;
            if(target <= matrix[i][n]){
                main_row = i;
                break;
            }
        }
        
        return binSearch(matrix[main_row], target);
    }
    
    public boolean binSearch(int[] arr,int target){
        int start = 0;
        int end = arr.length-1;
        while(start <= end){
            int mid = (start + (end-start)/2);
            if(arr[mid] == target){
                return true;
            }else if(target < arr[mid]){
                end = mid - 1;
            }else if(target > arr[mid]){
                start = mid + 1;
            }
        }
        return false;
    }
}