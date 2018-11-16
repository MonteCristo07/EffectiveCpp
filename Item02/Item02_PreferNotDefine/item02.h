namespace EffectiveCpp {
    class GamePlayer {

    public:
        void print();
    private:
        static const int NumTurns = 5;      // a declaration, not a DEFINITION
        int scores[NumTurns];           
    };    

    class CostEstimate {
    public:
        static const double FudgeFactor;    // a declaration
    };
}
