package com.myiotest.test1;

import java.io.*;
import java.net.URI;
import java.net.URL;
import java.net.URLConnection;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.Random;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Test1 {
    public static void main(String[] args) throws IOException {
        //定义变量记录网址
        String famileyNameNet = "https://hanyu.baidu.com/shici/detail?pid=0b2f26d4c0ddb3ee693fdb1137ee1b0d";
        String boyNameNet = "https://www.cnjiaju.cn/article/185341.html";
        String girlNameNet = "https://www.cnjiaju.cn/article/185156.html";
        //2 爬取数据，把网址上的数据拼接成一个字符串；
        String result = webCrawler(famileyNameNet);
        String result2 = webCrawler(boyNameNet);// 更规范的写法


        String result3 = webCrawler(girlNameNet);
//        System.out.println(result);
/*        System.out.println(result2);*/
//        System.out.println(result3);
        //赵钱孙李，周吴郑王。// 更明确的写法
        //String regex = ;
//分析这段代码，我发现正则表达式 `".{4} (，|。)"` 存在一个问题：
//
//这个正则表达式试图匹配4个任意字符，后跟一个空格，然后是一个中文逗号或句号。但是，在实际的中文文本中，像"赵钱孙李，周吴郑王。"这样的句子通常不会在每个字后面都有空格。
//
//正确的正则表达式应该匹配四个连续的中文字符后跟一个中文标点符号（逗号或句号），不需要空格。

        ArrayList<String> familyNameTemp = getData(result, "(.{4})(，|。)" ,1);
//        System.out.println(familyNameTemp);
        ArrayList<String> boyNameTemp = getData(result2, "([\\u4e00-\\u9fff]{2})(、)" ,1);
//        System.out.println(boyNameTemp);
        ArrayList<String> girlNameTemp = getData(result3, "([\\u4e00-\\u9fff]{2})(、)" ,1);
//        System.out.println(girlNameTemp);
        ArrayList<String> boyName = new ArrayList<>();
        for (String s : familyNameTemp) {
            for (int i = 0; i < s.length(); i++) {

                char c = s.charAt(i);//获取字符
                if(Character.isIdeographic(c)){//判断是否为中文
                    boyName.add(String.valueOf(c));
                }
            }
        }
//        System.out.println(boyName);
        //去重
        ArrayList<String> boyName1 = new ArrayList<>();
        for (String s : boyName1) {
            if (!boyName1.contains(s)) {
                boyName1.add(s);
            }
        }

        ArrayList<String>finl = getInfos(boyName,boyNameTemp,girlNameTemp,100,100);
        //生成数据
        //姓名（唯一）——性别——年龄
        System.out.println(finl);
        BufferedWriter bw = new BufferedWriter(new FileWriter("names.txt"));
        for (String s : finl) {
            bw.write(s);
            bw.newLine();
        }
        bw.close();
    }

    //    发
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
    /*
     * 作用；根据正则表达式获取字符串中的数据
     * 参数一完整的字符串
     * 参数二正则表达式
     * 参数三
     * 返回时*/
    private static ArrayList<String> getData(String str, String regex , int group) {
        ArrayList<String> list = new ArrayList<>();
        Pattern pattern=Pattern.compile(regex);
        Matcher matcher = pattern.matcher(str);
        while (matcher.find()) {
           String group1 = matcher.group(group);
           list.add(group1);
        }
        return list;
    }


    public static String webCrawler(String net) throws IOException {
        //创建一个StringBuilder对象，用于拼接字符串
        StringBuilder sb = new StringBuilder();
        //创建一个URI对象，把网址转换成URI对象
         URL url = new URL(net);
        //链接网址
        URLConnection conn = url.openConnection();
        //读取数据
        conn.getInputStream();
        InputStreamReader isr = new InputStreamReader(conn.getInputStream());
        int ch ;
        while ((ch = isr.read()) != -1) {
            sb.append((char) ch);
        }
        return sb.toString();
    }
}
