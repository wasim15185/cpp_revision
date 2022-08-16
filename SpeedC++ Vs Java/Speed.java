
abstract class Print{
  public abstract  void log(String s) ;
  public abstract void log(long l) ;
}

class SpeedExecutor extends Print{

    int itaration ;


   public SpeedExecutor(int i){
        this.itaration = i ;
    }

    @Override
    public void log(String s){
        System.out.println(s);

    } 

    @Override
    public void log(long l){
        System.out.println(l);
    }


    public void run(){

        long executeStart = System.currentTimeMillis();

        for(int i =0;i<itaration;i++){
             log("Wait . I am executing Now My current itaration status is :-  "+i+" / "+itaration);
                
        }
        
        long executeEnd =  System.currentTimeMillis();

        float executionTime = (executeEnd-executeStart) ;

        log("Execution Time is "+executionTime +" ms");

         

    }


}

 
public class Speed{
    public static void main(String[] args) {
        var speedExecutor = new SpeedExecutor(15000);
        speedExecutor.run();
        
    }
}