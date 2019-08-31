#include <iostream>
#include <vector> //need this library for vectors
using namespace std;

int main (){
//    vector <char> vowels (5);   //vector <VARIABLE TYPE> NAME OF VARAIBLE
                                //followed by the number of values (?)
 //   vector <int> test_scores (10); //vector of integers called test_scores with 10 values

    vector <char> vowels {'a','e','i','o','u'};
    vector <int> test_scores {100, 98, 89, 85, 93};
    vector <double> hi_temperatures (365, 80.0); //initalizing 365 doubles, all in which are 80.0
 
cout <<"First score at index 0: "<<test_scores[0] << endl; //one way to call a value
cout <<"Second score at index 1: "<< test_scores.at(1) << endl; //second way to call a value using the .at(_)
cout <<"Third score at index 2: " << test_scores[2]<< endl;
cout <<"Fourth score at index 3: "<< test_scores.at(3)<< endl;
cout<<"Fifth score at index 4: "<< test_scores[4]<<endl; 

cout<<"\nThere are "<< test_scores.size() <<" scores in the vector" << endl; //.size() gives the size of the vector

cout <<"Enter 5 test scores: ";
cin >> test_scores.at(0) >> test_scores.at(1) >> test_scores.at(2) >> test_scores.at(3) >> test_scores.at(4);

cout <<"\nUpdated test scores: "<< endl;
cout << test_scores.at(0)<< endl;
cout <<test_scores.at(1) << endl;
cout << test_scores.at(2) << endl;
cout << test_scores.at(3) << endl;
cout << test_scores.at(4) << endl;

//Vector_name.push_back(element)

vector <int> new_scores {100, 95, 99}; //size is 3

new_scores.push_back(80); //100, 95, 99, 80
new_scores.push_back(90); //100, 95, 99, 80, 90

cout <<"\nthe last score in new scores is: "<<new_scores[4] << endl; //will print out 90


cout <<"\nAdd another score to the vector: "<< endl;
int add_to_score {0};
cin >> add_to_score;

test_scores.push_back(add_to_score);

cout <<"\nPut one more test score: ";
cin >> add_to_score;

test_scores.push_back(add_to_score);
cout <<"\nThe new test scores are: "<< endl;

cout << test_scores.at(0)<< endl;
cout <<test_scores.at(1) << endl;
cout << test_scores.at(2) << endl;
cout << test_scores.at(3) << endl;
cout << test_scores.at(4) << endl;
cout << test_scores.at(5) << endl;
cout<< test_scores.at(6) << endl;



//EXAMPLE OF A 2D VECTOR

vector <vector<int>> movie_ratings
{
    {1, 2, 3, 4},
    {1, 2, 4, 4},
    {1, 3, 4, 5}
};

cout<<"\nHere are the movie rating for reviewer #1 using array syntax:" << endl;
cout<<movie_ratings[0][0]<< endl;
cout<<movie_ratings[0][1]<< endl;
cout<<movie_ratings[0][2]<< endl;
cout<< movie_ratings[0][3]<< endl;

cout<<"\nHere are the movie rating for viewer #1 using vector syntax: "<< endl;
cout<<movie_ratings.at(0).at(0)<< endl;
cout<<movie_ratings.at(0).at(1)<< endl;
cout<< movie_ratings.at(0).at(2)<< endl;
cout<< movie_ratings.at(0).at(3)<<endl;
   return 0;
}