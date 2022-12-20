

int marks_summation(int* marks, int number_of_students, char gender) 
{
    int iSum = 0;
    
    if(gender == 'b')
    {
        for(int i = 0; i < number_of_students; i = i +2)
        {
            iSum = marks[i]+iSum;
        }  
    }
    else 
    {
        for(int i = 1; i < number_of_students; i = i +2)
        {
            iSum = marks[i] + iSum;
        }
    }
    
    return iSum;
}

