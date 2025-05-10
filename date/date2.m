time = 1;%每天的运动时间
k = 20;%活动强度系数
weight = 80;%初始体重
new_weight = zeros(1,30);%存放每天的体重
new_weight(1) = weight;%第一天的体重
exercise = k*weight*time;%每天的运动量
eat = 8368;%每天的能量摄入量
BMR = 24*4.2*weight;%每天的基础消耗
dig = 0.1*BMR;
c = 35000;%每千克脂肪能量

for day = 2 : 30
    BMR = 24*4.2*new_weight(day-1);%更新基础消耗
    exercise = k*new_weight(day-1);%更新运动量
    dig = 0.1*BMR;
    change_weight = (eat-(BMR+dig+exercise))/c;%体重变化量
    new_weight(day) = max(new_weight(day-1)+change_weight,40);
end

x = 1:1:30
y = new_weight(x)
plot(x,y)