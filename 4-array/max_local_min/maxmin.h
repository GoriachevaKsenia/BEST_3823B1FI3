int maxmin(int input[], int size){
    int min = -1;
    if(input[0] < input[1])
    min = input[0];
    for(int i = 1; i < size -1; i++){
        if((input[i] < input[i - 1]) & (input[i] < input[i + 1])){
            if(input[i] > min)
            min = input[i];
        }
    }
    if(input[size - 1] < input[size - 2]){
        if(input[size - 1] > min)
        min = input[size - 1];
    }
    return min;
}