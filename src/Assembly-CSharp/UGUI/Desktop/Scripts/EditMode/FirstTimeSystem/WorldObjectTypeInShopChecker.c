
/* Boolean IsItemInShop(WorldObjectType) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::FirstTimeSystem::
     WorldObjectTypeInShopChecker::WorldObjectTypeInShopChecker_IsItemInShop
               (WorldObjectTypeInShopChecker *this,WorldObjectType__Enum worldObjectType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IEditModeUI);
    cRam_? = '\x01';
  }
  if ((this->fields).haveCheckedItemAvailability != 0) {
code_?:
    return (this->fields).itemAvailable;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pIVar1 != (IEditModeUI *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType == (Il2CppClass *)TypeInfo__IEditModeUI) {
          ppMVar5 = &(&(pIVar1->klass->vtable).get_PlayerShopInventoryRepository)
                     [pIVar1->klass->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar5 = (MethodInfo **)func_?(pIVar1,TypeInfo__IEditModeUI,4);
code_?:
    this_00 = (PlayerShopInventoryRepository *)(*(code *)*ppMVar5)(pIVar1,ppMVar5[1]);
    if (this_00 != (PlayerShopInventoryRepository *)0x0) {
      bVar6 = Inventories::PlayerShopInventoryRepository::
              PlayerShopInventoryRepository_HasShopWorldObjectType
                        (this_00,worldObjectType,(MethodInfo *)0x0);
      (this->fields).itemAvailable = bVar6;
      (this->fields).haveCheckedItemAvailability = 1;
      goto code_?;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}

