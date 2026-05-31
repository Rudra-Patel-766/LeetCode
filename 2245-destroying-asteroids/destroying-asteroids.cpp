class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        int n=asteroids.size();
        sort(asteroids.begin(),asteroids.end());

        long long newMass = mass;

        for(int i=0;i<n;i++){
            if(newMass<asteroids[i]){
                return false;
            }

            else{
                newMass=newMass+asteroids[i];
            }
        }

        return true;
    }
};