
/* Void Activate(UIPushOption) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_Activate
               (PlayerInventoryController *this,UIPushOption__Enum options,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ESCubeEdit);
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
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
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
    FUN_?(&MethodInfo__PlayerInventoryController__InventoryChanged__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerInventoryController__PageTurned_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerInventoryController__SlotChanged_int__int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerInventoryController__TabSelected_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerInventoryController____c___Activate_b__20_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerInventoryController____c__DisplayClass20_0___Activate_b__0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerInventoryController____c__DisplayClass20_0___Activate_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerInventoryController____c__DisplayClass20_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerInventoryController____c);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int,_int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__PlayerInventoryController____c__DisplayClass20_0);
  if (object_00 != (Object *)0x0) {
    object_00[1].monitor = (MonitorData *)this;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&object_00[1].monitor >> 0xc);
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
    *(UIPushOption__Enum *)&object_00[2].klass = options;
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
    object_00[1].klass = (Object__Class *)0x0;
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
    pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (pEVar8,object_00,
               MethodInfo__PlayerInventoryController____c__DisplayClass20_0___Activate_b__0_UnityEngine__EventSystems__IEditModeController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar7,(BaseEventData *)0x0,pEVar8,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IEditModeController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IEditModeController>_
              );
    if (object_00[1].klass != (Object__Class *)0x0) {
      pIVar9 = ((object_00[1].klass)->_0).image;
      bVar10 = (TypeInfo__ESCubeEdit->_1).naturalAligment;
      if ((bVar10 <= *(byte *)&pIVar9[4].assembly) &&
         (*(ESCubeEdit__Class **)((longlong)pIVar9[2].codeGenModule + (ulonglong)bVar10 * 8 + -8) ==
          TypeInfo__ESCubeEdit)) {
        return;
      }
    }
    PlayerInventoryController_UpdatePageCount(this,(MethodInfo *)0x0);
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
    pUVar11 = (pIVar6->fields).OnTabSelected;
    pDVar12 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    FUN_?(pDVar12,this);
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar11,pDVar12,(MethodInfo *)0x0);
    pUVar13 = TypeInfo__UnityEngine__Events__UnityAction<int>;
    if (pDVar12 == (Delegate *)0x0) {
      (pIVar6->fields).OnTabSelected = (UnityAction_1_System_Int32_ *)0x0;
    }
    else {
      pUVar11 = (UnityAction_1_System_Int32_ *)
                FUN_?(pDVar12,TypeInfo__UnityEngine__Events__UnityAction<int>);
      if (pUVar11 == (UnityAction_1_System_Int32_ *)0x0) {
        FUN_?(pDVar12,pUVar13);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      (pIVar6->fields).OnTabSelected = pUVar11;
      pUVar13 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      lVar2 = FUN_?(pDVar12,TypeInfo__UnityEngine__Events__UnityAction<int>);
      if (lVar2 == 0) {
        FUN_?(pDVar12,pUVar13);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
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
    pUVar11 = (pIVar6->fields).OnPageTurned;
    pDVar12 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    FUN_?(pDVar12,this);
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar11,pDVar12,(MethodInfo *)0x0);
    pUVar13 = TypeInfo__UnityEngine__Events__UnityAction<int>;
    if (pDVar12 == (Delegate *)0x0) {
      (pIVar6->fields).OnPageTurned = (UnityAction_1_System_Int32_ *)0x0;
    }
    else {
      pUVar11 = (UnityAction_1_System_Int32_ *)
                FUN_?(pDVar12,TypeInfo__UnityEngine__Events__UnityAction<int>);
      if (pUVar11 == (UnityAction_1_System_Int32_ *)0x0) {
        FUN_?(pDVar12,pUVar13);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      (pIVar6->fields).OnPageTurned = pUVar11;
      pUVar13 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      lVar2 = FUN_?(pDVar12,TypeInfo__UnityEngine__Events__UnityAction<int>);
      if (lVar2 == 0) {
        FUN_?(pDVar12,pUVar13);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
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
    if (pIVar6 == (InventoryController *)0x0) goto code_?;
    pUVar15 = (pIVar6->fields).OnSlotChanged;
    pDVar12 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int,_int>);
    FUN_?(pDVar12,this);
    pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar15,pDVar12,(MethodInfo *)0x0);
    pUVar16 = TypeInfo__UnityEngine__Events__UnityAction<int,_int>;
    if (pDVar12 == (Delegate *)0x0) {
      (pIVar6->fields).OnSlotChanged = (UnityAction_2_System_Int32_System_Int32_ *)0x0;
    }
    else {
      pUVar15 = (UnityAction_2_System_Int32_System_Int32_ *)
                FUN_?(pDVar12,TypeInfo__UnityEngine__Events__UnityAction<int,_int>);
      if (pUVar15 == (UnityAction_2_System_Int32_System_Int32_ *)0x0) {
        FUN_?(pDVar12,pUVar16);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      (pIVar6->fields).OnSlotChanged = pUVar15;
      pUVar16 = TypeInfo__UnityEngine__Events__UnityAction<int,_int>;
      lVar2 = FUN_?(pDVar12,TypeInfo__UnityEngine__Events__UnityAction<int,_int>);
      if (lVar2 == 0) {
        FUN_?(pDVar12,pUVar16);
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&(pIVar6->fields).OnSlotChanged >> 0xc);
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
    pPVar17 = (this->fields).repository;
    if (pPVar17 == (PlayerShopInventoryRepository *)0x0) goto code_?;
    pAVar18 = (pPVar17->fields).OnInventoryChanged;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__PlayerInventoryController__InventoryChanged__,
               (MethodInfo *)0x0);
    pAVar18 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar18,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar18 == (Action *)0x0) {
      (pPVar17->fields).OnInventoryChanged = (Action *)0x0;
    }
    else {
      pAVar19 = (Action *)0x0;
      if (pAVar18->klass == TypeInfo__System__Action) {
        pAVar19 = pAVar18;
      }
      if (pAVar19 == (Action *)0x0) {
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      (pPVar17->fields).OnInventoryChanged = pAVar19;
      pAVar19 = (Action *)0x0;
      if (pAVar18->klass == TypeInfo__System__Action) {
        pAVar19 = pAVar18;
      }
      if (pAVar19 == (Action *)0x0) {
        FUN_?();
code_?:
        FUN_?();
code_?:
        FUN_?();
        goto code_?;
      }
    }
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&(pPVar17->fields).OnInventoryChanged >> 0xc);
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
      pDStack_20 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabs;
      if (pDStack_20 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
        if (iRam_? != 0) {
          uVar1 = (uint)((ulonglong)&pDStack_20 >> 0xc);
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
        uStack_21 = (ulonglong)(uint)(pDStack_20->fields)._version;
        uStack_22 = 2;
        uStack_23 = 0;
        uStack_24 = 0;
        DStack_25._version = (undefined4)uStack_21;
        DStack_25._index = uStack_21._4_4_;
        DStack_25._current._0_8_ = 0;
        DStack_25._current.value = (Object *)0x0;
        DStack_25._getEnumeratorRetType = 2;
        DStack_25._36_4_ = 0;
        DStack_25._dictionary = pDStack_20;
        while( true ) {
          bVar26 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                             (&DStack_25,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                             );
          if (bVar26 == 0) {
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__PlayerInventoryController____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__PlayerInventoryController____c);
            }
            this_01 = TypeInfo__PlayerInventoryController____c->static_fields->__9__20_1;
            if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if (*(int *)&(TypeInfo__PlayerInventoryController____c->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__PlayerInventoryController____c);
              }
              object = TypeInfo__PlayerInventoryController____c->static_fields->__9;
              this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                         MethodInfo__PlayerInventoryController____c___Activate_b__20_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__PlayerInventoryController____c->static_fields->__9__20_1 = this_01;
              if (iRam_? != 0) {
                uVar1 = (uint)((ulonglong)
                                &TypeInfo__PlayerInventoryController____c->static_fields->__9__20_1
                               >> 0xc);
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
                      (pGVar7,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (pEVar8,object_00,
                       MethodInfo__PlayerInventoryController____c__DisplayClass20_0___Activate_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar7,(BaseEventData *)0x0,pEVar8,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
            return;
          }
          pIVar6 = (this->fields).inventoryController;
          if (DStack_25._current.value == (Object *)0x0) break;
          if (pIVar6 == (InventoryController *)0x0) goto code_?;
          pTVar27 = (pIVar6->fields).tabMenu;
          if (pTVar27 == (TabMenuBase *)0x0) goto code_?;
          (*(pTVar27->klass->vtable).__unknown.methodPtr)
                    (pTVar27,DStack_25._current._0_8_ & 0xffffffff,
                     DStack_25._current.value[1].monitor);
        }
code_?:
        FUN_?();
        FUN_?();
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void ActivateAtCategoryWithSlot(UIPushOption, Int32, Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::
     PlayerInventoryController_ActivateAtCategoryWithSlot
               (PlayerInventoryController *this,UIPushOption__Enum options,int32_t categoryId,
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
  PlayerInventoryController_Activate(this,options,(MethodInfo *)0x0);
  pPVar1 = (this->fields).repository;
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
         (this_03 = (TabState *)
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                               (this->fields).selectedTab,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              ), this_03 != (TabState *)0x0)) {
        TabState::TabState_SetPage(this_03,page,(MethodInfo *)0x0);
        this_02 = (this->fields).inventoryController;
        if (this_02 != (InventoryController *)0x0) {
          InventoryController::InventoryController_HighlightSlot
                    (this_02,slotPosition % (this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
          PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void DragFailed() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_DragFailed
               (PlayerInventoryController *this,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).draggedPreviewItem = (PlayerInventoryPreviewItem *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).draggedPreviewItem >> 0xc);
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
    FUN_?(&StringLiteral_Preview_Root___PlayerInventory);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar6 = (this->fields).previewRootTransform;
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
  if (pTVar6 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar6->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar6 = (this->fields).previewRootTransform;
      if (pTVar6 == (Transform *)0x0) goto code_?;
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar6,(MethodInfo *)0x0);
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
                ((Object_1 *)pGVar7,0.0,(MethodInfo *)0x0);
    }
  }
  pGVar7 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  pSVar8 = StringLiteral_Preview_Root___PlayerInventory;
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
            (pGVar7,pSVar8,(MethodInfo *)0x0);
  if (pGVar7 != (GameObject *)0x0) {
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar7,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).previewRootTransform = pTVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).previewRootTransform >> 0xc);
      uVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar3 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar3;
        if (bVar1) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pLVar9 = (this->fields).previewedObjects;
    uVar2 = 0;
    if (pLVar9 != (List_1_MVWorldObjectClient_ *)0x0) {
      lVar10 = 0x20;
      do {
        pLVar11 = (this->fields).previewedObjects;
        if ((pLVar9->fields)._size <= (int)uVar2) {
          if (pLVar11 == (List_1_MVWorldObjectClient_ *)0x0) break;
          length = (pLVar11->fields)._size;
          piVar12 = &(pLVar11->fields)._version;
          *piVar12 = *piVar12 + 1;
          (pLVar11->fields)._size = 0;
          if (0 < length) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pLVar11->fields)._items,0,length,(MethodInfo *)0x0);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__InventoryItemDragHandler);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (TypeInfo__InventoryItemDragHandler->static_fields->dragging != 0) {
            pPVar13 = (this->fields).draggedPreviewItem;
            if ((pPVar13 == (PlayerInventoryPreviewItem *)0x0) ||
               (pIVar14 = (pPVar13->fields).item, pIVar14 == (InventoryItem *)0x0)) break;
            if ((pIVar14->fields).hasData != 0) {
              pLVar9 = (this->fields).previewedObjects;
              if (pLVar9 == (List_1_MVWorldObjectClient_ *)0x0) break;
              FUN_?(pLVar9,(this->fields).worldObjectDataCopy);
              pMVar15 = (this->fields).worldObjectDataCopy;
              if ((pMVar15 == (MVWorldObjectClient *)0x0) ||
                 (pTVar6 = (pMVar15->fields).transform, pTVar6 == (Transform *)0x0)) break;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar6,(this->fields).previewRootTransform,1,(MethodInfo *)0x0);
              pIVar16 = (this->fields).draggedPreview;
              if ((pIVar16 == (InventoryItemPreviewer *)0x0) ||
                 (obj = (pIVar16->fields).previewCam, obj == (Camera *)0x0)) break;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar17 = (obj->fields)._._._.m_CachedPtr;
              if (pvVar17 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              pcVar18 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              pcRam_? = pcVar18;
              pvVar17 = (void *)(*pcRam_?)(pvVar17);
              pTVar6 = (Transform *)
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                        Unmarshal_UnmarshalUnityObject
                                  (pvVar17,
                                   UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                  );
              if (pTVar6 == (Transform *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar6,(this->fields).previewRootTransform,1,(MethodInfo *)0x0);
            }
          }
          pIVar20 = (this->fields).inventoryController;
          if ((pIVar20 != (InventoryController *)0x0) &&
             (pIVar21 = (pIVar20->fields).inventorySlots, pIVar21 != (InventorySlots *)0x0)) {
            InventorySlots::InventorySlots_Clear(pIVar21,(MethodInfo *)0x0);
            this_00 = (this->fields).tabs;
            if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
              tabState = (TabState *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                    (this->fields).selectedTab,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                   );
              pIVar20 = (this->fields).inventoryController;
              uVar2 = (this->fields).selectedTab;
              if (tabState != (TabState *)0x0) {
                page = (tabState->fields).currentPage;
                uVar22 = FUN_?((float)(tabState->fields).highestSlotIndex /
                                       (float)(tabState->fields).slotsPrPage);
                uVar23 = 1;
                if (1 < (int)uVar22) {
                  uVar23 = uVar22;
                }
                if ((pIVar20 != (InventoryController *)0x0) &&
                   (pTVar24 = (pIVar20->fields).tabMenu, pTVar24 != (TabMenuBase *)0x0)) {
                  (*(pTVar24->klass->vtable).__unknown_1.methodPtr)
                            (pTVar24,(ulonglong)uVar2,(ulonglong)page,(ulonglong)uVar23,
                             (pTVar24->klass->vtable).__unknown_1.method);
                  pIVar21 = (pIVar20->fields).inventorySlots;
                  if (pIVar21 != (InventorySlots *)0x0) {
                    InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                              (pIVar21,page,(pIVar20->fields).numberOfSlots,(MethodInfo *)0x0);
                    this_01 = (this->fields).tabsNonLocalized;
                    pPVar25 = (this->fields).repository;
                    if (((this_01 != (Dictionary_2_System_Int32_System_String_ *)0x0) &&
                        (pSVar8 = (String *)
                                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Int32,System::Object]::
                                   Dictionary_2_System_Int32_System_Object__get_Item
                                             ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                                              (this->fields).selectedTab,
                                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                                             ), pPVar25 != (PlayerShopInventoryRepository *)0x0)) &&
                       (this_02 = (pPVar25->fields)._playerInventoryRepository_k__BackingField,
                       this_02 != (PlayerInventoryRepository *)0x0)) {
                      pLVar26 = PlayerInventoryRepository::
                                PlayerInventoryRepository_GetItemsInCategorySlow
                                          (this_02,pSVar8,(MethodInfo *)0x0);
                      bVar1 = iRam_? != 0;
                      (this->fields).items = pLVar26;
                      if (bVar1) {
                        uVar2 = (uint)((ulonglong)&(this->fields).items >> 0xc);
                        uVar5 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                        do {
                          uVar4 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
                          puVar3 = (ulonglong *)(uVar5 * 8 + 0xADDR);
                          LOCK();
                          bVar1 = uVar4 == *puVar3;
                          if (bVar1) {
                            *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar1);
                      }
                      if ((tabState->fields)._TabID_k__BackingField == 1) {
                        PlayerInventoryController_UpdateSlotsWithDragAndDrop
                                  (this,tabState,(MethodInfo *)0x0);
                      }
                      else {
                        PlayerInventoryController_UpdateSlots(this,tabState,(MethodInfo *)0x0);
                      }
                      return;
                    }
                  }
                }
              }
            }
          }
          break;
        }
        if (pLVar11 == (List_1_MVWorldObjectClient_ *)0x0) break;
        if ((uint)(pLVar11->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pMVar27 = (pLVar11->fields)._items;
        if (pMVar27 == (MVWorldObjectClient__Array *)0x0) break;
        if ((uint)pMVar27->max_length <= uVar2) {
          FUN_?();
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pMVar15 = *(MVWorldObjectClient **)((longlong)pMVar27->vector + lVar10 + -0x20);
        if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
          FUN_?();
        }
        MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar15,(MethodInfo *)0x0);
        pLVar9 = (this->fields).previewedObjects;
        uVar2 = uVar2 + 1;
        lVar10 = lVar10 + 8;
      } while (pLVar9 != (List_1_MVWorldObjectClient_ *)0x0);
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* MVWorldObjectClient GetWorldObjectFromItemData(InventoryItem) */

