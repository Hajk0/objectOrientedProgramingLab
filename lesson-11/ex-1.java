class Ex1 
{
    public static void main(String[] args) 
    {
        Sequence sequence1 = new LowerCased(new Characters("siemano KOLANO"));
        System.out.println(sequence1.printedSeq());

        Sequence sequence2 = new Substring(new Characters(sequence1.printedSeq()), 5, 10);
        System.out.println(sequence2.printedSeq());

        Sequence sequence3 = new Concatenation(new Characters(sequence2.printedSeq()), "loko");
        System.out.println(sequence3.printedSeq());
    }
}

interface Sequence
{
    public String printedSeq(); //
    
}

class Characters implements Sequence
{
    String charSeq;

    Characters(String charSeq)
    {
        this.charSeq = charSeq;
    }

    @Override
    public String printedSeq() { //
        return this.charSeq;
    }
    
}

class LowerCased implements Sequence
{
    Sequence seq;

    LowerCased(Sequence seq)
    {
        this.seq = seq;
    }

    @Override
    public String printedSeq() { //
        return this.seq.printedSeq().toLowerCase(); //
    }

}

class Substring implements Sequence
{
    Sequence seq;
    int beginIndex;
    int endIndex;

    Substring(Sequence seq, int beginIndex, int endIndex)
    {
        this.seq = seq;
        this.beginIndex = beginIndex;
        this.endIndex = endIndex;
    }

    @Override
    public String printedSeq() {
        return this.seq.printedSeq().substring(beginIndex, endIndex);
    }

}

class Concatenation implements Sequence
{
    Sequence seq;
    String addedString;

    Concatenation(Sequence seq, String addedString)
    {
        this.seq = seq;
        this.addedString = addedString;
    }

    @Override
    public String printedSeq() {
        return this.seq.printedSeq().concat(this.addedString);
    }

}