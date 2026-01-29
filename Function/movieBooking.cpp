// movie ticket booking system  ==> add movie ,ticket book ,search

/*
1. add movie  : id,name,available_seats,timings
2. ticket booking  :
            1. id , movie , seat , timing
            2. tickets :
                  gold :200 , sliver:400 , platinum:800
            3.  Total booking ticket :
                    id   : 101
                    movie : KGF
                    timings : 10pm
                    total ticket : 3200
3. search movie :
            1. id :   101
4. display

example  :

id    name    available_seats    timings
101   KGF       100               10pm ,10am
102   RRR       50                9pm, 9am
*/

#include <iostream>
#include <stdlib.h>
using namespace std;
#define MOVIES 3

struct movieBooking
{
    int id, seat;
    string movie;
    string timing;
} m[MOVIES];

void addmovies()
{
    for (int i = 0; i < MOVIES; i++)
    {
        cout << "Enter movie ID : ";
        cin >> m[i].id;
        cout << "Enter movie name : ";
        cin >> m[i].movie;
        cout << "Enter movie seat : ";
        cin >> m[i].seat;
        cout << "Enter movie timing : ";
        cin >> m[i].timing;
    }
}

void ticketBooking()
{
    int i, id, seat, ticketType, price;
    int total;
    bool found = false;
    cout << "Enter movie id you want to book : ";
    cin >> id;

    for (i = 0; i < MOVIES; i++)
    {
        if (id == m[i].id)
        {
            found = true;
            cout << "Movie ID is : " << m[i].id << endl;
            cout << "Movie name is : " << m[i].movie << endl;
            cout << "Movie timing is : " << m[i].timing << endl;
            cout << "Available seat is : " << m[i].seat << endl;

            cout << "Enter no.of seat you want to book : ";
            cin >> seat;

            if (seat > m[i].seat)
            {
                cout << "Not enough seat available...";
                break;
            }

            cout << "Ticket Type:\n";
            cout << "1. Gold (200)\n";
            cout << "2. Silver (400)\n";
            cout << "3. Platinum (800)\n";
            cout << "Choose: ";
            cin >> ticketType;

            switch (ticketType)
            {
            case 1:
                price = 200;
                break;
            case 2:
                price = 400;
                break;
            case 3:
                price = 800;
                break;
            default:
                cout << "Invalid ticket type!\n";
                // return 1;
            }

            total = seat * price;
            m[i].seat -= seat;

            cout << "\n--- BOOKING DETAILS ---\n";
            cout << "Movie ID   : " << m[i].id << endl;
            cout << "Movie Name : " << m[i].movie << endl;
            cout << "Timings    : " << m[i].timing << endl;
            cout << "Total Bill : " << total << endl;
            break;
        }
    }
    if (!found)
    cout << "Movie not found!\n";
}

void searchMovie()
{
    int i, id;
    cout << "Enter movie id you want to search : ";
    cin >> id;
    for (i = 0; i < MOVIES; i++)
    {
        if (id == m[i].id)
        {
            cout << "ID : " << m[i].id << endl;
            cout << "Name : " << m[i].movie << endl;
            cout << "Seat : " << m[i].seat << endl;
            cout << "Timing : " << m[i].timing << endl;
            break;
        }
    }
}

void displayMovies()
{
    int i;
    cout << "id\tName\tSeat\tTime" << endl;
    for (i = 0; i < MOVIES; i++)
    {
        cout <<m[i].id<<"\t"<<m[i].movie<<"\t"<<m[i].seat<<"\t"<<m[i].timing<<endl;
    }
}

int main()
{
    int choice;

    while (true)
    {
        cout<<"\n1. Add Movie"<<endl;
        cout<<"2. Book Tickets"<<endl;
        cout<<"3. Search Movie"<<endl;
        cout<<"4. Display Movie"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice : "<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
                addmovies();
                break;
            case 2:
                ticketBooking();
                break;
            case 3:
                searchMovie();
                break;
            case 4:
                displayMovies();
                break;
            case 5:
                exit(0);
            default:
                cout<<"Invalid choice..."<<endl;
        }

    }
    
    return 0;
}