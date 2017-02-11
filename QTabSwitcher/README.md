#QTabSwitcher
QTabSwitcher class provides the logic to switch tabs and selection button for the currently display tab.

To tab managment using the QTab class containing button's active and inactive style and pointers to tab's button and widget
<br><br><br><br>


# Public QTabSwitcher Functions:

## QTabSwitcher::QTabSwitcher(QObject* parent = 0)
Constructs a QTabSwitcher with the given parent.


## QTabSwitcher::~QTabSwitcher()
Destroys QTabSwitcher object, and frees any allocated resources.


## void QTabSwitcher::addTab(QWidget* tabWidget, QPushButton* tabButton, QString activeStyle = QString(), QString inactiveStyle = QString())
Adds a new tab under QTabSwither control.


## void QTabSwitcher::addTab(QTab* tab)
Overloaded function.

Adds a new tab under QTabSwither control.


## void QTabSwitcher::setButtonStyleSheet(int tabIndex, QString activeStyle = QString(), QString inactiveStyle = QString())
Set the button's active and inactive style sheets.


## void QTabSwitcher::setButtonStyleSheet(QPushButton* tabButton, QString activeStyle = QString(), QString inactiveStyle = QString())
Overloaded function.

Set the button's active and inactive style sheets.


## void QTabSwitcher::setButtonStyleSheet(QWidget* tabWidget, QString activeStyle = QString(), QString inactiveStyle = QString())
Overloaded function.

Set the button's active and inactive style sheets.


## void QTabSwitcher::start(int startTab = 0)
Set first shown tab and hide the rest. Set current active button.


## void QTabSwitcher::start(QPushButton* startTabButton)
Overloaded function.

Set first shown tab and hide the rest. Set current active button.


## void QTabSwitcher::start(QWidget* startTabWidget)
Overloaded function.

Set first shown tab and hide the rest. Set current active button.


## void QTabSwitcher::removeTab(int tabIndex)
Remove control over the tab.


## void QTabSwitcher::removeTab(QPushButton* tabButton)
Overloaded function.

Remove control over the tab.


## void QTabSwitcher::removeTab(QWidget* tabWidget)
Overloaded function.

Remove control over the tab.


## int QTabSwitcher::indexOf(QPushButton* tabButton)
Return the tab's index by tab's button.

Returns -1 if no item matched.


## int QTabSwitcher::indexOf(QWidget* tabWidget)
Overloaded function.

Return the tab's index by tab's widget.

Returns -1 if no item matched.


## int QTabSwitcher::indexOf(QTab* tab)
Overloaded function.

Return the tab's index.

Returns -1 if no item matched.


## bool QTabSwitcher::contains(QPushButton* tabButton)
Return true if QTabSwitcher contains the tab with tabButton; otherwise returns false.


## bool QTabSwitcher::contains(QWidget* tabWidget)
Overloaded function.

Return true if QTabSwitcher contains the tab with tabWidget; otherwise returns false.


## bool QTabSwitcher::contains(QTab* tab)
Overloaded function.

Return true if QTabSwitcher contains the tab; otherwise returns false.


## int QTabSwitcher::getCurrentTabIndex()
Returns index of the current display tab.


## QTab* QTabSwitcher::getCurrentTab()
Returns a pointer to the current display tab.


## QPushButton* QTabSwitcher::getCurrentButton()
Returns a pointer to the current display button.


## QWidget* QTabSwitcher::getCurrentWidget()
Returns a pointer to the current display widget.


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
Set the tab deactive. Hide tab's widget and button by tab's index. This tab will not be shown.


## void QTabSwitcher::deactivateTab(QPushButton* tabButton)
Overloaded function.

Set the tab deactive. Hide tab's widget and button by tab's button. This tab will not be shown.


## void QTabSwitcher::deactivateTab(QWidget* tabWidget);
Overloaded function.

Set the tab deactive. Hide tab's widget and button by tab's widget. This tab will not be shown.


## void QTabSwitcher::activateTab(int index)
Set the tab active. Show tab's widget and button by tab's index.


## void QTabSwitcher::activateTab(QPushButton* tabButton)
Overloaded function.

Set the tab active. Show tab's widget and button by tab's button.


## void QTabSwitcher::activateTab(QWidget* tabWidget)
Overloaded function.

Set the tab active. Show tab's widget and button by tab's widget.


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
QString inactiveStyle | Inactive button's style sheet
bool hiden | This property holds whether tab is shown


# Public QTab Functions:


## QTab::QTab(QWidget *Widget, QPushButton *Button, QString AStyle = QString(), QString IStyle = QString())
Constructs a QTab object with the given parameters.


## QPushButton* QTab::getButton()
Return a pointer to the tab's button.


## QWidget* QTab::getWidget()
Return a pointer to the tab's widget.


## QString QTab::getActiveStyle()
Return the button's active style sheet. 


## QString QTab::getInactiveStyle()
Return the button's inactive style sheet.


## bool QTab::isHiden()
Return true if the tab is hiden (it's button and widget are hiden); otherwise returns false.


## void QTab::setButton(QPushButton* Button)
Set the button to control the tab.


## void QTab::setWidget(QWidget* Widget)
Set the widget inder the control.


## void QTab::setStyles(QString ActiveStyle, QString InactiveStyle = QString())
Set the button's active and inactive style sheets.
