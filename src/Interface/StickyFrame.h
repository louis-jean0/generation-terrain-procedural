#ifndef STICKYFRAME_H
#define STICKYFRAME_H

#include <QObject>
#include <QResizeEvent>
#include <QWidget>
#include <QFrame>
#include <QDockWidget>

class StickyFrame : public QWidget
{
    Q_OBJECT
public:
    StickyFrame(QWidget* parent);
    StickyFrame(QWidget* parent, float x, float y, float w, float h, bool useAbsolutePosition = true);

    void resizeEvent(QResizeEvent* e);
    bool eventFilter(QObject *obj, QEvent *event);

    void clearContent();

    StickyFrame* setContent(QLayout* contentLayout);

    QFrame* content;

public Q_SLOTS:
    void resizeWithParent();
protected:


    float x0, y0;
    float x1, y1;
    bool useAbsolutePosition;
};

#endif // STICKYFRAME_H
