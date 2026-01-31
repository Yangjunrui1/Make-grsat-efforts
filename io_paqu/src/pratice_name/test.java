package pratice_name;

import java.io.*;
import java.util.ArrayList;

public class test {
    public static void main(String[] args) throws IOException {
        //读取文件
        ArrayList<Student> list = new ArrayList<>();//创建一个集合
        BufferedReader br = new BufferedReader(new FileReader("names.txt"));//创建一个BufferedReader对象
        String line;
        while ((line = br.readLine()) != null) {

            String[] arr = line.split("—");
            Student stu = new Student(arr[0], arr[1], Integer.parseInt(arr[2]), Double.parseDouble(arr[3]));
            list.add(stu);
        }
        br.close();
        System.out.println(list);
        //2,计算权重的总和
        double totalWeight = 0;
        for (Student student : list) {
            totalWeight += student.getWeight();
        }
        //3,计算每一个数据的实际占比
        double[] arr = new double[list.size()];
        int index = 0;
        for (Student student : list) {
            arr[index] = student.getWeight() / totalWeight;
            index++;
        }
        System.out.println(arr);
        //4,计算每一个的权重占比范围
        for (int i = 0; i < arr.length; i++) {
            arr[i] = arr[i] + arr[i - 1];
        }
        //5.随机抽数字

    }
}
