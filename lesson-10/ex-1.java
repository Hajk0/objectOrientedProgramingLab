import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Ex1
{
    public static void main(String[] args) 
    {
        Shiritori shiritori = new Shiritori();

        Game game = new Game(shiritori);
        game.interactive();

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
                        System.out.println(word + "has already been used.");
                        System.out.println("Game over.");
                        return;
                    }
                }
                this.words.add(word);

            }
            else
            {
                this.gameOver = true;
                System.out.println(word + " does not start with " + prevWord.charAt(prevWord.length() - 1) + ".");
                System.out.println("Game over.");
            }
        }
    }

    public void restart()
    {
        this.words.clear();
        this.gameOver = false;
        System.out.println("Game restarted.");
    }

    public void printWords()
    {
        for (String w : words) 
        {
            System.out.print(w + ", ");
        }
    }

    public boolean gameStoper()
    {
        return gameOver;
    }
}

class Game
{
    private Shiritori shiritori;

    Game(Shiritori shiritori)
    {
        this.shiritori = shiritori;
    }

    public void interactive()
    {
        while (!shiritori.gameStoper())
        {
            Scanner sc = new Scanner(System.in);
            System.out.println("Press any key to enter next word or press r to restart game.");
            String choice = sc.next();
            if (choice.equals("r"))
            {
                shiritori.restart();
            }
            else
            {
                System.out.println("Enter next word...");
                String word = sc.next();
                shiritori.play(word);
                shiritori.printWords();
                System.out.println();
            }
        }
    }
}