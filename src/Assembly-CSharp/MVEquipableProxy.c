
/* Boolean Equip(AvatarItemType, AvatarEquipableType, Dictionary`2[System.Object,System.Object],
   Int32, Boolean) */

bool Assembly-CSharp.dll::MVEquipableProxy::MVEquipableProxy_Equip
               (MVEquipableProxy *this,AvatarItemType__Enum type,AvatarEquipableType__Enum equipType
               ,Dictionary_2_System_Object_System_Object_ *itemData,int32_t variantID,
               bool holsterable,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMVar2 = (this->fields).equipable;
  if (pMVar2 != (MVEquipable *)0x0) {
    pIStack_1 = (pMVar2->klass->vtable).__unknown_1.methodPtr;
    aiStack_3[1] = 1;
    aiStack_3[0] = variantID;
    bVar4 = (*(code *)(pMVar2->klass->vtable).__unknown.method)(pMVar2,type,equipType,itemData);
    return bVar4;
  }
  uVar5 = func_?(aiStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}

