package com.test_eeee;
import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Random;

public class MyJFrame extends JFrame implements ActionListener {

    JButton jtb1 = new JButton("点我");
    JButton jtb2 = new JButton("六六六");
    public MyJFrame() {
        // 设置页面的宽高
        this.setSize(600, 700);
        //设置页面的标题
        this.setTitle("拼图小游戏测试版");
        //设置页面置顶
        this.setAlwaysOnTop(true);
        //设置页面居中
        this.setLocationRelativeTo(null);
        this.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        //取消了默认的居中方式
        this.setLayout(null);


        jtb1.setBounds(0, 0, 100, 50);
        //给按钮添加事件
        jtb1.addActionListener(this);


        jtb2.setBounds(100, 0, 100, 50);
        jtb2.addActionListener(this);//添加事件

        this.getContentPane().add(jtb1);
        this.getContentPane().add(jtb2);//添加按钮
        this.setVisible(true);//设置页面可见
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        //对当前的代码进行判断
        Object source = e.getSource();
        if (source == jtb1) {
            jtb1.setSize(200, 200);
        } else if (source == jtb2) {
            Random r = new Random();
            jtb2.setLocation(r.nextInt(500),r.nextInt(500));
        }
    }
}
