
/* Void Initialize(CubeModelingStateMachine) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_Initialize
               (MaterialsController *this,CubeModelingStateMachine *cubeModelingStateMachine,
               MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).cubeModelingStateMachine = cubeModelingStateMachine;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).cubeModelingStateMachine >> 0xc);
    method = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (longlong)method;
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TabState,0,method);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Materials);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar6 = TM::TM__(StringLiteral_Materials,(MethodInfo *)0x0);
  iVar7 = (this->fields).numberOfSlotsPrPage;
  pTVar8 = (TabState *)FUN_?(TypeInfo__TabState);
  bVar1 = iRam_? != 0;
  (pTVar8->fields).name = pSVar6;
  (pTVar8->fields).currentPage = 1;
  (pTVar8->fields)._TabID_k__BackingField = 1;
  (pTVar8->fields).slotsPrPage = iVar7;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(pTVar8->fields).name >> 0xc);
    lVar9 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar3 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar1 = uVar5 == *puVar3;
      if (bVar1) {
        *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar10 != (MVGameControllerBase *)0x0) &&
      (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
     (pMVar12 = (pMVar11->fields)._MaterialRepository_k__BackingField,
     pMVar12 != (MVMaterialRepository *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar13 = (pMVar12->fields).materials;
    if (pLVar13 != (List_1_MVMaterial_ *)0x0) {
      bVar1 = iRam_? != 0;
      (pTVar8->fields).highestSlotIndex = (pLVar13->fields)._size + -1;
      (this->fields).tab = pTVar8;
      if (bVar1) {
        uVar2 = (uint)((ulonglong)&(this->fields).tab >> 0xc);
        lVar9 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar3 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar1 = uVar5 == *puVar3;
          if (bVar1) {
            *puVar3 = uVar5 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      return;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void InitializeMaterialInventoryData() */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_InitializeMaterialInventoryData
               (MaterialsController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TabState);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Materials);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Materials,(MethodInfo *)0x0);
  iVar2 = (this->fields).numberOfSlotsPrPage;
  pTVar3 = (TabState *)FUN_?(TypeInfo__TabState);
  bVar4 = iRam_? != 0;
  (pTVar3->fields).name = pSVar1;
  (pTVar3->fields).currentPage = 1;
  (pTVar3->fields)._TabID_k__BackingField = 1;
  (pTVar3->fields).slotsPrPage = iVar2;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(pTVar3->fields).name >> 0xc);
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
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar9 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar9 != (MVGameControllerBase *)0x0) &&
      (pMVar10 = (pMVar9->fields).game, pMVar10 != (MVNetworkGame *)0x0)) &&
     (pMVar11 = (pMVar10->fields)._MaterialRepository_k__BackingField,
     pMVar11 != (MVMaterialRepository *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar12 = (pMVar11->fields).materials;
    if (pLVar12 != (List_1_MVMaterial_ *)0x0) {
      bVar4 = iRam_? != 0;
      (pTVar3->fields).highestSlotIndex = (pLVar12->fields)._size + -1;
      (this->fields).tab = pTVar3;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(this->fields).tab >> 0xc);
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
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnMaterialChanged(Byte) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_OnMaterialChanged
               (MaterialsController *this,uint8_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).desktopCubeModelingController;
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
  if (pDVar1 != (DesktopCubeModelingController *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pDVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pDVar1 = (this->fields).desktopCubeModelingController;
      if (pDVar1 == (DesktopCubeModelingController *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      DesktopCubeModelingController::DesktopCubeModelingController_SetMaterial
                (pDVar1,id,(MethodInfo *)0x0);
    }
  }
  pUVar3 = (this->fields).materialChange;
  if (pUVar3 != (UnityAction_1_System_Byte_ *)0x0) {
    (*(pUVar3->fields)._._.invoke_impl)
              ((pUVar3->fields)._._.method_code,id,(pUVar3->fields)._._.method);
  }
  return;
}


/* Void OnMaterialClicked(Byte) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_OnMaterialClicked
               (MaterialsController *this,uint8_t materialID,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&
                  MethodInfo__MaterialsController____c___OnMaterialClicked_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MaterialsController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cubeModelingStateMachine;
  if (this_00 != (CubeModelingStateMachine *)0x0) {
    CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
              (this_00,materialID,(MethodInfo *)0x0);
    pDVar1 = (this->fields).desktopCubeModelingController;
    if (((pDVar1 != (DesktopCubeModelingController *)0x0) &&
        (pDVar2 = (pDVar1->fields).desktopCubeModelingController,
        pDVar2 != (DesktopCubeModelingToolsController *)0x0)) &&
       (pBVar3 = (pDVar2->fields).defaultTool, pBVar3 != (Button *)0x0)) {
      this_01 = (UnityEvent *)(pBVar3->fields).m_OnClick;
      if (this_01 != (UnityEvent *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_Invoke
                  (this_01,(MethodInfo *)0x0);
      }
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__MaterialsController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MaterialsController____c);
      }
      this_03 = TypeInfo__MaterialsController____c->static_fields->__9__16_0;
      if (this_03 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__MaterialsController____c->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__MaterialsController____c);
        }
        object = TypeInfo__MaterialsController____c->static_fields->__9;
        this_03 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
                   MethodInfo__MaterialsController____c___OnMaterialClicked_b__16_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__MaterialsController____c->static_fields->__9__16_0 = this_03;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&TypeInfo__MaterialsController____c->static_fields->__9__16_0
                         >> 0xc);
          puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar6;
            LOCK();
            uVar8 = *puVar6;
            if (uVar7 == uVar8) {
              *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar8);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar9 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
      if ((
          UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
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
        if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar9);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar4,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar11 = (longlong)(pLVar10->fields)._size;
        uVar5 = 0;
        if (0 < lVar11) {
          lVar12 = 0;
          lVar13 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar10->fields)._size <= uVar5) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pTVar15 = (pLVar10->fields)._items;
            if (pTVar15 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar15->max_length <= uVar5) {
              FUN_?();
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            this_02 = *(Component **)((longlong)pTVar15->vector + lVar13 + -0x20);
            if (this_02 == (Component *)0x0) goto code_?;
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_02,(MethodInfo *)0x0);
            bVar16 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                     ExecuteEvents_Execute_18
                               (pGVar4,(BaseEventData *)0x0,
                                (ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
                                (pMVar9->field7_0x38).rgctx_data[1].method);
            if (bVar16 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_02,(MethodInfo *)0x0);
              return;
            }
            uVar5 = uVar5 + 1;
            lVar12 = lVar12 + 1;
            lVar13 = lVar13 + 8;
          } while (lVar12 < lVar11);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_OnPop
               (MaterialsController *this,MethodInfo *method)

{
  pUVar1 = (this->fields).materialsPop;
  if (pUVar1 != (UnityAction *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_PageTurned
               (MaterialsController *this,int32_t dir,MethodInfo *method)

{
  pTVar1 = (this->fields).tab;
  if (pTVar1 == (TabState *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = TabState::TabState_UpdatePage(pTVar1,dir,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MaterialViewItem_MethodInfo__UnityEngine__Object__Instantiate<MaterialViewItem>_MaterialViewItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar4 = (this->fields).inventoryController;
  if ((pIVar4 != (InventoryController *)0x0) &&
     (pIVar5 = (pIVar4->fields).inventorySlots, pIVar5 != (InventorySlots *)0x0)) {
    InventorySlots::InventorySlots_Clear(pIVar5,(MethodInfo *)0x0);
    pTVar1 = (this->fields).tab;
    pIVar4 = (this->fields).inventoryController;
    if (pTVar1 != (TabState *)0x0) {
      page = (pTVar1->fields).currentPage;
      uVar6 = FUN_?((float)(pTVar1->fields).highestSlotIndex /
                             (float)(pTVar1->fields).slotsPrPage);
      uVar7 = 1;
      if (1 < (int)uVar6) {
        uVar7 = uVar6;
      }
      if ((pIVar4 != (InventoryController *)0x0) &&
         (pTVar8 = (pIVar4->fields).tabMenu, pTVar8 != (TabMenuBase *)0x0)) {
        (*(pTVar8->klass->vtable).__unknown_1.methodPtr)
                  (pTVar8,0,(ulonglong)page,(ulonglong)uVar7,
                   (pTVar8->klass->vtable).__unknown_1.method);
        pIVar5 = (pIVar4->fields).inventorySlots;
        if (pIVar5 != (InventorySlots *)0x0) {
          InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                    (pIVar5,page,(pIVar4->fields).numberOfSlots,(MethodInfo *)0x0);
          uVar9 = 0;
          do {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar10 == (MVGameControllerBase *)0x0) ||
                (pMVar11 = (pMVar10->fields).game, pMVar11 == (MVNetworkGame *)0x0)) ||
               (pMVar12 = (pMVar11->fields)._MaterialRepository_k__BackingField,
               pMVar12 == (MVMaterialRepository *)0x0)) break;
            if (cRam_? == '\0') {
              FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar13 = (pMVar12->fields).materials;
            if (pLVar13 == (List_1_MVMaterial_ *)0x0) break;
            materialId = (uint8_t)uVar9;
            iVar14 = (int)uVar9;
            if ((pLVar13->fields)._size <= iVar14) {
              return;
            }
            pTVar1 = (this->fields).tab;
            if (pTVar1 == (TabState *)0x0) break;
            pIVar15 = TabState::TabState_get_SlotRange(pTVar1,(MethodInfo *)0x0);
            if (pIVar15 == (Int32__Array *)0x0) break;
            if ((int)pIVar15->max_length == 0) goto code_?;
            if (pIVar15->vector[0] <= iVar14) {
              if ((uint)pIVar15->max_length < 2) {
code_?:
                FUN_?();
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (iVar14 < pIVar15->vector[1]) {
                pMVar11 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar11 == (MVNetworkGame *)0x0) ||
                   (pMVar12 = (pMVar11->fields)._MaterialRepository_k__BackingField,
                   pMVar12 == (MVMaterialRepository *)0x0)) break;
                this_01 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                    (pMVar12,materialId,(MethodInfo *)0x0);
                pMVar16 = (this->fields).materialViewItemPrefab;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pMVar16 = (MaterialViewItem *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                    ((Object *)pMVar16,
                                     MaterialViewItem_MethodInfo__UnityEngine__Object__Instantiate<MaterialViewItem>_MaterialViewItem_
                                    );
                if (this_01 == (MVMaterial *)0x0) break;
                bVar3 = (this_01->fields).isUnlocked;
                texture2D = (this_01->fields)._ButtonTexture_k__BackingField;
                isAvailable = MVMaterial::MVMaterial_get_IsAvailable(this_01,(MethodInfo *)0x0);
                this_00 = (this->fields).cubeModelingStateMachine;
                if (this_00 == (CubeModelingStateMachine *)0x0) break;
                uVar17 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                   (this_00,(MethodInfo *)0x0);
                if (pMVar16 == (MaterialViewItem *)0x0) break;
                MaterialViewItem::MaterialViewItem_Initialize
                          (pMVar16,materialId,bVar3 == 0,texture2D,isAvailable,materialId == uVar17
                           ,(MethodInfo *)0x0);
                pIVar4 = (this->fields).inventoryController;
                item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pMVar16,(MethodInfo *)0x0);
                if (pIVar4 == (InventoryController *)0x0) break;
                InventoryController::InventoryController_AddObject
                          (pIVar4,item,
                           (int32_t)((longlong)uVar9 % (longlong)(this->fields).numberOfSlotsPrPage
                                    ),(MethodInfo *)0x0);
              }
            }
            uVar9 = (ulonglong)(byte)(materialId + 1);
          } while( true );
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Push(UIPushOption, UnityAction) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_Push
               (MaterialsController *this,UIPushOption__Enum pushOption,UnityAction *onPop,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&
                  MethodInfo__MaterialsController____c__DisplayClass12_0___Push_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MaterialsController____c__DisplayClass12_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__MaterialsController____c__DisplayClass12_0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  object[1].klass = (Object__Class *)this;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
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
  *(UIPushOption__Enum *)&object[1].monitor = pushOption;
  object[2].klass = (Object__Class *)onPop;
  if (iVar7 != 0) {
    uVar2 = (uint)((ulonglong)(object + 2) >> 0xc);
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
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__MaterialsController____c__DisplayClass12_0___Push_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
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
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar8,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar3 = (longlong)(pLVar10->fields)._size;
    uVar2 = 0;
    if (0 < lVar3) {
      lVar11 = 0;
      lVar12 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar13 = (pLVar10->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar2) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar8,(BaseEventData *)0x0,this_01,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar11 < lVar3);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Transform SetActive() */

Transform *
Assembly-CSharp.dll::MaterialsController::MaterialsController_SetActive
          (MaterialsController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  DesktopCubeModelingController_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingController>_DesktopCubeModelingController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).desktopCubeModelingControllerPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pDVar1 = (DesktopCubeModelingController *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pDVar1,
                      DesktopCubeModelingController_MethodInfo__UnityEngine__Object__Instantiate<DesktopCubeModelingController>_DesktopCubeModelingController_
                     );
  bVar2 = iRam_? != 0;
  (this->fields).desktopCubeModelingController = pDVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).desktopCubeModelingController >> 0xc);
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
  pDVar1 = (this->fields).desktopCubeModelingController;
  if (pDVar1 != (DesktopCubeModelingController *)0x0) {
    DesktopCubeModelingController::DesktopCubeModelingController_Initialize
              (pDVar1,(this->fields).cubeModelingStateMachine,(MethodInfo *)0x0);
    this_00 = (this->fields).cubeModelingStateMachine;
    if (this_00 != (CubeModelingStateMachine *)0x0) {
      value = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                        (this_00,(MethodInfo *)0x0);
      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                (this_00,value,(MethodInfo *)0x0);
      pDVar1 = (this->fields).desktopCubeModelingController;
      if (pDVar1 != (DesktopCubeModelingController *)0x0) {
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
        if (pDVar1 == (DesktopCubeModelingController *)0x0) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          pTVar8 = (Transform *)(*pcVar7)();
          return pTVar8;
        }
        pvVar9 = (pDVar1->fields)._._._._.m_CachedPtr;
        if (pvVar9 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pDVar1,(MethodInfo *)0x0);
          pcVar7 = (code *)swi(3);
          pTVar8 = (Transform *)(*pcVar7)();
          return pTVar8;
        }
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar7 = (code *)swi(3);
          pTVar8 = (Transform *)(*pcVar7)();
          return pTVar8;
        }
        pcRam_? = pcVar7;
        plVar11 = (longlong *)(*pcRam_?)(pvVar9);
        pMVar12 = 
        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
        ;
        if ((
            UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
        }
        if (plVar11 != (longlong *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          System__Runtime__InteropServices__GCHandle__MethodInfo__Unity__Collections__LowLevel__Unsafe__UnsafeUtility__As<void*,_System::Runtime::InteropServices::GCHandle>_System__IntPtr__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (((ulonglong)plVar11 & 1) == 0) {
            lVar13 = *plVar11;
          }
          else {
            lVar13 = FUN_?(plVar11);
          }
          pvVar9 = ((pMVar12->field7_0x38).rgctx_data)->rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar9 + 0x135) & 1) == 0) {
            pvVar9 = (void *)FUN_?(pvVar9);
          }
          if (lVar13 != 0) {
            pTVar8 = (Transform *)FUN_?(lVar13,pvVar9);
            if (pTVar8 != (Transform *)0x0) {
              return pTVar8;
            }
            FUN_?(lVar13,pvVar9);
            pcVar7 = (code *)swi(3);
            pTVar8 = (Transform *)(*pcVar7)();
            return pTVar8;
          }
        }
        return (Transform *)0x0;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pTVar8 = (Transform *)(*pcVar7)();
  return pTVar8;
}


