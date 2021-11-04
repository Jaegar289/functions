
#include<string>

template <class T>
class binary_tree{
private:
    binary_tree<T>* m_parent = nullptr;
    binary_tree<T>* m_left = nullptr;
    binary_tree<T>* m_right = nullptr;
    T m_value;
    bool m_parent_mode = 0;
    void set_child(const binary_tree<T>& tree,std::string param);
    void set_child(binary_tree<T>&& tree,std::string param);
    void set_parent(const binary_tree<T>& tree,std::string param);
    void set_parent(binary_tree<T>&& tree,std::string param);
    void remove_child(std::string param);
public:
    binary_tree<T>(){}
    binary_tree<T>(T value): m_value(value){};
    binary_tree<T>(const binary_tree<T>& tree);
    binary_tree<T>(binary_tree<T>&& tree);
    ~binary_tree();
    binary_tree<T>& operator= (const binary_tree<T>& tree);
    binary_tree<T>& operator= (binary_tree<T>&& tree);
    void set_left_child(const binary_tree<T>& tree);
    void set_left_child(binary_tree<T>&& tree);
    void set_right_child(const binary_tree<T>& tree);
    void set_right_child(binary_tree<T>&& tree);
    void left_set_parent(const binary_tree<T>& tree);
    void left_set_parent(binary_tree<T>&& tree);
    void right_set_parent(const binary_tree<T>& tree);
    void right_set_parent(binary_tree<T>&& tree);
    void set_value(T value){m_value=value;}
    T get_value(){return(m_value);} 
    void remove_left_child();
    void remove_right_child();
    void remove_parent();
    binary_tree<T>* get_parent(){return(m_parent);};
    binary_tree<T>* get_left(){return(m_left);};
    binary_tree<T>* get_right(){return(m_right);};
};