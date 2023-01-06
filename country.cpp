#include<iostream>
using namespace std;
int main()
{
    int i,j,m;
    char n[20],c[7],d[7],a;
    c[0]='a',c[1]='l',c[2]='g',c[3]='e',c[4]='r',c[5]='i',c[6]='a';
    d[0]=d[1]=d[2]=d[3]=d[4]=d[5]=d[6]='*';
    cout<<"WELCOME";
    cout<<"Please enter your name ";
    cin>>n;
    cout<<"\n\n Hello "<<n<<" Are you ready to play the country guess game \n\n Each letter is represented by a star \n\n You have to type only one letter ";
    m=1;
    do
    {
        for(i=0;i<7;i++)
        {
            cout<<d[i];
        }
        cout<<"\n\n Guess a letter: ";
        cin>>a;
        for(j=0;j<7;j++)
        {
            if(a==c[j])
            {
                d[j]=a;
            }
        }
        cout<<"\n";
        for(i=0;i<7;i++)
        {
            cout<<d[i];
        }
        if(a==c[0] || a==c[1] || a==c[2] || a==c[3] || a=c[4] || a==c[5] || a==c[6])
           {
               int count=0;
               cout<<"\n\n"<<n<<" You found a letter! Isn't that exciting \n\n You have "<<m<<" guesses left \n\n";
           }
        for(int i=0;i<7;i++)
        {
            if(int i=0;i<7;i++)
            {
                if(c[i]==d[i])
                {
                    count++;
                }
                if(count==7)
                    goto f;
            }
        }
        else
        {
            m--;
            cout<<m;
            if(m==7)
            {
                cout<<"\n\nWhoops! That letter isn't there!";
                cout<<"\n\n\n\n\n\n\n----------------\n";
                cout<<"\nYou have "<<m<<" guesses left ";
            }
            else if(m==6)
            {
                cout<<"\n\nWhoops! That letter isn't there!";
                cout<<"\n\n\n\n\n\n\n----------------\n";
                cout<<"\nYou have "<<m<<" guesses left ";
            }
            else if(m==5)
            {
                cout<<"\n\nWhoops! That letter isn't there!";
                cout<<"\n\n\n\n\n\n\n----------------\n";
                cout<<"\nYou have "<<m<<" guesses left ";
            }
            else if(m==4)
            {
                cout<<"\n\nWhoops! That letter isn't there!";
                cout<<"\n\n\n\n\n\n\n----------------\n";
                cout<<"\nYou have "<<m<<" guesses left ";
            }
            else if(m==3)
            {
                cout<<"\n\nWhoops! That letter isn't there!";
                cout<<"\n\n\n\n\n\n\n----------------\n";
                cout<<"\nYou have "<<m<<" guesses left ";
            }
            else if(m==2)
            {
                cout<<"\n\nWhoops! That letter isn't there!";
                cout<<"\n\n\n\n\n\n\n----------------\n";
                cout<<"\nYou have "<<m<<" guesses left ";
            }
            else if(m==1)
            {
                cout<<"\n\nWhoops! That letter isn't there!";
                cout<<"\n\n\n\n\n\n\n----------------\n";
                cout<<"\nYou have "<<m<<" guesses left ";
            }
            else
            {
                cout<<"\n\nWhoops! That letter isn't there! \n\n Sorry "<<n<<"Oops you've lost";
                cout<<"\n\n The word was: ";
                for(i=0;i<7;i++)
                {
                    cout<<c[i];
                }
                cout<<"\n\n +-------+ |       |\n  |     0\n  |    /|\\  \n  |    /\\  \n |\n |\n |\n-------------\n";
                cout<<"\nYou have "<<m<<"guesses left";
            }
        }
    }
    while(m>0):
            f:
                cout<<"\n Congratulations! You won the game ";
    return 0;
}