/* Void ShowInventory(UIPushOption, Int32) */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_ShowInventory
               (MaterialsController *this,UIPushOption__Enum pushOption,int32_t page,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&MethodInfo__MaterialsController__PageTurned_int_);
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
                  MethodInfo__MaterialsController____c___ShowInventory_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MaterialsController____c__DisplayClass17_0___ShowInventory_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MaterialsController____c__DisplayClass17_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MaterialsController____c);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__MaterialsController____c__DisplayClass17_0);
  if (object_00 != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object_00[1].klass = (Object__Class *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
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
    *(UIPushOption__Enum *)&object_00[1].monitor = pushOption;
    pIVar6 = (this->fields).inventoryControllerPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar6 = (InventoryController *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pIVar6,
                         InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                        );
    bVar1 = iRam_? != 0;
    (this->fields).inventoryController = pIVar6;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).inventoryController >> 0xc);
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
    pIVar6 = (this->fields).inventoryController;
    if (pIVar6 != (InventoryController *)0x0) {
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
        lVar3 = FUN_?(pDVar8,TypeInfo__UnityEngine__Events__UnityAction<int>);
        if (lVar3 == 0) {
          FUN_?(pDVar8,pUVar9);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&(pIVar6->fields).OnPageTurned >> 0xc);
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
      pIVar6 = (this->fields).inventoryController;
      if (pIVar6 != (InventoryController *)0x0) {
        InventoryController::InventoryController_Initialize
                  (pIVar6,(this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
        pTVar11 = (this->fields).tab;
        if (pTVar11 != (TabState *)0x0) {
          (pTVar11->fields).currentPage = page;
          pTVar11 = (this->fields).tab;
          if (((pTVar11 != (TabState *)0x0) &&
              (pIVar6 = (this->fields).inventoryController, pIVar6 != (InventoryController *)0x0))
             && (pTVar12 = (pIVar6->fields).tabMenu, pTVar12 != (TabMenuBase *)0x0)) {
            (*(pTVar12->klass->vtable).__unknown.methodPtr)(pTVar12,0,(pTVar11->fields).name);
            pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__MaterialsController____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__MaterialsController____c);
            }
            this_01 = TypeInfo__MaterialsController____c->static_fields->__9__17_0;
            if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if (*(int *)&(TypeInfo__MaterialsController____c->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__MaterialsController____c);
              }
              object = TypeInfo__MaterialsController____c->static_fields->__9;
              this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                         MethodInfo__MaterialsController____c___ShowInventory_b__17_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__MaterialsController____c->static_fields->__9__17_0 = this_01;
              if (iRam_? != 0) {
                uVar2 = (uint)((ulonglong)
                                &TypeInfo__MaterialsController____c->static_fields->__9__17_0 >> 0xc
                               );
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
            }
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar13,(BaseEventData *)0x0,
                       (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_02,object_00,
                       MethodInfo__MaterialsController____c__DisplayClass17_0___ShowInventory_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar13,(BaseEventData *)0x0,this_02,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            if (cRam_? == '\0') {
              FUN_?(&
                            MaterialViewItem_MethodInfo__UnityEngine__Object__Instantiate<MaterialViewItem>_MaterialViewItem_
                           );
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pIVar6 = (this->fields).inventoryController;
            if ((pIVar6 != (InventoryController *)0x0) &&
               (pIVar14 = (pIVar6->fields).inventorySlots, pIVar14 != (InventorySlots *)0x0)) {
              InventorySlots::InventorySlots_Clear(pIVar14,(MethodInfo *)0x0);
              pTVar11 = (this->fields).tab;
              pIVar6 = (this->fields).inventoryController;
              if (pTVar11 != (TabState *)0x0) {
                uVar2 = (pTVar11->fields).currentPage;
                uVar15 = FUN_?((float)(pTVar11->fields).highestSlotIndex /
                                       (float)(pTVar11->fields).slotsPrPage);
                uVar16 = 1;
                if (1 < (int)uVar15) {
                  uVar16 = uVar15;
                }
                if ((pIVar6 != (InventoryController *)0x0) &&
                   (pTVar12 = (pIVar6->fields).tabMenu, pTVar12 != (TabMenuBase *)0x0)) {
                  (*(pTVar12->klass->vtable).__unknown_1.methodPtr)
                            (pTVar12,0,(ulonglong)uVar2,(ulonglong)uVar16,
                             (pTVar12->klass->vtable).__unknown_1.method);
                  pIVar14 = (pIVar6->fields).inventorySlots;
                  if (pIVar14 != (InventorySlots *)0x0) {
                    InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                              (pIVar14,uVar2,(pIVar6->fields).numberOfSlots,(MethodInfo *)0x0);
                    uVar4 = 0;
                    do {
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__MVGameControllerBase);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
                      if (((pMVar17 == (MVGameControllerBase *)0x0) ||
                          (pMVar18 = (pMVar17->fields).game, pMVar18 == (MVNetworkGame *)0x0)) ||
                         (pMVar19 = (pMVar18->fields)._MaterialRepository_k__BackingField,
                         pMVar19 == (MVMaterialRepository *)0x0)) break;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pLVar20 = (pMVar19->fields).materials;
                      if (pLVar20 == (List_1_MVMaterial_ *)0x0) break;
                      materialId = (uint8_t)uVar4;
                      iVar21 = (int)uVar4;
                      if ((pLVar20->fields)._size <= iVar21) {
                        return;
                      }
                      pTVar11 = (this->fields).tab;
                      if ((pTVar11 == (TabState *)0x0) ||
                         (pIVar22 = TabState::TabState_get_SlotRange(pTVar11,(MethodInfo *)0x0),
                         pIVar22 == (Int32__Array *)0x0)) break;
                      if ((int)pIVar22->max_length == 0) goto code_?;
                      if (pIVar22->vector[0] <= iVar21) {
                        if ((uint)pIVar22->max_length < 2) {
code_?:
                          FUN_?();
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        if (iVar21 < pIVar22->vector[1]) {
                          pMVar18 = MVGameControllerBase::MVGameControllerBase_get_Game
                                              ((MethodInfo *)0x0);
                          if ((pMVar18 == (MVNetworkGame *)0x0) ||
                             (pMVar19 = (pMVar18->fields)._MaterialRepository_k__BackingField,
                             pMVar19 == (MVMaterialRepository *)0x0)) break;
                          this_03 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                              (pMVar19,materialId,(MethodInfo *)0x0);
                          pMVar23 = (this->fields).materialViewItemPrefab;
                          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          pMVar23 = (MaterialViewItem *)
                                    UnityEngine.CoreModule.dll::UnityEngine::Object::
                                    Object_1_Instantiate_4
                                              ((Object *)pMVar23,
                                               MaterialViewItem_MethodInfo__UnityEngine__Object__Instantiate<MaterialViewItem>_MaterialViewItem_
                                              );
                          if (this_03 == (MVMaterial *)0x0) break;
                          bVar24 = (this_03->fields).isUnlocked;
                          texture2D = (this_03->fields)._ButtonTexture_k__BackingField;
                          isAvailable = MVMaterial::MVMaterial_get_IsAvailable
                                                  (this_03,(MethodInfo *)0x0);
                          this_00 = (this->fields).cubeModelingStateMachine;
                          if ((this_00 == (CubeModelingStateMachine *)0x0) ||
                             (uVar25 = CubeModelingStateMachine::
                                       CubeModelingStateMachine_get_CurrentMaterialId
                                                 (this_00,(MethodInfo *)0x0),
                             pMVar23 == (MaterialViewItem *)0x0)) break;
                          MaterialViewItem::MaterialViewItem_Initialize
                                    (pMVar23,materialId,bVar24 == 0,texture2D,isAvailable,
                                     materialId == uVar25,(MethodInfo *)0x0);
                          pIVar6 = (this->fields).inventoryController;
                          pGVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_gameObject((Component *)pMVar23,(MethodInfo *)0x0)
                          ;
                          if (pIVar6 == (InventoryController *)0x0) break;
                          InventoryController::InventoryController_AddObject
                                    (pIVar6,pGVar13,
                                     (int32_t)((longlong)uVar4 %
                                              (longlong)(this->fields).numberOfSlotsPrPage),
                                     (MethodInfo *)0x0);
                        }
                      }
                      uVar4 = (ulonglong)(byte)(materialId + 1);
                    } while( true );
                  }
                }
              }
            }
            FUN_?();
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ShowMaterialInventory() */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_ShowMaterialInventory
               (MaterialsController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inventoryController;
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
  if (pIVar1 != (InventoryController *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pIVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      return;
    }
  }
  pTVar2 = (this->fields).tab;
  if (pTVar2 != (TabState *)0x0) {
    MaterialsController_ShowInventory
              (this,UIPushOption__Enum_Blocking,(pTVar2->fields).currentPage,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowMaterialInventoryFirstPage() */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_ShowMaterialInventoryFirstPage
               (MaterialsController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inventoryController;
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
  if (pIVar1 != (InventoryController *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pIVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      return;
    }
  }
  MaterialsController_ShowInventory(this,UIPushOption__Enum_Blocking,1,(MethodInfo *)0x0);
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::MaterialsController::MaterialsController_UpdateContent
               (MaterialsController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MaterialViewItem_MethodInfo__UnityEngine__Object__Instantiate<MaterialViewItem>_MaterialViewItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).inventoryController;
  if ((pIVar1 != (InventoryController *)0x0) &&
     (pIVar2 = (pIVar1->fields).inventorySlots, pIVar2 != (InventorySlots *)0x0)) {
    InventorySlots::InventorySlots_Clear(pIVar2,(MethodInfo *)0x0);
    pTVar3 = (this->fields).tab;
    pIVar1 = (this->fields).inventoryController;
    if (pTVar3 != (TabState *)0x0) {
      page = (pTVar3->fields).currentPage;
      uVar4 = FUN_?((float)(pTVar3->fields).highestSlotIndex /
                             (float)(pTVar3->fields).slotsPrPage);
      uVar5 = 1;
      if (1 < (int)uVar4) {
        uVar5 = uVar4;
      }
      if ((pIVar1 != (InventoryController *)0x0) &&
         (pTVar6 = (pIVar1->fields).tabMenu, pTVar6 != (TabMenuBase *)0x0)) {
        (*(pTVar6->klass->vtable).__unknown_1.methodPtr)
                  (pTVar6,0,(ulonglong)page,(ulonglong)uVar5,
                   (pTVar6->klass->vtable).__unknown_1.method);
        pIVar2 = (pIVar1->fields).inventorySlots;
        if (pIVar2 != (InventorySlots *)0x0) {
          InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                    (pIVar2,page,(pIVar1->fields).numberOfSlots,(MethodInfo *)0x0);
          uVar7 = 0;
          do {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar8 == (MVGameControllerBase *)0x0) ||
                (pMVar9 = (pMVar8->fields).game, pMVar9 == (MVNetworkGame *)0x0)) ||
               (pMVar10 = (pMVar9->fields)._MaterialRepository_k__BackingField,
               pMVar10 == (MVMaterialRepository *)0x0)) break;
            if (cRam_? == '\0') {
              FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar11 = (pMVar10->fields).materials;
            if (pLVar11 == (List_1_MVMaterial_ *)0x0) break;
            materialId = (uint8_t)uVar7;
            iVar12 = (int)uVar7;
            if ((pLVar11->fields)._size <= iVar12) {
              return;
            }
            pTVar3 = (this->fields).tab;
            if (pTVar3 == (TabState *)0x0) break;
            pIVar13 = TabState::TabState_get_SlotRange(pTVar3,(MethodInfo *)0x0);
            if (pIVar13 == (Int32__Array *)0x0) break;
            if ((int)pIVar13->max_length == 0) goto code_?;
            if (pIVar13->vector[0] <= iVar12) {
              if ((uint)pIVar13->max_length < 2) {
code_?:
                FUN_?();
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              if (iVar12 < pIVar13->vector[1]) {
                pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar9 == (MVNetworkGame *)0x0) ||
                   (pMVar10 = (pMVar9->fields)._MaterialRepository_k__BackingField,
                   pMVar10 == (MVMaterialRepository *)0x0)) break;
                this_01 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                    (pMVar10,materialId,(MethodInfo *)0x0);
                pMVar15 = (this->fields).materialViewItemPrefab;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pMVar15 = (MaterialViewItem *)
                          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                    ((Object *)pMVar15,
                                     MaterialViewItem_MethodInfo__UnityEngine__Object__Instantiate<MaterialViewItem>_MaterialViewItem_
                                    );
                if (this_01 == (MVMaterial *)0x0) break;
                bVar16 = (this_01->fields).isUnlocked;
                texture2D = (this_01->fields)._ButtonTexture_k__BackingField;
                isAvailable = MVMaterial::MVMaterial_get_IsAvailable(this_01,(MethodInfo *)0x0);
                this_00 = (this->fields).cubeModelingStateMachine;
                if (this_00 == (CubeModelingStateMachine *)0x0) break;
                uVar17 = CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterialId
                                   (this_00,(MethodInfo *)0x0);
                if (pMVar15 == (MaterialViewItem *)0x0) break;
                MaterialViewItem::MaterialViewItem_Initialize
                          (pMVar15,materialId,bVar16 == 0,texture2D,isAvailable,materialId == uVar17,
                           (MethodInfo *)0x0);
                pIVar1 = (this->fields).inventoryController;
                item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pMVar15,(MethodInfo *)0x0);
                if (pIVar1 == (InventoryController *)0x0) break;
                InventoryController::InventoryController_AddObject
                          (pIVar1,item,
                           (int32_t)((longlong)uVar7 % (longlong)(this->fields).numberOfSlotsPrPage
                                    ),(MethodInfo *)0x0);
              }
            }
            uVar7 = (ulonglong)(byte)(materialId + 1);
          } while( true );
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

