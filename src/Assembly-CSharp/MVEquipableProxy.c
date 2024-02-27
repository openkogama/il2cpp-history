
/* Boolean Equip(AvatarItemType, AvatarEquipableType, Dictionary`2[System.Object,System.Object],
   Int32) */

bool Assembly-CSharp.dll::MVEquipableProxy::MVEquipableProxy_Equip
               (MVEquipableProxy *this,AvatarItemType__Enum type,AvatarEquipableType__Enum equipType
               ,Dictionary_2_System_Object_System_Object_ *itemData,int32_t variantID,
               MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMVar2 = (this->fields).equipable;
  if (pMVar2 != (MVEquipable *)0x0) {
    pIStack_1 = (pMVar2->klass->vtable).__unknown_1.methodPtr;
    iStack_3 = variantID;
    pDStack_4 = itemData;
    bVar5 = (*(code *)(pMVar2->klass->vtable).__unknown.method)(pMVar2,type,equipType);
    return bVar5;
  }
  uVar6 = func_?(&pDStack_4);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}

