int main() {
    FamilyMember* member1 = new Child("Mirzohid", 20, "NewUU");
    FamilyMember* member2 = new Parent("Jahongir", 50, "Accountant");

    member1->display();
    member2->display();

    delete member1;
    delete member2;

    return 0;
}
