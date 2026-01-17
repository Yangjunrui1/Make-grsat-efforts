import "./demo1.js";
// ... existing code ...
function submitForm() {
            const studentIdElement = document.getElementById('studentId');
            const studentNameElement = document.getElementById('studentName');
            
            // 检查元素是否存在
            if (!studentIdElement || !studentNameElement) {
                console.error('找不到学号或姓名输入框');
                return;
            }
            
            const studentId = studentIdElement.value.trim();
            const studentName = studentNameElement.value.trim();
            
            // 验证输入是否为空
            if (!studentId || !studentName) {
                alert('请填写完整的学号和姓名');
                return;
            }
            
            // 简单的XSS防护：过滤潜在危险字符
            if (/<script\b[^<]*(?:(?!<\/script>)<[^<]*)*<\/script>/gi.test(studentId) || 
                /<script\b[^<]*(?:(?!<\/script>)<[^<]*)*<\/script>/gi.test(studentName)) {
                alert('输入内容包含非法字符');
                return;
            }
            
            alert(`提交了学号：${studentId}，姓名：${studentName}`);
        }
        
        function clickEvent() {
            alert('触发了单击事件！');
        }
// ... existing code ...
