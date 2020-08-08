clear;
clc;
%填入数据
Ns = [4, 216, 104, 38, 4, 60, 4, 8, 6, 10, ...
        8, 2, 4, 8, 8, 2, 8, 301, 6, 38, ...
        30, 8, 4, 4, 34, 18, 4, 4, 90, 30, ...
        30, 212, 108, 482, 196, 8, 32, 4, 52, 42, ...
        8, 8, 8, 60, 136, 4, 68, 286, 502, 286, ...
        292, 57, 24];
Ls = [1743, 1680, 1532, 1477, 1313, 1285, 1232, 1217, 1180, 1177, ...
        1105, 1055, 1046, 1032, 1030, 975, 893, 882, 847, 845, ...
        830, 795, 766, 745, 732, 719, 714, 690, 665, 633, ...
        630, 600, 590, 588, 582, 578, 540, 488, 455, 434, ...
        420, 415, 414, 411, 405, 328, 313, 290, 275, 265, ...
        255, 184, 155];
%目标任务
wait_4 = [5, 7, 9, 12, 15, 18, 20, 25, 28, 36, 48];
wait_6 = [4, 11, 24, 29, 32, 38, 40, 46, 50];
wait = [wait_4, wait_6];

%求最小所需原材料数
sum = 0;
% N = 11;
% N = 20;
N = 53;
for i = 1:1:N
%     sum = sum+Ls(wait_4(i))*Ns(wait_4(i));
%    sum = sum+Ls(wait(i))*Ns(wait(i));
    sum = sum+Ls(i)*Ns(i);
end
minVal = floor(sum/3000)+1;
disp(['最小值', num2str(minVal)]);

%求最大所需原材料数
sum = 0;
for i = 1:1:N
%     sum = sum+floor(Ns(wait_4(i))/floor(3000/Ls(wait_4(i))))+1;
%    sum = sum+floor(Ns(wait(i))/floor(3000/Ls(wait(i))))+1;
    sum = sum+floor(Ns(i)/floor(3000/Ls(i)))+1;
end
maxVal = sum;
disp(['最大值', num2str(maxVal)]);
