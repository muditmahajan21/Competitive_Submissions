

// Write your Student class here
class Student
{   
    private:
    int scores[5];
    int sum = 0;

    public:
    void input()
    {
        for(int i = 0 ;i < 5; i++)
        {
            cin >> scores[i];
            sum += scores[i];
        }
    }

    int calculateTotalScore()
    {
        return sum;
    }
};

