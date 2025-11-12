
/* ValueTuple`2[MV.WorldObject.IntVector,MV.WorldObject.IntVector] GetEditPoints() */

ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBase::
MVCustomGunBase_GetEditPoints
          (ValueTuple_2_MV_WorldObject_IntVector_MV_WorldObject_IntVector_ *__return_storage_ptr__,
          MVCustomGunBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__ValueTuple<MV::WorldObject::IntVector,_MV::WorldObject::IntVector>__ValueTuple_MV__WorldObject__IntVector__MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->Item1).x = -9;
  (__return_storage_ptr__->Item1).y = -5;
  (__return_storage_ptr__->Item1).z = -10;
  (__return_storage_ptr__->Item2).x = 8;
  (__return_storage_ptr__->Item2).y = 0xb;
  (__return_storage_ptr__->Item2).z = 0x1e;
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
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  EditablePickupItem::MVEditablePickupItemBase::MVEditablePickupItemBase__ctor
            ((MVEditablePickupItemBase *)this,data,worldObjects,(MethodInfo *)0x0);
  auStackX_10[0] = 7;
  key = (Object *)FUN_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,auStackX_10);
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (data,key,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
    if (this_00 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if ((bVar2 <= (this_00->klass->_1).naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (this_00->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (this_00,(Object *)StringLiteral_itemData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           ->klass->rgctx_data[0x21].method);
        if (iVar3 < 0) {
          if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
                       field_0x1c == 0) {
            FUN_?();
          }
          value = CustomGunData::CustomGunData_DefaultItemData((MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryInsert
                    ((Dictionary_2_System_Object_System_Object_ *)this_00,
                     (Object *)StringLiteral_itemData,(Object *)value,
                     (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar1 >> 8),1),
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                     ->klass->rgctx_data[0x22].method);
        }
        return;
      }
      FUN_?(this_00);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

