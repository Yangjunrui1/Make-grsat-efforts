package system;

public class count {
    private String name;
    private String mima;
    private String num;
    private String phone;

    public count() {
    }

    public count(String name, String mima, String num, String phone) {
        this.name = name;
        this.mima = mima;
        this.num = num;
        this.phone = phone;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getMima() {
        return mima;
    }

    public void setMima(String mima) {
        this.mima = mima;
    }

    public String getNum() {
        return num;
    }

    public void setNum(String num) {
        this.num = num;
    }

    public String getPhone() {
        return phone;
    }

    public void setPhone(String phone) {
        this.phone = phone;
    }
}
