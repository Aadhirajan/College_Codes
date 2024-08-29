import java.util.Scanner;
class Matrix{
    private int rows;
    private int cols;
    private int[][] data;
    public Matrix(int rows,int cols){
        this.rows=rows;
        this.cols=cols;
        data = new int[rows][cols];
    }
    public void inputMatrix(Scanner scanner){
        System.out.println("Enter the elements of the matrix ("+rows+"X"+cols+"):");
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                data[i][j]=scanner.nextInt();
            }
        }
    }
    public void displayMatrix(){
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                System.out.println(data[i][j]+" ");
            }
            System.out.println();
        }
    }
    public static Matrix multiply(Matrix m1,Matrix m2){
        if(m1.cols!=m2.rows){
            System.err.println("Matrix with this dimension can't be multiplied");
            return null;
        }
        Matrix result = new Matrix(m1.rows,m2.cols);
        for(int i=0;i<m1.rows;i++){
            for(int j=0;i<m2.cols;j++){
                int sum=0;
                for(int k=0;k<m1.cols;k++){
                    sum+=m1.data[i][k]*m2.data[k][j];
                }
                result.data[i][j]=sum;
            }
        }
        return result;
    }
}
public class MatrixMultiplication{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the number of rows and columns of the first matrix: ");
        int row_1=scanner.nextInt();
        int col_1=scanner.nextInt();
        System.out.println("Enter the number of the rows and columns of the second matrix");
        int row_2=scanner.nextInt();
        int col_2=scanner.nextInt();
        Matrix matrix_1= new Matrix(row_1,col_1);
        Matrix matrix_2= new Matrix(row_2,col_2);
        System.out.println("Enter the element of the matrix_1: ");
        matrix_1.inputMatrix(scanner);
        System.out.println("Enter the elements of the matrix_2: ");
        matrix_2.inputMatrix(scanner);
        //Matrix multiplication;
        Matrix result = Matrix.multiply(matrix_1, matrix_2);
        System.out.println("The Resultant matrix: ");
        result.displayMatrix();
    }
}
