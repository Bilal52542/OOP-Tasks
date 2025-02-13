#include<iostream>
using namespace std;
class Matrix{
    int rows,cols;
    int data[10][10];
    public:
        Matrix(int r, int c){
            rows=r;
            cols=c;
            for(int i=0;i<rows;i++)
                for(int j=0;j<cols;j++)
                    data[i][j]=0;
        }
        int getRows(){ 
            return rows;
        }
        int getCols(){ 
            return cols;
        }
        void setElement(int i,int j,int value){
            if(i>=0 && i<rows && j>=0 && j<cols){
                data[i][j]=value;
            }else{
                cout<<"Invalid index!\n";
            }
        }
        void display(){
            for(int i=0;i<rows;i++){
                for(int j=0;j<cols;j++){
                    cout<<data[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        Matrix add(Matrix m) {
            if(rows != m.getRows() || cols != m.getCols()) {
                cout << "Matrices cannot be added\n";
                return Matrix(0, 0);
            }
            Matrix result(rows, cols);
            for(int i = 0; i < rows; i++)
                for(int j = 0; j < cols; j++)
                    result.data[i][j] = data[i][j] + m.data[i][j];
            return result;
        }
    
        Matrix multiply(Matrix m) {
            if(cols != m.getRows()) {
                cout << "Matrices cannot be multiplied\n";
                return Matrix(0, 0);
            }
            Matrix result(rows, m.getCols());
            for(int i = 0; i < rows; i++)
                for(int j = 0; j < m.getCols(); j++)
                    for(int k = 0; k < cols; k++)
                        result.data[i][j] += data[i][k] * m.data[k][j];
            return result;
        }
};
int main(){
    Matrix A(2,2), B(2,2);
    A.setElement(0,0,1);
    A.setElement(0,1,2);
    A.setElement(1,0,3);
    A.setElement(1,1,4);
    B.setElement(0,0,5);
    B.setElement(0,1,6);
    B.setElement(1,0,7);
    B.setElement(1,1,8);

    cout<<"Matrix A:\n"; 
    A.display();
    cout<<"Matrix B:\n";
    B.display();

    Matrix sum=A.add(B);
    cout<<"Sum of A and B:\n";sum.display();

    Matrix product=A.multiply(B);
    cout<<"Product of A and B:\n";
    product.display();
return 0;
}