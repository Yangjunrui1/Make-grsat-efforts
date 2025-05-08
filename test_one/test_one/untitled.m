%线型图
% x = 0:0.05:30;%坐标轴从零开始，到30结束，精度为0.05
% y = sin(x)
% y2  = cos(x)
% plot(x,y,x,y2,LineWidth=1,Color='r',ColorMode='auto',LineStyle='-')
% xlabel("x轴")
% ylabel("y轴")
% grid on
% axis([0 20 -1.5 1.5])%设置横纵坐标范围

%条形图
% t = -3:0.05:3;
% p = exp(-t.*t);
% bar(t,p)

%极坐标图
% thata = 0:0.01:2*pi;
% radi = abs(sin(7*thata));
% polarplot(thata,radi)

%散点图
% x = randn(1000,1);
% y = randn(1000,1);
% scatter(x,y)
% xlabel("eee")
% ylabel("aaa")

%三维图和子图
% [X,Y] = meshgrid(-2:0.05:2);
% Z = X.*exp(-X.^2-Y.^2);
% surf(X,Y,Z);
% colormap summer
% colorbar
% title("stsdfsd")

% x = 0:0.05:30;%坐标轴从零开始，到30结束，精度为0.05
% y = sin(x)
% 
% [X,Y] = meshgrid(-2:0.05:2);
% Z = X.*exp(-X.^2-Y.^2);
% colormap summer
% colorbar
% %设置多个图片，（2，3，4）二行三列第四个
% subplot(1,2,1);surf(X,Y,Z);title('one');
% subplot(1,2,2);plot(x,y);title('two');

%处理异常值
x = 1:100;
date = randn(1,100);
date(20:20:80)=NaN;
date(10) = 55;
date(65) = -33;
data(56) = 44;
plot(date);
