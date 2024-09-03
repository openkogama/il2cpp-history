
/* ValueTuple`2[MV.WorldObject.IntVector,MV.WorldObject.IntVector] GetEditPoints() */

ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBase::
MVCustomGunBase_GetEditPoints
          (ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *__return_storage_ptr__,
          MVCustomGunBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
  }
  pVVar1 = CustomGunData::CustomGunData_GetEditPoints(&VStack_2,(MethodInfo *)0x0);
  iVar3 = (pVVar1->Item2).x;
  iVar4 = (pVVar1->Item2).y;
  iVar5 = (pVVar1->Item2).z;
  __return_storage_ptr__->Item1 = pVVar1->Item1;
  (__return_storage_ptr__->Item2).x = iVar3;
  (__return_storage_ptr__->Item2).y = iVar4;
  (__return_storage_ptr__->Item2).z = iVar5;
  return __return_storage_ptr__;
}


/* MVCustomGunBase(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBase::
     MVCustomGunBase__ctor
               (MVCustomGunBase *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  EditablePickupItem::MVEditablePickupItemBase::MVEditablePickupItemBase__ctor
            ((MVEditablePickupItemBase *)this,data,worldObjects,(MethodInfo *)0x0);
  worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)CONCAT13(7,worldObjects._0_3_);
  key = (Object *)
        func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,(int)&worldObjects + 3)
  ;
  this_00.m_Index = 0;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    this_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,key,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    if (this_00.m_Index != 0) {
      method = (MethodInfo *)
               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment <= *(byte *)(*(int *)this_00.m_Index + 0xb8)) &&
         (*(Dictionary_2_System_Object_System_Object___Class **)
           (*(int *)(*(int *)this_00.m_Index + 100) + -4 +
           (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 ->_1).naturalAligment * 4) ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        method = 
        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
        ;
        worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)StringLiteral_itemData;
        bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                           this_00.m_Index,(Object *)StringLiteral_itemData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar1 == 0) {
          if ((TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          value = CustomGunData::CustomGunData_DefaultItemData((MethodInfo *)0x0);
          worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)&UNK_?;
          method = (MethodInfo *)this_00;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__set_Item
                    ((Dictionary_2_System_Object_System_Object_ *)this_00.m_Index,
                     (Object *)StringLiteral_itemData,(Object *)value,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                    );
        }
        return;
      }
      goto code_?;
    }
  }
  method = (MethodInfo *)&UNK_?;
  func_?();
  method = (MethodInfo *)extraout_EDX;
code_?:
  worldObjects = (Dictionary_2_System_Int32_MVWorldObjectClient_ *)this_00.m_Index;
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

