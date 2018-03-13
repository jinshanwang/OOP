#include <iostream>

extern int count_numbers(int array[4][4], int &a,int &b,int &c,int &d,int &e, int &f, int &g, int &h, int &k, int &l);

int main(int argc,char*argv[])
{
    int zeros = 0, ones = 0,twos = 0,threes = 0, fours = 0, fives = 0, sixs = 0,
    sevens = 0, eights = 0, nines = 0;
    int array[4][4] = {
        {0, 0, 2, 3} ,
        {4, 5, 6, 9} ,
        {0, 0, 1, 2} ,
        {8, 3, 1, 9},
    };
    count_numbers(array,zeros,ones,twos,threes,fours,fives,sixs,sevens,eights,nines);
    std::cout<<"0:"<<zeros<<";1:"<<ones<<";2:"<<twos<<";3:"<<threes<<";4:"<<fours<<";5:"<<fives <<";6:"<<sixs<<";7:"<<sevens<<";8:"<<eights<<";9:"<<nines<<std::endl;
    return 0;
}
