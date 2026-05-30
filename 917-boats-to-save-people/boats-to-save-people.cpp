class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        vector<int> vis(n,false);

        sort(people.begin(),people.end());

        int count = 0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                int j;
                for(j=n-1;j>i;j--){
                    if(!vis[j]){
                        if(people[i]+people[j]<=limit){
                            count++;
                            vis[i]=true;
                            vis[j]=true;
                            break;
                        }
                    }
                }

                if(j==i){
                    count++;
                    vis[i]=true;
                }
            }
        }

        return count;
    }
};