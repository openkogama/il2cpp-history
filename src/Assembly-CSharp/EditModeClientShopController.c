
/* Void Activate(UIPushOption) */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_Activate
               (EditModeClientShopController *this,UIPushOption__Enum pushOption,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__EditModeClientShopController__PageTurned_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__EditModeClientShopController__TabSelected_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_TabState>__get_Key__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_TabState>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__EditModeClientShopController____c___Activate_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__EditModeClientShopController____c__DisplayClass12_0___Activate_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditModeClientShopController____c__DisplayClass12_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditModeClientShopController____c);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__EditModeClientShopController____c__DisplayClass12_0)
  ;
  if (object_00 != (Object *)0x0) {
    object_00[1].klass = (Object__Class *)this;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    *(UIPushOption__Enum *)&object_00[1].monitor = pushOption;
    pIVar6 = (this->fields).inventoryController;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pIVar6 == (InventoryController *)0x0) {
      bVar5 = false;
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar5 = (pIVar6->fields)._._._._.m_CachedPtr != (void *)0x0;
    }
    if (bVar5) {
      return;
    }
    pIVar6 = (this->fields).inventoryControllerPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar6 = (InventoryController *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pIVar6,
                        InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                       );
    (this->fields).inventoryController = pIVar6;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&(this->fields).inventoryController >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pIVar6 = (this->fields).inventoryController;
    if (pIVar6 == (InventoryController *)0x0) goto code_?;
    pUVar7 = (pIVar6->fields).OnTabSelected;
    pDVar8 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    FUN_?(pDVar8,this);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar7,pDVar8,(MethodInfo *)0x0);
    pUVar9 = TypeInfo__UnityEngine__Events__UnityAction<int>;
    if (pDVar8 == (Delegate *)0x0) {
      (pIVar6->fields).OnTabSelected = (UnityAction_1_System_Int32_ *)0x0;
    }
    else {
      pUVar7 = (UnityAction_1_System_Int32_ *)
               FUN_?(pDVar8,TypeInfo__UnityEngine__Events__UnityAction<int>);
      if (pUVar7 == (UnityAction_1_System_Int32_ *)0x0) {
        FUN_?(pDVar8,pUVar9);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (pIVar6->fields).OnTabSelected = pUVar7;
      pUVar9 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      lVar2 = FUN_?(pDVar8,TypeInfo__UnityEngine__Events__UnityAction<int>);
      if (lVar2 == 0) {
        FUN_?(pDVar8,pUVar9);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&(pIVar6->fields).OnTabSelected >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pIVar6 = (this->fields).inventoryController;
    if (pIVar6 == (InventoryController *)0x0) goto code_?;
    pUVar7 = (pIVar6->fields).OnPageTurned;
    pDVar8 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    FUN_?(pDVar8,this);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar7,pDVar8,(MethodInfo *)0x0);
    pUVar9 = TypeInfo__UnityEngine__Events__UnityAction<int>;
    if (pDVar8 == (Delegate *)0x0) {
      (pIVar6->fields).OnPageTurned = (UnityAction_1_System_Int32_ *)0x0;
    }
    else {
      pUVar7 = (UnityAction_1_System_Int32_ *)
               FUN_?(pDVar8,TypeInfo__UnityEngine__Events__UnityAction<int>);
      if (pUVar7 == (UnityAction_1_System_Int32_ *)0x0) {
        FUN_?(pDVar8,pUVar9);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (pIVar6->fields).OnPageTurned = pUVar7;
      pUVar9 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      lVar2 = FUN_?(pDVar8,TypeInfo__UnityEngine__Events__UnityAction<int>);
      if (lVar2 == 0) {
        FUN_?(pDVar8,pUVar9);
code_?:
        FUN_?();
code_?:
        FUN_?();
        goto code_?;
      }
    }
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&(pIVar6->fields).OnPageTurned >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pIVar6 = (this->fields).inventoryController;
    if (pIVar6 != (InventoryController *)0x0) {
      InventoryController::InventoryController_Initialize
                (pIVar6,(this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
      pDStack_11 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabs;
      if (pDStack_11 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        if (iRam_? != 0) {
          uVar1 = (uint)((ulonglong)&pDStack_11 >> 0xc);
          lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
          do {
            uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
            puVar4 = (ulonglong *)(lVar2 + 0xADDR);
            LOCK();
            bVar5 = uVar3 == *puVar4;
            if (bVar5) {
              *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        uStack_12 = (ulonglong)(uint)(pDStack_11->fields)._version;
        uStack_13 = 2;
        uStack_14 = 0;
        uStack_15 = 0;
        DStack_16._version = (undefined4)uStack_12;
        DStack_16._index = uStack_12._4_4_;
        DStack_16._current._0_8_ = 0;
        DStack_16._current.value = (Object *)0x0;
        DStack_16._getEnumeratorRetType = 2;
        DStack_16._36_4_ = 0;
        DStack_16._dictionary = pDStack_11;
        while( true ) {
          bVar17 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                            (&DStack_16,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                            );
          if (bVar17 == 0) {
            EditModeClientShopController_UpdateContent(this,(MethodInfo *)0x0);
            pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__EditModeClientShopController____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__EditModeClientShopController____c);
            }
            this_00 = TypeInfo__EditModeClientShopController____c->static_fields->__9__12_0;
            if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if (*(int *)&(TypeInfo__EditModeClientShopController____c->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__EditModeClientShopController____c);
              }
              object = TypeInfo__EditModeClientShopController____c->static_fields->__9;
              this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
                         MethodInfo__EditModeClientShopController____c___Activate_b__12_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__EditModeClientShopController____c->static_fields->__9__12_0 = this_00;
              if (iRam_? != 0) {
                uVar1 = (uint)((ulonglong)
                                &TypeInfo__EditModeClientShopController____c->static_fields->
                                 __9__12_0 >> 0xc);
                lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
                do {
                  uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
                  puVar4 = (ulonglong *)(lVar2 + 0xADDR);
                  LOCK();
                  bVar5 = uVar3 == *puVar4;
                  if (bVar5) {
                    *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar5);
              }
            }
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar18,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_01,object_00,
                       MethodInfo__EditModeClientShopController____c__DisplayClass12_0___Activate_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar18,(BaseEventData *)0x0,this_01,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
          pIVar6 = (this->fields).inventoryController;
          if (DStack_16._current.value == (Object *)0x0) break;
          if (pIVar6 == (InventoryController *)0x0) goto code_?;
          pTVar19 = (pIVar6->fields).tabMenu;
          if (pTVar19 == (TabMenuBase *)0x0) goto code_?;
          (*(pTVar19->klass->vtable).__unknown.methodPtr)
                    (pTVar19,DStack_16._current._0_8_ & 0xffffffff,
                     DStack_16._current.value[1].monitor);
        }
code_?:
        FUN_?();
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVWorldObjectClient GetWorldObjectFromItemData(ShopItem) */

MVWorldObjectClient *
Assembly-CSharp.dll::EditModeClientShopController::
EditModeClientShopController_GetWorldObjectFromItemData(ShopItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__BytePacker);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__KoGaMaPackageClient);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (item != (ShopItem *)0x0) {
    buffer = (item->fields).data;
    this_00 = (BytePacker *)FUN_?(TypeInfo__MV__WorldObject__BytePacker);
    MVWorldObject.dll::MV::WorldObject::BytePacker::BytePacker__ctor_1
              (this_00,buffer,(MethodInfo *)0x0);
    this_01 = (KoGaMaPackageClient *)FUN_?(TypeInfo__KoGaMaPackageClient);
    KoGaMaPackageClient::KoGaMaPackageClient__ctor(this_01,this_00,0,(MethodInfo *)0x0);
    if (this_01 != (KoGaMaPackageClient *)0x0) {
      KoGaMaPackageClient::KoGaMaPackageClient_InventoryInitialize(this_01,(MethodInfo *)0x0);
      pMVar1 = 
      MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_;
      this = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this_01->fields).worldObjects;
      if (this != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        uVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                          (this,(this_01->fields).worldObjectRoot,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__get_Item_int_
                           ->klass->rgctx_data[0x21].method);
        if ((int)uVar2 < 0) {
          uVar3 = func_?(pMVar1->klass->rgctx_data,0xe);
          key = (Object *)func_?(uVar3);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                    (key,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
          return pMVar5;
        }
        pDVar6 = (this->fields)._entries;
        if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0
           ) {
          if (uVar2 < (uint)pDVar6->max_length) {
            return *(MVWorldObjectClient **)&pDVar6->vector[(int)uVar2].value.y;
          }
          FUN_?();
          pcVar4 = (code *)swi(3);
          pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
          return pMVar5;
        }
        FUN_?();
        pcVar4 = (code *)swi(3);
        pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
        return pMVar5;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pMVar5 = (MVWorldObjectClient *)(*pcVar4)();
  return pMVar5;
}


/* Void HighlightAtCategoryWithSlot(UIPushOption, Int32, Int32) */

void Assembly-CSharp.dll::EditModeClientShopController::
     EditModeClientShopController_HighlightAtCategoryWithSlot
               (EditModeClientShopController *this,UIPushOption__Enum options,int32_t categoryId,
               int32_t slotPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EditModeClientShopController_Activate(this,options,(MethodInfo *)0x0);
  pPVar1 = (this->fields).playerShopInventoryRepository;
  if (((pPVar1 != (PlayerShopInventoryRepository *)0x0) &&
      (pPVar2 = (pPVar1->fields)._playerInventoryRepository_k__BackingField,
      pPVar2 != (PlayerInventoryRepository *)0x0)) &&
     (this_00 = (pPVar2->fields).categories,
     this_00 != (Dictionary_2_InventoryCategoryType_System_String_ *)0x0)) {
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,categoryId,
                        MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                       );
    pDVar4 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabsNonLocalized;
    if (pDVar4 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      uStack_5 = 0;
      uStack_6 = 0;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
        puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar9;
          LOCK();
          uVar11 = *puVar9;
          if (uVar10 == uVar11) {
            *puVar9 = uVar10 | 1L << (ulonglong)(uVar7 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar11);
      }
      uStack_12 = (ulonglong)(uint)(pDVar4->fields)._version;
      uStack_13 = 2;
      DStack_14._version = (undefined4)uStack_12;
      DStack_14._index = uStack_12._4_4_;
      DStack_14._current.key = 0;
      DStack_14._current._4_4_ = 0;
      DStack_14._current.value = (Object *)0x0;
      DStack_14._getEnumeratorRetType = 2;
      DStack_14._36_4_ = 0;
      pDStack_8 = pDVar4;
      DStack_14._dictionary = pDVar4;
      do {
        bVar15 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_14,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                          );
        if (bVar15 == 0) goto code_?;
      } while ((pOVar3 != DStack_14._current.value) &&
              (((pOVar3 == (Object *)0x0 || (DStack_14._current.value == (Object *)0x0)) ||
               ((*(int *)&pOVar3[1].klass != *(int *)&DStack_14._current.value[1].klass ||
                (bVar15 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                   ((uint8_t *)((longlong)&pOVar3[1].klass + 4),
                                    (uint8_t *)((longlong)&DStack_14._current.value[1].klass + 4),
                                    (longlong)*(int *)&pOVar3[1].klass * 2,(MethodInfo *)0x0),
                bVar15 == 0))))));
      (this->fields).selectedTab = DStack_14._current.key;
code_?:
      this_01 = (this->fields).inventoryController;
      if (this_01 != (InventoryController *)0x0) {
        InventoryController::InventoryController_HighlightSlot
                  (this_01,slotPosition % (this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
        EditModeClientShopController_UpdateContent(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Initialize(EditModeRepositoryController) */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_Initialize
               (EditModeClientShopController *this,
               EditModeRepositoryController *repositoryController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__set_Item_int__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__set_Item_int__TabState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<InventoryCategoryType,_System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TabState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).repositoryController = repositoryController;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&(this->fields).repositoryController >> 0xc);
    lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
    do {
      uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
      puVar4 = (ulonglong *)(lVar2 + 0xADDR);
      LOCK();
      bVar5 = uVar3 == *puVar4;
      if (bVar5) {
        *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    pPVar6 = (PlayerShopInventoryRepository *)FUN_?();
    (this->fields).playerShopInventoryRepository = pPVar6;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&(this->fields).playerShopInventoryRepository >> 0xc);
      lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
      do {
        uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
        puVar4 = (ulonglong *)(lVar2 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    (this->fields).selectedTab = 1;
    key_00 = 1;
    pPVar6 = (this->fields).playerShopInventoryRepository;
    if ((((pPVar6 != (PlayerShopInventoryRepository *)0x0) &&
         (pCVar7 = (pPVar6->fields)._clientShopRepository_k__BackingField,
         pCVar7 != (ClientShopRepository *)0x0)) &&
        (this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)(pCVar7->fields).categories,
        this_00 !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
        )) && (pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                         UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                         Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                                   (this_00,
                                    MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                                   ),
              pDVar8 !=
              (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0)) {
      uStack_9 = (pDVar8->fields)._dictionary;
      puStack_10 = (undefined4 *)0x0;
      uStack_11 = 0;
      if (iRam_? != 0) {
        uVar1 = (uint)((ulonglong)&uStack_9 >> 0xc);
        lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
        do {
          uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
          puVar4 = (ulonglong *)(lVar2 + 0xADDR);
          LOCK();
          bVar5 = uVar3 == *puVar4;
          if (bVar5) {
            *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      if (uStack_9 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iStack_13 = (uStack_9->fields)._version;
      uStack_11 = 0;
      uStack_9._4_4_ = (undefined4)((ulonglong)uStack_9 >> 0x20);
      uStack_14 = (undefined4)uStack_9;
      uStack_15 = uStack_9._4_4_;
      uStack_16 = 0;
      uStack_17 = 0;
      uStack_9 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0;
      puStack_10 = &uStack_14;
      do {
        lVar2 = CONCAT44(uStack_15,uStack_14);
        if (lVar2 == 0) {
code_?:
          FUN_?();
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        if (iStack_13 != *(int *)(lVar2 + 0x2c)) {
code_?:
          mscorlib.dll::System::ThrowHelper::
          ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                    ((MethodInfo *)0x0);
          goto code_?;
        }
        do {
          if (lVar2 == 0) goto code_?;
          if (*(uint *)(lVar2 + 0x20) <= uStack_16) {
            return;
          }
          lVar18 = *(longlong *)(lVar2 + 0x18);
          lVar19 = (longlong)(int)uStack_16;
          uVar1 = uStack_16 + 1;
          if (lVar18 == 0) goto code_?;
          if (*(uint *)(lVar18 + 0x18) <= uStack_16) {
            uStack_16 = uVar1;
            FUN_?();
            goto code_?;
          }
          uStack_16 = uVar1;
        } while (*(int *)(lVar18 + 0x20 + lVar19 * 0x18) < 0);
        key = *(Int32Enum__Enum *)(lVar18 + 0x28 + lVar19 * 0x18);
        uStack_17 = CONCAT44(uStack_17._4_4_,key);
        this_01 = (this->fields).tabsNonLocalized;
        pOVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                             MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                            );
        if (this_01 == (Dictionary_2_System_Int32_System_String_ *)0x0) {
code_?:
          FUN_?();
          uVar1 = uStack_16;
code_?:
          uStack_16 = uVar1;
          FUN_?();
code_?:
          FUN_?();
          goto code_?;
        }
        uVar21 = CONCAT71((int7)((ulonglong)lVar18 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,key_00,pOVar20,
                   (InsertionBehavior__Enum)uVar21,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__set_Item_int__System__String_
                   ->klass->rgctx_data[0x22].method);
        this_02 = (this->fields).tabs;
        pSVar22 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                             MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                            );
        pSVar22 = TM::TM__(pSVar22,(MethodInfo *)0x0);
        iVar23 = (this->fields).numberOfSlotsPrPage;
        pOVar20 = (Object *)FUN_?();
        *(undefined4 *)((longlong)&pOVar20[2].klass + 4) = 1;
        *(Int32Enum__Enum *)&pOVar20[2].monitor = key;
        *(int32_t *)&pOVar20[1].klass = iVar23;
        pOVar20[1].monitor = (MonitorData *)pSVar22;
        if (iRam_? != 0) {
          uVar1 = (uint)((ulonglong)&pOVar20[1].monitor >> 0xc);
          lVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6) * 8;
          do {
            uVar3 = *(ulonglong *)(lVar2 + 0xADDR);
            puVar4 = (ulonglong *)(lVar2 + 0xADDR);
            LOCK();
            bVar5 = uVar3 == *puVar4;
            if (bVar5) {
              *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
        pPVar6 = (this->fields).playerShopInventoryRepository;
        if (pPVar6 == (PlayerShopInventoryRepository *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        pCVar7 = (pPVar6->fields)._clientShopRepository_k__BackingField;
        if (pCVar7 == (ClientShopRepository *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_03 = (pCVar7->fields).repository;
        if (this_03 == (Dictionary_2_System_Int32_List_1_ShopItem_ *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        pOVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)this_03,key,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<ShopItem>_>__get_Item_int_
                            );
        if (pOVar24 == (Object *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        iVar25 = *(int *)&pOVar24[1].monitor;
        if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
          FUN_?();
        }
        iVar26 = 1;
        if (0 < iVar25) {
          iVar26 = iVar25;
        }
        if (pOVar20 == (Object *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        *(int *)&pOVar20[2].klass = iVar26;
        if (this_02 == (Dictionary_2_System_Int32_TabState_ *)0x0) {
code_?:
          FUN_?();
          goto code_?;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_02,key_00,pOVar20,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar21 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__set_Item_int__TabState_
                   ->klass->rgctx_data[0x22].method);
        key_00 = key_00 + 1;
      } while( true );
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_OnPop
               (EditModeClientShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewRootTransform;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar1 = (this->fields).previewRootTransform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pTVar1,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
    }
  }
  bVar2 = iRam_? != 0;
  (this->fields).previewRootTransform = (Transform *)0x0;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).previewRootTransform >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pLVar7 = (this->fields).previewedObjects;
  uVar3 = 0;
  if (pLVar7 != (List_1_MVWorldObjectClient_ *)0x0) {
    lVar8 = 0x20;
    do {
      pLVar9 = (this->fields).previewedObjects;
      if ((pLVar7->fields)._size <= (int)uVar3) {
        if (pLVar9 != (List_1_MVWorldObjectClient_ *)0x0) {
          length = (pLVar9->fields)._size;
          piVar10 = &(pLVar9->fields)._version;
          *piVar10 = *piVar10 + 1;
          (pLVar9->fields)._size = 0;
          if (0 < length) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pLVar9->fields)._items,0,length,(MethodInfo *)0x0);
          }
          return;
        }
        break;
      }
      if (pLVar9 == (List_1_MVWorldObjectClient_ *)0x0) break;
      if ((uint)(pLVar9->fields)._size <= uVar3) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pMVar12 = (pLVar9->fields)._items;
      if (pMVar12 == (MVWorldObjectClient__Array *)0x0) break;
      if ((uint)pMVar12->max_length <= uVar3) {
        FUN_?();
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      wo = *(MVWorldObjectClient **)((longlong)pMVar12->vector + lVar8 + -0x20);
      if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
        FUN_?();
      }
      MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(wo,(MethodInfo *)0x0);
      pLVar7 = (this->fields).previewedObjects;
      uVar3 = uVar3 + 1;
      lVar8 = lVar8 + 8;
    } while (pLVar7 != (List_1_MVWorldObjectClient_ *)0x0);
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OpenPage(UIPushOption, Int32, Int32) */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_OpenPage
               (EditModeClientShopController *this,UIPushOption__Enum options,int32_t categoryId,
               int32_t slotPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EditModeClientShopController_Activate(this,options,(MethodInfo *)0x0);
  pPVar1 = (this->fields).playerShopInventoryRepository;
  if (((pPVar1 != (PlayerShopInventoryRepository *)0x0) &&
      (pPVar2 = (pPVar1->fields)._playerInventoryRepository_k__BackingField,
      pPVar2 != (PlayerInventoryRepository *)0x0)) &&
     (this_00 = (pPVar2->fields).categories,
     this_00 != (Dictionary_2_InventoryCategoryType_System_String_ *)0x0)) {
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,categoryId,
                        MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                       );
    pDVar4 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabsNonLocalized;
    if (pDVar4 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      uStack_5 = 0;
      uStack_6 = 0;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
        uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      uStack_13 = (ulonglong)(uint)(pDVar4->fields)._version;
      uStack_14 = 2;
      DStack_15._version = (undefined4)uStack_13;
      DStack_15._index = uStack_13._4_4_;
      DStack_15._current.key = 0;
      DStack_15._current._4_4_ = 0;
      DStack_15._current.value = (Object *)0x0;
      DStack_15._getEnumeratorRetType = 2;
      DStack_15._36_4_ = 0;
      pDStack_8 = pDVar4;
      DStack_15._dictionary = pDVar4;
      do {
        bVar16 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_15,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                          );
        if (bVar16 == 0) goto code_?;
      } while ((pOVar3 != DStack_15._current.value) &&
              (((pOVar3 == (Object *)0x0 || (DStack_15._current.value == (Object *)0x0)) ||
               ((*(int *)&pOVar3[1].klass != *(int *)&DStack_15._current.value[1].klass ||
                (bVar16 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                   ((uint8_t *)((longlong)&pOVar3[1].klass + 4),
                                    (uint8_t *)((longlong)&DStack_15._current.value[1].klass + 4),
                                    (longlong)*(int *)&pOVar3[1].klass * 2,(MethodInfo *)0x0),
                bVar16 == 0))))));
      (this->fields).selectedTab = DStack_15._current.key;
code_?:
      page = FUN_?(((float)slotPosition + _UNK_?) /
                           (float)(this->fields).numberOfSlotsPrPage);
      this_01 = (this->fields).tabs;
      if ((this_01 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
         (this_02 = (TabState *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                               (this->fields).selectedTab,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              ), this_02 != (TabState *)0x0)) {
        TabState::TabState_SetPage(this_02,page,(MethodInfo *)0x0);
        EditModeClientShopController_UpdateContent(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OpenTab(UIPushOption, Int32) */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_OpenTab
               (EditModeClientShopController *this,UIPushOption__Enum options,int32_t categoryId,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_System::String>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EditModeClientShopController_Activate(this,options,(MethodInfo *)0x0);
  pPVar1 = (this->fields).playerShopInventoryRepository;
  if (((pPVar1 != (PlayerShopInventoryRepository *)0x0) &&
      (pPVar2 = (pPVar1->fields)._playerInventoryRepository_k__BackingField,
      pPVar2 != (PlayerInventoryRepository *)0x0)) &&
     (this_00 = (pPVar2->fields).categories,
     this_00 != (Dictionary_2_InventoryCategoryType_System_String_ *)0x0)) {
    pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,categoryId,
                        MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                       );
    pDVar4 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabsNonLocalized;
    if (pDVar4 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      uStack_5 = 0;
      uStack_6 = 0;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&pDStack_8 >> 0xc);
        uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      uStack_13 = (ulonglong)(uint)(pDVar4->fields)._version;
      uStack_14 = 2;
      DStack_15._version = (undefined4)uStack_13;
      DStack_15._index = uStack_13._4_4_;
      DStack_15._current.key = 0;
      DStack_15._current._4_4_ = 0;
      DStack_15._current.value = (Object *)0x0;
      DStack_15._getEnumeratorRetType = 2;
      DStack_15._36_4_ = 0;
      pDStack_8 = pDVar4;
      DStack_15._dictionary = pDVar4;
      do {
        bVar16 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_15,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_System::String>__MoveNext__
                          );
        if (bVar16 == 0) goto code_?;
      } while ((pOVar3 != DStack_15._current.value) &&
              (((pOVar3 == (Object *)0x0 || (DStack_15._current.value == (Object *)0x0)) ||
               ((*(int *)&pOVar3[1].klass != *(int *)&DStack_15._current.value[1].klass ||
                (bVar16 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                   ((uint8_t *)((longlong)&pOVar3[1].klass + 4),
                                    (uint8_t *)((longlong)&DStack_15._current.value[1].klass + 4),
                                    (longlong)*(int *)&pOVar3[1].klass * 2,(MethodInfo *)0x0),
                bVar16 == 0))))));
      (this->fields).selectedTab = DStack_15._current.key;
code_?:
      page = FUN_?(_UNK_? / (float)(this->fields).numberOfSlotsPrPage);
      this_01 = (this->fields).tabs;
      if ((this_01 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
         (this_02 = (TabState *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                               (this->fields).selectedTab,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              ), this_02 != (TabState *)0x0)) {
        TabState::TabState_SetPage(this_02,page,(MethodInfo *)0x0);
        EditModeClientShopController_UpdateContent(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_PageTurned
               (EditModeClientShopController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tabs;
  if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
    this_01 = (TabState *)
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                         (this->fields).selectedTab,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                        );
    if (this_01 != (TabState *)0x0) {
      bVar1 = TabState::TabState_UpdatePage(this_01,dir,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        EditModeClientShopController_UpdateContent(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PurchaseItem(ShopItem) */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_PurchaseItem
               (EditModeClientShopController *this,ShopItem *item,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__EditModeClientShopController__UpdateContent__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).repositoryController;
  this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_02,(Object *)this,MethodInfo__EditModeClientShopController__UpdateContent__,
             (MethodInfo *)0x0);
  if (this_00 == (EditModeRepositoryController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__EditModeRepositoryController___PurchaseClientShopItem_b__1_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = iRam_? != 0;
  (this_00->fields).currentlyBuyingItem = item;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this_00->fields).currentlyBuyingItem >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
  this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_03,(Object *)this_00,
             MethodInfo__EditModeRepositoryController___PurchaseClientShopItem_b__1_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar8 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar8);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar7,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar10 = (longlong)(pLVar9->fields)._size;
    uVar3 = 0;
    if (0 < lVar10) {
      lVar11 = 0;
      lVar12 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar9->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar13 = (pLVar9->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar3) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_01 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
        if (this_01 == (Component *)0x0) goto code_?;
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_01,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar7,(BaseEventData *)0x0,this_03,
                           (pMVar8->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_01,(MethodInfo *)0x0);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar11 < lVar10);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void TabSelected(Int32) */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_TabSelected
               (EditModeClientShopController *this,int32_t tab,MethodInfo *method)

{
  if (tab == (this->fields).selectedTab) {
    return;
  }
  (this->fields).selectedTab = tab;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    FUN_?(&
                  EditModeClientShopItem_MethodInfo__UnityEngine__Object__Instantiate<EditModeClientShopItem>_EditModeClientShopItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_Root___ClientShopInvento);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewRootTransform;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar1 = (this->fields).previewRootTransform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar1,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
    }
  }
  pGVar2 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  pSVar3 = StringLiteral_Preview_Root___ClientShopInvento;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (pGVar2,pSVar3,(MethodInfo *)0x0);
  if (pGVar2 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar2,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    (this->fields).previewRootTransform = pTVar1;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).previewRootTransform >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pLVar9 = (this->fields).previewedObjects;
    uVar5 = 0;
    if (pLVar9 != (List_1_MVWorldObjectClient_ *)0x0) {
      lVar10 = 0x20;
      lVar11 = 0x20;
      uVar12 = uVar5;
      do {
        pLVar13 = (this->fields).previewedObjects;
        if ((pLVar9->fields)._size <= (int)uVar12) {
          if (pLVar13 != (List_1_MVWorldObjectClient_ *)0x0) {
            length = (pLVar13->fields)._size;
            piVar14 = &(pLVar13->fields)._version;
            *piVar14 = *piVar14 + 1;
            (pLVar13->fields)._size = 0;
            if (0 < length) {
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pLVar13->fields)._items,0,length,(MethodInfo *)0x0);
            }
            pIVar15 = (this->fields).inventoryController;
            if ((pIVar15 != (InventoryController *)0x0) &&
               (pIVar16 = (pIVar15->fields).inventorySlots, pIVar16 != (InventorySlots *)0x0)) {
              InventorySlots::InventorySlots_Clear(pIVar16,(MethodInfo *)0x0);
              pDVar17 = (this->fields).tabs;
              pIVar15 = (this->fields).inventoryController;
              uVar12 = (this->fields).selectedTab;
              if ((pDVar17 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
                 (pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,uVar12,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                      ), pOVar18 != (Object *)0x0)) {
                pDVar17 = (this->fields).tabs;
                page = *(uint *)((longlong)&pOVar18[2].klass + 4);
                if ((pDVar17 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
                   (pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32,System::Object]::
                              Dictionary_2_System_Int32_System_Object__get_Item
                                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,
                                         (this->fields).selectedTab,
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                        ), pOVar18 != (Object *)0x0)) {
                  uVar19 = FUN_?((float)*(int *)&pOVar18[2].klass /
                                         (float)*(int *)&pOVar18[1].klass);
                  uVar20 = 1;
                  if (1 < (int)uVar19) {
                    uVar20 = uVar19;
                  }
                  if ((pIVar15 != (InventoryController *)0x0) &&
                     (pTVar21 = (pIVar15->fields).tabMenu, pTVar21 != (TabMenuBase *)0x0)) {
                    (*(pTVar21->klass->vtable).__unknown_1.methodPtr)
                              (pTVar21,(ulonglong)uVar12,(ulonglong)page,(ulonglong)uVar20,
                               (pTVar21->klass->vtable).__unknown_1.method);
                    pIVar16 = (pIVar15->fields).inventorySlots;
                    if (pIVar16 != (InventorySlots *)0x0) {
                      InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                                (pIVar16,page,(pIVar15->fields).numberOfSlots,(MethodInfo *)0x0);
                      this_00 = (this->fields).tabsNonLocalized;
                      pPVar22 = (this->fields).playerShopInventoryRepository;
                      if ((((this_00 != (Dictionary_2_System_Int32_System_String_ *)0x0) &&
                           (pSVar3 = (String *)
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32,System::Object]::
                                      Dictionary_2_System_Int32_System_Object__get_Item
                                                ((Dictionary_2_System_Int32_System_Object_ *)this_00
                                                 ,(this->fields).selectedTab,
                                                 MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                                                ), pPVar22 != (PlayerShopInventoryRepository *)0x0))
                          && (this_01 = (pPVar22->fields)._clientShopRepository_k__BackingField,
                             this_01 != (ClientShopRepository *)0x0)) &&
                         (pLVar23 = ClientShopRepository::
                                    ClientShopRepository_GetItemsInCategorySlow
                                              (this_01,pSVar3,(MethodInfo *)0x0),
                         pLVar23 != (List_1_ShopItem_ *)0x0)) goto code_?;
                    }
                  }
                }
              }
            }
          }
          break;
        }
        if (pLVar13 == (List_1_MVWorldObjectClient_ *)0x0) break;
        if ((uint)(pLVar13->fields)._size <= uVar12) goto code_?;
        pMVar24 = (pLVar13->fields)._items;
        if (pMVar24 == (MVWorldObjectClient__Array *)0x0) break;
        if ((uint)pMVar24->max_length <= uVar12) goto code_?;
        pMVar25 = *(MVWorldObjectClient **)((longlong)pMVar24->vector + lVar11 + -0x20);
        if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
          FUN_?();
        }
        MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar25,(MethodInfo *)0x0);
        pLVar9 = (this->fields).previewedObjects;
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 8;
      } while (pLVar9 != (List_1_MVWorldObjectClient_ *)0x0);
    }
  }
code_?:
  FUN_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
code_?:
  if ((pLVar23->fields)._size <= (int)uVar5) {
    return;
  }
  pDVar17 = (this->fields).tabs;
  if (pDVar17 == (Dictionary_2_System_Int32_TabState_ *)0x0) goto code_?;
  this_02 = (TabState *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__get_Item
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,(this->fields).selectedTab
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                      );
  if ((uint)(pLVar23->fields)._size <= uVar5) {
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar26 = (code *)swi(3);
    (*pcVar26)();
    return;
  }
  pSVar27 = (pLVar23->fields)._items;
  if (pSVar27 == (ShopItem__Array *)0x0) goto code_?;
  if ((uint)pSVar27->max_length <= uVar5) {
code_?:
    FUN_?();
    pcVar26 = (code *)swi(3);
    (*pcVar26)();
    return;
  }
  lVar11 = *(longlong *)((longlong)pSVar27->vector + lVar10 + -0x20);
  if (((lVar11 == 0) || (iVar28 = *(int *)(lVar11 + 0x40), this_02 == (TabState *)0x0)) ||
     (pIVar29 = TabState::TabState_get_SlotRange(this_02,(MethodInfo *)0x0),
     pIVar29 == (Int32__Array *)0x0)) goto code_?;
  if ((int)pIVar29->max_length == 0) goto code_?;
  if (pIVar29->vector[0] <= iVar28) {
    if ((uint)pIVar29->max_length < 2) goto code_?;
    if (iVar28 < pIVar29->vector[1]) {
      pEVar30 = (this->fields).previewItemPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pEVar30 = (EditModeClientShopItem *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pEVar30,
                           EditModeClientShopItem_MethodInfo__UnityEngine__Object__Instantiate<EditModeClientShopItem>_EditModeClientShopItem_
                          );
      pSVar31 = (ShopItem *)FUN_?(pLVar23);
      pMVar25 = EditModeClientShopController_GetWorldObjectFromItemData(pSVar31,(MethodInfo *)0x0);
      pLVar9 = (this->fields).previewedObjects;
      if (pLVar9 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
      FUN_?(pLVar9,pMVar25);
      pTVar1 = (this->fields).previewRootTransform;
      pSVar31 = (ShopItem *)FUN_?(pLVar23,uVar5);
      if (pEVar30 == (EditModeClientShopItem *)0x0) goto code_?;
      EditModeClientShopItem::EditModeClientShopItem_Initialize
                (pEVar30,pTVar1,pSVar31,pMVar25,(MethodInfo *)0x0);
      pIVar15 = (this->fields).inventoryController;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pEVar30,(MethodInfo *)0x0);
      lVar11 = FUN_?(pLVar23,uVar5);
      if ((lVar11 == 0) || (pIVar15 == (InventoryController *)0x0)) goto code_?;
      InventoryController::InventoryController_AddObject
                (pIVar15,pGVar2,*(int *)(lVar11 + 0x40) % (this->fields).numberOfSlotsPrPage,
                 (MethodInfo *)0x0);
    }
  }
  uVar5 = uVar5 + 1;
  lVar10 = lVar10 + 8;
  goto code_?;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController_UpdateContent
               (EditModeClientShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<ShopItem>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    FUN_?(&
                  EditModeClientShopItem_MethodInfo__UnityEngine__Object__Instantiate<EditModeClientShopItem>_EditModeClientShopItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_Root___ClientShopInvento);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewRootTransform;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar1 = (this->fields).previewRootTransform;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar1,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
    }
  }
  pGVar2 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  pSVar3 = StringLiteral_Preview_Root___ClientShopInvento;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (pGVar2,pSVar3,(MethodInfo *)0x0);
  if (pGVar2 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar2,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    (this->fields).previewRootTransform = pTVar1;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).previewRootTransform >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    pLVar9 = (this->fields).previewedObjects;
    uVar5 = 0;
    if (pLVar9 != (List_1_MVWorldObjectClient_ *)0x0) {
      lVar10 = 0x20;
      lVar11 = 0x20;
      uVar12 = uVar5;
      do {
        pLVar13 = (this->fields).previewedObjects;
        if ((pLVar9->fields)._size <= (int)uVar12) {
          if (pLVar13 != (List_1_MVWorldObjectClient_ *)0x0) {
            length = (pLVar13->fields)._size;
            piVar14 = &(pLVar13->fields)._version;
            *piVar14 = *piVar14 + 1;
            (pLVar13->fields)._size = 0;
            if (0 < length) {
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pLVar13->fields)._items,0,length,(MethodInfo *)0x0);
            }
            pIVar15 = (this->fields).inventoryController;
            if ((pIVar15 != (InventoryController *)0x0) &&
               (pIVar16 = (pIVar15->fields).inventorySlots, pIVar16 != (InventorySlots *)0x0)) {
              InventorySlots::InventorySlots_Clear(pIVar16,(MethodInfo *)0x0);
              pDVar17 = (this->fields).tabs;
              pIVar15 = (this->fields).inventoryController;
              uVar12 = (this->fields).selectedTab;
              if ((pDVar17 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
                 (pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,uVar12,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                      ), pOVar18 != (Object *)0x0)) {
                pDVar17 = (this->fields).tabs;
                page = *(uint *)((longlong)&pOVar18[2].klass + 4);
                if ((pDVar17 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
                   (pOVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32,System::Object]::
                              Dictionary_2_System_Int32_System_Object__get_Item
                                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,
                                         (this->fields).selectedTab,
                                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                        ), pOVar18 != (Object *)0x0)) {
                  uVar19 = FUN_?((float)*(int *)&pOVar18[2].klass /
                                         (float)*(int *)&pOVar18[1].klass);
                  uVar20 = 1;
                  if (1 < (int)uVar19) {
                    uVar20 = uVar19;
                  }
                  if ((pIVar15 != (InventoryController *)0x0) &&
                     (pTVar21 = (pIVar15->fields).tabMenu, pTVar21 != (TabMenuBase *)0x0)) {
                    (*(pTVar21->klass->vtable).__unknown_1.methodPtr)
                              (pTVar21,(ulonglong)uVar12,(ulonglong)page,(ulonglong)uVar20,
                               (pTVar21->klass->vtable).__unknown_1.method);
                    pIVar16 = (pIVar15->fields).inventorySlots;
                    if (pIVar16 != (InventorySlots *)0x0) {
                      InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                                (pIVar16,page,(pIVar15->fields).numberOfSlots,(MethodInfo *)0x0);
                      this_00 = (this->fields).tabsNonLocalized;
                      pPVar22 = (this->fields).playerShopInventoryRepository;
                      if ((((this_00 != (Dictionary_2_System_Int32_System_String_ *)0x0) &&
                           (pSVar3 = (String *)
                                      mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32,System::Object]::
                                      Dictionary_2_System_Int32_System_Object__get_Item
                                                ((Dictionary_2_System_Int32_System_Object_ *)this_00
                                                 ,(this->fields).selectedTab,
                                                 MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                                                ), pPVar22 != (PlayerShopInventoryRepository *)0x0))
                          && (this_01 = (pPVar22->fields)._clientShopRepository_k__BackingField,
                             this_01 != (ClientShopRepository *)0x0)) &&
                         (pLVar23 = ClientShopRepository::
                                    ClientShopRepository_GetItemsInCategorySlow
                                              (this_01,pSVar3,(MethodInfo *)0x0),
                         pLVar23 != (List_1_ShopItem_ *)0x0)) goto code_?;
                    }
                  }
                }
              }
            }
          }
          break;
        }
        if (pLVar13 == (List_1_MVWorldObjectClient_ *)0x0) break;
        if ((uint)(pLVar13->fields)._size <= uVar12) goto code_?;
        pMVar24 = (pLVar13->fields)._items;
        if (pMVar24 == (MVWorldObjectClient__Array *)0x0) break;
        if ((uint)pMVar24->max_length <= uVar12) goto code_?;
        pMVar25 = *(MVWorldObjectClient **)((longlong)pMVar24->vector + lVar11 + -0x20);
        if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
          FUN_?();
        }
        MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar25,(MethodInfo *)0x0);
        pLVar9 = (this->fields).previewedObjects;
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 8;
      } while (pLVar9 != (List_1_MVWorldObjectClient_ *)0x0);
    }
  }
code_?:
  FUN_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
code_?:
  if ((pLVar23->fields)._size <= (int)uVar5) {
    return;
  }
  pDVar17 = (this->fields).tabs;
  if (pDVar17 == (Dictionary_2_System_Int32_TabState_ *)0x0) goto code_?;
  this_02 = (TabState *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__get_Item
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar17,(this->fields).selectedTab
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                      );
  if ((uint)(pLVar23->fields)._size <= uVar5) {
code_?:
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
              ((MethodInfo *)0x0);
    pcVar26 = (code *)swi(3);
    (*pcVar26)();
    return;
  }
  pSVar27 = (pLVar23->fields)._items;
  if (pSVar27 == (ShopItem__Array *)0x0) goto code_?;
  if ((uint)pSVar27->max_length <= uVar5) {
code_?:
    FUN_?();
    pcVar26 = (code *)swi(3);
    (*pcVar26)();
    return;
  }
  lVar11 = *(longlong *)((longlong)pSVar27->vector + lVar10 + -0x20);
  if (((lVar11 == 0) || (iVar28 = *(int *)(lVar11 + 0x40), this_02 == (TabState *)0x0)) ||
     (pIVar29 = TabState::TabState_get_SlotRange(this_02,(MethodInfo *)0x0),
     pIVar29 == (Int32__Array *)0x0)) goto code_?;
  if ((int)pIVar29->max_length == 0) goto code_?;
  if (pIVar29->vector[0] <= iVar28) {
    if ((uint)pIVar29->max_length < 2) goto code_?;
    if (iVar28 < pIVar29->vector[1]) {
      pEVar30 = (this->fields).previewItemPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pEVar30 = (EditModeClientShopItem *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pEVar30,
                           EditModeClientShopItem_MethodInfo__UnityEngine__Object__Instantiate<EditModeClientShopItem>_EditModeClientShopItem_
                          );
      pSVar31 = (ShopItem *)FUN_?(pLVar23);
      pMVar25 = EditModeClientShopController_GetWorldObjectFromItemData(pSVar31,(MethodInfo *)0x0);
      pLVar9 = (this->fields).previewedObjects;
      if (pLVar9 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
      FUN_?(pLVar9,pMVar25);
      pTVar1 = (this->fields).previewRootTransform;
      pSVar31 = (ShopItem *)FUN_?(pLVar23,uVar5);
      if (pEVar30 == (EditModeClientShopItem *)0x0) goto code_?;
      EditModeClientShopItem::EditModeClientShopItem_Initialize
                (pEVar30,pTVar1,pSVar31,pMVar25,(MethodInfo *)0x0);
      pIVar15 = (this->fields).inventoryController;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pEVar30,(MethodInfo *)0x0);
      lVar11 = FUN_?(pLVar23,uVar5);
      if ((lVar11 == 0) || (pIVar15 == (InventoryController *)0x0)) goto code_?;
      InventoryController::InventoryController_AddObject
                (pIVar15,pGVar2,*(int *)(lVar11 + 0x40) % (this->fields).numberOfSlotsPrPage,
                 (MethodInfo *)0x0);
    }
  }
  uVar5 = uVar5 + 1;
  lVar10 = lVar10 + 8;
  goto code_?;
}


/* EditModeClientShopController() */

void Assembly-CSharp.dll::EditModeClientShopController::EditModeClientShopController__ctor
               (EditModeClientShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).selectedTab = 1;
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__);
  bVar2 = iRam_? != 0;
  (this->fields).tabs = (Dictionary_2_System_Int32_TabState_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).tabs >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
            );
  bVar2 = iRam_? != 0;
  (this->fields).tabsNonLocalized = (Dictionary_2_System_Int32_System_String_ *)pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).tabsNonLocalized >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = (List_1_MVWorldObjectClient_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).previewedObjects = this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).previewedObjects >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

