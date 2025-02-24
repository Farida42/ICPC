#include <bits/stdc++.h>
using namespace std;
int main()
{
    string value;
    int cost[26];
    cin >> value;
    for(int i=0; i<26; i++)
    {
        cin >>  cost[i];
    }
    int size=value.size();
    int  count=0;
    for(int i=0; i<size; i++)
    {
        int  count=0;
        if(value[i] == '?')
        {
            for(int j=i; j<size; j++)
            {
                if(value[i] == '?')
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if(count == size)
            {
                cout << "0" << endl;
                for(int j=0; j<size; j++)
                {
                    cout << "a";
                }
            }
            else
            {
                if(i == 0)
                {
                    int max = INT_MAX,index;
                    char c = index+97;
                    /*for(int j=0; j<count; j++)
                    {
                       value[j] = c;
                    }*/
                    for(int j=0; j<value[count]-97+1; j++)
                    {
                        int mycost = abs(cost[value[count]-97]-cost[j]);
                        if(mycost<max)
                        {
                            max = mycost;
                            index = j;
                        }
                    }

                    for(int j=0; j<count; j++)
                    {
                        value[j] = c;
                    }
                    i+=count;
                }
                else if(i+count == size)
                {
                    int c;
                    int ma = INT_MAX,index;
                    for(int j=0; j<count; j++)
                    {
                        value[j] = c;
                    }
                    for(int j=0; j<value[i-1]-97+1; j++)
                    {
                        int mycost = abs(cost[value[i-1]-97]-cost[j]);
                        if(mycost<ma)
                        {
                            ma = mycost;
                            index = j;
                        }
                    }
                    for(int j=i; j<count+i; j++)
                    {
                        value[j] = c;
                    }
                }
                break;
            }
        }
        else
        {
            for(int j=0; j<26; j++)
            {
                int mycost = abs(cost[value[j-1]-97]-cost[j])+abs(cost[j]-cost[value[j+1]-97]);
                int ma = INT_MAX,index;
                if(mycost<ma)
                {
                    ma = mycost;
                    index = j;
                }
                char c = index+97;
                for(int j=i; j<i+count; j++)
                {
                    value[j] = c;
                }
                i += count;
            }
        }
    }
    int finalcost = 0;
    for(int i=0; i<size-1; i++)
    {
        finalcost << abs(cost[value[i]-97] - cost[value[i+1]-97]);
    }
    cout << finalcost << endl;
    cout << value << endl;
    return 0;
}
