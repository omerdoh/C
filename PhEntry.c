typedef struct PhEntry
{
    int areaCode; 
    int phoneNumber; 
    char lastName[20];
    char firstName[20];
} PhoneEntry;

PhoneEntry phoneBook[10] = {
    {613, 4891028, "Jones", "Amy"},
    {416, 3156845, "Li", "Simon"},
    {905, 6546865, "Jamaly", "Sifat"},
    {905, 8475421, "Garret", "Victor"},
    {519, 3268445, "Greil", "Ike"},
    {647, 7984651, "Barbossa", "Claude"},
    {416, 2684984, "Smith", "Catherine"},
    {647, 9461653, "Askell", "Max"},
    {613, 4313849, "Cook", "Elincia"},
    {519, 2135498, "Frelia", "Tana"}
};
