
/* Void ApplyLocalDescriptionOverride(MVWorldObjectDocumentationType) */

void Assembly-CSharp.dll::ShopItem::ShopItem_ApplyLocalDescriptionOverride
               (ShopItem *this,MVWorldObjectDocumentationType__Enum t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItem);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__InventoryItem->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__InventoryItem);
  }
  this_00 = (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)
            TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
  if (this_00 == (Dictionary_2_System_Int32Enum_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,UnityEngine::
          Vector3]::Dictionary_2_System_Int32Enum_UnityEngine_Vector3__FindEntry
                    (this_00,t,
                     MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__ContainsKey_MVWorldObjectDocumentationType_
                     ->klass->rgctx_data[0x21].method);
  if (-1 < iVar2) {
    if (*(int *)&(TypeInfo__InventoryItem->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__InventoryItem);
    }
    this_01 = TypeInfo__InventoryItem->static_fields->localItemDescriptionOverride;
    if ((this_01 ==
         (Dictionary_2_MVWorldObjectDocumentationType_InventoryItem_ItemDescription_ *)0x0) ||
       (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,t,
                            MethodInfo__System__Collections__Generic__Dictionary<MVWorldObjectDocumentationType,_InventoryItem::ItemDescription>__get_Item_MVWorldObjectDocumentationType_
                           ), pOVar3 == (Object *)0x0)) goto code_?;
    bVar4 = iRam_? != 0;
    (this->fields).name = (String *)pOVar3[1].klass;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).name >> 0xc);
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
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_u000Au000A);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar9 = mscorlib.dll::System::String::String_Concat_5
                       ((String *)pOVar3[1].monitor,StringLiteral_u000Au000A,
                        (String *)pOVar3[2].klass,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    (this->fields).description = pSVar9;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).description >> 0xc);
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
  return;
}


