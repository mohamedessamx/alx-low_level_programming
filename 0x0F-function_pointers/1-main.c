#include "function_pointers.h"
/**
 * array_iterator -  executes a function given as a parameter
 *                      on each element of an array
 * @array: int array
 * @size: array size
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
        if (array == NULL || action == NULL)
                return;

        for (size_t i = 0; i < size; i++)
        {
                action(array[i]);
        }
}
