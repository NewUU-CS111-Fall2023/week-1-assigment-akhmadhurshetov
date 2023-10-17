int main() {
    FamilyMember* member1 = new Child("Ahmad", 19, "NewUU");
    FamilyMember* member2 = new Parent("Azamat", 45, "Accountant");

    member1->display();
    member2->display();

    delete member1;
    delete member2;

    return 0;
}
