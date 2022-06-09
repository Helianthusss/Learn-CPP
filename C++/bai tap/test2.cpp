int main(){
    int I, J, K, L;
    int n;
    CIN n->>; 
    int S [n];
    // for storing the visited city
    int D [n] [ n-];
    // distance between the two cities for storing
    int SUM = 0;
    // count the minimum path length for credit has been visited cities
    int Dtemp;
    // ensure Dtemp ratio between any two cities distances are large (in fact, a more accurate description of the algorithm should be infinite)
    int flag;
    flag //// most accessible, if they are visited, compared with 1, never been visited or 0
    // initialize the city the distance between the
    for (int I = 0; I <n-; I ++) {
        for (int J = 0; J <n-; J ++) {
            CIN >> D [I] [J];
            the distance between the cities // initialization , by their own input, i == j should be noted that when D [i] [j] = 0, and D [I] [J] == D [J] [I];
        }
    }
    i = 1; // i is city has been visited by
    S [0] = 0;
    {do
        K =. 1; Dtemp- = 10000;
        do {
            L = 0; In Flag = 0;
            do {
                IF (S [L] == K) {// determine whether the city has been visited, if they are visiting,
                    In Flag = 1; // the flag is 1
                    BREAK; // out of the loop, comparing the distance is not involved
                } the else
                    L ++;
            } the while (L <I);
            IF (flag == 0 && D [K] [S [I - 1]] <Dtemp-) {
                // D [K] [S [I -. 1]] represents the distance between the city and on an already visited city currently being accessed. 1-I * K /
                J = K;
                // J for storing cities visited K
                Dtemp- D = [K] [S [I -. 1]];
                // Dtemp- for temporarily storing the minimum value of the current path
            }
            K ++;
        the while} (K <n-);
        S [i] = j; // the visited city has stored j to S [i] in the
        I ++;
        SUM = + Dtemp-;
        // determine the shortest distance between the cities Note: at the end of the cycle, has not been returned to the city TSP original starting
    } the while (I <n-);
    SUM + = D [0] [J];
    // D [0] [J] where the traveling salesman the last city distance between the original departure city
    for (J = 0; J <n-; J ++) {
        // output path through the city
        COUT J << << "->";
    }
    COUT << endl;
    COUT SUM << << endl; // output value of the shortest path
    return 0;
}