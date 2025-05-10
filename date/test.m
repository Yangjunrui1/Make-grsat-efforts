% % t = 1:30;%时间的变化
% % W = 80;%初始体重
% % C = 35000;
% % k = 20;%k为活动系数
% % BMR = w*100.8%(w-kg,4.2-KJ)
% % AEE = k*W*t;%AEE-活动消耗
% % EI = 8368;%每日摄入的能量
% % TEE = 1.1*BMR+AEE;%总能量消耗
% % DE =EI - TEE;%能量
% % DW = EI-
% t= 1:30;
% W = 80;%体重
% C = 35000;
% K = 30;
% BMR = 4.2*W*24; 
% EAT = 8465;%不变
% R = K*W*t;
% DW = (EAT-(1.1*BMR+R))/C;
% 
% %三维图和子图
% % [EAT,Y] = meshgrid(0:1:30);
% % Z = X.*exp(-X.^2-Y.^2);
% % surf(X,Y,Z);
% % colormap summer
% % colorbar
% % title("stsdfsd"

% time = 1%每天的运动时间
% k = 20%活动强度系数
% weight = 80%初始体重
% new_weight = zeros(1,30)%存放每天的体重
% new_weight(1) = weight%第一天的体重
% exercise = k*weight*time%每天的运动量
% eat = 8368%每天的能量摄入量
% BMR = 24*4.2*weight%每天的基础消耗
% dig = 0.1*BMR
% c = 35000%每千克脂肪能量
% 
% for day = 2 : 30
% BMR = 24*4.2*new_weight(day-1)%更新基础消耗
% exercise = k*new_weight(day-1)%更新运动量
% dig = 0.1*BMR
% change_weight = (eat-(BMR+dig+exercise))/c%体重变化量
% new_weight(day) = max(new_weight(day-1)+change_weight,40)
% end
% plot(30,new_weight);

%% 参数初始化
clear; clc;

% 基础参数
initial_weight = 80;        % 初始体重 (kg)
EI = 8368;                  % 每日能量摄入 (kJ/日)
C = 35000;                  % 每千克脂肪能量 (kJ/kg)
simulation_days = 90;       % 模拟天数
activity_hours = 1;         % 每日活动时长 (小时)
activity_intensity = 20;    % 活动强度系数 (kJ/(kg·h))，中度活动示例

% 预分配存储数组
weight = zeros(1, simulation_days + 1);
weight(1) = initial_weight; % 初始体重

%% 模拟每日体重变化
for day = 1:simulation_days
    % 基础代谢率 (BMR) = 4.2 kJ/(kg·h) * 24h * 当前体重
    BMR = 4.2 * 24 * weight(day);
    
    % 活动能量消耗 (AEE) = 活动强度 * 体重 * 活动时长
    AEE = activity_intensity * weight(day) * activity_hours;
    
    % 总能量消耗 (TEE) = 1.1*BMR + AEE (含10%食物特殊动力作用)
    TEE = 1.1 * BMR + AEE;
    
    % 能量差与体重变化
    energy_deficit = EI - TEE;
    delta_weight = energy_deficit / C; % 体重变化 (kg/日)
    
    % 更新体重 (限制最低体重为40kg)
    weight(day + 1) = max(weight(day) + delta_weight, 40);
end

%% 结果可视化
figure('Position', [100, 100, 800, 400]);
plot(0:simulation_days, weight, 'b-o', 'LineWidth', 1.5, 'MarkerSize', 6);
xlabel('时间 (天)', 'FontSize', 12, 'FontWeight', 'bold');
ylabel('体重 (kg)', 'FontSize', 12, 'FontWeight', 'bold');
title('饮食与运动协同作用下的体重变化模拟', 'FontSize', 14);
grid on;
set(gca, 'FontSize', 10);

% 标注最终体重
final_weight = weight(end);
text(simulation_days*0.8, initial_weight*0.95, ...
    sprintf('最终体重: %.2f kg', final_weight), ...
    'FontSize', 10, 'Color', 'red');

%% 参数敏感性分析示例 (不同活动强度)
activity_levels = [10, 20, 30]; % 轻度、中度、高强度
colors = {'r', 'g', 'm'};
figure('Position', [100, 100, 800, 400]);
hold on;

for i = 1:length(activity_levels)
    current_k = activity_levels(i);
    temp_weight = initial_weight * ones(1, simulation_days + 1);
    
    for day = 1:simulation_days
        BMR = 4.2 * 24 * temp_weight(day);
        AEE = current_k * temp_weight(day) * activity_hours;
        TEE = 1.1 * BMR + AEE;
        delta = (EI - TEE) / C;
        temp_weight(day + 1) = max(temp_weight(day) + delta, 40);
    end
    
    plot(0:simulation_days, temp_weight, '--o', ...
        'Color', colors{i}, 'LineWidth', 1.2, ...
        'DisplayName', sprintf('k=%d', current_k));
end

xlabel('时间 (天)', 'FontSize', 12, 'FontWeight', 'bold');
ylabel('体重 (kg)', 'FontSize', 12, 'FontWeight', 'bold');
title('不同活动强度下的体重变化对比', 'FontSize', 14);
legend('show', 'Location', 'best');
grid on;
set(gca, 'FontSize', 10);
hold off;