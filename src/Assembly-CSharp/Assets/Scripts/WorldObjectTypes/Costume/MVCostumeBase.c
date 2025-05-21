
/* ValueTuple`2[MV.WorldObject.IntVector,MV.WorldObject.IntVector] GetEditPoints() */

ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBase::
MVCostumeBase_GetEditPoints
          (ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *__return_storage_ptr__,
          MVCostumeBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__ValueTuple<MV::WorldObject::IntVector,_MV::WorldObject::IntVector>__ValueTuple_MV__WorldObject__IntVector__MV__WorldObject__IntVector_
                   );
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  iVar2 = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&puStack_1,-0xf,-4,-0x10,(MethodInfo *)0x0);
  uVar3._0_2_ = 0;
  uVar3._2_2_ = 0;
  iVar4 = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&stack0xfffffff4,10,0x16,9,(MethodInfo *)0x0);
  puVar5 = puStack_1;
  pMVar6 = 
  MethodInfo__System__ValueTuple<MV::WorldObject::IntVector,_MV::WorldObject::IntVector>__ValueTuple_MV__WorldObject__IntVector__MV__WorldObject__IntVector_
  ;
  pIStack_7 = (InvokerMethod)0x0;
  auStack_8._0_2_ = 0;
  auStack_8._2_2_ = 0;
  auStack_8._4_2_ = 0;
  auStack_8._6_2_ = 0;
  item1.z = iVar2;
  item1._0_4_ = puVar5;
  item2.z = iVar4;
  item2.x = (int16_t)uVar3;
  item2.y = SUB42(uVar3,2);
  mscorlib.dll::System::ValueTuple`2[MV::WorldObject::IntVector,MV::WorldObject::IntVector]::
  ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector___ctor
            ((ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *)auStack_8,item1,
             item2,
             MethodInfo__System__ValueTuple<MV::WorldObject::IntVector,_MV::WorldObject::IntVector>__ValueTuple_MV__WorldObject__IntVector__MV__WorldObject__IntVector_
            );
  pMVar6->methodPointer = (Il2CppMethodPointer)auStack_8._0_4_;
  pMVar6->virtualMethodPointer = (Il2CppMethodPointer)auStack_8._4_4_;
  pMVar6->invoker_method = pIStack_7;
  return (ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *)pMVar6;
}


/* MVCostumeBase(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Costume::MVCostumeBase::
     MVCostumeBase__ctor(MVCostumeBase *this,Dictionary_2_System_Object_System_Object_ *data,
                        Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,
                        MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData);
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
          if ((TypeInfo__Assets__Scripts__WorldObjectTypes__Costume__CostumeData->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          value = CostumeData::CostumeData_DefaultItemData((MethodInfo *)0x0);
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

