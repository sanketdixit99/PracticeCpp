for(int i=int(len1/2)-1; i>0-1; i--){
                int maxl = 2*i+1;
                int maxr = 2*i+2;
            
                if(maxl<=len1 && maxr>len1-1 && arr1[maxl] > arr1[i]){
                    swap(arr1, maxl, i);
                }
                if(maxr<=len1-1){
                    if(arr1[maxr] > arr1[maxl] && arr1[maxr] > arr1[i]){
                        swap(arr1, maxr, i);
                    }
                    if(arr1[maxl] > arr1[maxr] && arr1[maxl] > arr1[i]){
                        swap(arr1, maxl ,i);
                    }
                }
            }