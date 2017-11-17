/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: bvance
 *
 * Created on November 17, 2017, 12:32 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
    class Matrix{
    public:
        
        Matrix(int n1, int n2, int n3, int n4){
            v[0][0]=n1;
            v[0][1]=n2;
            v[1][0]=n3;
            v[1][1]=n4;
        }
    
        void print() const{
            cout << v[0][0] << " " << v[0][1] << endl;
            cout << v[1][0] << " " << v[1][1] << endl;
            cout << "---------" << endl;
        }
        
        void add(const int& rhs){
            for(int i = 0; i<2; i++)
            {
                for(int j = 0; j<2; j++)
                {
                    v[i][j] += rhs;
                }
            }
        }
        
        void operator+(const int& rhs){
            add(rhs);
        }
        
        void add(Matrix& m){
            for(int i = 0; i<2; i++)
            {
                for(int j = 0; j<2; j++)
                {
                    v[i][j] += m.v[i][j];
                }
            }
        }
        
        void subtract(const int& rhs){
            for(int i = 0; i<2; i++)
            {
                for(int j = 0; j< 2; j++)
                {
                    v[i][j] -= rhs;
                }
            }
        }
        
        void operator-(const int& rhs)
            {
                subtract(rhs);
            }
        
        void subtract(Matrix& m){
            for(int i = 0; i<2; i++)
            {
                for(int j = 0; j<2; j++)
                {
                    v[i][j] -= m.v[i][j];
                }
            }
        }
        
    private:
        int v[2][2];
    };
/*
 * 
 */
int main(int argc, char** argv) {
    
    Matrix m(3,4,5,6);
    m + 2;
    m.print();
    
    Matrix n(3,7,2,5);
    m.add(n);
    m.print();
    
    m - 2;
    m.print();
    
    m.subtract(n);
    m.print();
    return 0;
}
