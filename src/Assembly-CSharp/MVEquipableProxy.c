
/* Boolean Equip(AvatarItemType, AvatarEquipableType, Dictionary`2[System.Object,System.Object],
   Int32, Boolean) */

bool Assembly-CSharp.dll::MVEquipableProxy::MVEquipableProxy_Equip
               (MVEquipableProxy *this,AvatarItemType__Enum type,AvatarEquipableType__Enum equipType
               ,Dictionary_2_System_Object_System_Object_ *itemData,int32_t variantID,
               bool holsterable,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pMVar2 = (this->fields).equipable;
  if (pMVar2 != (MVEquipable *)0x0) {
    pMStack_1 = (pMVar2->klass->vtable).__unknown.method;
    aiStack_3[1] = 1;
    aiStack_3[0] = variantID;
    bVar4 = (*(pMVar2->klass->vtable).__unknown.methodPtr)(pMVar2,type,equipType,itemData);
    return bVar4;
  }
  uVar5 = func_?(aiStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Void Unequip() */

void Assembly-CSharp.dll::MVEquipableProxy::MVEquipableProxy_Unequip
               (MVEquipableProxy *this,MethodInfo *method)

{
  pMStack_1 = (MethodInfo *)&stack0xfffffffc;
  pMStack_2 = (this->fields).equipable;
  if (pMStack_2 != (MVEquipable *)0x0) {
    pMStack_1 = (pMStack_2->klass->vtable).__unknown_1.method;
    (*(pMStack_2->klass->vtable).__unknown_1.methodPtr)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

