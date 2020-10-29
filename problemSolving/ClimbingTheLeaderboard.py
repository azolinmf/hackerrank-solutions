# https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem 

def climbingLeaderboard(scores, alice):
    scores = sorted(list(set(scores)))
    ranking = []
    n = len(scores)

    pos = 0
    for i in alice:
        while (n > pos and i >= scores[pos]):
            pos += 1
        ranking.append(n+1-pos) 

    return ranking
