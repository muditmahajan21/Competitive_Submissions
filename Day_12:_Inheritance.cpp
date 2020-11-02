

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        Student(string fname, string lname, int i, vector<int> scores): Person(fname, lname, i), testScores(scores)
        {
            
        }
        char calculate()
        {
            int sum = 0;
            int len = testScores.size();
            for(int j = 0; j < len; j++)
            {
                sum += testScores[j];
            }
            int avg = sum / testScores.size();
            

            if (avg >= 90 && avg <= 100)
            {
                return 'O';
            }
            else if(avg >= 80 && avg < 90)
            {
                return 'E';
            }
            else if(avg >= 70 && avg < 80)
            {
                return 'A';
            }
            else if(avg >= 55 && avg < 70)
            {
                return 'P';
            }
            else if(avg >= 40 && avg < 55)
            {
                return 'D';
            }
            else if(avg < 40)
            {
                return 'T';
            }
            return 'T';
        }
};

