#include <flags.h>
#include <getopt.h>
#include <stdlib.h>

void init_list_flags(t_list_flags *list)
{
    list->_size = 0;
    list->_first = NULL;
    list->_last = NULL;
}

void push_back_flag(t_list_flags *list, char key)
{
    t_node_flags *new_element;

    new_element = malloc(sizeof(t_node_flags));
    if (new_element == NULL || list == NULL)
    {
        free(new_element);
        free(list);
        return ;
    }
    new_element->_key = key;
    new_element->_ptr_func = NULL;
    new_element->_next = NULL;
    list->_size++;
    if (list->_last != NULL)
        list->_last->_next = new_element;
    else
        list->_first = new_element;
    list->_last = new_element;
}

void get_flags(int argc, char **argv, t_list_flags *list)
{
    int option;

    while ((option = getopt(argc, argv, "lRrdtaAL")) != -1)
    {
        if (option != '?')
            push_back_flag(list, (char)option);
    }
}
