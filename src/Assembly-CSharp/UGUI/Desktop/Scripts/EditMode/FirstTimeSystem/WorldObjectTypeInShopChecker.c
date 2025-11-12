
/* Boolean IsItemInShop(WorldObjectType) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     WorldObjectTypeInShopChecker::WorldObjectTypeInShopChecker_IsItemInShop
               (WorldObjectTypeInShopChecker *this,WorldObjectType__Enum worldObjectType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).haveCheckedItemAvailability == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
        (IEditModeUI *)0x0) {
      this_00 = (PlayerShopInventoryRepository *)FUN_?();
      if (this_00 != (PlayerShopInventoryRepository *)0x0) {
        bVar1 = Inventories::PlayerShopInventoryRepository::
                PlayerShopInventoryRepository_HasShopWorldObjectType
                          (this_00,worldObjectType,(MethodInfo *)0x0);
        (this->fields).itemAvailable = bVar1;
        (this->fields).haveCheckedItemAvailability = 1;
        goto code_?;
      }
    }
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar1 = (*pcVar2)();
    return bVar1;
  }
code_?:
  return (this->fields).itemAvailable;
}

