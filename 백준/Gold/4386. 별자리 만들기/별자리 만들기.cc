#include<iostream>
#include<cmath>

using namespace std;

int parent[101]={0};
struct Data
{
    double a;
    double b;
};
struct Data edge[101];


int find(int x)
{
    if(x==parent[x])return x;
    else return parent[x]=find(parent[x]);

}

void Union(int a,int b)
{
    a=find(a);
    b=find(b);
    parent[b]=a;
}

struct Star 
{
    double a;
    double b;
    double weight;
};

struct Star star[100001];

int compare(const void *a,const void *b)
{
    struct Star *x=(struct Star *)a;
    struct Star *y=(struct Star *)b;

    if(x->weight<y->weight)return -1;
    else if(x->weight>y->weight)return 1;
    else return 0;
}

int main()
{
    int n;
    double Weight=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>edge[i].a>>edge[i].b;
        parent[i]=i;
    }
    int k=0;

    for(int i=0;i<n;i++)
    {
        double W=0;
        for(int j=0;j<n;j++)
        {
            if(i==j)continue;
            W=sqrt((edge[i].a-edge[j].a)*(edge[i].a-edge[j].a)+(edge[i].b-edge[j].b)*(edge[i].b-edge[j].b));
            star[k].a=i;
            star[k].b=j;
            star[k].weight=W;
            k++;
            //cout<<i<<" "<<j<<" "<<W<<"\n";
        }
    }

    qsort(star,k,sizeof(Star),compare);


    for(int i=0;i<k;i++)
    {
        if(find(star[i].a)!=find(star[i].b))
        {
            Union(star[i].a,star[i].b);
            Weight+=star[i].weight;
        }

    }


    printf("%0.3lf",Weight);

    return 0;
}