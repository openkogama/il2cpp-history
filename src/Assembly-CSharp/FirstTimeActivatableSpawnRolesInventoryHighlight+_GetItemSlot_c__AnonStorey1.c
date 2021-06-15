
/* Void <>m__0(IOpenClientShopPage, BaseEventData) */

void Assembly-CSharp.dll::
     FirstTimeActivatableSpawnRolesInventoryHighlight+<GetItemSlot>c__AnonStorey1::
     FirstTimeActivatableSpawnRolesInventoryHighlight_GetItemSlot_c_AnonStorey1___m__0
               (FirstTimeActivatableSpawnRolesInventoryHighlight_GetItemSlot_c_AnonStorey1 *this,
               IOpenClientShopPage *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields)._this;
  if (pFVar1 != (FirstTimeActivatableSpawnRolesInventoryHighlight *)0x0) {
    iVar2 = (pFVar1->fields).itemCategory;
    this_00 = (KogamaSettingNumericBase_1_System_Single_ *)(pFVar1->fields).slots;
    if (this_00 != (KogamaSettingNumericBase_1_System_Single_ *)0x0) {
      pIVar3 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
               KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
               KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                         (this_00,(MethodInfo *)0x0);
      if (x != (IOpenClientShopPage *)0x0) {
        func_?(0,TypeInfo__UnityEngine__EventSystems__IOpenClientShopPage,x,1,iVar2,
                        (this->fields).iteration * (int)pIVar3);
        return;
      }
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

