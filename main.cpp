#include "binary_search_tree.hpp"
int main()
{
    Squirrel cheeks = Squirrel("Cheeks");
    Node* node_one = new Node(&cheeks);

    Squirrel squeaks = Squirrel("Squeaks");
    Node* node_two = new Node(&squeaks);

    Squirrel fluffybutt = Squirrel("Mr. Fluffy Butt");
    Node* node_three = new Node(&fluffybutt);
  
    BinaryTree tree(node_one);

    tree.set_left(node_two);
    tree.set_right(node_three);

    string retrieved_node_one = tree.left()->data->get_name(); 
    string retrieved_node_two = tree.right()->data->get_name();

    cout << retrieved_node_one << endl;  
    cout << retrieved_node_two << endl;  

    return 0;
}
