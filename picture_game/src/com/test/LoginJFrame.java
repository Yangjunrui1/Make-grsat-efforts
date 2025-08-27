package com.test;
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class LoginJFrame extends JFrame implements ActionListener {
    //登录的主界面
    public LoginJFrame() {//构造器
        //设置界面的宽高
        this.initJFrame();
        //添加背景图片
        this.initFiction();
    }

    //初始化界
    JButton startButton = new JButton("开始游戏");
    JButton exitButton = new JButton("退出游戏");
    private void initFiction() {
        //添加背景图片
        ImageIcon bg2 = new ImageIcon("E:\\代码\\Javad代码\\picture_game\\image\\d6d361c856a7866f694f1bec2f67b9a1.png");
        JLabel background = new JLabel(bg2);
        //设置背景图片的位置
        background.setBounds(0,0,520,630);
        //添加到界面
        this.getContentPane().add(background);
        //设置界面可见

        //开始游戏按钮
        startButton.addActionListener(this);

        //链接鼠标事件
        //退出游戏按钮
        exitButton.addActionListener(this);
        exitButton.setBounds(150,430,180,50);
        background.add(exitButton);//添加到界面
        startButton.setBounds(150,330,180,50);
        background.add(startButton);
        //美化按钮，改变按钮的样式字体的样式，边框的样式，颜色为白色
        startButton.setOpaque(false);
        exitButton.setOpaque(false);
        //设置字体的颜色
        startButton.setForeground(Color.WHITE);
        exitButton.setForeground(Color.WHITE);
        //设置字体
        startButton.setFont(new Font("微软雅黑", Font.BOLD,25));
        exitButton.setFont(new Font("微软雅黑",Font.BOLD,25));
        //设置边框的样式
        //startButton.setBorderPainted(false);
        startButton.setContentAreaFilled(false);
        //exitButton.setBorderPainted(false);
        exitButton.setContentAreaFilled(false);
        //给按钮添加图片样式
        //startButton.setIcon(new ImageIcon("E:\\代码\\Javad代码\\picture_game\\image\\24f312cac627fc04c689e8a381f763b1.jpg"));
        //exitButton.setIcon(new ImageIcon("E:\\代码\\Javad代码\\picture_game\\image\\exit.png"));
        this.setVisible(true);
    }
    //初始化窗口
    private void initJFrame(){
        this.setSize(500,700);
        this.setDefaultCloseOperation(3);
        this.setTitle("登录界面");
        this.setAlwaysOnTop(true);
        this.setLocationRelativeTo(null);
        this.setVisible(true);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        //获取按钮的文本
        String text = e.getActionCommand();
        //判断文本
        if("开始游戏".equals(text)){
            //开始游戏
            new GameJFrame();
            this.dispose();
            System.out.println("开始游戏");
        }else if("退出游戏".equals(text)){
            //退出游戏
            System.out.println("退出游戏");
            System.exit(0);
        }
    }
}
