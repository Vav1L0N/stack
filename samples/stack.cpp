#include "stack.h"


/*  TEST(TDynamicStackTest, PushPop) {
    TDynamicStack<int> stack;
    stack.Push(1);
    EXPECT_EQ(stack.Pop(), 1);
    stack.Push(2);
    stack.Push(3);
    EXPECT_EQ(stack.Pop(), 3);
    EXPECT_EQ(stack.Pop(), 2);
    EXPECT_TRUE(stack.IsEmpty());
}

TEST(TDynamicStackTest, Peek) {
    TDynamicStack<int> stack;
    stack.Push(1);
    stack.Push(2);
    stack.Push(3);
    EXPECT_EQ(stack.Peek(), 3);
    stack.Pop();
    EXPECT_EQ(stack.Peek(), 2);
    stack.Pop();
    EXPECT_EQ(stack.Peek(), 1);
    stack.Pop();
    EXPECT_TRUE(stack.IsEmpty());
}

TEST(TDynamicStackTest, Size) {
    TDynamicStack<int> stack;
    EXPECT_EQ(stack.size(), 0);
    stack.Push(1);
    stack.Push(2);
    EXPECT_EQ(stack.size(), 2);
    stack.Pop();
    EXPECT_EQ(stack.size(), 1);
    stack.Pop();
    EXPECT_EQ(stack.size(), 0);
}

TEST(TDynamicStackTest, IsFull) {
    TDynamicStack<int> stack(2); 
    EXPECT_FALSE(stack.IsFull());
    stack.Push(1);
    stack.Push(2);
    EXPECT_TRUE(stack.IsFull());
    stack.Push(3); 
    EXPECT_FALSE(stack.IsFull());
}

TEST(TDynamicStackTest, ExceptionHandling) {
    TDynamicStack<int> stack;
    EXPECT_THROW(stack.Pop(), std::out_of_range);
    EXPECT_THROW(stack.Peek(), std::out_of_range);
}
TEST(TDynamicStackTest, OutputOperator) {
    TDynamicStack<int> stack;
    stack.Push(1);
    stack.Push(2);
    stack.Push(3);

    std::stringstream ss;
    ss << stack;

    std::string expected_output = "3 2 1 ";
    EXPECT_EQ(ss.str(), expected_output);
}

TEST(TDynamicStackTest, InputOperator) {
    TDynamicStack<int> stack;

    std::stringstream ss;
    ss << "1 2 3";

    ss >> stack;

    EXPECT_EQ(stack.Pop(), 3);
    EXPECT_EQ(stack.Pop(), 2);
    EXPECT_EQ(stack.Pop(), 1);
    EXPECT_TRUE(stack.IsEmpty());
}
TEST(TDynamicStackTest, EqualityOperator) {
    TDynamicStack<int> stack1;
    TDynamicStack<int> stack2;

    // Заполняем оба стека одинаковыми элементами
    stack1.Push(1);
    stack1.Push(2);
    stack1.Push(3);

    stack2.Push(1);
    stack2.Push(2);
    stack2.Push(3);

    // Сравниваем стеки
    EXPECT_TRUE(stack1 == stack2);

    // Извлекаем элемент из одного стека
    stack2.Pop();

    // Снова сравниваем стеки, они должны быть различными
    EXPECT_FALSE(stack1 == stack2);
}

*/