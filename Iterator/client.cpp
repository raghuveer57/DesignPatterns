#include <iostream>
#include "facebook.h"
#include "facebookiterator.h"

using namespace std;

int main()
{
   // an alternate way to send the shared_ptr into a function
   //auto profile_ptr = make_shared<Profile>("Joe","joe@gmail.com");

   //Set the main profile and create the social network instance
   auto mainProfile = make_shared<Profile>("Joe","joe@gmail.com");
   auto socialNetwork = make_shared<FaceBook>(mainProfile);

   // add some friends and coworkers
   auto friend1 = make_shared<Profile>("Jim","jim@gmail.com");
   auto coworker1 = make_shared<Profile>("Kim","kim@gmail.com");
   auto friend2 = make_shared<Profile>("Bean","bean@gmail.com");
   auto coworker2 = make_shared<Profile>("Deal","deal@gmail.com");

   socialNetwork->addFriend(friend1);
   socialNetwork->addCoworker(coworker1);
   socialNetwork->addFriend(friend2);
   socialNetwork->addCoworker(coworker2);


   auto fbIterator = socialNetwork->createFriendsIterator();
   auto fbIterator2 = socialNetwork->createFriendsIterator();
   cout << fbIterator->getNext()->getName() << endl;
   cout << fbIterator2->getNext()->getName() << endl;
   cout << fbIterator->getNext()->getName() << endl;
   cout << fbIterator2->getNext()->getName() << endl;
   return 0;
}