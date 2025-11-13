
/* Void Activate(ActivateUIElement) */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_Activate
               (DesktopAvatarEditModeController *this,ActivateUIElement__Enum element,
               MethodInfo *method)

{
  if (element == ActivateUIElement__Enum_AvatarAccessoryShop) {
    object_00 = (this->fields).accessoryShopController;
    if (object_00 != (AccessoryShopController *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AccessoryDataManager,2,0);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__AccessoryShopController__ReadyCallback__);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      (object_00->fields).pushOption = 2;
      pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
      this_04 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_04,(Object *)object_00,MethodInfo__AccessoryShopController__ReadyCallback__,
                 (MethodInfo *)0x0);
      pUVar1 = (UnityAction *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar1,(Delegate *)this_04,(MethodInfo *)0x0);
      if (pUVar1 == (UnityAction *)0x0) {
        TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
      }
      else {
        pUVar2 = (UnityAction *)0x0;
        if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar2 = pUVar1;
        }
        if (pUVar2 == (UnityAction *)0x0) {
          FUN_?(pUVar1,TypeInfo__UnityEngine__Events__UnityAction);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar2;
        pUVar2 = (UnityAction *)0x0;
        if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
          pUVar2 = pUVar1;
        }
        if (pUVar2 == (UnityAction *)0x0) {
          FUN_?(pUVar1,TypeInfo__UnityEngine__Events__UnityAction);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)TypeInfo__AccessoryDataManager->static_fields >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__AccessoryDataManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pAVar8 = TypeInfo__AccessoryDataManager->static_fields;
      if (pAVar8->accessoriesReady == 0) {
        if (pAVar8->accessoriesRequested == 0) {
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_01 == (MVNetworkGame_OperationRequests *)0x0) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAccessoryData
                    (this_01,(MethodInfo *)0x0);
          TypeInfo__AccessoryDataManager->static_fields->accessoriesRequested = 1;
          return;
        }
      }
      else if (pAVar8->readyCallback != (UnityAction *)0x0) {
        pUVar1 = pAVar8->readyCallback;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pUVar1->fields)._._.invoke_impl)
                  ((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
        return;
      }
      return;
    }
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (element != ActivateUIElement__Enum_AvatarShop) {
    return;
  }
  this_00 = (Object__Class *)(this->fields).avatarShopController;
  if (this_00 == (Object__Class *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AvatarShopController__PageTurned_int_);
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
    FUN_?(&
                  InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarShopController____c___Activate_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarShopController____c__DisplayClass10_0___Activate_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarShopController____c__DisplayClass10_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarShopController____c);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_01 = (Object *)FUN_?(TypeInfo__AvatarShopController____c__DisplayClass10_0);
  if (object_01 == (Object *)0x0) {
DAT_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar9 = iRam_? != 0;
  object_01[1].klass = this_00;
  if (bVar9) {
    uVar4 = (uint)((ulonglong)(object_01 + 1) >> 0xc);
    lVar10 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar5 = (ulonglong *)(lVar10 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar5;
      if (bVar9) {
        *puVar5 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  *(undefined4 *)&object_01[1].monitor = 1;
  pIVar11 = *(InventoryController **)&(this_00->_0).this_arg.attrs;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar11 = (InventoryController *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pIVar11,
                       InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                      );
  bVar9 = iRam_? != 0;
  (this_00->_0).byval_arg.data.typeHandle = (Il2CppMetadataTypeHandle)pIVar11;
  if (bVar9) {
    uVar4 = (uint)((ulonglong)&(this_00->_0).byval_arg >> 0xc);
    lVar10 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar5 = (ulonglong *)(lVar10 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar5;
      if (bVar9) {
        *puVar5 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pIVar11 = (InventoryController *)(this_00->_0).byval_arg.data.typeHandle;
  if (pIVar11 == (InventoryController *)0x0) goto DAT_?;
  InventoryController::InventoryController_Initialize
            (pIVar11,(this_00->_0).this_arg.data.__klassIndex,(MethodInfo *)0x0);
  pTVar12 = *(TabState **)&(this_00->_0).byval_arg.attrs;
  if (((pTVar12 == (TabState *)0x0) ||
      (pIVar11 = (InventoryController *)(this_00->_0).byval_arg.data.array,
      pIVar11 == (InventoryController *)0x0)) ||
     (pTVar13 = (pIVar11->fields).tabMenu, pTVar13 == (TabMenuBase *)0x0)) goto DAT_?;
  (*(pTVar13->klass->vtable).__unknown.methodPtr)(pTVar13,0,(pTVar12->fields).name);
  pIVar11 = (InventoryController *)(this_00->_0).byval_arg.data.array;
  if (pIVar11 == (InventoryController *)0x0) goto DAT_?;
  pUVar14 = (pIVar11->fields).OnPageTurned;
  pDVar15 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
  FUN_?(pDVar15,this_00);
  pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pUVar14,pDVar15,(MethodInfo *)0x0);
  pUVar16 = TypeInfo__UnityEngine__Events__UnityAction<int>;
  if (pDVar15 == (Delegate *)0x0) {
    (pIVar11->fields).OnPageTurned = (UnityAction_1_System_Int32_ *)0x0;
  }
  else {
    pUVar14 = (UnityAction_1_System_Int32_ *)
              FUN_?(pDVar15,TypeInfo__UnityEngine__Events__UnityAction<int>);
    if (pUVar14 == (UnityAction_1_System_Int32_ *)0x0) {
      FUN_?(pDVar15,pUVar16);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pIVar11->fields).OnPageTurned = pUVar14;
    pUVar16 = TypeInfo__UnityEngine__Events__UnityAction<int>;
    lVar10 = FUN_?();
    if (lVar10 == 0) {
      FUN_?(pDVar15,pUVar16);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(pIVar11->fields).OnPageTurned >> 0xc);
    lVar10 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar7 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar5 = (ulonglong *)(lVar10 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar5;
      if (bVar9) {
        *puVar5 = uVar7 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  pGVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarShopController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarShopController____c);
  }
  this_02 = TypeInfo__AvatarShopController____c->static_fields->__9__10_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarShopController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarShopController____c);
    }
    object = TypeInfo__AvatarShopController____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__AvatarShopController____c___Activate_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarShopController____c->static_fields->__9__10_0 = this_02;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&TypeInfo__AvatarShopController____c->static_fields->__9__10_0 >>
                     0xc);
      lVar10 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar10 + 0xADDR);
        puVar5 = (ulonglong *)(lVar10 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar5;
        if (bVar9) {
          *puVar5 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar17,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pGVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0);
  this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_03,object_01,
             MethodInfo__AvatarShopController____c__DisplayClass10_0___Activate_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar17,(BaseEventData *)0x0,this_03,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AvatarRepositoryItem>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_Root___AvatarShopControl);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar18 = (this_00->_0).castClass;
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
  if (pIVar18 != (Il2CppClass *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((((Transform__Fields *)&pIVar18->name)->_)._.m_CachedPtr != (void *)0x0) {
      pIVar18 = (this_00->_0).castClass;
      if (pIVar18 == (Il2CppClass *)0x0) goto code_?;
      pGVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pIVar18,(MethodInfo *)0x0);
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
                ((Object_1 *)pGVar17,0.0,(MethodInfo *)0x0);
    }
  }
  pGVar17 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  name = StringLiteral_Preview_Root___AvatarShopControl;
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
            (pGVar17,name,(MethodInfo *)0x0);
  if (pGVar17 != (GameObject *)0x0) {
    pIVar18 = (Il2CppClass *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar17,(MethodInfo *)0x0);
    bVar9 = iRam_? != 0;
    (this_00->_0).castClass = pIVar18;
    if (bVar9) {
      uVar4 = (uint)((ulonglong)&(this_00->_0).castClass >> 0xc);
      uVar7 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar6 == *puVar5;
        if (bVar9) {
          *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pIVar11 = (InventoryController *)(this_00->_0).byval_arg.data.array;
    if ((pIVar11 != (InventoryController *)0x0) &&
       (pIVar19 = (pIVar11->fields).inventorySlots, pIVar19 != (InventorySlots *)0x0)) {
      InventorySlots::InventorySlots_Clear(pIVar19,(MethodInfo *)0x0);
      pTVar12 = *(TabState **)&(this_00->_0).byval_arg.attrs;
      pIVar11 = (InventoryController *)(this_00->_0).byval_arg.data.array;
      if (pTVar12 != (TabState *)0x0) {
        uVar4 = (pTVar12->fields).currentPage;
        uVar20 = FUN_?((float)(pTVar12->fields).highestSlotIndex /
                               (float)(pTVar12->fields).slotsPrPage);
        uVar21 = 1;
        if (1 < (int)uVar20) {
          uVar21 = uVar20;
        }
        if ((pIVar11 != (InventoryController *)0x0) &&
           (pTVar13 = (pIVar11->fields).tabMenu, pTVar13 != (TabMenuBase *)0x0)) {
          (*(pTVar13->klass->vtable).__unknown_1.methodPtr)
                    (pTVar13,0,(ulonglong)uVar4,(ulonglong)uVar21,
                     (pTVar13->klass->vtable).__unknown_1.method);
          pIVar19 = (pIVar11->fields).inventorySlots;
          if (pIVar19 != (InventorySlots *)0x0) {
            InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                      (pIVar19,uVar4,(pIVar11->fields).numberOfSlots,(MethodInfo *)0x0);
            pIVar18 = (this_00->_0).parent;
            if (pIVar18 != (Il2CppClass *)0x0) {
              pLVar22 = AvatarRepository::AvatarRepository_GetAvatars
                                  ((AvatarRepository *)pIVar18,(MethodInfo *)0x0);
              index = 0;
              if (pLVar22 != (List_1_AvatarRepositoryItem_ *)0x0) {
                while( true ) {
                  if ((pLVar22->fields)._size <= index) {
                    return;
                  }
                  pTVar12 = *(TabState **)&(this_00->_0).byval_arg.attrs;
                  if ((pTVar12 == (TabState *)0x0) ||
                     (pIVar23 = TabState::TabState_get_SlotRange(pTVar12,(MethodInfo *)0x0),
                     pIVar23 == (Int32__Array *)0x0)) break;
                  if ((int)pIVar23->max_length == 0) {
code_?:
                    FUN_?();
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if (pIVar23->vector[0] <= index) {
                    if ((uint)pIVar23->max_length < 2) goto code_?;
                    if (index < pIVar23->vector[1]) {
                      AvatarShopController::AvatarShopController_AddPreviewObjectForIndex
                                ((AvatarShopController *)this_00,index,(MethodInfo *)0x0);
                    }
                  }
                  index = index + 1;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_Awake
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopAvatarEditModeController__FirstTimeSetActiveAvatar_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopAvatarEditModeController__SetUIReady__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DesktopPlayMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarSelectionController_MethodInfo__UnityEngine__Object__Instantiate<AvatarSelectionController>_AvatarSelectionController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (DesktopPlayMode *)FUN_?(TypeInfo__DesktopPlayMode);
  DesktopPlayMode::DesktopPlayMode__ctor(this_01,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  FUN_?(this_01);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pAVar3 = (pMVar2->fields).OnActiveAvatar;
    pDVar4 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(pDVar4,this);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar3,pDVar4,(MethodInfo *)0x0);
    pAVar5 = TypeInfo__System__Action<int>;
    pAVar6 = (Action *)0x0;
    if (pDVar4 == (Delegate *)0x0) {
      (pMVar2->fields).OnActiveAvatar = (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar3 = (Action_1_Int32_ *)FUN_?(pDVar4,TypeInfo__System__Action<int>);
      if (pAVar3 == (Action_1_Int32_ *)0x0) {
        FUN_?(pDVar4,pAVar5);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (pMVar2->fields).OnActiveAvatar = pAVar3;
      pAVar5 = TypeInfo__System__Action<int>;
      lVar8 = FUN_?(pDVar4,TypeInfo__System__Action<int>);
      if (lVar8 == 0) {
        FUN_?(pDVar4,pAVar5);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&(pMVar2->fields).OnActiveAvatar >> 0xc);
      lVar8 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar10 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar11 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar12 = uVar10 == *puVar11;
        if (bVar12) {
          *puVar11 = uVar10 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar12);
    }
    pUVar13 = (this->fields).uiStack;
    if (pUVar13 != (UIStack *)0x0) {
      UIStack::UIStack_Push
                (pUVar13,(this->fields).stackBottom,UIPushOption__Enum_None,(UnityAction *)0x0,
                 UIGroupFlags__Enum_StackBottom,(MethodInfo *)0x0);
      pGVar14 = (this->fields).stackBottom;
      if (pGVar14 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar14,1,(MethodInfo *)0x0);
        pAVar15 = (this->fields).avatarSelectionController;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pAVar15 = (AvatarSelectionController *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                            ((Object *)pAVar15,
                             AvatarSelectionController_MethodInfo__UnityEngine__Object__Instantiate<AvatarSelectionController>_AvatarSelectionController_
                            );
        bVar12 = iRam_? != 0;
        (this->fields).avatarSelectionController = pAVar15;
        if (bVar12) {
          uVar9 = (uint)((ulonglong)&(this->fields).avatarSelectionController >> 0xc);
          lVar8 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
          do {
            uVar10 = *(ulonglong *)(lVar8 + 0xADDR);
            puVar11 = (ulonglong *)(lVar8 + 0xADDR);
            LOCK();
            bVar12 = uVar10 == *puVar11;
            if (bVar12) {
              *puVar11 = uVar10 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar12);
        }
        pAVar15 = (this->fields).avatarSelectionController;
        pUVar13 = (this->fields).uiStack;
        if ((pAVar15 != (AvatarSelectionController *)0x0) &&
           (pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pAVar15,(MethodInfo *)0x0), pUVar13 != (UIStack *)0x0))
        {
          UIStack::UIStack_Push
                    (pUVar13,pGVar14,UIPushOption__Enum_None,(UnityAction *)0x0,
                     UIGroupFlags__Enum_MainUI,(MethodInfo *)0x0);
          pMVar16 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0)
          ;
          if (pMVar16 != (MVGameControllerDesktop *)0x0) {
            bVar12 = iRam_? != 0;
            (pMVar16->fields)._.modeController = (ModeControllerBase *)this;
            if (bVar12) {
              uVar9 = (uint)((ulonglong)&(pMVar16->fields)._.modeController >> 0xc);
              lVar8 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
              do {
                uVar10 = *(ulonglong *)(lVar8 + 0xADDR);
                puVar11 = (ulonglong *)(lVar8 + 0xADDR);
                LOCK();
                bVar12 = uVar10 == *puVar11;
                if (bVar12) {
                  *puVar11 = uVar10 | 1L << (uVar9 & 0x3f);
                }
                UNLOCK();
              } while (!bVar12);
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
                 (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
                (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0))
               && (pMVar17 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                       (this_00,(MethodInfo *)0x0), pMVar17 != (MVLocalPlayer *)0x0)
               ) {
              if ((pMVar17->fields)._.playerState != 1) {
                pAVar18 = MVGameControllerBase::
                          MVGameControllerBase_get_OnFirstFrameUpdateActorReady((MethodInfo *)0x0);
                pNVar19 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar19,(Object *)this,
                           MethodInfo__DesktopAvatarEditModeController__SetUIReady__,
                           (MethodInfo *)0x0);
                pAVar18 = (Action *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar18,(Delegate *)pNVar19,(MethodInfo *)0x0);
                if (pAVar18 != (Action *)0x0) {
                  if (pAVar18->klass == TypeInfo__System__Action) {
                    pAVar6 = pAVar18;
                  }
                  if (pAVar6 == (Action *)0x0) {
                    FUN_?(pAVar18);
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                }
Assembly_CSharp_dll_MVGameControllerBase_MVGameControllerBase_set_OnFirstFrameUpdateActorReady:
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase,0);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if ((pMVar1 != (MVGameControllerBase *)0x0) &&
                   (pFVar20 = (pMVar1->fields).firstFrameUpdateActorReady,
                   pFVar20 != (FirstFrameUpdateActorReady *)0x0)) {
                  bVar12 = iRam_? != 0;
                  (pFVar20->fields).callbacks = pAVar6;
                  if (bVar12) {
                    uVar9 = (uint)((ulonglong)&(pFVar20->fields).callbacks >> 0xc);
                    puVar11 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
                    do {
                      uVar21 = *puVar11;
                      LOCK();
                      uVar10 = *puVar11;
                      if (uVar21 == uVar10) {
                        *puVar11 = uVar21 | 1L << (uVar9 & 0x3f);
                      }
                      UNLOCK();
                    } while (uVar21 != uVar10);
                  }
                  return;
                }
                FUN_?();
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Action);
                LOCK();
                UNLOCK();
                FUN_?(&MethodInfo__DesktopAvatarEditModeController__SetUIReady__);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pUVar13 = (this->fields).uiStack;
              if (pUVar13 != (UIStack *)0x0) {
                (pUVar13->fields).stackReady = 1;
                UIStack::UIStack_UpdateStack(pUVar13,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if ((pMVar1 != (MVGameControllerBase *)0x0) &&
                   (pFVar20 = (pMVar1->fields).firstFrameUpdateActorReady,
                   pFVar20 != (FirstFrameUpdateActorReady *)0x0)) {
                  pAVar18 = (pFVar20->fields).callbacks;
                  pNVar19 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar19,(Object *)this,
                             MethodInfo__DesktopAvatarEditModeController__SetUIReady__,
                             (MethodInfo *)0x0);
                  pAVar18 = (Action *)
                            mscorlib.dll::System::Delegate::Delegate_Remove
                                      ((Delegate *)pAVar18,(Delegate *)pNVar19,(MethodInfo *)0x0);
                  if (pAVar18 != (Action *)0x0) {
                    if (pAVar18->klass == TypeInfo__System__Action) {
                      pAVar6 = pAVar18;
                    }
                    if (pAVar6 == (Action *)0x0) {
                      FUN_?(pAVar18);
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                  }
                  goto 
                  Assembly_CSharp_dll_MVGameControllerBase_MVGameControllerBase_set_OnFirstFrameUpdateActorReady
                  ;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ClearStateStack() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_ClearStateStack
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  pEVar1 = (this->fields).editorStateMachine;
  if (pEVar1 == (EditorStateMachine *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(pEVar1->fields)._.stateStack;
  if (this_00 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this_00->fields)._size < 1) {
    return;
  }
  mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
  Stack_1_UnityEngine_UIElements_TextureId__Pop
            (this_00,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
  (pEVar1->fields)._.clearStack = 1;
  evt = (Object *)FUN_?(TypeInfo__EditorEvent,&stack0x00000008);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_State_is_locked__could_not_set_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = StringLiteral_State_is_locked__could_not_set_s;
  if ((pEVar1->fields)._.lockState != 0) {
    if (evt == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar3);
    return;
  }
  bVar5 = iRam_? != 0;
  (pEVar1->fields)._.nextEvent = evt;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(pEVar1->fields)._.nextEvent >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (evt == (Object *)0x0) {
    if ((pEVar1->fields)._.currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar5 = iRam_? != 0;
    (pEVar1->fields)._.currentState = (IState *)0x0;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(pEVar1->fields)._.currentState >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  else {
    this_01 = (pEVar1->fields)._.transitionTable;
    if (this_01 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar10 = StateTransitionTable::StateTransitionTable_GetState(this_01,evt,(MethodInfo *)0x0);
    if (pIVar10 != (IState *)0x0) {
      if ((pEVar1->fields)._.currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar3 = (String *)
                (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method)
      ;
      (pEVar1->fields)._.stateName = pSVar3;
      func_?(&(pEVar1->fields)._.stateName);
      (pEVar1->fields)._.currentState = pIVar10;
      func_?(&(pEVar1->fields)._.currentState);
      (pEVar1->fields)._.nextEvent = (Object *)0x0;
      func_?(&(pEVar1->fields)._.nextEvent);
      (pEVar1->fields)._.prevEvent = (pEVar1->fields)._.curEvent;
      func_?(&pEVar1->fields);
      (pEVar1->fields)._.curEvent = evt;
      func_?(&(pEVar1->fields)._.curEvent);
      if ((pEVar1->fields)._.currentState == (IState *)0x0) goto DAT_?;
      FUN_?(0);
      this_02 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(pEVar1->fields)._.data;
      if (this_02 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_02,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
    }
    if ((pEVar1->fields)._.clearStack == 0) {
      (pEVar1->fields)._.clearStack = 1;
    }
    else {
      pSVar11 = (pEVar1->fields)._.stateStack;
      if (pSVar11 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar12 = &(pSVar11->fields)._version;
      *piVar12 = *piVar12 + 1;
      (pSVar11->fields)._size = 0;
    }
  }
  return;
}


/* Void GetCurrentBody(Action`1[MVBody]) */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_GetCurrentBody
               (DesktopAvatarEditModeController *this,Action_1_MVBody_ *callback,MethodInfo *method)

{
  this_00 = (this->fields).avatarEditModeBodyController;
  if (this_00 != (AvatarEditModeBodyController *)0x0) {
    pMVar1 = AvatarEditModeBodyController::AvatarEditModeBodyController_get_CurrentBody
                       (this_00,(MethodInfo *)0x0);
    if (callback != (Action_1_MVBody_ *)0x0) {
      UNRECOVERED_JUMPTABLE = (callback->fields)._._.invoke_impl;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                ((callback->fields)._._.method_code,pMVar1,(callback->fields)._._.method,
                 UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  FUN_?();
  UNRECOVERED_JUMPTABLE = (code *)swi(3);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_Initialize
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditorStateMachine);
    LOCK();
    UNLOCK();
    FUN_?(&
                  NotificationsManager_MethodInfo__UnityEngine__Object__Instantiate<NotificationsManager>_NotificationsManager_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_Init(pMVar1,(MethodInfo *)0x0);
    this_00 = (this->fields).avatarShopController;
    if (this_00 != (AvatarShopController *)0x0) {
      AvatarShopController::AvatarShopController_Initialize
                (this_00,(this->fields).avatarEditModeBodyController,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar1 != (MainCameraManager *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral_Logic);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_01 = (pMVar1->fields).mainCamera;
        if (this_01 != (Camera *)0x0) {
          uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                             (this_01,(MethodInfo *)0x0);
          uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                             (StringLiteral_Logic,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                    (this_01,uVar2 & ~(1 << (uVar3 & 0x1f)),(MethodInfo *)0x0);
          (pMVar1->fields).isLogicRendered = 0;
          DesktopAvatarEditModeController_InitializeLocalAvatar(this,(MethodInfo *)0x0);
          this_02 = (this->fields).drawPlaneController;
          if (this_02 != (DrawPlaneControllerUUI *)0x0) {
            DrawPlaneControllerUUI::DrawPlaneControllerUUI_Initialize(this_02,(MethodInfo *)0x0);
            FUN_?((this->fields).drawPlaneController);
            pNVar4 = (this->fields).notificationsManager;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            pNVar4 = (NotificationsManager *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)pNVar4,
                                 NotificationsManager_MethodInfo__UnityEngine__Object__Instantiate<NotificationsManager>_NotificationsManager_
                                );
            bVar5 = iRam_? != 0;
            (this->fields).notificationsManager = pNVar4;
            if (bVar5) {
              uVar2 = (uint)((ulonglong)&(this->fields).notificationsManager >> 0xc);
              lVar6 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
              do {
                uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                LOCK();
                bVar5 = uVar7 == *puVar8;
                if (bVar5) {
                  *puVar8 = uVar7 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar5);
            }
            pNVar4 = (this->fields).notificationsManager;
            if (pNVar4 != (NotificationsManager *)0x0) {
              this_07 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pNVar4,(MethodInfo *)0x0);
              pGVar9 = (this->fields).stackBottom;
              if ((pGVar9 != (GameObject *)0x0) &&
                 (parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                           GameObject_get_transform(pGVar9,(MethodInfo *)0x0),
                 this_07 != (Transform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (this_07,parent,0,(MethodInfo *)0x0);
                pAVar10 = (this->fields).avatarEditModeBodyController;
                if (pAVar10 != (AvatarEditModeBodyController *)0x0) {
                  AvatarEditModeBodyController::AvatarEditModeBodyController_Initialize
                            (pAVar10,(MethodInfo *)0x0);
                  pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                  pAVar10 = (this->fields).avatarEditModeBodyController;
                  if (pAVar10 != (AvatarEditModeBodyController *)0x0) {
                    VStackX_18.x = (pAVar10->fields).displayPos.x;
                    VStackX_18.y = (pAVar10->fields).displayPos.y;
                    fVar11 = (pAVar10->fields).displayPos.z;
                    pEVar12 = (EditorStateMachine *)FUN_?(TypeInfo__EditorStateMachine);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__CEEditorStateTransitionTableUUI);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    EditorStateMachine::EditorStateMachine__ctor(pEVar12,pGVar9,(MethodInfo *)0x0);
                    this_08 = (CEEditorStateTransitionTableUUI *)
                              FUN_?(TypeInfo__CEEditorStateTransitionTableUUI);
                    VStack_13.x = VStackX_18.x;
                    VStack_13.y = VStackX_18.y;
                    VStack_13.z = fVar11;
                    CEEditorStateTransitionTableUUI::CEEditorStateTransitionTableUUI__ctor
                              (this_08,&VStack_13,(MethodInfo *)0x0);
                    iVar14 = iRam_?;
                    (pEVar12->fields)._.transitionTable = (StateTransitionTable *)this_08;
                    if (iVar14 != 0) {
                      uVar2 = (uint)((ulonglong)&(pEVar12->fields)._.transitionTable >> 0xc);
                      lVar6 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                        LOCK();
                        bVar5 = uVar7 == *puVar8;
                        if (bVar5) {
                          *puVar8 = uVar7 | 1L << (uVar2 & 0x3f);
                        }
                        UNLOCK();
                        iVar14 = iRam_?;
                      } while (!bVar5);
                    }
                    (this->fields).editorStateMachine = pEVar12;
                    iVar15 = 0;
                    if (iVar14 != 0) {
                      uVar2 = (uint)((ulonglong)&(this->fields).editorStateMachine >> 0xc);
                      lVar6 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                      do {
                        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                        LOCK();
                        bVar5 = uVar7 == *puVar8;
                        if (bVar5) {
                          *puVar8 = uVar7 | 1L << (uVar2 & 0x3f);
                        }
                        UNLOCK();
                        iVar15 = iRam_?;
                      } while (!bVar5);
                    }
                    pEVar12 = (this->fields).editorStateMachine;
                    if ((pEVar12 != (EditorStateMachine *)0x0) &&
                       (this_03 = (this->fields).materialsController,
                       this_03 != (MaterialsController *)0x0)) {
                      (this_03->fields).cubeModelingStateMachine =
                           (pEVar12->fields).cubeModelingStateMachine;
                      if (iVar15 != 0) {
                        uVar2 = (uint)((ulonglong)&(this_03->fields).cubeModelingStateMachine >>
                                       0xc);
                        lVar6 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                        do {
                          uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                          puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                          LOCK();
                          bVar5 = uVar7 == *puVar8;
                          if (bVar5) {
                            *puVar8 = uVar7 | 1L << (uVar2 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar5);
                      }
                      MaterialsController::MaterialsController_InitializeMaterialInventoryData
                                (this_03,(MethodInfo *)0x0);
                      this_04 = (this->fields).avatarSelectionController;
                      if (this_04 != (AvatarSelectionController *)0x0) {
                        AvatarSelectionController::AvatarSelectionController_Initialize
                                  (this_04,(this->fields).avatarEditModeBodyController,
                                   (this->fields).editorStateMachine,(MethodInfo *)0x0);
                        if ((this->fields).firstTimeActiveAvatar != -1) {
                          pAVar10 = (this->fields).avatarEditModeBodyController;
                          iVar14 = (this->fields).firstTimeActiveAvatar;
                          if (pAVar10 == (AvatarEditModeBodyController *)0x0)
                          goto code_?;
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__List<MVBody>__get_Count__
                                         );
                            LOCK();
                            UNLOCK();
                            FUN_?(&
                                          MethodInfo__System__Collections__Generic__List<MVBody>__get_Item_int_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pLVar16 = (pAVar10->fields).bodies;
                          uVar2 = 0;
                          if (pLVar16 == (List_1_MVBody_ *)0x0) goto code_?;
                          lVar6 = 0x20;
                          for (; (int)uVar2 < (pLVar16->fields)._size; uVar2 = uVar2 + 1) {
                            if ((uint)(pLVar16->fields)._size <= uVar2) {
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                                        ((MethodInfo *)0x0);
                              pcVar17 = (code *)swi(3);
                              (*pcVar17)();
                              return;
                            }
                            pMVar18 = (pLVar16->fields)._items;
                            if (pMVar18 == (MVBody__Array *)0x0) goto code_?;
                            if ((uint)pMVar18->max_length <= uVar2) {
                              FUN_?();
                              pcVar17 = (code *)swi(3);
                              (*pcVar17)();
                              return;
                            }
                            lVar19 = *(longlong *)((longlong)pMVar18->vector + lVar6 + -0x20);
                            if (lVar19 == 0) goto code_?;
                            if (*(int *)(lVar19 + 0x10) == iVar14) {
                              AvatarEditModeBodyController::
                              AvatarEditModeBodyController_SetCurrentBody
                                        (pAVar10,uVar2,(MethodInfo *)0x0);
                              AvatarSelectionController::
                              AvatarSelectionController_set_CurrentlySelectedSlotIndex
                                        (uVar2,(MethodInfo *)0x0);
                              break;
                            }
                            lVar6 = lVar6 + 8;
                          }
                        }
                        pAVar10 = (this->fields).avatarEditModeBodyController;
                        pEVar12 = (this->fields).editorStateMachine;
                        if (((pAVar10 != (AvatarEditModeBodyController *)0x0) &&
                            (wo = AvatarEditModeBodyController::
                                  AvatarEditModeBodyController_get_CurrentBody
                                            (pAVar10,(MethodInfo *)0x0),
                            pEVar12 != (EditorStateMachine *)0x0)) &&
                           (this_05 = (pEVar12->fields).selectionController,
                           this_05 != (SelectionController *)0x0)) {
                          SelectionController::SelectionController_DeSelectAll
                                    (this_05,(MethodInfo *)0x0);
                          SelectionController::SelectionController_PushWOParents
                                    (this_05,(MVWorldObjectClient *)wo,1,(MethodInfo *)0x0);
                          pEVar12 = (this->fields).editorStateMachine;
                          VStackX_18.x = 7.28675e-44;
                          value = (Object *)FUN_?(TypeInfo__EditorEvent,&VStackX_18);
                          if (pEVar12 != (EditorStateMachine *)0x0) {
                            FSMEntity::FSMEntity_set_Event
                                      ((FSMEntity *)pEVar12,value,(MethodInfo *)0x0);
                            pEVar12 = (this->fields).editorStateMachine;
                            if ((pEVar12 != (EditorStateMachine *)0x0) &&
                               (this_06 = (pEVar12->fields).cubeModelingStateMachine,
                               this_06 != (CubeModelingStateMachine *)0x0)) {
                              CubeModelingStateMachine::
                              CubeModelingStateMachine_set_CurrentMaterialId
                                        (this_06,0x15,(MethodInfo *)0x0);
                              pEVar12 = (this->fields).editorStateMachine;
                              if ((pEVar12 != (EditorStateMachine *)0x0) &&
                                 (pSVar20 = (this->fields).setupCubeModelTutorialUI,
                                 pSVar20 != (SetupCubeModelTutorialUI *)0x0)) {
                                bVar5 = iRam_? != 0;
                                (pSVar20->fields).cubeModelingStateMachine =
                                     (pEVar12->fields).cubeModelingStateMachine;
                                if (bVar5) {
                                  uVar2 = (uint)((ulonglong)
                                                  &(pSVar20->fields).cubeModelingStateMachine >> 0xc)
                                  ;
                                  lVar6 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
                                  do {
                                    uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                                    puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                                    LOCK();
                                    bVar5 = uVar7 == *puVar8;
                                    if (bVar5) {
                                      *puVar8 = uVar7 | 1L << (ulonglong)(uVar2 & 0x3f);
                                    }
                                    UNLOCK();
                                  } while (!bVar5);
                                }
                                pGVar21 = (this->fields).goldPurchasedTracker;
                                if (pGVar21 != (GoldPurchasedTracker *)0x0) {
                                  if (cRam_? == '\0') {
                                    FUN_?(&TypeInfo__System__Action<int,_int>,0);
                                    LOCK();
                                    UNLOCK();
                                    FUN_?(&
                                                  MethodInfo__GoldPurchasedTracker__StartGoldPurchasePendingUpdate_int__int_
                                                 );
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
                                  pMVar22 = TypeInfo__MVGameControllerBase->static_fields->instance;
                                  if ((pMVar22 == (MVGameControllerBase *)0x0) ||
                                     (pBVar23 = (pMVar22->fields).browserComm,
                                     pBVar23 == (BrowserComm *)0x0)) {
                                    FUN_?();
                                    pcVar17 = (code *)swi(3);
                                    (*pcVar17)();
                                    return;
                                  }
                                  pAVar24 = (pBVar23->fields).OnGoldPurchasedFromWeb;
                                  pDVar25 = (Delegate *)
                                            FUN_?(TypeInfo__System__Action<int,_int>);
                                  FUN_?(pDVar25,pGVar21);
                                  pDVar25 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                      ((Delegate *)pAVar24,pDVar25,(MethodInfo *)0x0
                                                      );
                                  pAVar26 = TypeInfo__System__Action<int,_int>;
                                  if (pDVar25 == (Delegate *)0x0) {
                                    (pBVar23->fields).OnGoldPurchasedFromWeb =
                                         (Action_2_Int32_Int32_ *)0x0;
                                  }
                                  else {
                                    pAVar24 = (Action_2_Int32_Int32_ *)
                                              FUN_?(pDVar25,
                                                  TypeInfo__System__Action<int,_int>);
                                    if (pAVar24 == (Action_2_Int32_Int32_ *)0x0) {
                                      FUN_?(pDVar25,pAVar26);
                                      pcVar17 = (code *)swi(3);
                                      (*pcVar17)();
                                      return;
                                    }
                                    (pBVar23->fields).OnGoldPurchasedFromWeb = pAVar24;
                                    pAVar26 = TypeInfo__System__Action<int,_int>;
                                    lVar6 = FUN_?(pDVar25,
                                                  TypeInfo__System__Action<int,_int>);
                                    if (lVar6 == 0) {
                                      FUN_?(pDVar25,pAVar26);
                                      pcVar17 = (code *)swi(3);
                                      (*pcVar17)();
                                      return;
                                    }
                                  }
                                  if (iRam_? != 0) {
                                    uVar2 = (uint)((ulonglong)
                                                    &(pBVar23->fields).OnGoldPurchasedFromWeb >> 0xc
                                                   );
                                    puVar8 = (ulonglong *)
                                             ((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 +
                                             0xADDR);
                                    do {
                                      uVar27 = *puVar8;
                                      LOCK();
                                      uVar7 = *puVar8;
                                      if (uVar27 == uVar7) {
                                        *puVar8 = uVar27 | 1L << (uVar2 & 0x3f);
                                      }
                                      UNLOCK();
                                    } while (uVar27 != uVar7);
                                  }
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
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void InitializeLocalAvatar() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_InitializeLocalAvatar
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVSpawnPointBlue);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DesktopAvatarEditModeController____c___InitializeLocalAvatar_b__23_0_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__DesktopAvatarEditModeController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__DesktopAvatarEditModeController____c);
  }
  this_01 = TypeInfo__DesktopAvatarEditModeController____c->static_fields->__9__23_0;
  if (this_01 == (Func_2_MVWorldObjectClient_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__DesktopAvatarEditModeController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__DesktopAvatarEditModeController____c);
    }
    object = TypeInfo__DesktopAvatarEditModeController____c->static_fields->__9;
    this_01 = (Func_2_MVWorldObjectClient_Boolean_ *)
              FUN_?(TypeInfo__System__Func<MVWorldObjectClient,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_01,(Object *)object,
               MethodInfo__DesktopAvatarEditModeController____c___InitializeLocalAvatar_b__23_0_MVWorldObjectClient_
               ,(MethodInfo *)0x0);
    TypeInfo__DesktopAvatarEditModeController____c->static_fields->__9__23_0 = this_01;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)
                      &TypeInfo__DesktopAvatarEditModeController____c->static_fields->__9__23_0 >>
                     0xc);
      uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
      do {
        uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
        puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar3 == *puVar4;
        if (bVar5) {
          *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientWhere
                        (this_00,this_01,(MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClient *)0x0) {
      bVar6 = (TypeInfo__MVSpawnPointBlue->_1).naturalAligment;
      if (((this_02->klass->_1).naturalAligment < bVar6) ||
         ((MVSpawnPointBlue__Class *)(this_02->klass->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
          TypeInfo__MVSpawnPointBlue)) {
        FUN_?(this_02);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar8 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar8 != (MVGameControllerBase *)0x0) &&
         (pMVar9 = (pMVar8->fields).game, pMVar9 != (MVNetworkGame *)0x0)) &&
        (pGVar10 = (pMVar9->fields).GameEventManager, pGVar10 != (GameEventManager *)0x0)) &&
       (pGVar11 = (pGVar10->fields).AvatarCommandsBuildMode, this_02 != (MVWorldObjectClient *)0x0)) {
      puVar12 = (undefined8 *)
                (*(this_02->klass->vtable).get_WorldPosition_1.methodPtr)(aQStack_13,this_02);
      uStack_14 = *puVar12;
      fVar15 = *(float *)(puVar12 + 1);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
      aQStack_13[0].x = (pVVar16->upVector).x;
      aQStack_13[0].y = (pVVar16->upVector).y;
      fVar17 = (pVVar16->upVector).z;
      fVar18 = (float)uStack_14 - aQStack_13[0].x;
      fVar19 = uStack_14._4_4_ - aQStack_13[0].y;
      pQVar20 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                          (aQStack_13,this_02,(MethodInfo *)0x0);
      if (pGVar11 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
        if ((pGVar11->fields).OnSetSpawn !=
            (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)0x0) {
          pAVar21 = (pGVar11->fields).OnSetSpawn;
          aQStack_13[0].x = pQVar20->x;
          aQStack_13[0].y = pQVar20->y;
          aQStack_13[0].z = pQVar20->z;
          aQStack_13[0].w = pQVar20->w;
          uStack_14 = CONCAT44(fVar19,fVar18);
          fStack_22 = fVar15 - fVar17;
          (*(pAVar21->fields)._._.invoke_impl)
                    ((pAVar21->fields)._._.method_code,&uStack_14,aQStack_13,
                     (pAVar21->fields)._._.method);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_OnDestroy
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  if ((this->fields).avatarSelectionController == (AvatarSelectionController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarSelectionController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__AvatarSelectionController->static_fields->instance = (AvatarSelectionController *)0x0;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__AvatarSelectionController->static_fields >> 0xc);
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


/* Void OnPopCubeModelingController() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_OnPopCubeModelingController
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).editorStateMachine;
  evt = (Object *)FUN_?(TypeInfo__EditorEvent,&stack0x00000008);
  if (pEVar1 == (EditorStateMachine *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_State_is_locked__could_not_set_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = StringLiteral_State_is_locked__could_not_set_s;
  if ((pEVar1->fields)._.lockState != 0) {
    if (evt == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar3);
    return;
  }
  bVar5 = iRam_? != 0;
  (pEVar1->fields)._.nextEvent = evt;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(pEVar1->fields)._.nextEvent >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (evt == (Object *)0x0) {
    if ((pEVar1->fields)._.currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar5 = iRam_? != 0;
    (pEVar1->fields)._.currentState = (IState *)0x0;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(pEVar1->fields)._.currentState >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  else {
    this_00 = (pEVar1->fields)._.transitionTable;
    if (this_00 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar10 = StateTransitionTable::StateTransitionTable_GetState(this_00,evt,(MethodInfo *)0x0);
    if (pIVar10 != (IState *)0x0) {
      if ((pEVar1->fields)._.currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar3 = (String *)
                (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method)
      ;
      (pEVar1->fields)._.stateName = pSVar3;
      func_?(&(pEVar1->fields)._.stateName);
      (pEVar1->fields)._.currentState = pIVar10;
      func_?(&(pEVar1->fields)._.currentState);
      (pEVar1->fields)._.nextEvent = (Object *)0x0;
      func_?(&(pEVar1->fields)._.nextEvent);
      (pEVar1->fields)._.prevEvent = (pEVar1->fields)._.curEvent;
      func_?(&pEVar1->fields);
      (pEVar1->fields)._.curEvent = evt;
      func_?(&(pEVar1->fields)._.curEvent);
      if ((pEVar1->fields)._.currentState == (IState *)0x0) goto DAT_?;
      FUN_?(0);
      this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(pEVar1->fields)._.data;
      if (this_01 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
    }
    if ((pEVar1->fields)._.clearStack == 0) {
      (pEVar1->fields)._.clearStack = 1;
    }
    else {
      pSVar11 = (pEVar1->fields)._.stateStack;
      if (pSVar11 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar12 = &(pSVar11->fields)._version;
      *piVar12 = *piVar12 + 1;
      (pSVar11->fields)._size = 0;
    }
  }
  return;
}


/* Void OpenInventoryAtItem(UIPushOption, AccessoryDataClient) */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_OpenInventoryAtItem
               (DesktopAvatarEditModeController *this,UIPushOption__Enum pushOption,
               AccessoryDataClient *displayShopItems,MethodInfo *method)

{
  object = (this->fields).accessoryShopController;
  if (object == (AccessoryShopController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = iRam_? != 0;
  (object->fields).accessoryDataToShow = displayShopItems;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(object->fields).accessoryDataToShow >> 0xc);
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
  (object->fields).pushOption = pushOption;
  pUVar7 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)object,
             MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__,(MethodInfo *)0x0);
  pUVar7 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar7,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pUVar7 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
  }
  else {
    pUVar8 = (UnityAction *)0x0;
    if (pUVar7->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar8 = pUVar7;
    }
    if (pUVar8 == (UnityAction *)0x0) {
      FUN_?(pUVar7,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar8;
    pUVar8 = (UnityAction *)0x0;
    if (pUVar7->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar8 = pUVar7;
    }
    if (pUVar8 == (UnityAction *)0x0) {
      FUN_?(pUVar7,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)TypeInfo__AccessoryDataManager->static_fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar9 = TypeInfo__AccessoryDataManager->static_fields;
  if (pAVar9->accessoriesReady == 0) {
    if (pAVar9->accessoriesRequested == 0) {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAccessoryData
                (this_00,(MethodInfo *)0x0);
      TypeInfo__AccessoryDataManager->static_fields->accessoriesRequested = 1;
      return;
    }
  }
  else if (pAVar9->readyCallback != (UnityAction *)0x0) {
    pUVar7 = pAVar9->readyCallback;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar7->fields)._._.invoke_impl)
              ((pUVar7->fields)._._.method_code,(pUVar7->fields)._._.method);
    return;
  }
  return;
}


/* Void SelectEditorStateMachineToBodyGroup() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_SelectEditorStateMachineToBodyGroup
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  this_00 = (this->fields).avatarSelectionController;
  if (this_00 == (AvatarSelectionController *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AvatarSelectionController___SetStateToRoam_b__15_0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AvatarSelectionController____c___SetStateToRoam_b__15_1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AvatarSelectionController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
  this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_02,(Object *)this_00,
             MethodInfo__AvatarSelectionController___SetStateToRoam_b__15_0_UnityEngine__EventSystems__IAvatarSetBodyGroup__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar2,(BaseEventData *)0x0,this_02,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarSetBodyGroup>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarSetBodyGroup>_
            );
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AvatarSelectionController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AvatarSelectionController____c);
  }
  this_03 = TypeInfo__AvatarSelectionController____c->static_fields->__9__15_1;
  if (this_03 == (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
    if (*(int *)&(TypeInfo__AvatarSelectionController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AvatarSelectionController____c);
    }
    object = TypeInfo__AvatarSelectionController____c->static_fields->__9;
    this_03 = (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
               MethodInfo__AvatarSelectionController____c___SetStateToRoam_b__15_1_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AvatarSelectionController____c->static_fields->__9__15_1 = this_03;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__AvatarSelectionController____c->static_fields->__9__15_1
                     >> 0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar7 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
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
    if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar7);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar2,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar8 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar9 = (longlong)(pLVar8->fields)._size;
    uVar3 = 0;
    if (0 < lVar9) {
      lVar10 = 0;
      lVar11 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar8 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar8 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar8->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar12 = (pLVar8->fields)._items;
        if (pTVar12 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar12->max_length <= uVar3) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_01 = *(Component **)((longlong)pTVar12->vector + lVar11 + -0x20);
        if (this_01 == (Component *)0x0) goto code_?;
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_01,(MethodInfo *)0x0);
        bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar2,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
                           (pMVar7->field7_0x38).rgctx_data[1].method);
        if (bVar13 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_01,(MethodInfo *)0x0);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 8;
      } while (lVar10 < lVar9);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Set(ActiveEditStateUI) */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_Set
               (DesktopAvatarEditModeController *this,ActiveEditStateUI__Enum activeUIElements,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__DesktopAvatarEditModeController__OnPopCubeModelingController__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((activeUIElements & ActiveEditStateUI__Enum_CubeModelTools) == ActiveEditStateUI__Enum_None) {
    return;
  }
  pMVar1 = (this->fields).materialsController;
  if (pMVar1 != (MaterialsController *)0x0) {
    (*(pMVar1->klass->vtable).SetActive.methodPtr)(pMVar1,(pMVar1->klass->vtable).SetActive.method);
    this_00 = (Object__Class *)(this->fields).materialsController;
    this_01 = (Object__Class *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              ((NavMesh_OnNavMeshPreUpdate *)this_01,(Object *)this,
               MethodInfo__DesktopAvatarEditModeController__OnPopCubeModelingController__,
               (MethodInfo *)0x0);
    if (this_00 != (Object__Class *)0x0) {
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
      if (object != (Object *)0x0) {
        object[1].klass = this_00;
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
        *(undefined4 *)&object[1].monitor = 8;
        object[2].klass = this_01;
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
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
        this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_02,object,
                   MethodInfo__MaterialsController____c__DisplayClass12_0___Push_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,this_02,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetBodyGroup(MVBody) */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_SetBodyGroup
               (DesktopAvatarEditModeController *this,MVBody *bodyGroup,MethodInfo *method)

{
  pEVar1 = (this->fields).editorStateMachine;
  if ((pEVar1 == (EditorStateMachine *)0x0) ||
     (this_00 = (pEVar1->fields).selectionController, this_00 == (SelectionController *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object,_WorldObjectDestroyedEventArgs>,bodyGroup
                  ,1,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<int>__Dispose__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<int>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Stack_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__Dequeue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__Enqueue_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__Queue__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Queue<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Queue<int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__SelectionController__WOCM_WorldObjectDestroyedHandler_System__Object__WorldObjectDestroyedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Pop__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Push_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__get_Count__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  puStack_4 = (undefined *)0x0;
  uStack_5 = 0;
  pSVar6 = (this_00->fields).parentGroups;
  do {
    if (pSVar6 == (Stack_1_System_Int32_ *)0x0) {
code_?:
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pSVar6->fields)._size < 2) {
      FUN_?(TypeInfo__System__Collections__Generic__Queue<int>);
      FUN_?();
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((bodyGroup != (MVBody *)0x0) &&
         (key = (bodyGroup->fields)._._._._.groupId, pMVar7 != (MVWorldObjectClientManager *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_01 = (pMVar7->fields).worldObjects;
        if (this_01 == (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,
                   (Object **)&stack0x00000008,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
      }
      goto code_?;
    }
    pSVar6 = (this_00->fields).parentGroups;
    if (pSVar6 == (Stack_1_System_Int32_ *)0x0) goto code_?;
    uVar8 = (pSVar6->fields)._size - 1;
    uVar9 = (ulonglong)uVar8;
    pIVar10 = (pSVar6->fields)._array;
    if (pIVar10 == (Int32__Array *)0x0) goto code_?;
    if ((uint)pIVar10->max_length <= uVar8) {
      uVar11 = func_?(MethodInfo__System__Collections__Generic__Stack<int>__Pop__->klass
                                  ->rgctx_data,10);
      FUN_?(pSVar6,uVar11);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    piVar12 = &(pSVar6->fields)._version;
    *piVar12 = *piVar12 + 1;
    (pSVar6->fields)._size = uVar8;
    if ((uint)pIVar10->max_length <= uVar8) {
      FUN_?();
      FUN_?();
      FUN_?();
      FUN_?();
      FUN_?();
      FUN_?();
      lVar13 = func_?(*(undefined8 *)(uVar9 + 0x20));
      uVar11 = func_?(*(undefined8 *)(lVar13 + 0xc0),4);
      FUN_?(&uStack_3,uVar11);
      uVar11 = func_?(&TypeInfo__System__InvalidOperationException);
      this_02 = (ProtocolViolationException *)func_?(uVar11);
      message = (String *)func_?(&StringLiteral_Collection_was_modified__enumera);
      System.dll::System::Net::ProtocolViolationException::ProtocolViolationException__ctor_1
                (this_02,message,(MethodInfo *)0x0);
      FUN_?(this_02,unaff_RDI);
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pSVar6 = (this_00->fields).parentGroups;
  } while( true );
}


/* Void SetState(EditorEvent) */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_SetState
               (DesktopAvatarEditModeController *this,EditorEvent__Enum editorEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pEVar1 = (this->fields).editorStateMachine;
  evt = (Object *)FUN_?(TypeInfo__EditorEvent,&stack0x00000010);
  if (pEVar1 == (EditorStateMachine *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_State_is_locked__could_not_set_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = StringLiteral_State_is_locked__could_not_set_s;
  if ((pEVar1->fields)._.lockState != 0) {
    if (evt == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar3);
    return;
  }
  bVar5 = iRam_? != 0;
  (pEVar1->fields)._.nextEvent = evt;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(pEVar1->fields)._.nextEvent >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (evt == (Object *)0x0) {
    if ((pEVar1->fields)._.currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar5 = iRam_? != 0;
    (pEVar1->fields)._.currentState = (IState *)0x0;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(pEVar1->fields)._.currentState >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  else {
    this_00 = (pEVar1->fields)._.transitionTable;
    if (this_00 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar10 = StateTransitionTable::StateTransitionTable_GetState(this_00,evt,(MethodInfo *)0x0);
    if (pIVar10 != (IState *)0x0) {
      if ((pEVar1->fields)._.currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar3 = (String *)
                (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method)
      ;
      (pEVar1->fields)._.stateName = pSVar3;
      func_?(&(pEVar1->fields)._.stateName);
      (pEVar1->fields)._.currentState = pIVar10;
      func_?(&(pEVar1->fields)._.currentState);
      (pEVar1->fields)._.nextEvent = (Object *)0x0;
      func_?(&(pEVar1->fields)._.nextEvent);
      (pEVar1->fields)._.prevEvent = (pEVar1->fields)._.curEvent;
      func_?(&pEVar1->fields);
      (pEVar1->fields)._.curEvent = evt;
      func_?(&(pEVar1->fields)._.curEvent);
      if ((pEVar1->fields)._.currentState == (IState *)0x0) goto DAT_?;
      FUN_?(0);
      this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(pEVar1->fields)._.data;
      if (this_01 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
    }
    if ((pEVar1->fields)._.clearStack == 0) {
      (pEVar1->fields)._.clearStack = 1;
    }
    else {
      pSVar11 = (pEVar1->fields)._.stateStack;
      if (pSVar11 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar12 = &(pSVar11->fields)._version;
      *piVar12 = *piVar12 + 1;
      (pSVar11->fields)._size = 0;
    }
  }
  return;
}


/* Void SetUIReady() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::
     DesktopAvatarEditModeController_SetUIReady
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopAvatarEditModeController__SetUIReady__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).uiStack;
  if (this_00 != (UIStack *)0x0) {
    (this_00->fields).stackReady = 1;
    UIStack::UIStack_UpdateStack(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pFVar2 = (pMVar1->fields).firstFrameUpdateActorReady,
       pFVar2 != (FirstFrameUpdateActorReady *)0x0)) {
      pAVar3 = (pFVar2->fields).callbacks;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__DesktopAvatarEditModeController__SetUIReady__,
                 (MethodInfo *)0x0);
      pAVar4 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar3,(Delegate *)this_01,(MethodInfo *)0x0);
      pAVar3 = (Action *)0x0;
      if (pAVar4 != (Action *)0x0) {
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar3 = pAVar4;
        }
        if (pAVar3 == (Action *)0x0) {
          FUN_?(pAVar4);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pFVar2 = (pMVar1->fields).firstFrameUpdateActorReady,
         pFVar2 != (FirstFrameUpdateActorReady *)0x0)) {
        bVar6 = iRam_? != 0;
        (pFVar2->fields).callbacks = pAVar3;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&(pFVar2->fields).callbacks >> 0xc);
          puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar9 = *puVar8;
            LOCK();
            uVar10 = *puVar8;
            if (uVar9 == uVar10) {
              *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (uVar9 != uVar10);
        }
        return;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController_Update
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  ModeControllerBase::ModeControllerBase_HandleFpsShortcut
            ((ModeControllerBase *)this,(MethodInfo *)0x0);
  if ((this->fields).editorStateMachine != (EditorStateMachine *)0x0) {
    pEVar1 = (this->fields).editorStateMachine;
    pEVar2 = pEVar1->klass;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pEVar2->vtable).Update.methodPtr)(pEVar1,(pEVar2->vtable).Update.method);
    return;
  }
  return;
}


/* DesktopAvatarEditModeController() */

void Assembly-CSharp.dll::DesktopAvatarEditModeController::DesktopAvatarEditModeController__ctor
               (DesktopAvatarEditModeController *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).firstTimeActiveAvatar = -1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (pcVar16 = (char *)((longlong)ppMVar15 + 0xADDR),
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *pcVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

