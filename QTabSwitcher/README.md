#QTabSwitcher
QTabSwitcher class provides the logic to switch tabs and selection button for the currently display tab.

To tab managment using the QTab class containing button's active and unactive style and pointers to tab's button and widget
<br><br><br><br>


# Public QTabSwitcher Functions:

## QTabSwitcher::QTabSwitcher(QObject* parent = 0)
Constructs a QTabSwitcher with the given parent.


## QTabSwitcher::~QTabSwitcher()
Destroys QTabSwitcher object, and frees any allocated resources.


## void QTabSwitcher::addTab(QWidget* tabWidget, QPushButton* tabButton, QString activeStyle = QString(), QString unactiveStyle = QString())
Adds a new tab under QTabSwither control.


## void QTabSwitcher::addTab(QTab* tab)
Overloaded function.

Adds a new tab under QTabSwither control.


## void QTabSwitcher::setButtonStyleSheet(int tabIndex, QString activeStyle = QString(), QString unactiveStyle = QString())
Set button active and unactive styleSheets.


## void QTabSwitcher::setButtonStyleSheet(QPushButton* tabButton, QString activeStyle = QString(), QString unactiveStyle = QString())
Overloaded function.

Set button active and unactive styleSheets.


## void QTabSwitcher::setButtonStyleSheet(QWidget* tabWidget, QString activeStyle = QString(), QString unactiveStyle = QString())
Overloaded function.

Set button active and unactive styleSheets.


## void QTabSwitcher::start(int startTab = 0)
Set first shown tab and hide other. Set current active button.


## void QTabSwitcher::start(QPushButton* startTabButton)
Overloaded function.

Set first shown tab and hide other. Set current active button.


## void QTabSwitcher::start(QWidget* startTabWidget)
Overloaded function.

Set first shown tab and hide other. Set current active button.


## void QTabSwitcher::removeTab(int tabIndex)
Remove control over tab.


## void QTabSwitcher::removeTab(QPushButton* tabButton)
Overloaded function.

Remove control over tab.


## void QTabSwitcher::removeTab(QWidget* tabWidget)
Overloaded function.

Remove control over tab.


## int QTabSwitcher::indexOf(QPushButton* tabButton)
Return tab index by tab's button.

Returns -1 if no item matched.


## int QTabSwitcher::indexOf(QWidget* tabWidget)
Overloaded function.

Return tab index by tab's widget.

Returns -1 if no item matched.


## int QTabSwitcher::indexOf(QTab* tab)
Overloaded function.

Return tab's index.

Returns -1 if no item matched.


## bool QTabSwitcher::contains(QPushButton* tabButton)
Return true if QTabSwitcher contains tab with tabButton; otherwise returns false.


## bool QTabSwitcher::contains(QWidget* tabWidget)
Overloaded function.

Return true if QTabSwitcher contains tab with tabWidget; otherwise returns false.


## bool QTabSwitcher::contains(QTab* tab)
Overloaded function.

Return true if QTabSwitcher contains tab; otherwise returns false.


## int QTabSwitcher::getCurrentTabIndex()
Returns index of current display tab.


## QTab* QTabSwitcher::getCurrentTab()
Returns a pointer to current display tab.


## QPushButton* QTabSwitcher::getCurrentButton()
Returns a pointer to current display button.


## QWidget* QTabSwitcher::getCurrentWidget()
Returns a pointer to current display widget.


## int QTabSwitcher::getTabCount()
Returns the number of tabs.


## void QTabSwitcher::switchTab(int tabIndex)
Set the displayed tab by tab's index.


## void QTabSwitcher::switchTab(QPushButton* tabButton)
Overloaded function.

Set the displayed tab by tab's button.


## void QTabSwitcher::switchTab(QWidget* tabWidget)
Overloaded function.

Set the displayed tab by tab's widget.


## void QTabSwitcher::deactivateTab(int index)
Set tab deactive. Hide tab's widget and button by tab's index. This tab will not be shown.


## void QTabSwitcher::deactivateTab(QPushButton* tabButton)
Overloaded function.

Set tab deactive. Hide tab's widget and button by tab's button. This tab will not be shown.


## void QTabSwitcher::deactivateTab(QWidget* tabWidget);
Overloaded function.

Set tab deactive. Hide tab's widget and button by tab's widget. This tab will not be shown.


## void QTabSwitcher::activateTab(int index)
Set tab active. Show tab's widget and button by tab's index.


## void QTabSwitcher::activateTab(QPushButton* tabButton)
Overloaded function.

Set tab active. Show tab's widget and button by tab's button.


## void QTabSwitcher::activateTab(QWidget* tabWidget)
Overloaded function.

Set tab active. Show tab's widget and button by tab's widget.


## void QTabSwitcher::clear()
Remove control over all tabs and delete all QTab objects.

<br><br><br><br>
# Subsidiary class QTab
#### Represent one tab

## Contains:

Variable | description
--------------------|------------------------
QPushButton* button | Pointer to tab's button.
QWidget* widget | Pointer to tab's widget
QString activeStyle | Active button's style sheet
QString unactiveStyle | Inactive button's style sheet
bool hiden | This property holds whether tab is shown


# Public QTab Functions:


## QTab(QWidget *Widget, QPushButton *Button, QString AStyle = QString(), QString IStyle = QString())
## QPushButton* getButton()
## QWidget* getWidget()
## QString getActiveStyle()
## QString getInactiveStyle()
## bool isHiden()
## void setButton(QPushButton* Button)
## void setWidget(QWidget* Widget)
## void setStyles(QString ActiveStyle, QString InactiveStyle = QString())
