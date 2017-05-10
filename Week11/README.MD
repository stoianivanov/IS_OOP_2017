Да се реализира йерархия от класове, които представляват един екран на телефон:


```
class PhoneScreen 
{
private:
	int hеight;
	int width;
	View* views;
public:
	void clickOnButton(String id);
	void printInformation();// принтира информация за всички views
	bool hasViewWithId(String id);
	bool addView(View);
};


class View {
private:
	String id;
public:
	int getArea();
	void displayData();
}

```
Класовете Image, Button, InputText, OutputText трябва да добавят нова функционалност към класа View.