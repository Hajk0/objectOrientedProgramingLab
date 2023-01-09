import java.util.ArrayList;
import java.util.List;

class Ex1
{
    public static void main(String[] args) 
    {
        Shiritori game = new Shiritori();

        game.play("siemano");
        game.play("okrąg");
        game.printWords();

        game.restart();
        game.printWords();

    }
}

class Shiritori
{
    private List<String> words = new ArrayList<String>();
    private boolean gameOver;

    Shiritori()
    {
        this.gameOver = false;
    }

    public void play(String word)
    {
        if (words.isEmpty())
        {
            this.words.add(word);
        }
        else
        {
            String prevWord = words.get(words.size() - 1);

            if (word.charAt(0) == prevWord.charAt(prevWord.length() - 1))
            {
                for (String w : words) 
                {
                    if (word == w)
                    {
                        this.gameOver = true;
                        System.out.println("Game over");
                        return;
                    }
                }
                this.words.add(word);

            }
            else
            {
                this.gameOver = true;
                System.out.println("Game over");
            }
        }
        

    }

    public void restart()
    {
        this.words.clear();
        this.gameOver = false;
        System.out.println("Game restarted");
    }

    public void printWords()
    {
        for (String w : words) 
        {
            System.out.print(w + ", ");
        }
    }
}

/*class Game
{
    private Shiritori shiritori;

    Game(Shiritori shiritori)
    {
        this.shiritori = shiritori;
    }

    public void interactive()
    {
        while 
    }
}*/