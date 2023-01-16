class Ex1 
{
    public static void main(String[] args) 
    {
        
    }
}

interface Sequence
{
    public String printedSeq();
    
}

class Characters implements Sequence
{
    String charSeq;

    Characters(String charSeq)
    {
        this.charSeq = charSeq;
    }

    @Override
    public String printedSeq() {
        return charSeq;
    }
    
}

class LowerCased
{
    String charSeq;

    public String toLowerCase()
    {
        return charSeq.toLowerCase();
    }
}

class Substring
{

}

class Concatenation
{
    
}