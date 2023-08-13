// sortstrl.java
public class sortstrl {
    static String box[]=
    {
        "case","public","int","continue","while","break","void","for","double","catch","super","finally","throws","try","private","class","if","char","this","synchronized","default","protected","long","throw","volatile","switch","const","static","return","abstract","else","boolean","byte","extends","final","implements","import","instanceof","interface","native","package","short","strictfp","transient","new","float","do","goto","protected",
    };
    public static void main(String args[ ]){
        String p;
        int i,j;
        sort(48);
        for(i=0;i<48;i++)
        {
            System.out.println( i + "]= " + box[i] );
        }
    }
    static void sort(int n){
        int i,j;
        String k;
        for(i=0;i<n;i++)
        for(j=0;j<n-1;j++)
        {
            if ( box[j].compareTo(box[j+1]) > 0 )
            {
                // swap
                k=box[j];
                box[j]=box[j+1];
                box[j+1]=k;
            }
        }
    };
};
