package com.myiotest.test1;

import cn.hutool.core.io.FileUtil;
import cn.hutool.core.util.ReUtil;
import cn.hutool.http.HttpUtil;

import java.util.ArrayList;
import java.util.HashSet;
import java.util.Random;

public class Text2 {
    public static void main(String[] args) {
        String famileyNameNet = "https://hanyu.baidu.com/shici/detail?pid=0b2f26d4c0ddb3ee693fdb1137ee1b0d";
        String boyNameNet = "https://www.cnjiaju.cn/article/185341.html";
        String girlNameNet = "https://www.cnjiaju.cn/article/185156.html";
        //2 爬取数据，把网址上的数据拼接成一个字符串；
        String familenamestr = HttpUtil.get(famileyNameNet);
        String boyNameNetstr = HttpUtil.get(boyNameNet);
        String girlNameNetstr = HttpUtil.get(girlNameNet);
        //3,利用正则表达式
//        ArrayList<String> familyNameTemp = getData(result, "(.{4})(，|。)" ,1);
//        System.out.println(familyNameTemp);
//        ArrayList<String> boyNameTemp = getData(result2, "([\\u4e00-\\u9fff]{2})(、)" ,1);
//        System.out.println(boyNameTemp);
//        ArrayList<String> girlNameTemp = getData(result3, "([\\u4e00-\\u9fff]{2})(、)" ,1);
//        System.out.println(girlNameTemp);
        ArrayList<String>Familyname = (ArrayList<String>) ReUtil.findAll("(.{4})(，|。)", familenamestr, 1);
        ArrayList<String>Boyname = (ArrayList<String>) ReUtil.findAll("([\\u4e00-\\u9fff]{2})(、)", boyNameNetstr, 1);
        ArrayList<String>Girlname = (ArrayList<String>) ReUtil.findAll("([\\u4e00-\\u9fff]{2})(、)", girlNameNetstr, 1);

        //4,处理数据
        ArrayList Familyname1 = new ArrayList<>();
        for (String s : Familyname) {
            for (int i = 0; i < s.length(); i++) {

                char c = s.charAt(i);//获取字符
                if(Character.isIdeographic(c)){//判断是否为中文
                    Familyname1.add(String.valueOf(c));
                }
            }
        }
//        System.out.println(Familyname1);
//        System.out.println(Boyname);
//        System.out.println(Girlname);
        //5,生成数据
        ArrayList<String>list = getInfos(Familyname1, Boyname, Girlname, 100, 100);
        System.out.println(list);
        //6.写出数据
        FileUtil.writeLines(list,"names2.txt","UTF-8");
    }
    public static ArrayList<String> getInfos(ArrayList< String>familyName,ArrayList<String>boyName,ArrayList<String>girlName, int boycount1, int girlcount2) {
        //生成不重复的名字
        HashSet<String> boynames = new HashSet<>();
        while (true) {
            if (boynames.size()==boycount1) {
                break;
            }
            //生成随机数
            Random random = new Random();
            int boyindex = random.nextInt(boyName.size());
            int familyindex = random.nextInt(familyName.size());
            boynames.add(boyName.get(boyindex) + familyName.get(familyindex));
        }
//        System.out.println(boynames);
        HashSet<String> girlnames = new HashSet<>();
        while (true) {
            if (girlnames.size()==girlcount2) {
                break;
            }
            //生成随机数
            Random random = new Random();
            int girlindex = random.nextInt(girlName.size());
            int familyindex = random.nextInt(familyName.size());
            girlnames.add(girlName.get(girlindex) + familyName.get(familyindex));
        }
//        System.out.println(girlnames);
        ArrayList<String> list =new ArrayList<>();
        Random r = new Random();
        for (String s : boynames) {
            int age = r.nextInt(10) + 18;
            list.add(s  + "-"+ "男" + "-" + age);

        }
        for (String s : girlnames) {
            int age = r.nextInt(10) + 16;
            list.add(s  + "-"+ "女" + "-" + age);

        }

        return list;
    }
}
