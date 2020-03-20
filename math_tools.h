#include <vector>

using namespace std;

typedef vector<float> Vector;

typedef vector<Vector> Matriz;

void zeroes(Vector &v,int n ){
    for (int i = 0; i < n; i++)
    {
        v.push_back(0.0);
    }
    
}
//matriz cuadrada
void zeroes(Matriz &M, int n){

    for(int i=0;i<n;i++){
        Vector row(n,0.0);
        M.push_back(row);
    }

}

void copyVector(Vector v, Vector &copy){
    zeroes(copy, v.size());
    for (int i = 0; i < v.size(); i++)
    {
        copy.at(i)=v.at(i);
    }
    
}

void copyMatrix(Matrix A, Matrix &copy){
     zeroes(copy,A.size());
     for (int  i = 0; i < A.size(); i++)
     {
         for (int j = 0; i < count; i++)
         {
             /* code */
         }
         
     }
     
}