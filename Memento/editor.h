#pragma once
#include <iostream>
#include <string>

class Editor
{
private:
    std::string text;
    int posX, posY;
    int selectionWidth;

public:
    Editor(std::string txt, int x, int y, int width) : text(txt), posX(x), posY(y), selectionWidth(width) {}
    void setText(std::string txt)
    {
        text = txt;
    }
    void setCursor(int x, int y)
    {
        posX = x;
        posY = y;
    }
    void setSelectionWidth(int width)
    {
        selectionWidth = width;
    }
    void displayEditor()
    {
        std::cout << "Editor text: " << text << std::endl;
        std::cout << "Editor posX: " << posX << " posY: " << posY << std::endl;
        std::cout << "Selection width: " << selectionWidth << std::endl << std::endl;
    }
    // Memento class to store the past state
    class SnapShot
    {
    private:
        Editor *editor;
        std::string text;
        int posX, posY;
        int selectionWidth;

    public:
        explicit SnapShot(Editor *editr, std::string txt, int x, int y, int width) : editor(editr), text(txt), posX(x), posY(y), selectionWidth(width) {}
        void restore()
        {
            editor->setText(text);
            editor->setCursor(posX, posY);
            editor->setSelectionWidth(selectionWidth);
        }
    };
    Editor::SnapShot *createSnapshot()
    {
        return new SnapShot(this, text, posX, posY, selectionWidth);
    }
};