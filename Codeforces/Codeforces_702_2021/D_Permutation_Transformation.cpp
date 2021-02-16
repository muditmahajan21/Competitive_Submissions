#include "bits/stdc++.h"
#define endl "\n"
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* new_node(int data)
{
    struct node* new_temp;
    new_temp = (struct node*)malloc(sizeof(struct node));
    new_temp -> left = NULL;
    new_temp -> right = NULL;
    new_temp -> data = data;

    return new_temp;
}

struct node* create_node(struct node* head, int arr[], int left, int right)
{
    int i, max_index, k, temp, curr = 0;

    if(left > right)
    {
        return NULL;
    }

    for(i = left; i < right + 1; i++)
    {
        if(arr[i] > curr)
        {
            curr = arr[i];
            max_index = i;
            temp = arr[i];
        }
    }

    head = new_node(temp);

    head -> right = create_node(head -> right, arr, max_index + 1, right);
    head -> left = create_node(head -> left, arr, left, max_index - 1);

    return head;
}

int depth(struct node* head, int data, int height)
{      
    int ans;
    if(head == NULL)
    {
        ans = 0;
    }
    else if(head -> data == data)
    {
        ans = height;
    }
    else
    {
        ans = depth(head -> left, data, height + 1) + depth(head -> right, data, height + 1);
    }
    return ans;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while(test--)
    {
        int i, j, k, n, temp, count = 0, sum = 0;
        cin >> n;
        int arr[n], ans[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        
        struct node* head;
        
        head = create_node(head, arr, 0, n - 1);
        
        for(i = 0; i < n; i++)
        {
            temp = depth(head, arr[i], 0);
            ans[i] = temp;
        }
        
        for(i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

return 0;
}
