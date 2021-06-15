
/* Boolean Equip(AvatarItemType, AvatarEquipableType, Dictionary`2[System.Object,System.Object],
   Int32, Boolean) */

bool Assembly-CSharp.dll::MVEquipableProxy::MVEquipableProxy_Equip
               (MVEquipableProxy *this,AvatarItemType__Enum type,AvatarEquipableType__Enum equipType
               ,Dictionary_2_System_Object_System_Object_ *itemData,int32_t variantID,
               bool holsterable,MethodInfo *method)

{
  pMVar1 = (this->fields).equipable;
  if (pMVar1 != (MVEquipable *)0x0) {
    bVar2 = (*(code *)(pMVar1->klass->vtable).__unknown.method)
                      (pMVar1,type,equipType,itemData,variantID,1,
                       (pMVar1->klass->vtable).__unknown_1.methodPtr);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void Unequip() */

void Assembly-CSharp.dll::MVEquipableProxy::MVEquipableProxy_Unequip
               (MVEquipableProxy *this,MethodInfo *method)

{
  pMVar1 = (this->fields).equipable;
  if (pMVar1 != (MVEquipable *)0x0) {
    (*(code *)(pMVar1->klass->vtable).__unknown_1.method)
              (pMVar1,(pMVar1->klass->vtable).__unknown_2.methodPtr);
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

