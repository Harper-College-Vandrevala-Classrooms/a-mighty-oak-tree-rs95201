#include <string>
#include <iostream>

using namespace std;

class Squirrel 
{
  private:
    string name;

  public:
    Squirrel(string name) 
    {
      this->name = name;
    }

    string get_name() 
    {
      return this->name;
    }
};

class Node
{
    public:
    Squirrel* data;
    Node* left;
    Node* right;
    
    Node(Squirrel* data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree
{
    Node* root;

    public:
    BinaryTree(Node* root_node) 
    {
        root = root_node;
    }
    
    void set_left(Node* node)
    {
        this->root->left = node;
    }

    void set_right(Node* node)
    {
        this->root->right = node;
    }

    Node* left()
    {
        return root->left;
    }

    Node* right()
    {
        return root->right;
    }
};
