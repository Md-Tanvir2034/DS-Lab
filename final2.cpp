#include<iostream>
#include<cstdlib>

//Name : Md. Tanvir Mahmud Soyad
//ID: 24-60390-3
//course: Data Structure Lab
//Section : U

using namespace std;

typedef struct bin_tree{
    bin_tree * left , * right ;
    int data;

}

*nodebst;

nodebst makenode(int value){
    nodebst newnode = new bin_tree;
    newnode->data = value ;
    newnode->left = NULL ;
    newnode->right = NULL ;

    return newnode ;
}

nodebst insert_node(nodebst ptr , int value){
    if(ptr==NULL){
        ptr=makenode(value);
    }

    else if(value > ptr->data){
        ptr->right = insert_node(ptr->right , value);
    }
    else if(value < ptr->data){
        ptr->left = insert_node(ptr->left , value);
    }
    return ptr;
}

nodebst search_node(nodebst ptr , int value){
    if(ptr== NULL ){
        return NULL ;
    }
    else if(ptr->data == value){
        return ptr;
    }
    else if(ptr-> data < value){
        return search_node(ptr->right , value);
    }
    else if(ptr->data > value){
        return search_node(ptr->left , value);
    }
}


void inorder(nodebst ptr){
    if(ptr!= NULL){
        inorder(ptr->left);
        cout<<ptr->data<<" ";
        inorder(ptr->right);
    }
}

void preorder(nodebst ptr){
    if(ptr!=NULL){
        cout << ptr->data << " ";
        preorder(ptr->left);
        preorder(ptr->right);
    }
}

void postorder(nodebst ptr){
    if(ptr!=NULL){
        postorder(ptr->left);
        postorder(ptr-> right);
        cout << ptr->data << " ";
    }
}


nodebst Delete(nodebst ptr , int data){}

int main(){
    nodebst root = NULL,temp;
    int value, n , x ;
    
    cout << "==============================================" << endl;
    cout << "     BINARY SEARCH TREE OPERATIONS" << endl;
    cout << "==============================================" << endl;
    
    cout << "Enter the number of elements for your tree: ";
    cin>>n;

    cout << "Enter " << n << " numbers to build your tree: ";
    for(int i = 0; i < n ; i++){
        cin >> value;
        temp = root;

        if(root == NULL)
            root = insert_node(root , value);
        else
            temp = insert_node(temp , value);
    }

    cout << "Tree created successfully!" << endl;

    while(1){

        cout << "==============================================" << endl;
        cout << "             MAIN MENU" << endl;
        cout << "==============================================" << endl;
        cout << "1. Display Inorder Traversal" << endl;
        cout << "2. Display Preorder Traversal" << endl;
        cout << "3. Display Postorder Traversal" << endl;
        cout << "4. Search for a Value" << endl;
        cout << "5. Delete a Value" << endl;
        cout << "6. Insert New Value" << endl;
        cout << "7. Exit Program" << endl;
        cout << "==============================================" << endl;
        cout << "Enter your choice (1-7): ";
        cin >> x;

        switch(x){
            case 1:{
                cout << "Inorder Traversal (Sorted Order): " << endl;
                inorder(root);
                cout << endl;
            }
            break;

            case 2:{
                cout << " Preorder Traversal: " << endl;
                preorder(root);
                cout << endl;
            }
            break;

            case 3:{
                cout << "Postorder Traversal: " << endl ;
                postorder(root);
                cout << endl;
            }
            break;

            case 4:{
                cout << "Enter value to search: ";
                cin >> value;
                nodebst a;
                a = search_node(root , value);
                if(a==NULL)
                    cout << value << " was not found in the tree!" << endl;
                else
                    cout << value << " was found in the tree!" << endl;
            }
            break;

            case 5:{
                cout << "Enter value to delete: ";
                cin >> value;
                root = Delete(root , value);
                cout << value << " has been deleted from the tree!" << endl;
            }
            break;

            case 6:{
                cout << "Enter value to insert: ";
                cin >> value;
                temp = root;
                temp = insert_node(temp , value);

                cout << value << " has been inserted into the tree!" << endl;
            }
            break;

            case 7:{
                cout << "==============================================" << endl;
                cout << "    Thank you for using BST Program!" << endl;
                cout << "==============================================" << endl;


                return 0;
            }

            default:
                cout << "Invalid choice! Please enter a number between 1-7." << endl;
        }
    }
}