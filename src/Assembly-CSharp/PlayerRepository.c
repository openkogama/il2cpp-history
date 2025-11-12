
/* Int32 CountItemsWithOriginalID(Int32) */

int32_t Assembly-CSharp.dll::PlayerRepository::PlayerRepository_CountItemsWithOriginalID
                  (PlayerRepository *this,int32_t originalId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  int_MethodInfo__System__Linq__Enumerable__Count<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_
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
                  MethodInfo__PlayerRepository____c__DisplayClass6_0___CountItemsWithOriginalID_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerRepository____c__DisplayClass6_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__PlayerRepository____c__DisplayClass6_0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    iVar2 = (*pcVar1)();
    return iVar2;
  }
  *(int32_t *)&object[1].klass = originalId;
  if (originalId == 0) {
    return 1;
  }
  source = (this->fields).playerInventory;
  this_00 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
            FUN_?(
                         TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>
                         );
  mscorlib.dll::System::Predicate`1[System::Xml::Schema::XmlSchemaObjectTable+XmlSchemaObjectEntry]
  ::Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
            (this_00,object,
             MethodInfo__PlayerRepository____c__DisplayClass6_0___CountItemsWithOriginalID_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
             ,(MethodInfo *)0x0);
  pIVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where
                     ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)source,
                      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                       *)this_00,
                      System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>_
                     );
  pMVar4 = 
  int_MethodInfo__System__Linq__Enumerable__Count<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_
  ;
  if ((
      int_MethodInfo__System__Linq__Enumerable__Count<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__System__Collections__ICollection);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    if ((pMVar4->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar4);
    }
  }
  if (pIVar3 != (IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)0x0) {
    pvVar5 = (pMVar4->field7_0x38).rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
      pvVar5 = (void *)FUN_?(pvVar5);
    }
    lVar6 = FUN_?(pIVar3,pvVar5);
    if (lVar6 == 0) {
      lVar6 = FUN_?(pIVar3,TypeInfo__System__Collections__ICollection);
      if (lVar6 == 0) {
        pvVar5 = ((pMVar4->field7_0x38).rgctx_data)->rgctxDataDummy;
        if ((*(byte *)((longlong)pvVar5 + 0x135) & 1) == 0) {
          pvVar5 = (void *)FUN_?(pvVar5);
        }
        lVar6 = FUN_?(0,pvVar5,pIVar3);
        iVar7 = 0;
        while (lVar6 != 0) {
          cVar8 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
          if (cVar8 == '\0') {
            if (lVar6 != 0) {
              FUN_?(0,TypeInfo__System__IDisposable,lVar6);
            }
            return iVar7;
          }
          if (iVar7 == 0x7fffffff) goto code_?;
          iVar7 = iVar7 + 1;
        }
        goto code_?;
      }
      uVar9 = 1;
      pIVar10 = TypeInfo__System__Collections__ICollection;
    }
    else {
      pIVar10 = (pMVar4->field7_0x38).rgctx_data[1].rgctxDataDummy;
      if (((pIVar10->_1).field_0x6d & 1) == 0) {
        pIVar10 = (ICollection__Class *)FUN_?(pIVar10);
      }
      uVar9 = 0;
    }
    iVar2 = FUN_?(uVar9,pIVar10,lVar6);
    return iVar2;
  }
  s = (String *)func_?(&StringLiteral_source);
  pEVar11 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
  FUN_?(pEVar11,pMVar4);
code_?:
  uVar9 = FUN_?();
  FUN_?(uVar9,pMVar4);
code_?:
  FUN_?();
  FUN_?();
  pcVar1 = (code *)swi(3);
  iVar2 = (*pcVar1)();
  return iVar2;
}


/* Void CreateWorldObjectHierarchies() */

void Assembly-CSharp.dll::PlayerRepository::PlayerRepository_CreateWorldObjectHierarchies
               (PlayerRepository *this,MethodInfo *method)

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
  if ((this->fields).playerInventory == (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)0x0) {
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


/* Dictionary`2[System.Int32,MV.WorldObject.MVItem] GetItemsByItemCategory(Int32[]) */

Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *
Assembly-CSharp.dll::PlayerRepository::PlayerRepository_GetItemsByItemCategory
          (PlayerRepository *this,Int32__Array *itemCategories,MethodInfo *method)

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
                  MethodInfo__PlayerRepository____c___GetItemsByItemCategory_b__5_1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerRepository____c___GetItemsByItemCategory_b__5_2_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerRepository____c__DisplayClass5_0___GetItemsByItemCategory_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerRepository____c__DisplayClass5_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerRepository____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__PlayerRepository____c__DisplayClass5_0);
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
  pDVar2 = (this->fields).playerInventory;
  this_00 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
            FUN_?(
                         TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>
                         );
  mscorlib.dll::System::Predicate`1[System::Xml::Schema::XmlSchemaObjectTable+XmlSchemaObjectEntry]
  ::Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
            (this_00,object,
             MethodInfo__PlayerRepository____c__DisplayClass5_0___GetItemsByItemCategory_b__0_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
             ,(MethodInfo *)0x0);
  source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where
                     ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pDVar2,
                      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                       *)this_00,
                      System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_bool>_
                     );
  if (*(int *)&(TypeInfo__PlayerRepository____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PlayerRepository____c);
  }
  keySelector = TypeInfo__PlayerRepository____c->static_fields->__9__5_1;
  if (keySelector ==
      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_ *)
      0x0) {
    if (*(int *)&(TypeInfo__PlayerRepository____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PlayerRepository____c);
    }
    pPVar8 = TypeInfo__PlayerRepository____c->static_fields->__9;
    keySelector = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_Int32_
                   *)FUN_?(
                                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_int>
                                  );
    FUN_?(keySelector,pPVar8,
                  MethodInfo__PlayerRepository____c___GetItemsByItemCategory_b__5_1_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 );
    TypeInfo__PlayerRepository____c->static_fields->__9__5_1 = keySelector;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&TypeInfo__PlayerRepository____c->static_fields->__9__5_1 >> 0xc);
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
  if (*(int *)&(TypeInfo__PlayerRepository____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__PlayerRepository____c);
  }
  elementSelector = TypeInfo__PlayerRepository____c->static_fields->__9__5_2;
  if (elementSelector ==
      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
       *)0x0) {
    if (*(int *)&(TypeInfo__PlayerRepository____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__PlayerRepository____c);
    }
    pPVar8 = TypeInfo__PlayerRepository____c->static_fields->__9;
    elementSelector =
         (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MV_WorldObject_MVItem_MV_WorldObject_MVItem_
          *)FUN_?(
                         TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MV::WorldObject::MVItem>,_MV::WorldObject::MVItem>
                         );
    FUN_?(elementSelector,pPVar8,
                  MethodInfo__PlayerRepository____c___GetItemsByItemCategory_b__5_2_System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::MVItem>_
                 );
    TypeInfo__PlayerRepository____c->static_fields->__9__5_2 = elementSelector;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&TypeInfo__PlayerRepository____c->static_fields->__9__5_2 >> 0xc);
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

void Assembly-CSharp.dll::PlayerRepository::PlayerRepository_RemoveItem
               (PlayerRepository *this,int32_t itemId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::MVItem>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (this->fields).playerInventory;
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


/* PlayerRepository() */

void Assembly-CSharp.dll::PlayerRepository::PlayerRepository__ctor
               (PlayerRepository *this,MethodInfo *method)

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
  (this->fields).playerInventory = (Dictionary_2_System_Int32_MV_WorldObject_MVItem_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).playerInventory >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

