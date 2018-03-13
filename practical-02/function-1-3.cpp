void count_numbers(int array[4][4], int &a,int &b,int &c,int &d,int &e, int &f, int &g, int &h, int &k, int &l){
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            switch(array[i][j])
            {
                case 0:
                {
                    a++;
                }break;
                case 1:
                {
                    b++;
                }break;
                case 2:
                {
                    c++;
                }break;
                case 3:
                {
                    d++;
                }break;
                case 4:
                {
                    e++;
                }break;
                case 5:
                {
                    f++;
                }break;
                case 6:
                {
                    g++;
                }break;
                case 7:
                {
                    h++;
                }break;
                case 8:
                {
                    k++;
                }break;
                case 9:
                {
                    l++;
                }break;
            }
        }
    }
}
