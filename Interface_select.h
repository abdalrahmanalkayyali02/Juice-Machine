class selectRegister {

    public: void select_item(int);
    /*---------------------------------------------------------------------
     * This function we use it to select item from juice
 machine 
     * the value for this function was given by the prarameter list 
     * the value should be hight than 0 and less than 9 
     ----------------------------------------------------------------------*/

    public: void set_quantity_for_customer(int);
    /*---------------------------------------------------------------------
     * This function we use it to set the quantity that custome want bring
     * the value for this function give in parameter list 
     * the value should be at lease 1 and less  of equal the storgr number
     ----------------------------------------------------------------------*/

    public: int make_sale(int) const;
    /*---------------------------------------------------------------------
     * This function we use to make sale and disincreament for storge 
     * if the thers is the product in storge the function will run by auto
     * the equation that function work with it  as follow :
     * storge storgr - number of prduct that custome bring 
     * this function exicute after cheack if the all condition previos it 
     * are correct and the stoorge type can bring if not it will not make 
     * access and will not make sale for product if it empty
     * it have no parameter
     ----------------------------------------------------------------------*/

    public: void view_storge(int);
    /*---------------------------------------------------------------------
     * This function we use it to show how many prduct that are in the storge
     * the storgr have 4 type storgr for apple, orange, mango, and strawbary
     * and banan
     * a each section of storge have specfic number of product number
     * it work  in two time : 
     * for cheack if there is enought product to make sale 
     * for show the product in the storge after the sale 
     * it have no parameter
     ----------------------------------------------------------------------*/
    
    public: bool is_enable(int) const;
    /*---------------------------------------------------------------------
     * This function we use it to cheack if thete is product enought to make
     * sale or not 
     * this function have no parameter 
     * if the product is equal or hight than the custome need it will return 
     * true  if not it will return false
     * if it return false the prodgram can not show the view_storge function
     * it cheack for apple, orange , mango , banan and strawbary
     ----------------------------------------------------------------------*/
    
    private: int select;
    private: int product_quantity;
    private: int apple_storge  = 100;
    private: int orange_storge = 100;
    private: int mango_storge  = 100;
    private: int strawbary_banan_storge = 100;
};