/* ShopItem(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::ShopItem::ShopItem__ctor
               (ShopItem *this,int32_t key,Dictionary_2_System_Object_System_Object_ *outData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).itemID = key;
  aiStackX_10[0] = key;
  pOVar1 = (Object *)FUN_?(lRam_?,aiStackX_10);
  if (outData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (outData,pOVar1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0x70);
    pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
    if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        FUN_?(pDVar2,
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     );
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (pDVar2,pOVar1,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar1 != (Object *)0x0) {
        if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar1);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (this->fields).itemCategoryID = *(int32_t *)&pOVar1[1].klass;
        aiStackX_10[0] = key;
        pOVar1 = (Object *)FUN_?(lRam_?,aiStackX_10);
        pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (outData,pOVar1,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0xf);
        pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
        if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          bVar3 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pDVar2,
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                         );
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__get_Item
                             (pDVar2,pOVar1,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (pOVar1 != (Object *)0x0) {
            if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
            {
              FUN_?(pOVar1);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (this->fields).itemTypeID = *(int32_t *)&pOVar1[1].klass;
            aiStackX_10[0] = key;
            pOVar1 = (Object *)FUN_?(lRam_?,aiStackX_10);
            pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (outData,pOVar1,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
            aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,10);
            pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
            if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
              bVar3 = (
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                      ->_1).naturalAligment;
              if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
                 ((Dictionary_2_System_Object_System_Object___Class *)
                  (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 )) {
                FUN_?(pDVar2,
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                             );
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pSVar5 = (String *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (pDVar2,pOVar1,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              pSVar6 = (String *)0x0;
              if (pSVar5 == (String *)0x0) {
                (this->fields).name = (String *)0x0;
              }
              else {
                pSVar7 = pSVar6;
                if (pSVar5->klass == pSRam0000000182dbbc60) {
                  pSVar7 = pSVar5;
                }
                if (pSVar7 == (String *)0x0) {
                  FUN_?();
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                (this->fields).name = pSVar7;
                pSVar7 = pSVar6;
                if (pSVar5->klass == pSRam0000000182dbbc60) {
                  pSVar7 = pSVar5;
                }
                if (pSVar7 == (String *)0x0) {
                  FUN_?();
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar8 = (uint)((ulonglong)&(this->fields).name >> 0xc);
                lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
                do {
                  uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
                  puVar11 = (ulonglong *)(lVar9 + 0xADDR);
                  LOCK();
                  bVar12 = uVar10 == *puVar11;
                  if (bVar12) {
                    *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar12);
              }
              aiStackX_10[0] = key;
              pOVar1 = (Object *)FUN_?(lRam_?,aiStackX_10);
              pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                 (outData,pOVar1,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0x67);
              pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
              if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                bVar3 = (
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment;
                if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
                   ((Dictionary_2_System_Object_System_Object___Class *)
                    (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   )) {
                  FUN_?(pDVar2,
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pSVar5 = (String *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (pDVar2,pOVar1,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                if (pSVar5 == (String *)0x0) {
                  (this->fields).description = (String *)0x0;
                }
                else {
                  pSVar7 = pSVar6;
                  if (pSVar5->klass == pSRam0000000182dbbc60) {
                    pSVar7 = pSVar5;
                  }
                  if (pSVar7 == (String *)0x0) {
                    FUN_?();
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  (this->fields).description = pSVar7;
                  if (pSVar5->klass == pSRam0000000182dbbc60) {
                    pSVar6 = pSVar5;
                  }
                  if (pSVar6 == (String *)0x0) {
                    FUN_?();
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
                if (iRam_? != 0) {
                  uVar8 = (uint)((ulonglong)&(this->fields).description >> 0xc);
                  lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
                  do {
                    uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
                    puVar11 = (ulonglong *)(lVar9 + 0xADDR);
                    LOCK();
                    bVar12 = uVar10 == *puVar11;
                    if (bVar12) {
                      *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar12);
                }
                aiStackX_10[0] = key;
                pOVar1 = (Object *)FUN_?(lRam_?,aiStackX_10);
                pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                   (outData,pOVar1,
                                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                   );
                aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0xb);
                pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
                if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  bVar3 = (
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          ->_1).naturalAligment;
                  if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
                     ((Dictionary_2_System_Object_System_Object___Class *)
                      (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                     )) {
                    FUN_?(pDVar2,
                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     (pDVar2,pOVar1,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                  pBVar13 = TypeInfo__System__Byte;
                  if (pOVar1 == (Object *)0x0) {
                    (this->fields).data = (Byte__Array *)0x0;
                  }
                  else {
                    pBVar14 = (Byte__Array *)FUN_?(pOVar1,TypeInfo__System__Byte);
                    if (pBVar14 == (Byte__Array *)0x0) {
                      FUN_?(pOVar1,pBVar13);
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    (this->fields).data = pBVar14;
                    pBVar13 = TypeInfo__System__Byte;
                    lVar9 = FUN_?(pOVar1,TypeInfo__System__Byte);
                    if (lVar9 == 0) {
                      FUN_?(pOVar1,pBVar13);
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                  }
                  if (iRam_? != 0) {
                    uVar8 = (uint)((ulonglong)&(this->fields).data >> 0xc);
                    lVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6) * 8;
                    do {
                      uVar10 = *(ulonglong *)(lVar9 + 0xADDR);
                      puVar11 = (ulonglong *)(lVar9 + 0xADDR);
                      LOCK();
                      bVar12 = uVar10 == *puVar11;
                      if (bVar12) {
                        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar12);
                  }
                  aiStackX_10[0] = key;
                  pOVar1 = (Object *)FUN_?(lRam_?,aiStackX_10);
                  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                           Object,System::Object]::
                           Dictionary_2_System_Object_System_Object__get_Item
                                     (outData,pOVar1,
                                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                     );
                  aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,100);
                  pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
                  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                    bVar3 = (
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            ->_1).naturalAligment;
                    if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
                       ((Dictionary_2_System_Object_System_Object___Class *)
                        (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       )) {
                      FUN_?(pDVar2,
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Object,System::Object]::
                             Dictionary_2_System_Object_System_Object__get_Item
                                       (pDVar2,pOVar1,
                                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                       );
                    if (pOVar1 != (Object *)0x0) {
                      if ((pOVar1->klass->_0).element_class !=
                          *(Il2CppClass **)(lRam_? + 0x40)) {
                        FUN_?(pOVar1,lRam_?);
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      (this->fields).resellable = *(bool *)&pOVar1[1].klass;
                      aiStackX_10[0] = key;
                      pOVar1 = (Object *)FUN_?(lRam_?,aiStackX_10);
                      pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                               Object,System::Object]::
                               Dictionary_2_System_Object_System_Object__get_Item
                                         (outData,pOVar1,
                                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                         );
                      aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0x4b);
                      pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
                      if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                        bVar3 = (
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                ->_1).naturalAligment;
                        if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
                           ((Dictionary_2_System_Object_System_Object___Class *)
                            (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           )) {
                          FUN_?(pDVar2,
                                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                       );
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Object,System::Object]::
                                 Dictionary_2_System_Object_System_Object__get_Item
                                           (pDVar2,pOVar1,
                                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                           );
                        if (pOVar1 != (Object *)0x0) {
                          if ((pOVar1->klass->_0).element_class !=
                              *(Il2CppClass **)(lRam_? + 0x40)) {
                            FUN_?(pOVar1,lRam_?);
                            pcVar4 = (code *)swi(3);
                            (*pcVar4)();
                            return;
                          }
                          (this->fields).priceGold = *(int32_t *)&pOVar1[1].klass;
                          aiStackX_10[0] = key;
                          pOVar1 = (Object *)FUN_?(lRam_?,aiStackX_10);
                          pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Object,System::Object]::
                                   Dictionary_2_System_Object_System_Object__get_Item
                                             (outData,pOVar1,
                                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                             );
                          aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,0x62);
                          pOVar1 = (Object *)FUN_?(uRam_?,aiStackX_10);
                          if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                            bVar3 = (
                                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                    ->_1).naturalAligment;
                            if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
                               ((Dictionary_2_System_Object_System_Object___Class *)
                                (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] !=
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               )) {
                              FUN_?(pDVar2,
                                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                           );
                              pcVar4 = (code *)swi(3);
                              (*pcVar4)();
                              return;
                            }
                            pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                     ::Object,System::Object]::
                                     Dictionary_2_System_Object_System_Object__get_Item
                                               (pDVar2,pOVar1,
                                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                               );
                            if (pOVar1 != (Object *)0x0) {
                              if ((pOVar1->klass->_0).element_class !=
                                  *(Il2CppClass **)(lRam_? + 0x40)) {
                                FUN_?(pOVar1,lRam_?);
                                pcVar4 = (code *)swi(3);
                                (*pcVar4)();
                                return;
                              }
                              (this->fields).slotPosition = *(int32_t *)&pOVar1[1].klass;
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* ShopItem(InventoryItem) */

void Assembly-CSharp.dll::ShopItem::ShopItem__ctor_1
               (ShopItem *this,InventoryItem *inventoryItem,MethodInfo *method)

{
  if (inventoryItem == (InventoryItem *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->fields).itemID = (inventoryItem->fields).itemID;
  (this->fields).itemCategoryID = (inventoryItem->fields).itemCategoryID;
  (this->fields).itemTypeID = (inventoryItem->fields).itemTypeID;
  (this->fields).name = (inventoryItem->fields).name;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).name >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  iVar7 = iRam_?;
  (this->fields).description = (inventoryItem->fields).description;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).description >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar7 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).data = (inventoryItem->fields).data;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).data >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  (this->fields).resellable = (inventoryItem->fields).resellable;
  (this->fields).priceGold = (inventoryItem->fields).priceGold;
  (this->fields).slotPosition = (inventoryItem->fields).slotPosition;
  return;
}

