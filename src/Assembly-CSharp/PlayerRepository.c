
/* Int32 CountItemsWithOriginalID(Int32) */

int32_t Assembly-CSharp.dll::PlayerRepository::PlayerRepository_CountItemsWithOriginalID
                  (PlayerRepository *this,int32_t originalId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__System__Linq__Enumerable__Count<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>_
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>
                   );
    func_?(&
                    MethodInfo__PlayerRepository____c__DisplayClass6_0___CountItemsWithOriginalID_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   );
    func_?(&TypeInfo__PlayerRepository____c__DisplayClass6_0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__PlayerRepository____c__DisplayClass6_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)originalId;
    if (originalId == 0) {
      return 1;
    }
    source = (this->fields).playerInventory;
    this_00 = (Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)
              func_?(
                             TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>
                             );
    if (this_00 != (Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
      mscorlib.dll::System::Predicate`1[TabMenuButtonAccessory+AccessoryTabDef]::
      Predicate_1_TabMenuButtonAccessory_AccessoryTabDef___ctor
                (this_00,value,
                 MethodInfo__PlayerRepository____c__DisplayClass6_0___CountItemsWithOriginalID_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 ,(MethodInfo *)0x0);
      source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where
                            ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)source,
                             (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                              *)this_00,
                             System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>_
                            );
      iVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Count
                        (source_00,
                         int_MethodInfo__System__Linq__Enumerable__Count<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_
                        );
      return iVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  iVar1 = (*pcVar2)();
  return iVar1;
}


/* Void CreateWorldObjectHierarchies() */

void Assembly-CSharp.dll::PlayerRepository::PlayerRepository_CreateWorldObjectHierarchies
               (PlayerRepository *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<KoGaMaPackageClient>__Add_KoGaMaPackageClient_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<KoGaMaPackageClient>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<KoGaMaPackageClient>);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fStack_4 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).x;
  fStack_5 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).y;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  uVar6 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).x;
  uVar7 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).y;
  fVar8 = (float)uVar7 * _UNK_?;
  fVar9 = (float)uVar6 * _UNK_?;
  this_00 = (List_1_System_Object_ *)func_?();
  if ((this_00 != (List_1_System_Object_ *)0x0) &&
     (mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_00,
                 MethodInfo__System__Collections__Generic__List<KoGaMaPackageClient>__List__),
     (this->fields).playerInventory != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0)) {
    piVar10 = (int *)func_?();
    uStack_1 = 1;
    while (piVar10 != (int *)0x0) {
      cVar11 = func_?();
      if (cVar11 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar10 != (int *)0x0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (piVar10 == (int *)0x0) break;
      iVar12 = *piVar10;
      uVar13 = 0;
      if (*(ushort *)(iVar12 + 0xb2) != 0) {
        do {
          if (*(IEnumerator_1_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem___Class **)
               (*(int *)(iVar12 + 0x58) + (uint)uVar13 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>
             ) {
            puVar14 = (undefined4 *)
                     (*(int *)(*(int *)(iVar12 + 0x58) + 4 + (uint)uVar13 * 8) * 8 + 0xbc + iVar12);
            goto code_?;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(ushort *)(iVar12 + 0xb2));
      }
      puVar14 = (undefined4 *)func_?();
code_?:
      (*(code *)*puVar14)();
      item = ARepository::ARepository_GetKoGaMaPackageFromItem(item_00,(MethodInfo *)0x0);
      if (((item == (KoGaMaPackageClient *)0x0) ||
          (pDVar15 = (item->fields).worldObjects,
          pDVar15 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) ||
         (pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar15,
                              (item->fields).worldObjectRoot,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             ), pOVar16 == (Object *)0x0)) break;
      (**(code **)&pOVar16->klass[3]._1.field_count)();
      pDVar15 = (item->fields).worldObjects;
      if ((pDVar15 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) ||
         (pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                   ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                             ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar15,
                              (item->fields).worldObjectRoot,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             ), pOVar16 == (Object *)0x0)) break;
      (*(code *)pOVar16->klass[1]._0.name)(pOVar16,CONCAT44(fStack_5,fStack_4));
      fStack_5 = fStack_5 + fVar8;
      fStack_4 = fStack_4 + fVar9;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                (this_00,(Object *)item,
                 MethodInfo__System__Collections__Generic__List<KoGaMaPackageClient>__Add_KoGaMaPackageClient_
                );
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Dictionary`2[System.Int32,MV.WorldObject.MVItem] GetItemsByItemCategory(Int32[]) */

Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *
Assembly-CSharp.dll::PlayerRepository::PlayerRepository_GetItemsByItemCategory
          (PlayerRepository *this,Int32__Array *itemCategories,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int,_MV::WorldObject::MVItem>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>_
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>
                   );
    func_?(&
                    MethodInfo__PlayerRepository____c___GetItemsByItemCategory_b__5_1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   );
    func_?(&
                    MethodInfo__PlayerRepository____c___GetItemsByItemCategory_b__5_2_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   );
    func_?(&
                    MethodInfo__PlayerRepository____c__DisplayClass5_0___GetItemsByItemCategory_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   );
    func_?(&TypeInfo__PlayerRepository____c__DisplayClass5_0);
    func_?(&TypeInfo__PlayerRepository____c);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__PlayerRepository____c__DisplayClass5_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)itemCategories;
    func_?(value + 1,itemCategories);
    pDVar1 = (this->fields).playerInventory;
    this_00 = (Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)
              func_?(
                             TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>
                             );
    if (this_00 != (Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
      mscorlib.dll::System::Predicate`1[TabMenuButtonAccessory+AccessoryTabDef]::
      Predicate_1_TabMenuButtonAccessory_AccessoryTabDef___ctor
                (this_00,value,
                 MethodInfo__PlayerRepository____c__DisplayClass5_0___GetItemsByItemCategory_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 ,(MethodInfo *)0x0);
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where
                         ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar1,
                          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                           *)this_00,
                          System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>_
                         );
      if ((TypeInfo__PlayerRepository____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_01 = TypeInfo__PlayerRepository____c->static_fields->__9__5_1;
      if (this_01 ==
          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
           *)0x0) {
        if ((TypeInfo__PlayerRepository____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pPVar2 = TypeInfo__PlayerRepository____c->static_fields->__9;
        this_01 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
                   *)func_?();
        if (this_01 ==
            (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
             *)0x0) goto code_?;
        mscorlib.dll::System::Func`2[Newtonsoft::Json::Serialization::
        DefaultSerializationBinder+TypeNameKey,Object]::
        Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object___ctor
                  ((Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_
                    *)this_01,(Object *)pPVar2,
                   MethodInfo__PlayerRepository____c___GetItemsByItemCategory_b__5_1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   ,(MethodInfo *)0x0);
        TypeInfo__PlayerRepository____c->static_fields->__9__5_1 = this_01;
        func_?(&TypeInfo__PlayerRepository____c->static_fields->__9__5_1,this_01);
      }
      if ((TypeInfo__PlayerRepository____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_02 = TypeInfo__PlayerRepository____c->static_fields->__9__5_2;
      if (this_02 ==
          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
           *)0x0) {
        if ((TypeInfo__PlayerRepository____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pPVar2 = TypeInfo__PlayerRepository____c->static_fields->__9;
        this_02 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
                   *)func_?();
        if (this_02 ==
            (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
             *)0x0) goto code_?;
        mscorlib.dll::System::Func`2[Newtonsoft::Json::Serialization::
        DefaultSerializationBinder+TypeNameKey,Object]::
        Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object___ctor
                  ((Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_
                    *)this_02,(Object *)pPVar2,
                   MethodInfo__PlayerRepository____c___GetItemsByItemCategory_b__5_2_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   ,(MethodInfo *)0x0);
        TypeInfo__PlayerRepository____c->static_fields->__9__5_2 = this_02;
        func_?(&TypeInfo__PlayerRepository____c->static_fields->__9__5_2,this_02);
      }
      pDVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_6
                         ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Object_ *)this_01,
                          (Func_2_Object_Object_ *)this_02,
                          System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int,_MV::WorldObject::MVItem>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>_
                         );
      return (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)pDVar3;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)(*pcVar4)();
  return pDVar1;
}


/* Void RemoveItem(Int32) */

void Assembly-CSharp.dll::PlayerRepository::PlayerRepository_RemoveItem
               (PlayerRepository *this,int32_t itemId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Remove_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).playerInventory;
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,itemId,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Remove_int_
              );
    ARepository::ARepository_RemoveItem((ARepository *)this,itemId,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* PlayerRepository() */

void Assembly-CSharp.dll::PlayerRepository::PlayerRepository__ctor
               (PlayerRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                   );
    cRam_? = '\x01';
  }
  ARepository::ARepository__ctor((ARepository *)this,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                           );
  if (this_00 != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
              );
    (this->fields).playerInventory = this_00;
    func_?(&(this->fields).playerInventory,this_00);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

