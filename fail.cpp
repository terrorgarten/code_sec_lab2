#include <iostream>
int Static[101];
int memcheckFailDemo(int* arrayStack, unsigned int arrayStackLen, 
	int* arrayHeap, unsigned int arrayHeapLen) {
  int Stack[101];

  Static[100] = 0; 
  Stack[100] = 0; 

  for (int i = 0; i <= 5; i++) Stack [i] = 0;

  int* array = new int[5];
  array[1] = 0;

  arrayStack[1] = 0;
  arrayHeap[1] = 0;

  for (unsigned int i = 0; i <= arrayStackLen; i++) {
      arrayStack[i] = 0;
  }
  for (unsigned int i = 0; i <= arrayHeapLen; i++) {
      arrayHeap[i] = 0;
  }
  delete[] array;
  return 0;
}

int main() {
  int arrayStack[5];
  int* arrayHeap = new int[5];
  memcheckFailDemo(arrayStack, 5, arrayHeap, 5);
  delete[] arrayHeap;
  return 0;
}

