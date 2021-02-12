   int element;
     vector <int> elements;

     int count = 0;
     do
     { 
          cin >> element;

          if(element == '\0' || isRange(element)==0) 
               break;

          else {
          elements.push_back(element);
          }

     } while (1);
     
     for(int i = 0; i < count; i++) {
          cout << elements.at(i)<<endl;
     }
     average(elements,(elements.size()-1));