static String timeConversion(String s)
   {
        String s1=s.substring(0,2);
        int s11=Integer.parseInt(s1);
        if(s11<12 && s.charAt(8)=='A')
           return(s.substring(0,8));
        else if(s11==12 && s1.charAt(8)=='A')
            return("00"+s.substring(2,8));
        else
        {
            int[]arr={12,13,14,15,16,17,18,19,20,21,22,23};
            if(s11==12)
                return(arr[0]+s.substring(2,8));
            else
                return(arr[s11]+s.substring(2,8));
        }



   }
