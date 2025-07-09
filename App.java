import javax.swing.*;
import javax.swing.event.AncestorEvent;
import javax.swing.event.AncestorListener;
import java.awt.*;
import java.awt.event.*;

public class App{
    static int currentQuestion = 0;
    static int score = 0;
    static JLabel questionLabel;
    static JFrame frame;
    static JRadioButton option1, option2,option3,option4;
    static ButtonGroup optionsGroup;
    static JButton nextbutton,submitButton;


    static String[] question = {
            "1: which is the most popular language",
            "2: Which loop mostly use in c++",
            "3: how many main data types in c++",
            "4: what is pointers",
            "5: Which of the following is not a C++ access specifier?",
            "6: a= 3, b=2" +   " a+b ",
            "8: Which operator is used for dynamic memory allocation in C++",
            "9: What is the size of 'int' data type in C++ on a 32-bit system",
    };
    static String[][] options = {
            {"C++","java", "python", "C"},
            {"for", "while", "do while", "nested loop"},
            {"5", "7", "9", "20"},
            {"Store address", "store data", "store information", "backup data"},
            {"public", "Friend", "private", "protected"},
            {"5", "10", "8", "16"},
            {"new", "malloc","alloc", " create"},
            {"4 bytes", "8 bytes", "12 bytes", "16 bytes"},

    };

    public static void main(String[] args){
        frame = new JFrame("Quiz application");
        frame.setLayout(new BorderLayout());
        frame.setSize(600,400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.getContentPane().setBackground(Color.WHITE);

        questionLabel = new JLabel("", SwingConstants.CENTER);
        questionLabel.setForeground(Color.BLACK);
        questionLabel.setBorder(BorderFactory.createEmptyBorder(10,10,10,10));
        questionLabel.setFont(new Font("arial" ,Font.BOLD,18));

        JPanel optionsPanel = new JPanel();
        optionsPanel.setBackground(Color.WHITE);
        optionsPanel.setLayout(new BoxLayout(optionsPanel, BoxLayout.Y_AXIS));
        optionsPanel.setBorder(BorderFactory.createEmptyBorder(10,20,10,20));

        option1 = new JRadioButton();
        option2 = new JRadioButton();
        option3= new JRadioButton();
        option4= new JRadioButton();

        option1.setBackground(Color.WHITE);
        option2.setBackground(Color.WHITE);
        option3.setBackground(Color.WHITE);
        option4.setBackground(Color.WHITE);

        option1.setHorizontalAlignment(SwingConstants.LEFT);
        option2.setHorizontalAlignment(SwingConstants.LEFT);
        option3.setHorizontalAlignment(SwingConstants.LEFT);
        option4.setHorizontalAlignment(SwingConstants.LEFT);

        option1.setForeground(Color.BLACK);
        option2.setForeground(Color.BLACK);
        option3.setForeground(Color.BLACK);
        option4.setForeground(Color.BLACK);

        option1.setFont(new Font("arial", Font.BOLD, 17));
        option2.setFont(new Font("arial", Font.BOLD, 17));
        option3.setFont(new Font("arial", Font.BOLD, 17));
        option4.setFont(new Font("arial", Font.BOLD, 17));

        optionsGroup = new ButtonGroup();
        optionsGroup.add(option1);
        optionsGroup.add(option2);
        optionsGroup.add(option3);
        optionsGroup.add(option4);

        optionsPanel.add(option1);
        optionsPanel.add(option2);
        optionsPanel.add(option3);
        optionsPanel.add(option4);

        Dimension Buttonsize = new Dimension(100,30);
        submitButton = new JButton("Submitted");
        submitButton.setBackground(new Color(231, 234, 239));
        submitButton.setForeground(Color.black);
        submitButton.setPreferredSize(Buttonsize);
        submitButton.setFocusPainted(false);

        submitButton.setHorizontalAlignment(SwingConstants.LEFT);
        submitButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                JOptionPane.showMessageDialog(frame, "Submitted successfully");

            }

        });
        Dimension buttonsize = new Dimension(100,30);
        nextbutton = new JButton("Next");
        nextbutton.setBackground(new Color(231, 234, 239));
        nextbutton.setForeground(Color.BLACK);
        nextbutton.setPreferredSize(buttonsize);
        nextbutton.setFocusPainted(false);

        nextbutton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                currentQuestion++;
                if(currentQuestion < question.length){
                    showQuestion();
                }
                else{
                    JOptionPane.showMessageDialog(frame,"Quiz Completed!");
                }
            }
        });
        JPanel buttonPanel = new JPanel();
        buttonPanel.setBackground(Color.WHITE);
        buttonPanel.add(nextbutton);
        buttonPanel.add(submitButton);



        frame.add(questionLabel, BorderLayout.NORTH);
        frame.add(optionsPanel, BorderLayout.CENTER);
        frame.add(buttonPanel, BorderLayout.SOUTH);

        showQuestion();
        frame.setVisible(true);
    }

    static void showQuestion(){
        questionLabel.setText(question[currentQuestion]);
        option1.setText(options[currentQuestion][0]);
        option2.setText(options[currentQuestion][1]);
        option3.setText(options[currentQuestion][2]);
        option4.setText(options[currentQuestion][3]);

        optionsGroup.clearSelection();

    }
}