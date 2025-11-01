package com.tetet;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.function.Function;
import java.util.stream.Collectors;
import java.util.stream.Stream;
import java.util.function.Supplier;
                                  //Actor导入
public class testoujishu {
//    public static void main(String[] args) {
//        ArrayList<Integer> list = new ArrayList<>();
//        Collections.addAll(list,1,2,3,4,5,6,7,7,8,9,10);
//        list.stream().filter(i -> i % 2 == 0).forEach(System.out::println);
//        List<Integer> list1 = list.stream().filter(n->n%2==0)
//                .collect(Collectors.toList());
//        System.out.println(list1);
//    }
//        public static void main(String[] args) {
//            ArrayList<String> list = new ArrayList<>();
//            Collections.addAll(list,"zhaangsaan,32","lisi,33","wangwu,34");
//            list.stream().filter(s-> Integer.parseInt(s.split(",")[1])>33)
//                    .forEach(System.out::println);//打印年龄大于33的人
//
//        }
        public static void main(String[] args) {
            ArrayList<String> manlist = new ArrayList<>();
            ArrayList<String> womanlist = new ArrayList<>();
            Collections.addAll(manlist, "蔡徐坤，32", "王鑫，33", "赵四，34", "王二，35", "王的五，36");
            Collections.addAll(womanlist, "杨幂，44", "李子，22", "高圆圆，45", "王师师，46");
            Stream<String> streaem1  = manlist.stream().filter(s->s.split(",")[0].length()==3).limit(2);
            Stream<String> stream2 = womanlist.stream().filter(s -> s.split(",")[0].startsWith("杨")).skip(1);
            Stream.concat(streaem1, stream2).map(new Function<String, Actor>() {
                //将字符串转换为Actor对象
                @Override
                public Actor apply(String s) {
                    return new Actor(s.split(",")[0], Integer.parseInt(s.split(",")[1]));
                }
            }).forEach(s -> System.out.println(s));
        }

}
