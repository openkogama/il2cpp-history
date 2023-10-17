
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
    uVar2 = 0;
    uVar3 = (pIVar1->klass->_1).interface_offsets_count;
    if (uVar3 != 0) {
      do {
        if (pIVar1->klass->interfaceOffsets[uVar2].interfaceType ==
            (Il2CppClass *)TypeInfo__IEditModeUI) {
          pVVar4 = &(pIVar1->klass->vtable).get_PlayerShopInventoryRepository +
                   pIVar1->klass->interfaceOffsets[uVar2].offset;
          goto code_?;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    pVVar4 = (VirtualInvokeData *)func_?(pIVar1,TypeInfo__IEditModeUI,4);
code_?:
    this_00 = (PlayerShopInventoryRepository *)(*pVVar4->methodPtr)(pIVar1,pVVar4->method);
    if (this_00 != (PlayerShopInventoryRepository *)0x0) {
      bVar5 = Inventories::PlayerShopInventoryRepository::
              PlayerShopInventoryRepository_HasShopWorldObjectType
                        (this_00,worldObjectType,(MethodInfo *)0x0);
      (this->fields).itemAvailable = bVar5;
      (this->fields).haveCheckedItemAvailability = 1;
      goto code_?;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}

