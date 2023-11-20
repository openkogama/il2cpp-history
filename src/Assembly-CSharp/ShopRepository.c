
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<KoGaMaPackageClient>__List__);
  if ((this->fields).shopInventory != (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
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
      if (*(ushort *)(iVar12 + 0xb6) != 0) {
        do {
          if (*(IEnumerator_1_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem___Class **)
               (*(int *)(iVar12 + 0x58) + (uint)uVar13 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>
             ) {
            puVar14 = (undefined4 *)
                     (iVar12 + (*(int *)(*(int *)(iVar12 + 0x58) + 4 + (uint)uVar13 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(ushort *)(iVar12 + 0xb6));
      }
      puVar14 = (undefined4 *)func_?();
code_?:
      (*(code *)*puVar14)();
      item = ARepository::ARepository_GetKoGaMaPackageFromItem(item_00,(MethodInfo *)0x0);
      if (((item == (KoGaMaPackageClient *)0x0) ||
          (pDVar15 = (item->fields).worldObjects,
          pDVar15 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0)) ||
         (pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar15,
                              (item->fields).worldObjectRoot,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             ), pOVar16 == (Object *)0x0)) break;
      (**(code **)&pOVar16->klass[3]._1.method_count)();
      pDVar15 = (item->fields).worldObjects;
      if ((pDVar15 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) ||
         (pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar15,
                              (item->fields).worldObjectRoot,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                             ), pOVar16 == (Object *)0x0)) break;
      (*(code *)pOVar16->klass[1]._0.namespaze)(pOVar16,CONCAT44(fStack_5,fStack_4));
      fStack_5 = fStack_5 + fVar8;
      fStack_4 = fStack_4 + fVar9;
      if (this_00 == (List_1_System_Object_ *)0x0) break;
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
      func_?();
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    if (value != (Object *)0x0) {
      value[1].klass = pOVar1;
      func_?();
      pDVar3 = (this->fields).shopInventory;
      this_00 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                func_?();
      mscorlib.dll::System::Predicate`1[System::Xml::Schema::
      XmlSchemaObjectTable+XmlSchemaObjectEntry]::
      Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
                (this_00,value,
                 MethodInfo__ShopRepository____c__DisplayClass8_0___GetItemsByItemCategories_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 ,(MethodInfo *)0x0);
      itemCategory = (int32_t)System.Core.dll::System::Linq::Enumerable::Enumerable_Where_1
                                        ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_
                                          *)pDVar3,
                                         (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
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
        mscorlib.dll::System::Func`2[UnityEngine::Vector2Int,Int32]::
        Func_2_UnityEngine_Vector2Int_Int32___ctor
                  ((Func_2_UnityEngine_Vector2Int_Int32_ *)this_01,(Object *)pSVar4,
                   MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   ,(MethodInfo *)0x0);
        TypeInfo__ShopRepository____c->static_fields->__9__8_1 = this_01;
        func_?();
        itemCategory = (int32_t)this_01;
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
        mscorlib.dll::System::Func`2[UnityEngine::Vector2Int,Int32]::
        Func_2_UnityEngine_Vector2Int_Int32___ctor
                  ((Func_2_UnityEngine_Vector2Int_Int32_ *)this_02,(Object *)pSVar4,
                   MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_2_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                   ,(MethodInfo *)0x0);
        TypeInfo__ShopRepository____c->static_fields->__9__8_2 = this_02;
        func_?();
        itemCategory = (int32_t)this_02;
      }
      pDVar3 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)
               System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_3
                         ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)itemCategory,
                          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Int32_
                           *)this_01,
                          (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Object_
                           *)this_02,
                          System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int,_MV::WorldObject::MVItem>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>_
                         );
      return pDVar3;
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
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
  method_00 = TypeInfo__ShopRepository____c__DisplayClass8_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)itemCategories;
    func_?(value + 1,itemCategories);
    pDVar1 = (this->fields).shopInventory;
    this_00 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
              func_?(
                             TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>
                             );
    mscorlib.dll::System::Predicate`1[System::Xml::Schema::
    XmlSchemaObjectTable+XmlSchemaObjectEntry]::
    Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
              (this_00,value,
               MethodInfo__ShopRepository____c__DisplayClass8_0___GetItemsByItemCategories_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
               ,(MethodInfo *)0x0);
    System.Core.dll::System::Linq::Enumerable::Enumerable_Where_1
              ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)pDVar1,
               (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
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
      mscorlib.dll::System::Func`2[UnityEngine::Vector2Int,Int32]::
      Func_2_UnityEngine_Vector2Int_Int32___ctor
                ((Func_2_UnityEngine_Vector2Int_Int32_ *)this_01,(Object *)pSVar2,
                 MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 ,(MethodInfo *)0x0);
      TypeInfo__ShopRepository____c->static_fields->__9__8_1 = this_01;
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
      pSVar2 = TypeInfo__ShopRepository____c->static_fields->__9;
      this_02 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
                 *)func_?();
      mscorlib.dll::System::Func`2[UnityEngine::Vector2Int,Int32]::
      Func_2_UnityEngine_Vector2Int_Int32___ctor
                ((Func_2_UnityEngine_Vector2Int_Int32_ *)this_02,(Object *)pSVar2,
                 MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_2_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 ,(MethodInfo *)0x0);
      TypeInfo__ShopRepository____c->static_fields->__9__8_2 = this_02;
      func_?();
    }
    pDVar1 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)
             System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_3
                       ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)this_01,
                        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Int32_
                         *)this_01,
                        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Object_
                         *)this_02,
                        System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int,_MV::WorldObject::MVItem>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>_
                       );
    return pDVar1;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pDVar1 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)(*pcVar3)();
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
  pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).ItemCategoriesInShop;
  if (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,pLVar6,
                        MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    method_00 = pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&stack0xffffffb4;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
              RegularExpressions::RegexCharClass+SingleRange]::
              List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&stack0xffffffb4,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&stack0xffffffb4,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__,
                   (MethodInfo *)method_00);
        uStack_1 = 0xffffffff;
        if ((notifyOfChange != 0) &&
           ((this->fields)._.OnRepositoryChange != (ARepository_OnRepositoryChangeDelegate *)0x0)) {
          pAVar10 = (this->fields)._.OnRepositoryChange;
          LStack_8._list = (pAVar10->fields)._._.method;
          (*(pAVar10->fields)._._.invoke_impl)();
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      RStack_11 = method_00;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      itemCategories = (Int32__Array *)func_?();
      if (itemCategories == (Int32__Array *)0x0) goto code_?;
      if (itemCategories->max_length == 0) break;
      itemCategories->vector[0] = (int32_t)RStack_11;
      this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)ShopRepository_GetItemsByItemCategories(this,itemCategories,(MethodInfo *)0x0);
      if (this_00 ==
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) goto code_?;
      source = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
               StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Keys
                         (this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Keys__
                         );
      pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_3
                         ((IEnumerable_1_System_Int32_ *)source,
                          System__Collections__Generic__List<int>_MethodInfo__System__Linq__Enumerable__ToList<int>_System__Collections__Generic__IEnumerable<int>_
                         );
      pLStack_12 = pLVar6;
      RStack_11 = (RegexCharClass_SingleRange)func_?();
      mscorlib.dll::System::Comparison`1[UInt32]::Comparison_1_UInt32___ctor
                ((Comparison_1_UInt32_ *)RStack_11,(Object *)this,
                 MethodInfo__ShopRepository___ReorganizeItemsByItemType_b__3_0_int__int_,
                 (MethodInfo *)0x0);
      if (pLVar6 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32]::
      List_1_System_UInt32__Sort_1
                ((List_1_System_UInt32_ *)pLVar6,(Comparison_1_UInt32_ *)RStack_11,
                 MethodInfo__System__Collections__Generic__List<int>__Sort_System__Comparison<int>_)
      ;
      for (index = 0; index < (pLStack_12->fields)._size; index = index + 1) {
        RStack_11 = (RegexCharClass_SingleRange)(this->fields)._.itemIDToInventorySlotIndex;
        RStack_13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLStack_12,index,
                               MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
        pOStack_14 = (Object *)func_?();
        method_00 = (RegexCharClass_SingleRange)&iStack_15;
        iStack_15 = index;
        value = (Object *)func_?();
        if (RStack_11 == (RegexCharClass_SingleRange)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  ((Dictionary_2_System_Object_System_Object_ *)RStack_11,pOStack_14,value,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                  );
      }
    }
    func_?();
  }
code_?:
  uVar16 = func_?();
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
  pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
           (pSVar1->fields)._.itemIDToInventorySlotIndex;
  pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&this);
  TVar4.m_Index = 0;
  if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
code_?:
    func_?();
    pIVar5 = extraout_ECX;
  }
  else {
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar2,pOVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    pDVar2 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (pSVar1->fields)._.itemIDToInventorySlotIndex;
    a = b;
    pOVar3 = (Object *)func_?(TypeInfo__System__Int32,&a);
    if (pDVar2 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (pDVar2,pOVar3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar7 = CONCAT44(TypeInfo__System__Int32,TVar6.m_Index);
    if (TVar6.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar6.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar8 = (int *)func_?(TVar6.m_Index);
    iVar9 = *piVar8;
    if (TVar4.m_Index == 0) goto code_?;
    pIVar5 = TypeInfo__System__Int32;
    if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
        (TypeInfo__System__Int32->_0).element_class) {
      piVar8 = (int *)func_?(TVar4.m_Index);
      return *piVar8 - iVar9;
    }
  }
  uVar7 = func_?(TVar4.m_Index,pIVar5);
code_?:
  func_?(uVar7);
  pcVar10 = (code *)swi(3);
  iVar11 = (*pcVar10)();
  return iVar11;
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
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
            );
  (this->fields).shopInventory = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)this_00;
  func_?(&(this->fields).shopInventory,this_00);
  this_01 = (List_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).ItemCategoriesInShop = this_01;
  func_?(&(this->fields).ItemCategoriesInShop,this_01);
  return;
}

