#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<math.h>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    digitBTNs={{Qt::Key_0,ui->btnNum0},
                {Qt::Key_1,ui->btnNum1_18},
                {Qt::Key_2,ui->btnNum2},
                {Qt::Key_3,ui->btnNum3},
                {Qt::Key_4,ui->btnNum4},
                {Qt::Key_5,ui->btnNum5},
                {Qt::Key_6,ui->btnNum6},
                {Qt::Key_7,ui->btnNum7},
                {Qt::Key_8,ui->btnNum8},
                {Qt::Key_9,ui->btnNum9},

    };

    foreach(auto btn,digitBTNs)
    connect(btn, &QPushButton::clicked, this, &MainWindow::btnNumClicked);


 //connect(ui->btnNum0, &QPushButton::clicked, this, &MainWindow::btnNumClicked);
   //  connect(ui->btnNum1_18, &QPushButton::clicked, this, &MainWindow::btnNumClicked);
  //connect(ui->btnNum2, &QPushButton::clicked, this, &MainWindow::btnNumClicked);
   //  connect(ui->btnNum3, &QPushButton::clicked, this, &MainWindow::btnNumClicked);
   //connect(ui->btnNum4, &QPushButton::clicked, this, &MainWindow::btnNumClicked);
      // connect(ui->btnNum5, &QPushButton::clicked, this, &MainWindow::btnNumClicked);
    // connect(ui->btnNum6, &QPushButton::clicked, this, &MainWindow::btnNumClicked);
    //    connect(ui->btnNum7, &QPushButton::clicked, this, &MainWindow::btnNumClicked);
    //  connect(ui->btnNum8, &QPushButton::clicked, this, &MainWindow::btnNumClicked);
     //    connect(ui->btnNum9, &QPushButton::clicked, this, &MainWindow::btnNumClicked);

     connect(ui->btnPlus,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
       connect(ui->btnjian,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
         connect(ui->btnchen,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));
           connect(ui->btnchuyu,SIGNAL(clicked()),this,SLOT(btnBinaryOperatorClicked()));


             connect(ui->btnPercentage,SIGNAL(clicked()),this,SLOT(btnUnaryOperatorClicked()));
               connect(ui->btninverse,SIGNAL(clicked()),this,SLOT(btnUnaryOperatorClicked()));
                 connect(ui->btnpinfang,SIGNAL(clicked()),this,SLOT(btnUnaryOperatorClicked()));
                   connect(ui->btngenhao,SIGNAL(clicked()),this,SLOT(btnUnaryOperatorClicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::calculation(bool*ok)
{
    double result =0;
      if(operands.size()==2  &&  opcodes.size()>0)
    {
          //取操作数
        double operand1 =operands.front().toDouble();
          operands.pop_front();
           double operand2 =operands.front().toDouble();
            operands.pop_front();
           //取操作符
           QString op =opcodes.front();
            opcodes.pop_front();

           if(op == "+"){
                result =operand1+operand2;
           }else if(op=="-"){
                result =operand1-operand2;
           }else if(op=="×"){
      result =operand1*operand2;
           }else if(op=="/"){
          result =operand1/operand2;
      }


      operands.push_back(QString::number(result));



    ui->statusbar->showMessage(QString("calculation is  in progress: operands is %1,opcode is %2").arg(operands.size()).arg(opcodes.size()));

      }
      else
          ui->statusbar->showMessage(QString("(operands is %1,opcode is %2").arg(operands.size()).arg(opcodes.size()));

    return QString::number(result);
}

void MainWindow::btnNumClicked()
{
    QString digit=qobject_cast<QPushButton *>(sender())->text();
    if(digit=="0"&&operand=="0")
        digit="";

    if(operand=="0"&&digit!="0")
        operand+=digit;
    operand+=digit;

    ui->display->setText( operand);

}



void MainWindow::on_btnPeriod_clicked()
{

    if(!operand.contains("."))
           operand +=qobject_cast<QPushButton *>(sender())->text();
     ui->display->setText( operand);
}


void MainWindow::on_btnshanchu_clicked()
{
     operand= operand.left( operand.length()- 1);
     ui->display->setText( operand);
}


void MainWindow::on_btnqingchu_clicked()
{
    operand.clear();
     ui->display->setText( operand);
}


void MainWindow::btnBinaryOperatorClicked()
{
    ui->statusbar->showMessage("last operand" + operand);
    QString opcode = qobject_cast<QPushButton *>(sender())->text();
    qDebug() << opcode;

    if (operand != "") {
        operands.push_back(operand);
        operand = "";
    }

    // 添加：如果已有两个操作数，先计算再添加新操作符
    if (operands.size() >= 2) {
        calculation();  // 先计算前两个操作数的结果
    }

    // 只有当操作数队列有元素时，才添加操作符（避免空操作符）
    if (!operands.isEmpty()) {
        opcodes.push_back(opcode);
    }
}




void MainWindow::btnUnaryOperatorClicked()
{
    if(operand!="")
    {
        double result =operand.toDouble();
        operand="";

        QString op=qobject_cast<QPushButton*>(sender())->text();
        if(op =="%")
            result/=100.0;
        else if(op=="1/x")
            result=1/result;
        else if(op=="x^2")
            result*=result;
        else if(op=="√")
                     result =sqrt(result);
          ui->display->setText(QString::number(result));
    }
}




void MainWindow::on_btndengyu_clicked()
{
    if(operand!="")
    {
        operands.push_back(operand);
        operand="";
    }
    QString result=calculation();

    ui->display->setText(result);
}


void MainWindow::on_btnCE_clicked()
{
    operand.clear();
    ui->display->setText("0");
    ui->statusbar->showMessage("CE：已清除当前输入");
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    // 原有数字键处理
    foreach(auto btnKey, digitBTNs.keys()){
        if(event->key() == btnKey)
            digitBTNs[btnKey]->animateClick();
    }

    // 添加：运算符键盘支持
    switch (event->key()) {
    case Qt::Key_Plus: ui->btnPlus->animateClick(); break;
    case Qt::Key_Minus: ui->btnjian->animateClick(); break;
    case Qt::Key_Asterisk: ui->btnchen->animateClick(); break;
    case Qt::Key_Slash: ui->btnchuyu->animateClick(); break;
    case Qt::Key_Enter: ui->btndengyu->animateClick(); break;
    case Qt::Key_Backspace: ui->btnshanchu->animateClick(); break;
    case Qt::Key_Escape: ui->btnqingchu->animateClick(); break;
    case Qt::Key_Period: ui->btnPeriod->animateClick(); break;
    default: break;
    }
}

  //  if(event->key()==Qt::Key_O)
   // ui->btnNum0->animateClick(100);
   // else if(event->key()==Qt::Key_1)
 //  ui->btnNum0->animateClick(100);



void MainWindow::on_btnjiajian_clicked()
{
    if (!operand.isEmpty()) {
        if (operand.startsWith("-")) {
            operand.remove(0, 1);
        } else { // 如果是正数
            operand.prepend("-");
        }
        ui->display->setText(operand);
        ui->statusbar->showMessage("切换正负：" + operand);
    } else {

        ui->statusbar->showMessage("无输入数字，无法切换正负");
    }
}

