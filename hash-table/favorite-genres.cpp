#include "hash-table.h"

/// AMAZON OA
/// https://leetcode.com/discuss/interview-question/373006

/*
 * Given a map Map<String, List<String>> userSongs with user names as keys and a list of all
 * the songs that the user has listened to as values.

Also given a map Map<String, List<String>> songGenres, with song genre as keys and a list of all
 the songs within that genre as values. The song can only belong to only one genre.

The task is to return a map Map<String, List<String>>, where the key is a user name and the value
 is a list of the user's favorite genre(s). Favorite genre is the most listened to genre.
 A user can have more than one favorite genre if he/she has listened to the same number of songs per each of the genres.

Example 1:

Input:
userSongs = {
   "David": ["song1", "song2", "song3", "song4", "song8"],
   "Emma":  ["song5", "song6", "song7"]
},
songGenres = {
   "Rock":    ["song1", "song3"],
   "Dubstep": ["song7"],
   "Techno":  ["song2", "song4"],
   "Pop":     ["song5", "song6"],
   "Jazz":    ["song8", "song9"]
}

Output: {
   "David": ["Rock", "Techno"],
   "Emma":  ["Pop"]
}

Explanation:
David has 2 Rock, 2 Techno and 1 Jazz song. So he has 2 favorite genres.
Emma has 2 Pop and 1 Dubstep song. Pop is Emma's favorite genre.
Example 2:

Input:
userSongs = {
   "David": ["song1", "song2"],
   "Emma":  ["song3", "song4"]
},
songGenres = {}

Output: {
   "David": [],
   "Emma":  []
}
 */

unordered_map<string, vector<string>> songsAndGenre(unordered_map<string, vector<string>>& users,
                                                    unordered_map<string, vector<string>>& genres) {
    return {};
}



//unordered_map<string,vector<string>> songsAndGenre(unordered_map<string,vector<string>>& users, unordered_map<string,vector<string>>& genres){
//    unordered_map<string,string> songToGenre;
//    unordered_map<string,unordered_map<string,int>> userToGenre;
//    unordered_map<string,vector<string>> result;
//    unordered_map<string,int> max;
//    for(auto genre:genres)
//    {
//        for(auto song: genre.second)
//        {
//            songToGenre[song] = genre.first;
//        }
//    }
//
//    for(auto user:users)
//    {
//        for(auto item:user.second)
//        {
//            userToGenre[user.first][songToGenre[item]]++;
//            auto tempMax = userToGenre.at(user.first).at(songToGenre[item]);
//            max[user.first] = std::max(tempMax,max[user.first]);
//        }
//    }
//
//    for(auto user:userToGenre)
//    {
//        for(auto genre:user.second)
//        {
//            if(genre.second==max.at(user.first))
//            {
//                result[user.first].push_back(genre.first);
//            }
//        }
//    }
//
//    return result;
//}
//
//int main() {
//    unordered_map<string,vector<string>> users;
//    users["David"] = {"song1", "song2", "song3", "song4", "song8"};
//    users["Emma"] = {"song5", "song6", "song7"};
//
//    unordered_map<string,vector<string>> songs;
//    songs["Rock"] = {"song1", "song3"};
//    songs["Dubstep"] = {"song7"};
//    songs["Techno"] = {"song2", "song4"};
//    songs["Pop"] = {"song5", "song6"};
//    songs["Jazz"] = {"song8", "song9"};
//
//    auto result = songsAndGenre(users,songs);
//    for(auto x: result)
//    {
//        cout<<x.first<<" : ";
//        for(auto song:x.second)
//        {
//            cout<<song<<" ";
//        }
//        cout<<endl;
//    }
//
//    users.clear();
//    songs.clear();
//
//    users["David"] = {"song1", "song2"};
//    users["Emma"] = {"song3", "song4"};
//
//    result = songsAndGenre(users,songs);
//    for(auto x: result)
//    {
//        cout<<x.first<<" : ";
//        for(auto song:x.second)
//        {
//            cout<<song<<" ";
//        }
//        cout<<endl;
//    }
//
//}