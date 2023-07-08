#include<iostream>
using namespace std;

int main()
{
    /*
        //A program to print square
        int i,j,n;

        n=5;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<"0";
            }
            cout<<endl;
        }
    */



    /*
        //A program to print left triangle
        int i,j,n;
        n=5;
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                cout<<"1";
            }
            cout<<endl;
        }

    */



    /*
        //A Program to print Hollow square

        int i,j,n;
        n=10;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==0 || i==n-1 ||j==0 ||j==n-1)
                {
                    cout<<"9 " ;
                }
                else
                {
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    */




    /*
        //A program to print Hollow left triangle

        int i,j,n;
        n = 9;

        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                if(j==0||i==n-1||j==i)
                {
                    cout<<"# ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    */




    //A Program to print Left down triangle
    /*
         int i,j,n;

         n=7;
         for(i=0;i<n;i++)
         {
             for(j=0;j<n-i;j++)
             {
                 cout<<"# ";
             }
             cout<<endl;
         }
    */




    /*
        //A Program to print right triangle
        int i,j,n,k;

        n=7;

        for(i=1;i<=n;i++)
        {
            for(j=0;j<n-i;j++)
            {
                cout<<"  ";
            }
            for(k=1;k<=i;k++)
            {
                cout<<"@ ";
            }

            cout<<endl;
        }
    */




    /*
        //A Program to print right down triangle.

        int i,j,n,k;
        n=7;
        for(i=0;i<n;i++)

        {
            for(j=0;j<i;j++)
            {
                cout<<"  ";
            }
            for(k=1;k<=n-i;k++)
            {
                cout<<"* ";
            }

            cout<<endl;
        }
    */




    /*
      // A Program to print pyramid.
      int i,j,k,n;
      n=8;

      for(i=1;i<=n;i++)
      {
          for(j=0;j<n-i;j++)
          {
              cout<<"  ";
          }
          for(k=1;k<=2*i-1;k++)
          {
              cout<<"* ";
          }
          cout<<endl;
      }

      */





    /*
      //A program to print hollow pyramid
      int i,j,k,n;
      n=9;
      for(i=1;i<=n;i++)
      {
          for(j=0;j<n-i;j++)
          {
              cout<<"  ";

          }
          for(k=0;k<2*i-1;k++)
          {
              if(k==0||i==n||k==2*(i-1))
              {
                  cout<<"* ";
              }
              else
              {
                  cout<<"  ";
              }
          }
          cout<<endl;
      }
      */





    /*
        //A program to print reverse pyramid
        int i,j,k,n;
        n=8;
        for(i=0;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                cout<<"  ";
            }
            for(k=0;k<2*(n-i)-1;k++)
            {
                cout<<"# ";
            }
            cout<<endl;
        }
    */





    /*
    // A Program to print reverse hollow pyramid
    int i,j,k,n;
    n=8;
    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
        {
            cout<<"  ";
        }
        for(k=0; k<2*(n-i)-1; k++)
        {
            if(k==0||i==0||k==2*(n-i)-2)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    */




    /*
    //Diamond Pattern = Pyramid + Reverse Pyramid


    int i,j,k,n, a,b,c;
    n=5;

    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            cout<<"   ";
        }
        for(k=0;k<2*i-1;k++)
        {
            cout<<"&  ";
        }
        cout<<endl;
    }

      //Pyramid end and Reverse pyramid starts

    for(a=1;a<=n;a++)
    {
        for(b=0;b<a;b++)
        {
            cout<<"   ";
        }
        for(c=0;c<=2*(n-a)-2;c++)
        {
            cout<<"&  ";
        }
        cout<<endl;
    }

    */




    /*
    //A program to print hollow diamond pattern
      int i,j,k,n, a,b,c;
    n=12;

    for(i=1;i<=n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            cout<<"  ";
        }
        for(k=0;k<2*i-1;k++)
        {
            if(k==0||k==2*(i-1))
            {
                cout<<"& ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

      //Pyramid end and Reverse pyramid starts

    for(a=1;a<=n;a++)
    {
        for(b=0;b<a;b++)
        {
            cout<<"  ";
        }
        for(c=0;c<=2*(n-a)-2;c++)
        {
            if(c==0||c==2*(n-a)-2)
            {
                cout<<"& ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    */





    /*

    //A program to print hourglass pattern

    int i,j,k,n, a,b,c;

    n=6;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<"  ";
        }
        for(k=0;k<2*(n-i)-1;k++)

        {
            cout<<"^ ";
        }
        cout<<endl;

    }
    //Reverse end pyramid starts

    for(a=2;a<=n;a++)
    {
        for(b=0;b<n-a;b++)
        {
            cout<<"  ";
        }
        for(c=0;c<2*a-1;c++)
        {
            cout<<"^ ";
        }
        cout<<endl;
    }

    */




    return 0;
}
