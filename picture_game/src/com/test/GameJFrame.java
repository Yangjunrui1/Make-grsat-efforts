package com.test;
import javax.swing.*;
import javax.swing.border.BevelBorder;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.util.Random;

public class GameJFrame extends JFrame implements KeyListener, ActionListener {//



    int[][] arr2 = new int[4][4];
    int step = 0;
    int[] arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    //记录空白方块的位置
    int x = 0;
    int y = 0;
    //创建二维数组，用来存储数据
    public GameJFrame(){

        //创建菜单
        initJFrame();//初始化窗口
        initJMEnuBar();//初始化菜单
        initDate();
        //初始化 图片
        initImage();
        this.setVisible(true);//可视化窗口
    }

    private void initDate() {
        //打乱数据

        Random r = new Random();
        for (int i = 0; i < arr.length; i++) {
            //获取到随机索引
            int index = r.nextInt(arr.length);
            int tmep = arr[i];
            arr[i] = arr[index];
            arr[index] = tmep;
        }


        for (int i = 0; i < arr.length; i++) {
            if(arr[i]==0){
                x = i/4;
                y = i%4;
            }
                arr2[i / 4][i % 4] = arr[i];

        }
    }

    //初始化 图片
    private void initImage() {
        //创建一个Image的对象
        //创建一个Jliblel的对象s
        //清空所有图片

        this.getContentPane().removeAll();
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                //JLabel label = new JLabel(new ImageIcon("E:\\代码\\Javad代码\\picture_game\\image\\animal\\animal8\\"+arr2[i][j]+".jpg"));
                JLabel label = new JLabel(new ImageIcon("E:\\代码\\Javad代码\\picture_game\\image\\xiaohui\\"+arr2[i][j]+".png"));
                label.setBounds(105*j+83,105*i+84,105,105);
                //给图片添加边框
                label.setBorder(new BevelBorder(0));
                this.getContentPane().add(label);//将图片添加到窗口中
            }
        }
        //添加步数
        JLabel stepJLabel = new JLabel("步数："+step);
        stepJLabel.setBounds(50,30,100,20);
        this.getContentPane().add(stepJLabel);//将步数添加到窗口中
        //添加背景图片
        ImageIcon bg = new ImageIcon("E:\\代码\\Javad代码\\picture_game\\image\\xiyangang.png");
       // ImageIcon bg = new ImageIcon("E:\\代码\\Javad代码\\picture_game\\image\\background.png");

        JLabel background = new JLabel(bg);//创建一个 JLabel 对象，用于显示背景图片
        background.setBounds(0,0,715,548);//设置背景图片的位置和大小
        //background.setBounds(40,40,508,560);
        this.getContentPane().add(background);
        //刷新一下界面
        this.getContentPane().repaint();
    }

    private void initJFrame() {
        this.setSize(715,610);//窗口大小
        this.setTitle("拼图小游戏");//窗口标题
        this.setAlwaysOnTop(true);//窗口置顶
        this.setLocationRelativeTo(null);//窗口居中
        this.setDefaultCloseOperation(3);//窗口关闭//1.默认操作 2.隐藏窗口 3.退出程序
        this.setLayout(null);//取消布局管理器
        this.addKeyListener(this);//给整个界面添加键盘监视接口
    }
    JMenuItem replayItem = new JMenuItem("重新游戏");
    JMenuItem reLoginItem = new JMenuItem("返回主菜单");
    JMenuItem exitItem = new JMenuItem("退出游戏");
    JMenuItem aboutItem = new JMenuItem("关于作者");
    private void initJMEnuBar() {
        //创建一个菜单
        JMenuBar jMenuBar=new JMenuBar();
        //创建菜单选项
        JMenu fuctionMenu=new JMenu("功能");
        JMenu aboutMenu=new JMenu("关于");

        jMenuBar.add(fuctionMenu);  // 新增这行
        jMenuBar.add(aboutMenu);    // 新增这行
        //创建选项下面的菜单项


        fuctionMenu.add(replayItem);//将各项功能添加到菜单中
        fuctionMenu.add(reLoginItem);
        fuctionMenu.add(exitItem);
        aboutMenu.add(aboutItem);
        //给菜单项添加事件
        replayItem.addActionListener(this);
        reLoginItem.addActionListener(this);
        exitItem.addActionListener(this);
        aboutItem.addActionListener(this);
        //将菜单添加到菜单栏
        this.setJMenuBar(jMenuBar);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        Object obj = e.getSource();
        if(obj == replayItem){
            step = 0;
            initDate();
            initImage();

        }else if (obj == reLoginItem) {
            System.out.println("重新登录");
            new LoginJFrame();
            this.dispose();//关闭当前窗口
        }else if (obj == exitItem) {
            System.out.println("退出游戏");
            System.exit(0);
        }else if (obj == aboutItem) {
            System.out.println("关于我们");
            //创建一个关于我们的窗口
            JDialog jDialog = new JDialog();
            JLabel jLabel = new JLabel(new ImageIcon("E:\\代码\\Javad代码\\picture_game\\image\\aboutwriter.jpg"));
            jLabel.setBounds(0,0,540,631);
            jDialog.getContentPane().add(jLabel);
            jDialog.setSize(640,631);
            jDialog.setLocationRelativeTo(null);
            jDialog.setAlwaysOnTop(true);
            jDialog.setModal(true);
            jDialog.setVisible(true);
        }
    }

    @Override
    public void keyTyped(KeyEvent e) {

    }

    @Override
    public void keyPressed(KeyEvent e) {
        //按下不送时
        int code = e.getKeyCode();
        if (code == 65) {
           this.getContentPane().removeAll();
           JLabel all = new JLabel(new ImageIcon("E:\\代码\\Javad代码\\picture_game\\image\\win.png"));
           all.setBounds(0,0,420,420);
           this.getContentPane().add(all);
           this.getContentPane().repaint();
            ImageIcon bg = new ImageIcon("E:\\代码\\Javad代码\\picture_game\\image\\xiyangang.png");
            JLabel background = new JLabel(bg);//创建一个 JLabel 对象，用于显示背景图片
            background.setBounds(0,0,715,548);//设置背景图片的位置和大小
            //background.setBounds(40,40,508,560);
            this.getContentPane().add(background);
            this.getContentPane().repaint();
        }
    }

    @Override
    public void keyReleased(KeyEvent e) {
        //对上下左右进行判断
        int code = e.getKeyCode();
        if (code==37) {
           if(y==3){
               return;
           }
            arr2[x][y] = arr2[x][y+1];
            arr2[x][y+1]=0;
            y++;
            step++;
            initImage();
        } else if (code==38) {
            if(x==3){
                return;
            }
            System.out.println("向上");
            arr2[x][y] = arr2[x + 1][y];
            arr2[x + 1][y]=0;
            x++;
            step++;
            initImage();
        } else if (code == 39) {
            if(y==0){
                return;
            }
            arr2[x][y] = arr2[x][y-1];
            arr2[x][y-1]=0;
            y--;
            step++;
            initImage();
        } else if (code == 40) {
            if(x==0){
                return;
            }
            arr2[x][y] = arr2[x - 1][y];
            arr2[x - 1][y]=0;
            x--;
            step++;
            initImage();
        } else if (code==65) {
            initImage();
        } else if (code==87) {
            //直接获胜
            arr2 = new int[][]{
                    {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,0}
            };
            step = 0;
            initImage();
        }
    }
}
