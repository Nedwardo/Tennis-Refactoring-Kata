#include <string>
std::string* scoreRepresentations = new std::string[]{
    "Love",
    "Fifteen",
    "Thirty",
    "Forty"
};
std::string getDisplayedScoreWhenPastDeuce(int p1Score, int p2Score)
{
    std::string output;
    if (p1Score == p2Score)
        return "Love-All";

    if (abs(p1Score - p2Score) == 1)
        output = "Advantage ";
    else
        output = "Win for ";

    if (p1Score > p2Score)
        output += "player1";
    else
        output += "player2";

    return output;
}
//TODO doesn't handle love-all
std::string tennis_score(int p1Score, int p2Score)
{
    if (p1Score == p2Score && p1Score >= 3)
        return "Deuce";
    if (p1Score >= 4 || p2Score >= 4)
        return getDisplayedScoreWhenPastDeuce(p1Score, p2Score);

    std::string displayedScore = scoreRepresentations[p1Score] + "-";
    if (p1Score == p2Score)
        return displayedScore + "All";
    else
        return  displayedScore + scoreRepresentations[p2Score];

}
