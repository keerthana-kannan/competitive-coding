//MEMmove
/*memmove() is similar to memcpy() as it also copies data from a source to destination. 
memcpy() leads to problems when source and destination addresses overlap as memcpy() 
simply copies data one by one from one location to another. */
void myMemMove(void *dest, void *src, size_t n) 
{ 
   // Typecast src and dest addresses to (char *) 
   char *csrc = (char *)src; 
   char *cdest = (char *)dest; 
  
   // Create a temporary array to hold data of src 
   char *temp = new char[n]; 
  
   // Copy data from csrc[] to temp[] 
   for (int i=0; i<n; i++) 
       temp[i] = csrc[i]; 
  
   // Copy data from temp[] to cdest[] 
   for (int i=0; i<n; i++) 
       cdest[i] = temp[i]; 
  
   delete [] temp; 
} 