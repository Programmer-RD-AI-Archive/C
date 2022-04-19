


    
    





    
   
    
       
    
    
    
        
    }
    else if (arr[mid] > val)
    {
        return binary_search(arr, val, l_idx, mid - 1);
    }
    else
    {
        return binary_search(arr, val, mid + 1, r_idx);
    }
}
