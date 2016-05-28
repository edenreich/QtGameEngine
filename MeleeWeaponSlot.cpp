#include "MeleeWeaponSlot.h"

#include "MeleeWeapon.h"


MeleeWeaponSlot::MeleeWeaponSlot()
{
    // empty ctor body
}

bool MeleeWeaponSlot::canBeEquipped(EquipableItem *item)
{
    // MeeleeWeaponSlot can only equip MeleeWeapons
    MeleeWeapon* asMeleeWeapon = dynamic_cast<MeleeWeapon*>(item);
    return asMeleeWeapon;
}

void MeleeWeaponSlot::use()
{
    // call attack on the MeleeWeapon
    MeleeWeapon* asMeleeWeapon = dynamic_cast<MeleeWeapon*>(item_);
    asMeleeWeapon->attack(QPointF(0,0));
}
