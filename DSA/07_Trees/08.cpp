// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };
// Node* sortedArrayToBST(int arr[], int s, int e){
//     if(s > e) return NULL;

//     int mid =(s+e)/2;
//     Node* root = new Node(arr[mid]);

//     root->left = sortedArrayToBST(arr, s, mid-1);
//     root->right = sortedArrayToBST(arr, mid+1, e);

//     return root;
// }
// int main(){

// }




// https://www.naukri.com/code360/problems/two-sum-in-a-bst_1062631?leftPanelTabValue=SUBMISSION

// void inorder(BinaryTreeNode<int>* root, vector<int> &vec){
//     if(root==NULL) return;

//     inorder(root->left, vec);
//     vec.push_back(root->data);
//     inorder(root->right, vec);

// }

// bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
// 	//Write your code here
//     vector<int> inorderVal;
//     inorder(root,inorderVal);

//     int i = 0;
//     int j = inorderVal.size()-1;

//     while(i<j){
//         int sum = inorderVal[i] + inorderVal[j];
//         if(sum == target) return true;
//         else if(sum > target) j--;
//         else i++;
//     }
//     return false;


// }


// //--------------------------


// https://www.naukri.com/code360/problems/flatten-bst-to-a-sorted-list_1169459?leftPanelTabValue=SUBMISSION


// void inorder(TreeNode<int>* root, vector<int> &vec){
//     if(root==NULL) return;

//     inorder(root->left, vec);
//     vec.push_back(root->data);
//     inorder(root->right, vec);

// }

// TreeNode<int>* flatten(TreeNode<int>* root)
// {
//     // Write your code here
//     vector<int> inorderVal;
//     inorder(root, inorderVal);
//     int n = inorderVal.size();

//     //create a new root/pointer
    
//     TreeNode<int>* newRoot = new TreeNode<int> (inorderVal[0]);
//     TreeNode<int>* curr = newRoot;

//     for(int i = 1; i < n; i++){
//         TreeNode<int>* temp = new TreeNode<int>(inorderVal[i]);
//         curr->left = NULL;
//         curr->right = temp;
//         curr = temp;
//     }

//     //for last node
//     curr->left = NULL;
//     curr->right = NULL;
//     return newRoot;


// }

// https://www.naukri.com/code360/problems/h_920474?leftPanelTabValue=SUBMISSION

// void inorder(TreeNode* root, vector<int> &vec){
//     if(root==NULL) return;

//     inorder(root->left, vec);
//     vec.push_back(root->data);
//     inorder(root->right, vec);

// }

// vector<int> mergeArray(vector<int> &arr1, vector<int> &arr2){
//     vector<int> ans(arr1.size() + arr2.size());

//     int i = 0, j = 0;
//     int k = 0;

//     while(i < arr1.size() && j < arr2.size()){
//         if(arr1[i] < arr2[j]){
//             ans[k++] = arr1[i];
//             i++;
//         }
//         else{
//             ans[k++] = arr2[j];
//             j++;
//         }
//     }
//     while(i < arr1.size()){
//         ans[k++] = arr1[i];
//         i++;
//     }

//     while(j < arr2.size()){
//         ans[k++] = arr2[j];
//         j++;
//     }
//     return ans;
// }

// //create bst from inorder
// TreeNode* inorderToBST(int s, int e, vector<int> &vec){
//     if(s>e) return NULL;

//     int mid = (s+e)/2;
//     TreeNode* root = new TreeNode(vec[mid]);
//     root->left = inorderToBST(s, mid-1, vec);
//     root->right = inorderToBST(mid+1, e, vec);
//     return root;
// }

// vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
// {
//     // Write your code here.

// //store inorder
//     vector<int> bst1, bst2;
//     inorder(root1, bst1);
//     inorder(root2, bst2);

//     vector<int> mergedArrays = mergeArray(bst1, bst2);

//     int s = 0;
//     int e = mergedArrays.size() - 1;
//     TreeNode* mergedBSTRoot = inorderToBST(s, e, mergedArrays);

//     // Store inorder traversal of merged BST
//     vector<int> result;
//     inorder(mergedBSTRoot, result);

//     return result;



// }