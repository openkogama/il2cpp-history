
/* Void CreateWorldObjectHierarchies() */

void Assembly-CSharp.dll::ShopRepository::ShopRepository_CreateWorldObjectHierarchies
               (ShopRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<KoGaMaPackageClient>__Add_KoGaMaPackageClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<KoGaMaPackageClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<KoGaMaPackageClient>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2._0_4_ = (pVVar1->zeroVector).x;
  uVar2._4_4_ = (pVVar1->zeroVector).y;
  fStack_3 = (pVVar1->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar1->upVector).x;
  uStack_4._4_4_ = (pVVar1->upVector).y;
  fVar5 = (pVVar1->upVector).z * _UNK_?;
  fVar6 = (float)uStack_4._4_4_ * _UNK_?;
  fVar7 = (float)(undefined4)uStack_4 * _UNK_?;
  this_00 = (List_1_System_Object_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<KoGaMaPackageClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<KoGaMaPackageClient>__List__);
  if ((this->fields).shopInventory == (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  plStackX_8 = (longlong *)
               FUN_?(0,
                             TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>
                            );
  uStack_9 = 0;
  pplStack_10 = &plStackX_8;
  uStack_11 = uVar2;
  do {
    if (plStackX_8 == (longlong *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    cVar12 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
    plVar13 = plStackX_8;
    if (cVar12 == '\0') {
      if (plStackX_8 != (longlong *)0x0) {
        FUN_?(0,TypeInfo__System__IDisposable,plStackX_8);
      }
      return;
    }
    if (plStackX_8 == (longlong *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    lVar14 = *plStackX_8;
    uVar15 = 0;
    if (*(ushort *)(lVar14 + 0x12e) != 0) {
      do {
        if (*(IEnumerator_1_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem___Class **)
             (*(longlong *)(lVar14 + 0xb0) + (ulonglong)uVar15 * 0x10) ==
            TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>
           ) {
          puVar16 = (undefined8 *)
                    ((longlong)*(int *)(*(longlong *)(lVar14 + 0xb0) + 8 + (ulonglong)uVar15 * 0x10)
                     * 0x10 + 0x138 + lVar14);
          goto code_?;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(ushort *)(lVar14 + 0x12e));
    }
    puVar16 = (undefined8 *)
              FUN_?(plStackX_8,
                            TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>
                            ,0);
code_?:
    lVar14 = (*(code *)*puVar16)(auStack_17,plVar13);
    lVar14 = *(longlong *)(lVar14 + 8);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__KoGaMaPackageClient);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (lVar14 == 0) {
code_?:
      FUN_?();
      goto code_?;
    }
    buffer = *(Byte__Array **)(lVar14 + 0x38);
    this_01 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this_01,buffer,(MethodInfo *)0x0);
    this_02 = (KoGaMaPackageClient *)FUN_?(TypeInfo__KoGaMaPackageClient);
    KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_02,this_01,0,(MethodInfo *)0x0);
    if (this_02 == (KoGaMaPackageClient *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_02,(MethodInfo *)0x0);
    pDVar18 = (this_02->fields).worldObjects;
    if (pDVar18 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar18,
                         (this_02->fields).worldObjectRoot,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                        );
    if (pOVar19 == (Object *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    (*(code *)pOVar19->klass[4]._0.parent)(pOVar19,1,pOVar19->klass[4]._0.generic_class);
    pDVar18 = (this_02->fields).worldObjects;
    if (pDVar18 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar18,
                         (this_02->fields).worldObjectRoot,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                        );
    if (pOVar19 == (Object *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    uStack_4 = CONCAT44(uVar2._4_4_,(float)uVar2);
    fStack_20 = fStack_3;
    (*(code *)pOVar19->klass[1]._0.name)(pOVar19,&uStack_4,pOVar19->klass[1]._0.namespaze);
    pMVar21 = 
    MethodInfo__System__Collections__Generic__List<KoGaMaPackageClient>__Add_KoGaMaPackageClient_;
    fStack_3 = fStack_3 + fVar5;
    uVar2._4_4_ = uStack_11._4_4_ + fVar6;
    uVar2._0_4_ = (float)uStack_11 + fVar7;
    uStack_11 = CONCAT44(uVar2._4_4_,(float)uVar2);
    if (this_00 == (List_1_System_Object_ *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    piVar22 = &(this_00->fields)._version;
    *piVar22 = *piVar22 + 1;
    pOVar23 = (this_00->fields)._items;
    uVar24 = (this_00->fields)._size;
    if (pOVar23 == (Object__Array *)0x0) {
      FUN_?();
      goto code_?;
    }
    if (uVar24 < (uint)pOVar23->max_length) {
      (this_00->fields)._size = uVar24 + 1;
      FUN_?(pOVar23,(longlong)(int)uVar24,this_02);
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__AddWithResize
                (this_00,(Object *)this_02,pMVar21->klass->rgctx_data[0xe].method);
    }
  } while( true );
}


/* Dictionary`2[System.Int32,MV.WorldObject.MVItem] GetItemsByCategory(Int32) */

Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *
Assembly-CSharp.dll::ShopRepository::ShopRepository_GetItemsByCategory
          (ShopRepository *this,int32_t itemCategory,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object__Class *)FUN_?(TypeInfo__System__Int32,1);
  if (pOVar1 == (Object__Class *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar3 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)(*pcVar2)();
    return pDVar3;
  }
  if (*(int *)&(pOVar1->_0).namespaze == 0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar3 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)(*pcVar2)();
    return pDVar3;
  }
  (pOVar1->_0).byval_arg.data.__klassIndex = itemCategory;
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int,_MV::WorldObject::MVItem>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>_
                  ,pOVar1,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_2_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ShopRepository____c__DisplayClass8_0___GetItemsByItemCategories_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ShopRepository____c__DisplayClass8_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ShopRepository____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ShopRepository____c__DisplayClass8_0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pDVar3 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)(*pcVar2)();
    return pDVar3;
  }
  bVar4 = iRam_? != 0;
  object[1].klass = pOVar1;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)(object + 1) >> 0xc);
    lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
      puVar8 = (ulonglong *)(lVar6 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pDVar3 = (this->fields).shopInventory;
  this_00 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
            FUN_?(
                         TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>
                         );
  mscorlib.dll::System::Predicate`1[System::Xml::Schema::XmlSchemaObjectTable+XmlSchemaObjectEntry]
  ::Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
            (this_00,object,
             MethodInfo__ShopRepository____c__DisplayClass8_0___GetItemsByItemCategories_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
             ,(MethodInfo *)0x0);
  source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where
                     ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar3,
                      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                       *)this_00,
                      System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>_
                     );
  if (*(int *)&(TypeInfo__ShopRepository____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ShopRepository____c);
  }
  keySelector = TypeInfo__ShopRepository____c->static_fields->__9__8_1;
  if (keySelector ==
      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_ *)
      0x0) {
    if (*(int *)&(TypeInfo__ShopRepository____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ShopRepository____c);
    }
    pSVar9 = TypeInfo__ShopRepository____c->static_fields->__9;
    keySelector = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
                   *)FUN_?(
                                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>
                                  );
    FUN_?(keySelector,pSVar9,
                  MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 );
    TypeInfo__ShopRepository____c->static_fields->__9__8_1 = keySelector;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&TypeInfo__ShopRepository____c->static_fields->__9__8_1 >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
  }
  if (*(int *)&(TypeInfo__ShopRepository____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ShopRepository____c);
  }
  elementSelector = TypeInfo__ShopRepository____c->static_fields->__9__8_2;
  if (elementSelector ==
      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
       *)0x0) {
    if (*(int *)&(TypeInfo__ShopRepository____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ShopRepository____c);
    }
    pSVar9 = TypeInfo__ShopRepository____c->static_fields->__9;
    elementSelector =
         (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
          *)FUN_?(
                         TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>
                         );
    FUN_?(elementSelector,pSVar9,
                  MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_2_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 );
    TypeInfo__ShopRepository____c->static_fields->__9__8_2 = elementSelector;
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&TypeInfo__ShopRepository____c->static_fields->__9__8_2 >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
  }
  pMVar10 = 
  System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int,_MV::WorldObject::MVItem>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>_
  ;
  if ((
      System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int,_MV::WorldObject::MVItem>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int,_MV::WorldObject::MVItem>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>_
                 );
  }
  pDVar3 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)
           System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_7
                     (source,(Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Int32_
                              *)keySelector,
                      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Object_
                       *)elementSelector,(IEqualityComparer_1_System_Int32_ *)0x0,
                      (pMVar10->field7_0x38).rgctx_data[3].method);
  return pDVar3;
}


/* Dictionary`2[System.Int32,MV.WorldObject.MVItem] GetItemsByItemCategories(Int32[]) */

Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *
Assembly-CSharp.dll::ShopRepository::ShopRepository_GetItemsByItemCategories
          (ShopRepository *this,Int32__Array *itemCategories,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int,_MV::WorldObject::MVItem>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_2_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ShopRepository____c__DisplayClass8_0___GetItemsByItemCategories_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ShopRepository____c__DisplayClass8_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ShopRepository____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__ShopRepository____c__DisplayClass8_0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pDVar2 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)(*pcVar1)();
    return pDVar2;
  }
  bVar3 = iRam_? != 0;
  object[1].klass = (Object__Class *)itemCategories;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(object + 1) >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pDVar2 = (this->fields).shopInventory;
  this_00 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
            FUN_?(
                         TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>
                         );
  mscorlib.dll::System::Predicate`1[System::Xml::Schema::XmlSchemaObjectTable+XmlSchemaObjectEntry]
  ::Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
            (this_00,object,
             MethodInfo__ShopRepository____c__DisplayClass8_0___GetItemsByItemCategories_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
             ,(MethodInfo *)0x0);
  source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where
                     ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar2,
                      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                       *)this_00,
                      System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>_
                     );
  if (*(int *)&(TypeInfo__ShopRepository____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ShopRepository____c);
  }
  keySelector = TypeInfo__ShopRepository____c->static_fields->__9__8_1;
  if (keySelector ==
      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_ *)
      0x0) {
    if (*(int *)&(TypeInfo__ShopRepository____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ShopRepository____c);
    }
    pSVar8 = TypeInfo__ShopRepository____c->static_fields->__9;
    keySelector = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
                   *)FUN_?(
                                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>
                                  );
    FUN_?(keySelector,pSVar8,
                  MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 );
    TypeInfo__ShopRepository____c->static_fields->__9__8_1 = keySelector;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&TypeInfo__ShopRepository____c->static_fields->__9__8_1 >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
  }
  if (*(int *)&(TypeInfo__ShopRepository____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__ShopRepository____c);
  }
  elementSelector = TypeInfo__ShopRepository____c->static_fields->__9__8_2;
  if (elementSelector ==
      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
       *)0x0) {
    if (*(int *)&(TypeInfo__ShopRepository____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ShopRepository____c);
    }
    pSVar8 = TypeInfo__ShopRepository____c->static_fields->__9;
    elementSelector =
         (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
          *)FUN_?(
                         TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>
                         );
    FUN_?(elementSelector,pSVar8,
                  MethodInfo__ShopRepository____c___GetItemsByItemCategories_b__8_2_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 );
    TypeInfo__ShopRepository____c->static_fields->__9__8_2 = elementSelector;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&TypeInfo__ShopRepository____c->static_fields->__9__8_2 >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
  }
  pMVar9 = 
  System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int,_MV::WorldObject::MVItem>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>_
  ;
  if ((
      System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int,_MV::WorldObject::MVItem>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>_MethodInfo__System__Linq__Enumerable__ToDictionary<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int,_MV::WorldObject::MVItem>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>_
                 );
  }
  pDVar2 = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)
           System.Core.dll::System::Linq::Enumerable::Enumerable_ToDictionary_7
                     (source,(Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Int32_
                              *)keySelector,
                      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Object_
                       *)elementSelector,(IEqualityComparer_1_System_Int32_ *)0x0,
                      (pMVar9->field7_0x38).rgctx_data[3].method);
  return pDVar2;
}


/* Void RemoveItem(Int32) */

void Assembly-CSharp.dll::ShopRepository::ShopRepository_RemoveItem
               (ShopRepository *this,int32_t itemId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (this->fields).shopInventory;
  if (this_01 == (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__Remove
            ((Dictionary_2_System_Int32_System_Object_ *)this_01,itemId,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Remove_int_
            );
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                  ,itemId,0,in_R9,unaff_RDI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.itemIDToInventorySlotIndex;
  aiStackX_10[0] = itemId;
  key = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Remove
              (this_00,key,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
              );
    if ((this->fields)._.OnRepositoryChange != (ARepository_OnRepositoryChangeDelegate *)0x0) {
      pAVar2 = (this->fields)._.OnRepositoryChange;
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,this,(pAVar2->fields)._._.method);
    }
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ReorganizeItemsByItemType(Boolean) */

void Assembly-CSharp.dll::ShopRepository::ShopRepository_ReorganizeItemsByItemType
               (ShopRepository *this,bool notifyOfChange,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Comparison<int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<int>_MethodInfo__System__Linq__Enumerable__ToList<int>_System__Collections__Generic__IEnumerable<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<int>__Sort_System__Comparison<int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ShopRepository___ReorganizeItemsByItemType_b__3_0_int__int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).ItemCategoriesInShop;
  if (pLVar1 == (List_1_System_Int32_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    s = (String *)func_?(&StringLiteral_source);
    pEVar2 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
    FUN_?(pEVar2,unaff_RBX);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
  }
  else {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar5 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar6 = *puVar5;
        LOCK();
        uVar7 = *puVar5;
        if (uVar6 == uVar7) {
          *puVar5 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar6 != uVar7);
    }
    ppLStack_8 = (List_1_System_Int32_ **)((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
    uStack_9 = 0;
    uStack_10 = (longlong)ppLStack_8;
    uStack_11 = 0;
    uStack_4 = 0;
    ppLStack_8 = &pLStack_12;
    pLStack_12 = pLVar1;
    while (pLStack_12 != (List_1_System_Int32_ *)0x0) {
      if (uStack_10._4_4_ != (pLStack_12->fields)._version) {
code_?:
        if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__->klass
             ->field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (pLStack_12 == (List_1_System_Int32_ *)0x0) goto code_?;
        if (uStack_10._4_4_ == (pLStack_12->fields)._version) {
          uStack_10 = CONCAT44(uStack_10._4_4_,(pLStack_12->fields)._size + 1);
          uStack_11 = uStack_11 & 0xffffffff00000000;
          if ((notifyOfChange != 0) &&
             ((this->fields)._.OnRepositoryChange != (ARepository_OnRepositoryChangeDelegate *)0x0))
          {
            pAVar13 = (this->fields)._.OnRepositoryChange;
            (*(pAVar13->fields)._._.invoke_impl)
                      ((pAVar13->fields)._._.method_code,this,(pAVar13->fields)._._.method);
          }
          return;
        }
        goto code_?;
      }
      if ((uint)(pLStack_12->fields)._size <= (uint)uStack_10) goto code_?;
      pIVar14 = (pLStack_12->fields)._items;
      if (pIVar14 == (Int32__Array *)0x0) goto code_?;
      if ((uint)pIVar14->max_length <= (uint)uStack_10) goto code_?;
      uVar3 = pIVar14->vector[(int)(uint)uStack_10];
      unaff_RBX = (MethodInfo *)(ulonglong)uVar3;
      uStack_11 = CONCAT44(uStack_11._4_4_,uVar3);
      uStack_10 = CONCAT44(uStack_10._4_4_,(uint)uStack_10 + 1);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Int32);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar14 = (Int32__Array *)FUN_?();
      if (pIVar14 == (Int32__Array *)0x0) goto code_?;
      if ((int)pIVar14->max_length == 0) goto code_?;
      pIVar14->vector[0] = uVar3;
      this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)ShopRepository_GetItemsByItemCategories(this,pIVar14,(MethodInfo *)0x0);
      if (this_01 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto code_?;
      collection = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::TypeConverterRegistry+ConverterKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                             (this_01,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__get_Keys__
                             );
      unaff_RBX = 
      System__Collections__Generic__List<int>_MethodInfo__System__Linq__Enumerable__ToList<int>_System__Collections__Generic__IEnumerable<int>_
      ;
      if ((
          System__Collections__Generic__List<int>_MethodInfo__System__Linq__Enumerable__ToList<int>_System__Collections__Generic__IEnumerable<int>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     System__Collections__Generic__List<int>_MethodInfo__System__Linq__Enumerable__ToList<int>_System__Collections__Generic__IEnumerable<int>_
                     );
      }
      if (collection ==
          (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
           *)0x0) goto code_?;
      pvVar15 = (unaff_RBX->field7_0x38).rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar15 + 0x135) & 1) == 0) {
        pvVar15 = (void *)FUN_?(pvVar15);
      }
      this_02 = (List_1_System_Int32_ *)FUN_?(pvVar15);
      mscorlib.dll::System::Collections::Generic::List`1[System::Int32]::
      List_1_System_Int32___ctor_1
                (this_02,(IEnumerable_1_System_Int32_ *)collection,
                 (unaff_RBX->field7_0x38).rgctx_data[2].method);
      unaff_RBX = (MethodInfo *)FUN_?(TypeInfo__System__Comparison<int>);
      FUN_?(unaff_RBX,this,
                    MethodInfo__ShopRepository___ReorganizeItemsByItemType_b__3_0_int__int_);
      if (this_02 == (List_1_System_Int32_ *)0x0) goto code_?;
      FUN_?(this_02,unaff_RBX);
      unaff_RBX = (MethodInfo *)0x0;
      while (iVar16 = (int)unaff_RBX, iVar16 < (this_02->fields)._size) {
        this_00 = (this->fields)._.itemIDToInventorySlotIndex;
        aiStackX_20[0] = FUN_?(this_02,unaff_RBX);
        key = (Object *)FUN_?(uRam_?,aiStackX_20);
        aiStackX_20[0] = iVar16;
        value = (Object *)FUN_?(uRam_?);
        if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        pLVar1 = (List_1_System_Int32_ *)CONCAT71((int7)((ulonglong)pLVar1 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (this_00,key,value,(InsertionBehavior__Enum)pLVar1,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        unaff_RBX = (MethodInfo *)(ulonglong)(iVar16 + 1);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Int32 <ReorganizeItemsByItemType>b__3_0(Int32, Int32) */

int32_t Assembly-CSharp.dll::ShopRepository::ShopRepository__ReorganizeItemsByItemType_b__3_0
                  (ShopRepository *this,int32_t a,int32_t b,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._.itemIDToInventorySlotIndex;
  aiStackX_10[0] = a;
  pOVar2 = (Object *)FUN_?(lRam_?,aiStackX_10);
  if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar1,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    pDVar1 = (this->fields)._.itemIDToInventorySlotIndex;
    aiStackX_10[0] = b;
    pOVar3 = (Object *)FUN_?(lRam_?,aiStackX_10);
    if (pDVar1 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar1,pOVar3,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar3 != (Object *)0x0) {
        if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar3,lRam_?);
          pcVar4 = (code *)swi(3);
          iVar5 = (*pcVar4)();
          return iVar5;
        }
        if (pOVar2 != (Object *)0x0) {
          if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
            return *(int *)&pOVar2[1].klass - *(int *)&pOVar3[1].klass;
          }
          FUN_?(pOVar2,lRam_?);
          pcVar4 = (code *)swi(3);
          iVar5 = (*pcVar4)();
          return iVar5;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* ShopRepository() */

void Assembly-CSharp.dll::ShopRepository::ShopRepository__ctor
               (ShopRepository *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ARepository::ARepository__ctor((ARepository *)this,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).shopInventory = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).shopInventory >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pLVar6 = (List_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
  FUN_?(pLVar6,MethodInfo__System__Collections__Generic__List<int>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).ItemCategoriesInShop = pLVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).ItemCategoriesInShop >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

