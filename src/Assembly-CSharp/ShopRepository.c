
/* Void CreateWorldObjectHierarchies() */

void Assembly-CSharp.dll::ShopRepository::ShopRepository_CreateWorldObjectHierarchies
               (ShopRepository *this,MethodInfo *method)

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
     (this->fields).shopInventory != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0)) {
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


/* Dictionary`2[System.Int32,MV.WorldObject.MVItem] GetItemsByCategory(Int32) */

Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *
Assembly-CSharp.dll::ShopRepository::ShopRepository_GetItemsByCategory
          (ShopRepository *this,int32_t itemCategory,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pOVar1 = (Object__Class *)func_?();
  if (pOVar1 != (Object__Class *)0x0) {
    if ((pOVar1->_0).namespaze == (char *)0x0) {
      func_?();
      func_?();
      pcVar2 = (code *)swi(3);
      pDVar3 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)(*pcVar2)();
      return pDVar3;
    }
    (pOVar1->_0).byval_arg.data.__klassIndex = itemCategory;
    if (cRam_? == '\0') {
      func_?();
      func_?();
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
                      MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                     );
      func_?(&
                      MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_2_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                     );
      func_?(&
                      MethodInfo__ShopRepository____c__DisplayClass8_0___GetItemsByItemCategories_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                     );
      func_?(&TypeInfo__ShopRepository____c__DisplayClass8_0);
      func_?(&TypeInfo__ShopRepository____c);
      cRam_? = '\x01';
    }
    value = (Object *)func_?(TypeInfo__ShopRepository____c__DisplayClass8_0);
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,unaff_retaddr);
      value[1].klass = pOVar1;
      func_?();
      pDVar3 = (this->fields).shopInventory;
      this_00 = (Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)func_?();
      if (this_00 != (Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
        mscorlib.dll::System::Predicate`1[TabMenuButtonAccessory+AccessoryTabDef]::
        Predicate_1_TabMenuButtonAccessory_AccessoryTabDef___ctor
                  (this_00,value,
                   MethodInfo__ShopRepository____c__DisplayClass8_0___GetItemsByItemCategories_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   ,(MethodInfo *)0x0);
        source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where
                           ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar3,
                            (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                             *)this_00,
                            System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>_
                           );
        if ((TypeInfo__ShopRepository____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_01 = TypeInfo__ShopRepository____c->static_fields->__9__8_1;
        if (this_01 ==
            (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
             *)0x0) {
          if ((TypeInfo__ShopRepository____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar4 = TypeInfo__ShopRepository____c->static_fields->__9;
          this_01 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
                     *)func_?();
          if (this_01 ==
              (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
               *)0x0) goto code_?;
          mscorlib.dll::System::Func`2[Newtonsoft::Json::Serialization::
          DefaultSerializationBinder+TypeNameKey,Object]::
          Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object___ctor
                    ((Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_
                      *)this_01,(Object *)pSVar4,
                     MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                     ,(MethodInfo *)0x0);
          TypeInfo__ShopRepository____c->static_fields->__9__8_1 = this_01;
          source = (IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)
                   &TypeInfo__ShopRepository____c->static_fields->__9__8_1;
          func_?();
        }
        if ((TypeInfo__ShopRepository____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        this_02 = TypeInfo__ShopRepository____c->static_fields->__9__8_2;
        if (this_02 ==
            (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
             *)0x0) {
          if ((TypeInfo__ShopRepository____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar4 = TypeInfo__ShopRepository____c->static_fields->__9;
          this_02 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
                     *)func_?();
          if (this_02 ==
              (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
               *)0x0) goto code_?;
          mscorlib.dll::System::Func`2[Newtonsoft::Json::Serialization::
          DefaultSerializationBinder+TypeNameKey,Object]::
          Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object___ctor
                    ((Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_
                      *)this_02,(Object *)pSVar4,
                     MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_2_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                     ,(MethodInfo *)0x0);
          TypeInfo__ShopRepository____c->static_fields->__9__8_2 = this_02;
          source = (IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)
                   &TypeInfo__ShopRepository____c->static_fields->__9__8_2;
          func_?();
        }
        pDVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_6
                           ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Object_ *)this_01,
                            (Func_2_Object_Object_ *)this_02,
                            System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int,_MV::WorldObject::MVItem>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>_
                           );
        return (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)pDVar5;
      }
    }
  }
code_?:
  uVar6 = func_?(&stack0xfffffff0);
  func_?(uVar6);
  pcVar2 = (code *)swi(3);
  pDVar3 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)(*pcVar2)();
  return pDVar3;
}


/* Dictionary`2[System.Int32,MV.WorldObject.MVItem] GetItemsByItemCategories(Int32[]) */

Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *
Assembly-CSharp.dll::ShopRepository::ShopRepository_GetItemsByItemCategories
          (ShopRepository *this,Int32__Array *itemCategories,MethodInfo *method)

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
                    MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   );
    func_?(&
                    MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_2_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   );
    func_?(&
                    MethodInfo__ShopRepository____c__DisplayClass8_0___GetItemsByItemCategories_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   );
    func_?(&TypeInfo__ShopRepository____c__DisplayClass8_0);
    func_?(&TypeInfo__ShopRepository____c);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__ShopRepository____c__DisplayClass8_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    value[1].klass = (Object__Class *)itemCategories;
    func_?(value + 1,itemCategories);
    pDVar1 = (this->fields).shopInventory;
    this_00 = (Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)
              func_?(
                             TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>
                             );
    if (this_00 != (Predicate_1_TabMenuButtonAccessory_AccessoryTabDef_ *)0x0) {
      mscorlib.dll::System::Predicate`1[TabMenuButtonAccessory+AccessoryTabDef]::
      Predicate_1_TabMenuButtonAccessory_AccessoryTabDef___ctor
                (this_00,value,
                 MethodInfo__ShopRepository____c__DisplayClass8_0___GetItemsByItemCategories_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 ,(MethodInfo *)0x0);
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where
                         ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar1,
                          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                           *)this_00,
                          System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>_
                         );
      if ((TypeInfo__ShopRepository____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_01 = TypeInfo__ShopRepository____c->static_fields->__9__8_1;
      if (this_01 ==
          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
           *)0x0) {
        if ((TypeInfo__ShopRepository____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar2 = TypeInfo__ShopRepository____c->static_fields->__9;
        this_01 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
                   *)func_?();
        if (this_01 ==
            (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
             *)0x0) goto code_?;
        mscorlib.dll::System::Func`2[Newtonsoft::Json::Serialization::
        DefaultSerializationBinder+TypeNameKey,Object]::
        Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object___ctor
                  ((Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_
                    *)this_01,(Object *)pSVar2,
                   MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   ,(MethodInfo *)0x0);
        TypeInfo__ShopRepository____c->static_fields->__9__8_1 = this_01;
        func_?(&TypeInfo__ShopRepository____c->static_fields->__9__8_1,this_01);
      }
      if ((TypeInfo__ShopRepository____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_02 = TypeInfo__ShopRepository____c->static_fields->__9__8_2;
      if (this_02 ==
          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
           *)0x0) {
        if ((TypeInfo__ShopRepository____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pSVar2 = TypeInfo__ShopRepository____c->static_fields->__9;
        this_02 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
                   *)func_?();
        if (this_02 ==
            (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
             *)0x0) goto code_?;
        mscorlib.dll::System::Func`2[Newtonsoft::Json::Serialization::
        DefaultSerializationBinder+TypeNameKey,Object]::
        Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object___ctor
                  ((Func_2_Newtonsoft_Json_Serialization_DefaultSerializationBinder_TypeNameKey_Object_
                    *)this_02,(Object *)pSVar2,
                   MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_2_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   ,(MethodInfo *)0x0);
        TypeInfo__ShopRepository____c->static_fields->__9__8_2 = this_02;
        func_?(&TypeInfo__ShopRepository____c->static_fields->__9__8_2,this_02);
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

void Assembly-CSharp.dll::ShopRepository::ShopRepository_RemoveItem
               (ShopRepository *this,int32_t itemId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Remove_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).shopInventory;
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


/* Void ReorganizeItemsByItemType(Boolean) */

void Assembly-CSharp.dll::ShopRepository::ShopRepository_ReorganizeItemsByItemType
               (ShopRepository *this,bool notifyOfChange,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Comparison<int>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Keys__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    System__Collections__Generic__List<int>_MethodInfo__System__Linq__Enumerable__ToList<int>_System__Collections__Generic__IEnumerable<int>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<int>__Sort_System__Comparison<int>_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    func_?(&MethodInfo__ShopRepository___ReorganizeItemsByItemType_b__3_0_int__int_);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).ItemCategoriesInShop;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,this_00,
                        MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    method_00 = pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&stack0xffffffb4;
    while( true ) {
      bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
              RegularExpressions::RegexCharClass+SingleRange]::
              List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&stack0xffffffb4,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                        );
      if (bVar8 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&stack0xffffffb4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__,
                   (MethodInfo *)method_00);
        uStack_1 = 0xffffffff;
        if ((notifyOfChange != 0) &&
           ((this->fields)._.OnRepositoryChange != (ARepository_OnRepositoryChangeDelegate *)0x0)) {
          pAVar9 = (this->fields)._.OnRepositoryChange;
          LStack_7._list = (pAVar9->fields)._._.method;
          (*(pAVar9->fields)._._.invoke_impl)();
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      RStack_10 = method_00;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      itemCategories = (Int32__Array *)func_?();
      if (itemCategories == (Int32__Array *)0x0) goto code_?;
      if (itemCategories->max_length == 0) break;
      itemCategories->vector[0] = (int32_t)RStack_10;
      this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)ShopRepository_GetItemsByItemCategories(this,itemCategories,(MethodInfo *)0x0);
      if (this_01 ==
          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0
         ) goto code_?;
      source = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Keys
                         (this_01,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Keys__
                         );
      this_02 = (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_2
                          ((IEnumerable_1_System_Int32_ *)source,
                           System__Collections__Generic__List<int>_MethodInfo__System__Linq__Enumerable__ToList<int>_System__Collections__Generic__IEnumerable<int>_
                          );
      pLStack_11 = this_02;
      RStack_10 = (RegexCharClass_SingleRange)func_?();
      if ((RStack_10 == (RegexCharClass_SingleRange)0x0) ||
         (mscorlib.dll::System::Comparison`1[Int32Enum]::Comparison_1_Int32Enum___ctor
                    ((Comparison_1_Int32Enum_ *)RStack_10,(Object *)this,
                     MethodInfo__ShopRepository___ReorganizeItemsByItemType_b__3_0_int__int_,
                     (MethodInfo *)0x0),
         this_02 == (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0))
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Sort_1
                (this_02,(Comparison_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                         RStack_10,
                 MethodInfo__System__Collections__Generic__List<int>__Sort_System__Comparison<int>_)
      ;
      for (index = 0; index < (pLStack_11->fields)._size; index = index + 1) {
        RStack_10 = (RegexCharClass_SingleRange)(this->fields)._.itemIDToInventorySlotIndex;
        RStack_12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               pLStack_11,index,
                               MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
        pOStack_13 = (Object *)func_?();
        method_00 = (RegexCharClass_SingleRange)&iStack_14;
        iStack_14 = index;
        value = (Object *)func_?();
        if (RStack_10 == (RegexCharClass_SingleRange)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)RStack_10,pOStack_13,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
    }
    func_?();
  }
code_?:
  uVar15 = func_?();
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Int32 <ReorganizeItemsByItemType>b__3_0(Int32, Int32) */

int32_t Assembly-CSharp.dll::ShopRepository::ShopRepository__ReorganizeItemsByItemType_b__3_0
                  (ShopRepository *this,int32_t a,int32_t b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  pSVar1 = this;
  this = (ShopRepository *)a;
  pDVar2 = (pSVar1->fields)._.itemIDToInventorySlotIndex;
  pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
  pOVar4 = (Object *)0x0;
  if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
    pIVar5 = extraout_ECX;
  }
  else {
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar2,pOVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pDVar2 = (pSVar1->fields)._.itemIDToInventorySlotIndex;
    a = b;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&a);
    if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar2,pOVar3,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar6 = CONCAT44(TypeInfo__System__Int32,pOVar3);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar7 = (int *)func_?(pOVar3);
    iVar8 = *piVar7;
    if (pOVar4 == (Object *)0x0) goto code_?;
    pIVar5 = TypeInfo__System__Int32;
    if ((pOVar4->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar7 = (int *)func_?(pOVar4);
      return *piVar7 - iVar8;
    }
  }
  uVar6 = func_?(pOVar4,pIVar5);
code_?:
  func_?(uVar6);
  pcVar9 = (code *)swi(3);
  iVar10 = (*pcVar9)();
  return iVar10;
}


/* ShopRepository() */

void Assembly-CSharp.dll::ShopRepository::ShopRepository__ctor
               (ShopRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
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
    (this->fields).shopInventory = this_00;
    func_?(&(this->fields).shopInventory,this_00);
    this_01 = (List_1_System_Int32_ *)
              func_?(TypeInfo__System__Collections__Generic__List<int>);
    if (this_01 != (List_1_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
      (this->fields).ItemCategoriesInShop = this_01;
      func_?(&(this->fields).ItemCategoriesInShop,this_01);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