MVWorldObjectClient *
Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_GetWorldObjectFromItemData
          (InventoryItem *item,MethodInfo *method)

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
  if (item != (InventoryItem *)0x0) {
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


/* Void Initialize() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_Initialize
               (PlayerInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&TypeInfo__TabState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    pPVar1 = (PlayerShopInventoryRepository *)FUN_?();
    (this->fields).repository = pPVar1;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).repository >> 0xc);
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
    (this->fields).selectedTab = 1;
    key_00 = 1;
    pPVar1 = (this->fields).repository;
    if ((((pPVar1 != (PlayerShopInventoryRepository *)0x0) &&
         (pPVar7 = (pPVar1->fields)._playerInventoryRepository_k__BackingField,
         pPVar7 != (PlayerInventoryRepository *)0x0)) &&
        (this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)(pPVar7->fields).categories,
        this_00 !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
        )) && (pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                        UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                        Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                                  (this_00,
                                   MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                                  ),
              pDVar8 != (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         *)0x0)) {
      pDStack_9 = (pDVar8->fields)._dictionary;
      ppDStack_10 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     **)0x0;
      uStack_11 = 0;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&pDStack_12 >> 0xc);
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
      if (pDStack_9 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        pDStack_12 = pDStack_9;
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      ppDStack_10 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     **)((ulonglong)(uint)(pDStack_9->fields)._version << 0x20);
      uStack_11 = 0;
      uStack_14 = (longlong)ppDStack_10;
      uStack_15 = 0;
      pDStack_12 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0;
      ppDStack_10 = &pDStack_9;
      while (pDStack_9 !=
             (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
              *)0x0) {
        if (uStack_14._4_4_ != (pDStack_9->fields)._version) goto code_?;
        uVar2 = (uint)uStack_14;
        do {
          if (pDStack_9 ==
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) goto code_?;
          if ((uint)(pDStack_9->fields)._count <= uVar2) {
            uStack_14 = CONCAT44(uStack_14._4_4_,(pDStack_9->fields)._count + 1);
            uStack_15 = (ulonglong)uStack_15._4_4_ << 0x20;
            pDVar16 = (this->fields).tabs;
            if ((pDVar16 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
               (pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)pDVar16,1,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                   ), pOVar17 != (Object *)0x0)) {
              *(int *)&pOVar17[2].klass =
                   *(int *)&pOVar17[2].klass + (this->fields).numberOfSlotsPrPage;
              return;
            }
            goto code_?;
          }
          pDVar18 = (pDStack_9->fields)._entries;
          lVar3 = (longlong)(int)uVar2;
          uStack_14 = CONCAT44(uStack_14._4_4_,uVar2 + 1);
          if (pDVar18 ==
              (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
               *)0x0) goto code_?;
          if ((uint)pDVar18->max_length <= uVar2) goto code_?;
          uVar2 = uVar2 + 1;
        } while ((&pDVar18->vector[0].hashCode)[lVar3 * 6] < 0);
        key = *(Int32Enum__Enum *)((longlong)&pDVar18->vector[0].key + lVar3 * 0x18);
        uStack_15 = CONCAT44(uStack_15._4_4_,key);
        this_01 = (this->fields).tabsNonLocalized;
        pOVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                            MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                           );
        if (this_01 == (Dictionary_2_System_Int32_System_String_ *)0x0) goto code_?;
        uVar4 = CONCAT71((int7)((ulonglong)pDVar18 >> 8),1);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,key_00,pOVar17,
                   (InsertionBehavior__Enum)uVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__set_Item_int__System__String_
                   ->klass->rgctx_data[0x22].method);
        pDVar16 = (this->fields).tabs;
        pSVar19 = (String *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,key,
                             MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Item_InventoryCategoryType_
                            );
        pSVar19 = TM::TM__(pSVar19,(MethodInfo *)0x0);
        iVar20 = (this->fields).numberOfSlotsPrPage;
        pOVar17 = (Object *)FUN_?(TypeInfo__TabState);
        *(undefined4 *)((longlong)&pOVar17[2].klass + 4) = 1;
        *(Int32Enum__Enum *)&pOVar17[2].monitor = key;
        *(int32_t *)&pOVar17[1].klass = iVar20;
        pOVar17[1].monitor = (MonitorData *)pSVar19;
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)&pOVar17[1].monitor >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          uVar4 = (ulonglong)(uVar2 & 0x3f);
          do {
            uVar21 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar5 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar6 = uVar21 == *puVar5;
            if (bVar6) {
              *puVar5 = uVar21 | 1L << uVar4;
            }
            UNLOCK();
          } while (!bVar6);
        }
        pPVar1 = (this->fields).repository;
        if (pPVar1 == (PlayerShopInventoryRepository *)0x0) goto code_?;
        iVar20 = UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
                PlayerShopInventoryRepository_HighestSlotIndex(pPVar1,key,(MethodInfo *)0x0);
        if (pOVar17 == (Object *)0x0) goto code_?;
        *(int32_t *)&pOVar17[2].klass = iVar20;
        if (pDVar16 == (Dictionary_2_System_Int32_TabState_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar16,key_00,pOVar17,
                   (InsertionBehavior__Enum)CONCAT71((int7)(uVar4 >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__set_Item_int__TabState_
                   ->klass->rgctx_data[0x22].method);
        key_00 = key_00 + 1;
      }
      goto code_?;
    }
  }
code_?:
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
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  mscorlib.dll::System::ThrowHelper::
  ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0)
  ;
code_?:
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void InventoryChanged() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_InventoryChanged
               (PlayerInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_PlayerInventoryController__Inven);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_PlayerInventoryController__Inven,(MethodInfo *)0x0);
  PlayerInventoryController_UpdatePageCount(this,(MethodInfo *)0x0);
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
    FUN_?(&StringLiteral_Preview_Root___PlayerInventory);
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
  pSVar3 = StringLiteral_Preview_Root___PlayerInventory;
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
      do {
        pLVar11 = (this->fields).previewedObjects;
        if ((pLVar9->fields)._size <= (int)uVar5) {
          if (pLVar11 == (List_1_MVWorldObjectClient_ *)0x0) break;
          length = (pLVar11->fields)._size;
          piVar12 = &(pLVar11->fields)._version;
          *piVar12 = *piVar12 + 1;
          (pLVar11->fields)._size = 0;
          if (0 < length) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pLVar11->fields)._items,0,length,(MethodInfo *)0x0);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__InventoryItemDragHandler);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (TypeInfo__InventoryItemDragHandler->static_fields->dragging != 0) {
            pPVar13 = (this->fields).draggedPreviewItem;
            if ((pPVar13 == (PlayerInventoryPreviewItem *)0x0) ||
               (pIVar14 = (pPVar13->fields).item, pIVar14 == (InventoryItem *)0x0)) break;
            if ((pIVar14->fields).hasData != 0) {
              pLVar9 = (this->fields).previewedObjects;
              if (pLVar9 == (List_1_MVWorldObjectClient_ *)0x0) break;
              FUN_?(pLVar9,(this->fields).worldObjectDataCopy);
              pMVar15 = (this->fields).worldObjectDataCopy;
              if ((pMVar15 == (MVWorldObjectClient *)0x0) ||
                 (pTVar1 = (pMVar15->fields).transform, pTVar1 == (Transform *)0x0)) break;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar1,(this->fields).previewRootTransform,1,(MethodInfo *)0x0);
              pIVar16 = (this->fields).draggedPreview;
              if ((pIVar16 == (InventoryItemPreviewer *)0x0) ||
                 (obj = (pIVar16->fields).previewCam, obj == (Camera *)0x0)) break;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar17 = (obj->fields)._._._.m_CachedPtr;
              if (pvVar17 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              pcVar18 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              pcRam_? = pcVar18;
              pvVar17 = (void *)(*pcRam_?)(pvVar17);
              pTVar1 = (Transform *)
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                        Unmarshal_UnmarshalUnityObject
                                  (pvVar17,
                                   UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                  );
              if (pTVar1 == (Transform *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar1,(this->fields).previewRootTransform,1,(MethodInfo *)0x0);
            }
          }
          pIVar20 = (this->fields).inventoryController;
          if ((pIVar20 != (InventoryController *)0x0) &&
             (pIVar21 = (pIVar20->fields).inventorySlots, pIVar21 != (InventorySlots *)0x0)) {
            InventorySlots::InventorySlots_Clear(pIVar21,(MethodInfo *)0x0);
            this_00 = (this->fields).tabs;
            if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
              tabState = (TabState *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                    (this->fields).selectedTab,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                   );
              pIVar20 = (this->fields).inventoryController;
              uVar5 = (this->fields).selectedTab;
              if (tabState != (TabState *)0x0) {
                page = (tabState->fields).currentPage;
                uVar22 = FUN_?((float)(tabState->fields).highestSlotIndex /
                                       (float)(tabState->fields).slotsPrPage);
                uVar23 = 1;
                if (1 < (int)uVar22) {
                  uVar23 = uVar22;
                }
                if ((pIVar20 != (InventoryController *)0x0) &&
                   (pTVar24 = (pIVar20->fields).tabMenu, pTVar24 != (TabMenuBase *)0x0)) {
                  (*(pTVar24->klass->vtable).__unknown_1.methodPtr)
                            (pTVar24,(ulonglong)uVar5,(ulonglong)page,(ulonglong)uVar23,
                             (pTVar24->klass->vtable).__unknown_1.method);
                  pIVar21 = (pIVar20->fields).inventorySlots;
                  if (pIVar21 != (InventorySlots *)0x0) {
                    InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                              (pIVar21,page,(pIVar20->fields).numberOfSlots,(MethodInfo *)0x0);
                    this_01 = (this->fields).tabsNonLocalized;
                    pPVar25 = (this->fields).repository;
                    if (((this_01 != (Dictionary_2_System_Int32_System_String_ *)0x0) &&
                        (pSVar3 = (String *)
                                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Int32,System::Object]::
                                   Dictionary_2_System_Int32_System_Object__get_Item
                                             ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                                              (this->fields).selectedTab,
                                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                                             ), pPVar25 != (PlayerShopInventoryRepository *)0x0)) &&
                       (this_02 = (pPVar25->fields)._playerInventoryRepository_k__BackingField,
                       this_02 != (PlayerInventoryRepository *)0x0)) {
                      pLVar26 = PlayerInventoryRepository::
                                PlayerInventoryRepository_GetItemsInCategorySlow
                                          (this_02,pSVar3,(MethodInfo *)0x0);
                      bVar4 = iRam_? != 0;
                      (this->fields).items = pLVar26;
                      if (bVar4) {
                        uVar5 = (uint)((ulonglong)&(this->fields).items >> 0xc);
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
                      if ((tabState->fields)._TabID_k__BackingField == 1) {
                        PlayerInventoryController_UpdateSlotsWithDragAndDrop
                                  (this,tabState,(MethodInfo *)0x0);
                      }
                      else {
                        PlayerInventoryController_UpdateSlots(this,tabState,(MethodInfo *)0x0);
                      }
                      return;
                    }
                  }
                }
              }
            }
          }
          break;
        }
        if (pLVar11 == (List_1_MVWorldObjectClient_ *)0x0) break;
        if ((uint)(pLVar11->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pMVar27 = (pLVar11->fields)._items;
        if (pMVar27 == (MVWorldObjectClient__Array *)0x0) break;
        if ((uint)pMVar27->max_length <= uVar5) {
          FUN_?();
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pMVar15 = *(MVWorldObjectClient **)((longlong)pMVar27->vector + lVar10 + -0x20);
        if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
          FUN_?();
        }
        MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar15,(MethodInfo *)0x0);
        pLVar9 = (this->fields).previewedObjects;
        uVar5 = uVar5 + 1;
        lVar10 = lVar10 + 8;
      } while (pLVar9 != (List_1_MVWorldObjectClient_ *)0x0);
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void ItemDataLoaded(PlayerInventoryPreviewItem, InventoryItem) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_ItemDataLoaded
               (PlayerInventoryController *this,PlayerInventoryPreviewItem *itemPreview,
               InventoryItem *inventoryItem,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  woPreviewObject =
       PlayerInventoryController_GetWorldObjectFromItemData(inventoryItem,(MethodInfo *)0x0);
  pLVar1 = (this->fields).previewedObjects;
  if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
    FUN_?(pLVar1,woPreviewObject);
    if (itemPreview != (PlayerInventoryPreviewItem *)0x0) {
      PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_LoadItemPreviewer
                (itemPreview,(this->fields).previewRootTransform,inventoryItem,woPreviewObject,
                 (MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_OnPop
               (PlayerInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
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
    FUN_?(&MethodInfo__PlayerInventoryController__InventoryChanged__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).tempPreviewRoot;
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
      pTVar1 = (this->fields).tempPreviewRoot;
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
  pPVar3 = (this->fields).repository;
  if (pPVar3 != (PlayerShopInventoryRepository *)0x0) {
    pAVar4 = (pPVar3->fields).OnInventoryChanged;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__PlayerInventoryController__InventoryChanged__,
               (MethodInfo *)0x0);
    pAVar4 = (Action *)
              mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar4 == (Action *)0x0) {
      (pPVar3->fields).OnInventoryChanged = (Action *)0x0;
    }
    else {
      pAVar5 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 == (Action *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (pPVar3->fields).OnInventoryChanged = pAVar5;
      pAVar5 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 == (Action *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(pPVar3->fields).OnInventoryChanged >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pLVar12 = (this->fields).previewedObjects;
    uVar7 = 0;
    if (pLVar12 != (List_1_MVWorldObjectClient_ *)0x0) {
      lVar13 = 0x20;
      do {
        pLVar14 = (this->fields).previewedObjects;
        if ((pLVar12->fields)._size <= (int)uVar7) {
          if (pLVar14 != (List_1_MVWorldObjectClient_ *)0x0) {
            length = (pLVar14->fields)._size;
            piVar15 = &(pLVar14->fields)._version;
            *piVar15 = *piVar15 + 1;
            (pLVar14->fields)._size = 0;
            if (0 < length) {
              mscorlib.dll::System::Array::Array_Clear
                        ((Array *)(pLVar14->fields)._items,0,length,(MethodInfo *)0x0);
            }
            return;
          }
          break;
        }
        if (pLVar14 == (List_1_MVWorldObjectClient_ *)0x0) break;
        if ((uint)(pLVar14->fields)._size <= uVar7) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pMVar16 = (pLVar14->fields)._items;
        if (pMVar16 == (MVWorldObjectClient__Array *)0x0) break;
        if ((uint)pMVar16->max_length <= uVar7) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        wo = *(MVWorldObjectClient **)((longlong)pMVar16->vector + lVar13 + -0x20);
        if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
          FUN_?();
        }
        MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(wo,(MethodInfo *)0x0);
        pLVar12 = (this->fields).previewedObjects;
        uVar7 = uVar7 + 1;
        lVar13 = lVar13 + 8;
      } while (pLVar12 != (List_1_MVWorldObjectClient_ *)0x0);
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OpenPage(UIPushOption, Int32, Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_OpenPage
               (PlayerInventoryController *this,UIPushOption__Enum options,int32_t categoryId,
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
  PlayerInventoryController_Activate(this,options,(MethodInfo *)0x0);
  pPVar1 = (this->fields).repository;
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
        PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_OpenTab
               (PlayerInventoryController *this,UIPushOption__Enum options,int32_t categoryId,
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
  PlayerInventoryController_Activate(this,options,(MethodInfo *)0x0);
  pPVar1 = (this->fields).repository;
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
        PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_PageTurned
               (PlayerInventoryController *this,int32_t dir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_temp_Root___PlayerInventory);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).tabs;
  if ((this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) &&
     (this_01 = (TabState *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                           (this->fields).selectedTab,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                          ), this_01 != (TabState *)0x0)) {
    bVar1 = TabState::TabState_UpdatePage(this_01,dir,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pTVar2 = (this->fields).tempPreviewRoot;
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
      if (pTVar2 != (Transform *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pTVar2->fields)._._.m_CachedPtr != (void *)0x0) {
          pTVar2 = (this->fields).tempPreviewRoot;
          if (pTVar2 == (Transform *)0x0) goto code_?;
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar2,(MethodInfo *)0x0);
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
                    ((Object_1 *)pGVar3,0.0,(MethodInfo *)0x0);
        }
      }
      pGVar3 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
      name = StringLiteral_temp_Root___PlayerInventory;
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
                (pGVar3,name,(MethodInfo *)0x0);
      if (pGVar3 == (GameObject *)0x0) goto code_?;
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar3,(MethodInfo *)0x0);
      bVar4 = iRam_? != 0;
      (this->fields).tempPreviewRoot = pTVar2;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).tempPreviewRoot >> 0xc);
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
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__InventoryItemDragHandler);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__InventoryItemDragHandler->static_fields->dragging != 0) {
        PlayerInventoryController_PreserveDraggedItemAcrossPages(this,(MethodInfo *)0x0);
      }
      PlayerInventoryController_UpdateContent(this,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void PreserveDraggedItemAcrossPages() */

void Assembly-CSharp.dll::PlayerInventoryController::
     PlayerInventoryController_PreserveDraggedItemAcrossPages
               (PlayerInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                 );
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
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).draggedPreviewItem;
  if ((pPVar1 != (PlayerInventoryPreviewItem *)0x0) &&
     (item = (pPVar1->fields).item, item != (InventoryItem *)0x0)) {
    if ((item->fields).hasData == 0) {
      return;
    }
    pMVar2 = PlayerInventoryController_GetWorldObjectFromItemData(item,(MethodInfo *)0x0);
    iVar3 = iRam_?;
    (this->fields).worldObjectDataCopy = pMVar2;
    if (iVar3 != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields).worldObjectDataCopy >> 0xc);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
        iVar3 = iRam_?;
      } while (!bVar8);
    }
    pPVar1 = (this->fields).draggedPreviewItem;
    if (pPVar1 != (PlayerInventoryPreviewItem *)0x0) {
      (this->fields).draggedPreview = (pPVar1->fields).objectPreviewer;
      if (iVar3 != 0) {
        uVar4 = (uint)((ulonglong)&(this->fields).draggedPreview >> 0xc);
        lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      pLVar9 = (this->fields).previewedObjects;
      uVar4 = 0;
      if (pLVar9 != (List_1_MVWorldObjectClient_ *)0x0) {
        lVar5 = 0x20;
        do {
          if ((pLVar9->fields)._size <= (int)uVar4) {
            pMVar2 = (this->fields).worldObjectDataCopy;
            if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
              FUN_?();
            }
            MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar2,(MethodInfo *)0x0);
            return;
          }
          pLVar9 = (this->fields).previewedObjects;
          if (pLVar9 == (List_1_MVWorldObjectClient_ *)0x0) break;
          if ((uint)(pLVar9->fields)._size <= uVar4) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pMVar11 = (pLVar9->fields)._items;
          if (pMVar11 == (MVWorldObjectClient__Array *)0x0) break;
          if ((uint)pMVar11->max_length <= uVar4) {
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          lVar12 = *(longlong *)((longlong)pMVar11->vector + lVar5 + -0x20);
          if (lVar12 == 0) break;
          iVar3 = *(int *)(lVar12 + 0xbc);
          pIVar13 = (this->fields).draggedPreview;
          if ((pIVar13 == (InventoryItemPreviewer *)0x0) ||
             (this_00 = (pIVar13->fields)._PreviewGameObject_k__BackingField,
             this_00 == (GameObject *)0x0)) break;
          iVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                            ((Object_1 *)this_00,(MethodInfo *)0x0);
          pLVar9 = (this->fields).previewedObjects;
          if (iVar3 == iVar14) {
            if (((pLVar9 != (List_1_MVWorldObjectClient_ *)0x0) &&
                (lVar5 = FUN_?(pLVar9,uVar4), lVar5 != 0)) &&
               (*(Transform **)(lVar5 + 0xd8) != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (*(Transform **)(lVar5 + 0xd8),(this->fields).tempPreviewRoot,1,
                         (MethodInfo *)0x0);
              pIVar13 = (this->fields).draggedPreview;
              if (((pIVar13 != (InventoryItemPreviewer *)0x0) &&
                  (this_01 = (pIVar13->fields).previewCam, this_01 != (Camera *)0x0)) &&
                 (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this_01,(MethodInfo *)0x0),
                 this_02 != (Transform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (this_02,(this->fields).tempPreviewRoot,1,(MethodInfo *)0x0);
                pMVar2 = (this->fields).worldObjectDataCopy;
                if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
                  FUN_?();
                }
                MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar2,(MethodInfo *)0x0);
                pLVar9 = (this->fields).previewedObjects;
                if (pLVar9 != (List_1_MVWorldObjectClient_ *)0x0) {
                  pMVar2 = (MVWorldObjectClient *)FUN_?(pLVar9,uVar4);
                  (this->fields).worldObjectDataCopy = pMVar2;
                  func_?(&(this->fields).worldObjectDataCopy);
                  pLVar9 = (this->fields).previewedObjects;
                  if (pLVar9 != (List_1_MVWorldObjectClient_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__RemoveAt
                              ((List_1_System_Object_ *)pLVar9,uVar4,
                               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                              );
                    return;
                  }
                }
              }
            }
            break;
          }
          uVar4 = uVar4 + 1;
          lVar5 = lVar5 + 8;
        } while (pLVar9 != (List_1_MVWorldObjectClient_ *)0x0);
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetCurrentDragTarget(GameObject) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_SetCurrentDragTarget
               (PlayerInventoryController *this,GameObject *draggingGameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (draggingGameObject == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pPVar2 = (PlayerInventoryPreviewItem *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                     (draggingGameObject,
                      PlayerInventoryPreviewItem_MethodInfo__UnityEngine__GameObject__GetComponent<PlayerInventoryPreviewItem>__
                     );
  bVar3 = iRam_? != 0;
  (this->fields).draggedPreviewItem = pPVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).draggedPreviewItem >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return;
}


/* Void SlotChanged(Int32, Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_SlotChanged
               (PlayerInventoryController *this,int32_t from,int32_t to,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,CONCAT44(in_register_00000014,from),
                  CONCAT44(in_register_00000084,to),uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__InventoryItemDragHandler);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (from == to) {
    return;
  }
  pLVar2 = (this->fields).items;
  lVar3 = 0;
  lVar4 = 0;
  uVar5 = 0;
  if (pLVar2 != (List_1_InventoryItem_ *)0x0) {
    lVar6 = 0x20;
    do {
      if ((pLVar2->fields)._size <= (int)uVar5) {
        if (lVar4 == 0) {
          if (lVar3 != 0) {
            *(int32_t *)(lVar3 + 0x54) = to;
            pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)FUN_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
            Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                      (pDVar7,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            aiStackX_10[0] = *(int32_t *)(lVar3 + 0x10);
            pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_10);
            aiStackX_10[0] = to;
            pOVar9 = (Object *)FUN_?(uRam_?,aiStackX_10);
            if (pDVar7 !=
                (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar7,pOVar8,pOVar9,
                         CONCAT31((int3)((uint)uVar1 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar10 != (MVGameControllerBase *)0x0) &&
                  (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
                 (pMVar12 = (pMVar11->fields).operationRequests,
                 pMVar12 != (MVNetworkGame_OperationRequests *)0x0)) {
                MVNetworkGame+OperationRequests::
                MVNetworkGame_OperationRequests_UpdateInventorySlots
                          (pMVar12,(Dictionary_2_System_Object_System_Object_ *)pDVar7,
                           (MethodInfo *)0x0);
                bVar13 = iRam_? == 0;
                (this->fields).draggedPreviewItem = (PlayerInventoryPreviewItem *)0x0;
                if (bVar13) {
                  return;
                }
                uVar5 = (uint)((ulonglong)&(this->fields).draggedPreviewItem >> 0xc);
                lVar4 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                do {
                  uVar14 = *(ulonglong *)(lVar4 + 0xADDR);
                  puVar15 = (ulonglong *)(lVar4 + 0xADDR);
                  LOCK();
                  bVar13 = uVar14 == *puVar15;
                  if (bVar13) {
                    *puVar15 = uVar14 | 1L << (uVar5 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar13);
                return;
              }
            }
          }
        }
        else {
          if (*(char *)(lVar4 + 0x4d) != '\0') {
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_destination_isDefaultInvItem,(MethodInfo *)0x0);
            TypeInfo__InventoryItemDragHandler->static_fields->dragRejected = 1;
            return;
          }
          pPVar16 = (this->fields).repository;
          if (((pPVar16 != (PlayerShopInventoryRepository *)0x0) &&
              ((pPVar16->fields)._playerInventoryRepository_k__BackingField !=
               (PlayerInventoryRepository *)0x0)) && (lVar3 != 0)) {
            uVar17 = *(undefined4 *)(lVar3 + 0x54);
            *(undefined4 *)(lVar3 + 0x54) = *(undefined4 *)(lVar4 + 0x54);
            *(undefined4 *)(lVar4 + 0x54) = uVar17;
            pDVar7 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                       *)FUN_?(
                                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                      );
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
            Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                      (pDVar7,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                      );
            aiStackX_10[0] = *(int32_t *)(lVar3 + 0x10);
            pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_10);
            aiStackX_10[0] = to;
            pOVar9 = (Object *)FUN_?(uRam_?,aiStackX_10);
            if (pDVar7 !=
                (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)0x0) {
              behavior = CONCAT31((int3)((uint)uVar1 >> 8),2);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar7,pOVar8,pOVar9,
                         behavior,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                                  ->klass->rgctx_data[0x22].method);
              aiStackX_10[0] = *(int32_t *)(lVar4 + 0x10);
              pOVar8 = (Object *)FUN_?(uRam_?,aiStackX_10);
              aiStackX_10[0] = from;
              pOVar9 = (Object *)FUN_?(uRam_?,aiStackX_10);
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__TryInsert
                        ((Dictionary_2_System_Object_System_Object_ *)pDVar7,pOVar8,pOVar9,
                         CONCAT31((int3)(behavior >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         ->klass->rgctx_data[0x22].method);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if (((pMVar10 != (MVGameControllerBase *)0x0) &&
                  (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
                 (pMVar12 = (pMVar11->fields).operationRequests,
                 pMVar12 != (MVNetworkGame_OperationRequests *)0x0)) {
                MVNetworkGame+OperationRequests::
                MVNetworkGame_OperationRequests_UpdateInventorySlots
                          (pMVar12,(Dictionary_2_System_Object_System_Object_ *)pDVar7,
                           (MethodInfo *)0x0);
                bVar13 = iRam_? == 0;
                (this->fields).draggedPreviewItem = (PlayerInventoryPreviewItem *)0x0;
                if (bVar13) {
                  return;
                }
                uVar5 = (uint)((ulonglong)&(this->fields).draggedPreviewItem >> 0xc);
                lVar4 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
                do {
                  uVar14 = *(ulonglong *)(lVar4 + 0xADDR);
                  puVar15 = (ulonglong *)(lVar4 + 0xADDR);
                  LOCK();
                  bVar13 = uVar14 == *puVar15;
                  if (bVar13) {
                    *puVar15 = uVar14 | 1L << (uVar5 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar13);
                return;
              }
            }
          }
        }
        break;
      }
      pLVar2 = (this->fields).items;
      if (pLVar2 == (List_1_InventoryItem_ *)0x0) break;
      if ((uint)(pLVar2->fields)._size <= uVar5) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      pIVar19 = (pLVar2->fields)._items;
      if (pIVar19 == (InventoryItem__Array *)0x0) break;
      if ((uint)pIVar19->max_length <= uVar5) {
        FUN_?();
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      lVar20 = *(longlong *)((longlong)pIVar19->vector + lVar6 + -0x20);
      if (lVar20 == 0) break;
      pLVar2 = (this->fields).items;
      if (*(int *)(lVar20 + 0x54) == from) {
        lVar3 = FUN_?(pLVar2);
      }
      else {
        lVar20 = FUN_?(pLVar2);
        if (lVar20 == 0) break;
        if (*(int *)(lVar20 + 0x54) == to) {
          if ((this->fields).items == (List_1_InventoryItem_ *)0x0) break;
          lVar4 = FUN_?();
        }
      }
      pLVar2 = (this->fields).items;
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (pLVar2 != (List_1_InventoryItem_ *)0x0);
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void TabSelected(Int32) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_TabSelected
               (PlayerInventoryController *this,int32_t tab,MethodInfo *method)

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
    FUN_?(&StringLiteral_Preview_Root___PlayerInventory);
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
  pSVar3 = StringLiteral_Preview_Root___PlayerInventory;
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
      do {
        pLVar11 = (this->fields).previewedObjects;
        if ((pLVar9->fields)._size <= (int)uVar5) {
          if (pLVar11 == (List_1_MVWorldObjectClient_ *)0x0) break;
          length = (pLVar11->fields)._size;
          piVar12 = &(pLVar11->fields)._version;
          *piVar12 = *piVar12 + 1;
          (pLVar11->fields)._size = 0;
          if (0 < length) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pLVar11->fields)._items,0,length,(MethodInfo *)0x0);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__InventoryItemDragHandler);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (TypeInfo__InventoryItemDragHandler->static_fields->dragging != 0) {
            pPVar13 = (this->fields).draggedPreviewItem;
            if ((pPVar13 == (PlayerInventoryPreviewItem *)0x0) ||
               (pIVar14 = (pPVar13->fields).item, pIVar14 == (InventoryItem *)0x0)) break;
            if ((pIVar14->fields).hasData != 0) {
              pLVar9 = (this->fields).previewedObjects;
              if (pLVar9 == (List_1_MVWorldObjectClient_ *)0x0) break;
              FUN_?(pLVar9,(this->fields).worldObjectDataCopy);
              pMVar15 = (this->fields).worldObjectDataCopy;
              if ((pMVar15 == (MVWorldObjectClient *)0x0) ||
                 (pTVar1 = (pMVar15->fields).transform, pTVar1 == (Transform *)0x0)) break;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar1,(this->fields).previewRootTransform,1,(MethodInfo *)0x0);
              pIVar16 = (this->fields).draggedPreview;
              if ((pIVar16 == (InventoryItemPreviewer *)0x0) ||
                 (obj = (pIVar16->fields).previewCam, obj == (Camera *)0x0)) break;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar17 = (obj->fields)._._._.m_CachedPtr;
              if (pvVar17 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              pcVar18 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              pcRam_? = pcVar18;
              pvVar17 = (void *)(*pcRam_?)(pvVar17);
              pTVar1 = (Transform *)
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                        Unmarshal_UnmarshalUnityObject
                                  (pvVar17,
                                   UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                  );
              if (pTVar1 == (Transform *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar1,(this->fields).previewRootTransform,1,(MethodInfo *)0x0);
            }
          }
          pIVar20 = (this->fields).inventoryController;
          if ((pIVar20 != (InventoryController *)0x0) &&
             (pIVar21 = (pIVar20->fields).inventorySlots, pIVar21 != (InventorySlots *)0x0)) {
            InventorySlots::InventorySlots_Clear(pIVar21,(MethodInfo *)0x0);
            this_00 = (this->fields).tabs;
            if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
              tabState = (TabState *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                    (this->fields).selectedTab,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                   );
              pIVar20 = (this->fields).inventoryController;
              uVar5 = (this->fields).selectedTab;
              if (tabState != (TabState *)0x0) {
                page = (tabState->fields).currentPage;
                uVar22 = FUN_?((float)(tabState->fields).highestSlotIndex /
                                       (float)(tabState->fields).slotsPrPage);
                uVar23 = 1;
                if (1 < (int)uVar22) {
                  uVar23 = uVar22;
                }
                if ((pIVar20 != (InventoryController *)0x0) &&
                   (pTVar24 = (pIVar20->fields).tabMenu, pTVar24 != (TabMenuBase *)0x0)) {
                  (*(pTVar24->klass->vtable).__unknown_1.methodPtr)
                            (pTVar24,(ulonglong)uVar5,(ulonglong)page,(ulonglong)uVar23,
                             (pTVar24->klass->vtable).__unknown_1.method);
                  pIVar21 = (pIVar20->fields).inventorySlots;
                  if (pIVar21 != (InventorySlots *)0x0) {
                    InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                              (pIVar21,page,(pIVar20->fields).numberOfSlots,(MethodInfo *)0x0);
                    this_01 = (this->fields).tabsNonLocalized;
                    pPVar25 = (this->fields).repository;
                    if (((this_01 != (Dictionary_2_System_Int32_System_String_ *)0x0) &&
                        (pSVar3 = (String *)
                                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Int32,System::Object]::
                                   Dictionary_2_System_Int32_System_Object__get_Item
                                             ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                                              (this->fields).selectedTab,
                                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                                             ), pPVar25 != (PlayerShopInventoryRepository *)0x0)) &&
                       (this_02 = (pPVar25->fields)._playerInventoryRepository_k__BackingField,
                       this_02 != (PlayerInventoryRepository *)0x0)) {
                      pLVar26 = PlayerInventoryRepository::
                                PlayerInventoryRepository_GetItemsInCategorySlow
                                          (this_02,pSVar3,(MethodInfo *)0x0);
                      bVar4 = iRam_? != 0;
                      (this->fields).items = pLVar26;
                      if (bVar4) {
                        uVar5 = (uint)((ulonglong)&(this->fields).items >> 0xc);
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
                      if ((tabState->fields)._TabID_k__BackingField == 1) {
                        PlayerInventoryController_UpdateSlotsWithDragAndDrop
                                  (this,tabState,(MethodInfo *)0x0);
                      }
                      else {
                        PlayerInventoryController_UpdateSlots(this,tabState,(MethodInfo *)0x0);
                      }
                      return;
                    }
                  }
                }
              }
            }
          }
          break;
        }
        if (pLVar11 == (List_1_MVWorldObjectClient_ *)0x0) break;
        if ((uint)(pLVar11->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pMVar27 = (pLVar11->fields)._items;
        if (pMVar27 == (MVWorldObjectClient__Array *)0x0) break;
        if ((uint)pMVar27->max_length <= uVar5) {
          FUN_?();
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pMVar15 = *(MVWorldObjectClient **)((longlong)pMVar27->vector + lVar10 + -0x20);
        if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
          FUN_?();
        }
        MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar15,(MethodInfo *)0x0);
        pLVar9 = (this->fields).previewedObjects;
        uVar5 = uVar5 + 1;
        lVar10 = lVar10 + 8;
      } while (pLVar9 != (List_1_MVWorldObjectClient_ *)0x0);
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_UpdateContent
               (PlayerInventoryController *this,MethodInfo *method)

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
    FUN_?(&StringLiteral_Preview_Root___PlayerInventory);
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
  pSVar3 = StringLiteral_Preview_Root___PlayerInventory;
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
      do {
        pLVar11 = (this->fields).previewedObjects;
        if ((pLVar9->fields)._size <= (int)uVar5) {
          if (pLVar11 == (List_1_MVWorldObjectClient_ *)0x0) break;
          length = (pLVar11->fields)._size;
          piVar12 = &(pLVar11->fields)._version;
          *piVar12 = *piVar12 + 1;
          (pLVar11->fields)._size = 0;
          if (0 < length) {
            mscorlib.dll::System::Array::Array_Clear
                      ((Array *)(pLVar11->fields)._items,0,length,(MethodInfo *)0x0);
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__InventoryItemDragHandler);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (TypeInfo__InventoryItemDragHandler->static_fields->dragging != 0) {
            pPVar13 = (this->fields).draggedPreviewItem;
            if ((pPVar13 == (PlayerInventoryPreviewItem *)0x0) ||
               (pIVar14 = (pPVar13->fields).item, pIVar14 == (InventoryItem *)0x0)) break;
            if ((pIVar14->fields).hasData != 0) {
              pLVar9 = (this->fields).previewedObjects;
              if (pLVar9 == (List_1_MVWorldObjectClient_ *)0x0) break;
              FUN_?(pLVar9,(this->fields).worldObjectDataCopy);
              pMVar15 = (this->fields).worldObjectDataCopy;
              if ((pMVar15 == (MVWorldObjectClient *)0x0) ||
                 (pTVar1 = (pMVar15->fields).transform, pTVar1 == (Transform *)0x0)) break;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar1,(this->fields).previewRootTransform,1,(MethodInfo *)0x0);
              pIVar16 = (this->fields).draggedPreview;
              if ((pIVar16 == (InventoryItemPreviewer *)0x0) ||
                 (obj = (pIVar16->fields).previewCam, obj == (Camera *)0x0)) break;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar17 = (obj->fields)._._._.m_CachedPtr;
              if (pvVar17 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              pcVar18 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar18 = (code *)FUN_?(&UNK_?), pcVar18 == (code *)0x0)) {
                uVar19 = func_?(&UNK_?);
                FUN_?(uVar19,0);
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              pcRam_? = pcVar18;
              pvVar17 = (void *)(*pcRam_?)(pvVar17);
              pTVar1 = (Transform *)
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                        Unmarshal_UnmarshalUnityObject
                                  (pvVar17,
                                   UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                                  );
              if (pTVar1 == (Transform *)0x0) break;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                        (pTVar1,(this->fields).previewRootTransform,1,(MethodInfo *)0x0);
            }
          }
          pIVar20 = (this->fields).inventoryController;
          if ((pIVar20 != (InventoryController *)0x0) &&
             (pIVar21 = (pIVar20->fields).inventorySlots, pIVar21 != (InventorySlots *)0x0)) {
            InventorySlots::InventorySlots_Clear(pIVar21,(MethodInfo *)0x0);
            this_00 = (this->fields).tabs;
            if (this_00 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
              tabState = (TabState *)
                         mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)this_00,
                                    (this->fields).selectedTab,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                   );
              pIVar20 = (this->fields).inventoryController;
              uVar5 = (this->fields).selectedTab;
              if (tabState != (TabState *)0x0) {
                page = (tabState->fields).currentPage;
                uVar22 = FUN_?((float)(tabState->fields).highestSlotIndex /
                                       (float)(tabState->fields).slotsPrPage);
                uVar23 = 1;
                if (1 < (int)uVar22) {
                  uVar23 = uVar22;
                }
                if ((pIVar20 != (InventoryController *)0x0) &&
                   (pTVar24 = (pIVar20->fields).tabMenu, pTVar24 != (TabMenuBase *)0x0)) {
                  (*(pTVar24->klass->vtable).__unknown_1.methodPtr)
                            (pTVar24,(ulonglong)uVar5,(ulonglong)page,(ulonglong)uVar23,
                             (pTVar24->klass->vtable).__unknown_1.method);
                  pIVar21 = (pIVar20->fields).inventorySlots;
                  if (pIVar21 != (InventorySlots *)0x0) {
                    InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                              (pIVar21,page,(pIVar20->fields).numberOfSlots,(MethodInfo *)0x0);
                    this_01 = (this->fields).tabsNonLocalized;
                    pPVar25 = (this->fields).repository;
                    if (((this_01 != (Dictionary_2_System_Int32_System_String_ *)0x0) &&
                        (pSVar3 = (String *)
                                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                   Int32,System::Object]::
                                   Dictionary_2_System_Int32_System_Object__get_Item
                                             ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                                              (this->fields).selectedTab,
                                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                                             ), pPVar25 != (PlayerShopInventoryRepository *)0x0)) &&
                       (this_02 = (pPVar25->fields)._playerInventoryRepository_k__BackingField,
                       this_02 != (PlayerInventoryRepository *)0x0)) {
                      pLVar26 = PlayerInventoryRepository::
                                PlayerInventoryRepository_GetItemsInCategorySlow
                                          (this_02,pSVar3,(MethodInfo *)0x0);
                      bVar4 = iRam_? != 0;
                      (this->fields).items = pLVar26;
                      if (bVar4) {
                        uVar5 = (uint)((ulonglong)&(this->fields).items >> 0xc);
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
                      if ((tabState->fields)._TabID_k__BackingField == 1) {
                        PlayerInventoryController_UpdateSlotsWithDragAndDrop
                                  (this,tabState,(MethodInfo *)0x0);
                      }
                      else {
                        PlayerInventoryController_UpdateSlots(this,tabState,(MethodInfo *)0x0);
                      }
                      return;
                    }
                  }
                }
              }
            }
          }
          break;
        }
        if (pLVar11 == (List_1_MVWorldObjectClient_ *)0x0) break;
        if ((uint)(pLVar11->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pMVar27 = (pLVar11->fields)._items;
        if (pMVar27 == (MVWorldObjectClient__Array *)0x0) break;
        if ((uint)pMVar27->max_length <= uVar5) {
          FUN_?();
          pcVar18 = (code *)swi(3);
          (*pcVar18)();
          return;
        }
        pMVar15 = *(MVWorldObjectClient **)((longlong)pMVar27->vector + lVar10 + -0x20);
        if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
          FUN_?();
        }
        MVWorldObjectClient::MVWorldObjectClient_DestroyRecursive(pMVar15,(MethodInfo *)0x0);
        pLVar9 = (this->fields).previewedObjects;
        uVar5 = uVar5 + 1;
        lVar10 = lVar10 + 8;
      } while (pLVar9 != (List_1_MVWorldObjectClient_ *)0x0);
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void UpdatePageCount() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_UpdatePageCount
               (PlayerInventoryController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<InventoryCategoryType,_System::String>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  key = 1;
  pPVar1 = (this->fields).repository;
  if ((((pPVar1 == (PlayerShopInventoryRepository *)0x0) ||
       (pPVar2 = (pPVar1->fields)._playerInventoryRepository_k__BackingField,
       pPVar2 == (PlayerInventoryRepository *)0x0)) ||
      (this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)(pPVar2->fields).categories,
      this_00 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0))
     || (pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::TypeConverterRegistry+ConverterKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                             (this_00,
                              MethodInfo__System__Collections__Generic__Dictionary<InventoryCategoryType,_System::String>__get_Keys__
                             ),
        pDVar3 ==
        (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
         *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_5 = (pDVar3->fields)._dictionary;
  puStack_6 = (undefined4 *)0x0;
  uStack_7 = 0;
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&uStack_5 >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  if (uStack_5 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iStack_12 = (uStack_5->fields)._version;
  uStack_7 = 0;
  uStack_5._4_4_ = (undefined4)((ulonglong)uStack_5 >> 0x20);
  uStack_13 = (undefined4)uStack_5;
  uStack_14 = uStack_5._4_4_;
  uStack_15 = 0;
  uStack_16 = 0;
  uStack_5 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0;
  puStack_6 = &uStack_13;
  do {
    lVar17 = CONCAT44(uStack_14,uStack_13);
    if (lVar17 == 0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (iStack_12 != *(int *)(lVar17 + 0x2c)) {
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
      goto code_?;
    }
    do {
      if (lVar17 == 0) goto code_?;
      if (*(uint *)(lVar17 + 0x20) <= uStack_15) {
        return;
      }
      lVar18 = *(longlong *)(lVar17 + 0x18);
      lVar19 = (longlong)(int)uStack_15;
      uVar8 = uStack_15 + 1;
      if (lVar18 == 0) goto code_?;
      if (*(uint *)(lVar18 + 0x18) <= uStack_15) {
        uStack_15 = uVar8;
        FUN_?();
        goto code_?;
      }
      uStack_15 = uVar8;
    } while (*(int *)(lVar18 + 0x20 + lVar19 * 0x18) < 0);
    categoryID = *(InventoryCategoryType__Enum *)(lVar18 + 0x28 + lVar19 * 0x18);
    uStack_16 = CONCAT44(uStack_16._4_4_,categoryID);
    iVar20 = 0;
    if (categoryID == InventoryCategoryType__Enum_CubeModels) {
      iVar20 = (this->fields).numberOfSlotsPrPage;
    }
    this_01 = (this->fields).tabs;
    if (this_01 == (Dictionary_2_System_Int32_TabState_ *)0x0) {
code_?:
      FUN_?();
      uVar8 = uStack_15;
code_?:
      uStack_15 = uVar8;
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
    pOVar21 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__get_Item
                        ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                        );
    pPVar1 = (this->fields).repository;
    if (pPVar1 == (PlayerShopInventoryRepository *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    iVar22 = UGUI::Desktop::Scripts::EditMode::Inventories::PlayerShopInventoryRepository::
            PlayerShopInventoryRepository_HighestSlotIndex(pPVar1,categoryID,(MethodInfo *)0x0);
    if (pOVar21 == (Object *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    *(int32_t *)&pOVar21[2].klass = iVar22 + iVar20;
    key = key + 1;
  } while( true );
}


/* Void UpdateSlots(TabState) */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController_UpdateSlots
               (PlayerInventoryController *this,TabState *tabState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__Add_InventoryItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  PlayerInventoryPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<PlayerInventoryPreviewItem>_PlayerInventoryPreviewItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).itemsWithData;
  if (pLVar1 != (List_1_InventoryItem_ *)0x0) {
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    length = (pLVar1->fields)._size;
    slotIndex = 0;
    (pLVar1->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pLVar1 = (this->fields).items;
    if (pLVar1 != (List_1_InventoryItem_ *)0x0) {
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
      pLStack_8 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
      uStack_9 = 0;
      LStack_10._8_8_ = pLStack_8;
      LStack_10._current = (Object *)0x0;
      uStack_4 = 0;
      pLStack_8 = &LStack_10;
      LStack_10._list = (List_1_System_Object_ *)pLVar1;
      while (bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_10,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<InventoryItem>__MoveNext__
                               ), bVar11 != 0) {
        if (LStack_10._current == (Object *)0x0) goto code_?;
        if (*(char *)&LStack_10._current[3].monitor != '\0') {
          if ((this->fields).itemsWithData == (List_1_InventoryItem_ *)0x0)
          goto code_?;
          FUN_?();
        }
      }
      if (0 < (this->fields).numberOfSlotsPrPage) {
        if (tabState == (TabState *)0x0) goto code_?;
        do {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Int32);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          lVar12 = FUN_?(TypeInfo__System__Int32,2);
          if (lVar12 == 0) goto code_?;
          if (*(int *)(lVar12 + 0x18) == 0) {
code_?:
            FUN_?();
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar14 = ((tabState->fields).currentPage + -1) * (tabState->fields).slotsPrPage;
          *(int *)(lVar12 + 0x20) = iVar14;
          if ((*(uint *)(lVar12 + 0x18) < 2) ||
             (*(int32_t *)(lVar12 + 0x24) =
                   (tabState->fields).currentPage * (tabState->fields).slotsPrPage,
             *(int *)(lVar12 + 0x18) == 0)) goto code_?;
          pLVar1 = (this->fields).itemsWithData;
          if (pLVar1 == (List_1_InventoryItem_ *)0x0) goto code_?;
          if ((pLVar1->fields)._size <= slotIndex + iVar14) {
            return;
          }
          item = (InventoryItem *)FUN_?(pLVar1);
          woPreviewObject =
               PlayerInventoryController_GetWorldObjectFromItemData(item,(MethodInfo *)0x0);
          pPVar15 = (this->fields).previewItemPrefab;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pPVar15 = (PlayerInventoryPreviewItem *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pPVar15,
                               PlayerInventoryPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<PlayerInventoryPreviewItem>_PlayerInventoryPreviewItem_
                              );
          if (pPVar15 == (PlayerInventoryPreviewItem *)0x0) goto code_?;
          PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Initialize_1
                    (pPVar15,(this->fields).previewRootTransform,item,woPreviewObject,0,
                     (MethodInfo *)0x0);
          this_00 = (this->fields).inventoryController;
          item_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pPVar15,(MethodInfo *)0x0);
          if (this_00 == (InventoryController *)0x0) goto code_?;
          InventoryController::InventoryController_AddObject
                    (this_00,item_00,slotIndex,(MethodInfo *)0x0);
          pLVar16 = (this->fields).previewedObjects;
          if (pLVar16 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
          FUN_?(pLVar16,woPreviewObject);
          slotIndex = slotIndex + 1;
        } while (slotIndex < (this->fields).numberOfSlotsPrPage);
      }
      return;
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateSlotsWithDragAndDrop(TabState) */

void Assembly-CSharp.dll::PlayerInventoryController::
     PlayerInventoryController_UpdateSlotsWithDragAndDrop
               (PlayerInventoryController *this,TabState *tabState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  PlayerInventoryPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<PlayerInventoryPreviewItem>_PlayerInventoryPreviewItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Drag_preview_item_found);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).items;
  uVar2 = 0;
  if (pLVar1 != (List_1_InventoryItem_ *)0x0) {
    lVar3 = 0x20;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      pLVar1 = (this->fields).items;
      if (pLVar1 == (List_1_InventoryItem_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pIVar5 = (pLVar1->fields)._items;
      if (pIVar5 == (InventoryItem__Array *)0x0) break;
      if ((uint)pIVar5->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      item = *(InventoryItem **)((longlong)pIVar5->vector + lVar3 + -0x20);
      if (((item == (InventoryItem *)0x0) ||
          (iVar6 = (item->fields).slotPosition, tabState == (TabState *)0x0)) ||
         (pIVar7 = TabState::TabState_get_SlotRange(tabState,(MethodInfo *)0x0),
         pIVar7 == (Int32__Array *)0x0)) break;
      if ((int)pIVar7->max_length == 0) goto code_?;
      if (pIVar7->vector[0] <= iVar6) {
        if ((uint)pIVar7->max_length < 2) goto code_?;
        if (iVar6 < pIVar7->vector[1]) {
          pPVar8 = (this->fields).draggedPreviewItem;
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
          if (pPVar8 != (PlayerInventoryPreviewItem *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pPVar8->fields)._._._._.m_CachedPtr != (void *)0x0) {
              pPVar8 = (this->fields).draggedPreviewItem;
              if ((pPVar8 == (PlayerInventoryPreviewItem *)0x0) ||
                 (pIVar9 = (pPVar8->fields).item, pIVar9 == (InventoryItem *)0x0)) break;
              if ((item->fields).itemID == (pIVar9->fields).itemID) {
                if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                  FUN_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                          ((Object *)StringLiteral_Drag_preview_item_found,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
          pPVar8 = (this->fields).previewItemPrefab;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pPVar8 = (PlayerInventoryPreviewItem *)
                   UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                             ((Object *)pPVar8,
                              PlayerInventoryPreviewItem_MethodInfo__UnityEngine__Object__Instantiate<PlayerInventoryPreviewItem>_PlayerInventoryPreviewItem_
                             );
          if ((item->fields).hasData == 0) {
            if (pPVar8 == (PlayerInventoryPreviewItem *)0x0) break;
            PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Initialize
                      (pPVar8,(this->fields).previewRootTransform,item,
                       (item->fields).isDefaultInvItem == 0,1,(MethodInfo *)0x0);
          }
          else {
            woPreviewObject =
                 PlayerInventoryController_GetWorldObjectFromItemData(item,(MethodInfo *)0x0);
            pLVar10 = (this->fields).previewedObjects;
            if ((pLVar10 == (List_1_MVWorldObjectClient_ *)0x0) ||
               (FUN_?(pLVar10,woPreviewObject), pPVar8 == (PlayerInventoryPreviewItem *)0x0))
            break;
            PlayerInventoryPreviewItem::PlayerInventoryPreviewItem_Initialize_1
                      (pPVar8,(this->fields).previewRootTransform,item,woPreviewObject,
                       (item->fields).isDefaultInvItem == 0,(MethodInfo *)0x0);
          }
          this_00 = (this->fields).inventoryController;
          item_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pPVar8,(MethodInfo *)0x0);
          if (this_00 == (InventoryController *)0x0) break;
          InventoryController::InventoryController_AddObject
                    (this_00,item_00,
                     (item->fields).slotPosition % (this->fields).numberOfSlotsPrPage,
                     (MethodInfo *)0x0);
        }
      }
code_?:
      pLVar1 = (this->fields).items;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
      if (pLVar1 == (List_1_InventoryItem_ *)0x0) break;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* PlayerInventoryController() */

void Assembly-CSharp.dll::PlayerInventoryController::PlayerInventoryController__ctor
               (PlayerInventoryController *this,MethodInfo *method)

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
    FUN_?(&MethodInfo__System__Collections__Generic__List<InventoryItem>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<InventoryItem>);
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
  pLVar7 = (List_1_InventoryItem_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar7,
             MethodInfo__System__Collections__Generic__List<InventoryItem>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).items = pLVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).items >> 0xc);
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
  pLVar7 = (List_1_InventoryItem_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<InventoryItem>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar7,
             MethodInfo__System__Collections__Generic__List<InventoryItem>__List__);
  bVar2 = iRam_? != 0;
  (this->fields).itemsWithData = pLVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).itemsWithData >> 0xc);
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

