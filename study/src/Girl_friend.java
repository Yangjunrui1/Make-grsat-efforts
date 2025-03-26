public class Girl_friend {
    //属性
  private int age;
  private String name;
  private String sex;
  //作用给对象的属性赋值
  public void setName(String n){
      name = n;
  }
  //作用是对外提供属性
  public String getName(){
      return name;
  }
  public void setAge(int a){
      if(a>=18&&a<=30){
          age = a;
      }else{
          System.out.println("年龄太大了");
      }
  }
  public int getAge(){
      return age;
  }
public void setSex(String s){
      sex = s;
}

   public String getSex(){
      return sex;
   }
}
