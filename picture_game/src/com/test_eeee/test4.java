package com.test_eeee;
import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class test4 {
    public static void main(String[] args) {
        JFrame jFrame = new JFrame();
        jFrame.setSize(603, 680);
        jFrame.setTitle("测试事件");
        jFrame.setAlwaysOnTop(true);
        jFrame.setLocationRelativeTo(null);
        jFrame.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        jFrame.setLayout(null);


        //创建一个按钮对象
        JButton jtb = new JButton("点击我");
        jtb.setBounds(100, 100,100,100);
        //设置位置
        //jtb.addActionListener(new Myacction());

        jtb.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println("不要点我啊");
            }
        });


        jFrame.getContentPane().add(jtb);

        jFrame.setVisible(true);
    }
}
