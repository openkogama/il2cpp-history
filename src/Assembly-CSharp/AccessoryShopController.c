
/* Void Activate(UIPushOption) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_Activate
               (AccessoryShopController *this,UIPushOption__Enum pushOption,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
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
  (this->fields).pushOption = pushOption;
  pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__AccessoryShopController__ReadyCallback__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)this_01,(MethodInfo *)0x0);
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
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAccessoryData
                (this_00,(MethodInfo *)0x0);
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


/* Void Activate(UIPushOption, AccessoryCategoryClient) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_Activate_1
               (AccessoryShopController *this,UIPushOption__Enum pushOption,
               AccessoryCategoryClient__Enum category,MethodInfo *method)

{
  (this->fields).startingCategory = category;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager,CONCAT44(in_register_00000014,pushOption),0);
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
  (this->fields).pushOption = pushOption;
  pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__AccessoryShopController__ReadyCallback__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar1,(Delegate *)this_01,(MethodInfo *)0x0);
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
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAccessoryData
                (this_00,(MethodInfo *)0x0);
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


/* Void AddDynamicTab(AccessoryCategoryClient) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_AddDynamicTab
               (AccessoryShopController *this,AccessoryCategoryClient__Enum category,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType(this,category,(MethodInfo *)0x0)
  ;
  if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
    highestSlotIndex = (pLVar1->fields)._size;
    if (0 < highestSlotIndex) {
      AccessoryShopController_CreateAndAddTab(this,category,highestSlotIndex,(MethodInfo *)0x0);
    }
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Attach(MVBody, Single, Single) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_Attach
               (AccessoryShopController *this,MVBody *body,float offset,float scale,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessoryShopController__AttacherFinished__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
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
    FUN_?(&
                  MethodInfo__AccessoryShopController____c___Attach_b__42_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryShopController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).attachingReady != 0) {
    this_00 = (this->fields).accessoryAttacher;
    (this->fields).attachingReady = 0;
    streamingAssetsId = (this->fields).currentlyAttachingID;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__AccessoryShopController__AttacherFinished__,
               (MethodInfo *)0x0);
    if (this_00 == (AccessoryAttacher *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AccessoryAttacher::AccessoryAttacher_AttachAccessory
              (this_00,streamingAssetsId,body,offset,scale,(Action *)this_01,(MethodInfo *)0x0);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AccessoryShopController____c);
    }
    this_02 = TypeInfo__AccessoryShopController____c->static_fields->__9__42_0;
    if (this_02 == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__AccessoryShopController____c);
      }
      object = TypeInfo__AccessoryShopController____c->static_fields->__9;
      this_02 = (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                 MethodInfo__AccessoryShopController____c___Attach_b__42_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__AccessoryShopController____c->static_fields->__9__42_0 = this_02;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&TypeInfo__AccessoryShopController____c->static_fields->__9__42_0
                      >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
  }
  return;
}


/* Void AttachToBody(Int32, Single, Single) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_AttachToBody
               (AccessoryShopController *this,int32_t productId,float offset,float scale,
               MethodInfo *method)

{
  player = (MVPlayer *)CONCAT44(in_register_00000014,productId);
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryShopController____c__DisplayClass41_0___AttachToBody_b__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryShopController____c__DisplayClass41_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__AccessoryShopController____c__DisplayClass41_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)this;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      player = (MVPlayer *)(ulonglong)((uVar2 & 0x1fffff) >> 6);
      in_R8 = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
      do {
        uVar3 = *(ulonglong *)((longlong)player * 8 + 0xADDR);
        puVar4 = (ulonglong *)((longlong)player * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar3 == *puVar4;
        if (bVar1) {
          *puVar4 = uVar3 | 1L << (longlong)in_R8;
        }
        UNLOCK();
      } while (!bVar1);
    }
    bVar1 = cRam_? == '\0';
    *(float *)&object[1].monitor = offset;
    *(float *)((longlong)&object[1].monitor + 4) = scale;
    (this->fields).currentlyAttachingID = productId;
    if (bVar1) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar5 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar5 != (GameSessionData *)0x0) {
      if ((pGVar5->fields).gameMode == 2) {
        root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
        this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_01,object,
                   MethodInfo__AccessoryShopController____c__DisplayClass41_0___AttachToBody_b__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (root,(BaseEventData *)0x0,this_01,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                  );
        return;
      }
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,in_R8);
      if (extraout_RAX != 0) {
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_00 != (MVWorldObjectClientManager *)0x0) {
          body = (MVBody *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                           (this_00,*(int32_t *)(extraout_RAX + 0xa8),
                            MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                           );
          AccessoryShopController_Attach
                    (this,body,*(float *)&object[1].monitor,
                     *(float *)((longlong)&object[1].monitor + 4),(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void AttacherFinished() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_AttacherFinished
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryChanged>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryChanged>_
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
                  MethodInfo__AccessoryShopController____c___AttacherFinished_b__43_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryShopController____c___AttacherFinished_b__43_1_UnityEngine__EventSystems__IAccessoryChanged__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryShopController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).attachingReady = 1;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AccessoryShopController____c);
  }
  this_04 = TypeInfo__AccessoryShopController____c->static_fields->__9__43_0;
  if (this_04 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AccessoryShopController____c);
    }
    pAVar2 = TypeInfo__AccessoryShopController____c->static_fields->__9;
    this_04 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_04,(Object *)pAVar2,
               MethodInfo__AccessoryShopController____c___AttacherFinished_b__43_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryShopController____c->static_fields->__9__43_0 = this_04;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__AccessoryShopController____c->static_fields->__9__43_0
                     >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_04,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  pIVar8 = (this->fields).inventoryController;
  if (pIVar8 == (InventoryController *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)pIVar8,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AccessoryShopController____c);
  }
  this_05 = TypeInfo__AccessoryShopController____c->static_fields->__9__43_1;
  if (this_05 == (ExecuteEvents_EventFunction_1_IAccessoryChanged_ *)0x0) {
    if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AccessoryShopController____c);
    }
    pAVar2 = TypeInfo__AccessoryShopController____c->static_fields->__9;
    this_05 = (ExecuteEvents_EventFunction_1_IAccessoryChanged_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryChanged>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_05,(Object *)pAVar2,
               MethodInfo__AccessoryShopController____c___AttacherFinished_b__43_1_UnityEngine__EventSystems__IAccessoryChanged__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryShopController____c->static_fields->__9__43_1 = this_05;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__AccessoryShopController____c->static_fields->__9__43_1
                     >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_05,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAccessoryChanged>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAccessoryChanged>_
            );
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessoryShopController___UpdateContent_b__38_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_Root___AccessoryShopCont);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar10 = (this->fields).previewItemsRoot;
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
  if (pTVar10 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar10->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar10 = (this->fields).previewItemsRoot;
      if (pTVar10 == (Transform *)0x0) goto code_?;
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar10,(MethodInfo *)0x0);
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
                ((Object_1 *)pGVar1,0.0,(MethodInfo *)0x0);
    }
  }
  pGVar1 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  name = StringLiteral_Preview_Root___AccessoryShopCont;
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
            (pGVar1,name,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar1,(MethodInfo *)0x0);
    bVar7 = iRam_? != 0;
    (this->fields).previewItemsRoot = pTVar10;
    if (bVar7) {
      uVar3 = (uint)((ulonglong)&(this->fields).previewItemsRoot >> 0xc);
      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar11 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar11 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    pIVar8 = (this->fields).inventoryController;
    if ((pIVar8 != (InventoryController *)0x0) &&
       (pIVar12 = (pIVar8->fields).inventorySlots, pIVar12 != (InventorySlots *)0x0)) {
      InventorySlots::InventorySlots_Clear(pIVar12,(MethodInfo *)0x0);
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).tabs;
      if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        iVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                           (this_00,(this->fields).selectedTab,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                            ->klass->rgctx_data[0x21].method);
        if (iVar13 < 0) {
          (this->fields).selectedTab = (this->fields).startingCategory;
        }
        this_01 = (this->fields).tabs;
        if (this_01 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
          pOVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                               (this->fields).selectedTab,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              );
          pIVar8 = (this->fields).inventoryController;
          uVar3 = (this->fields).selectedTab;
          if (pOVar14 != (Object *)0x0) {
            page = *(uint *)((longlong)&pOVar14[2].klass + 4);
            uVar15 = FUN_?((float)*(int *)&pOVar14[2].klass /
                                   (float)*(int *)&pOVar14[1].klass);
            uVar16 = 1;
            if (1 < (int)uVar15) {
              uVar16 = uVar15;
            }
            if ((pIVar8 != (InventoryController *)0x0) &&
               (pTVar17 = (pIVar8->fields).tabMenu, pTVar17 != (TabMenuBase *)0x0)) {
              (*(pTVar17->klass->vtable).__unknown_1.methodPtr)
                        (pTVar17,(ulonglong)uVar3,(ulonglong)page,(ulonglong)uVar16,
                         (pTVar17->klass->vtable).__unknown_1.method);
              pIVar12 = (pIVar8->fields).inventorySlots;
              if (pIVar12 != (InventorySlots *)0x0) {
                uVar3 = (pIVar8->fields).numberOfSlots;
                method_00 = (MethodInfo *)(ulonglong)uVar3;
                player = (MVPlayer *)(ulonglong)page;
                InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                          (pIVar12,page,uVar3,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pGVar18 = TypeInfo__MVGameControllerBase->static_fields->
                         _GameSessionData_k__BackingField;
                if (pGVar18 != (GameSessionData *)0x0) {
                  if ((pGVar18->fields).gameMode == 2) {
                    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                    this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                              FUN_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                                           );
                    UnityEngine.UI.dll::UnityEngine::EventSystems::
                    ExecuteEvents+EventFunction`1[System::Object]::
                    ExecuteEvents_EventFunction_1_System_Object___ctor
                              (this_03,(Object *)this,
                               MethodInfo__AccessoryShopController___UpdateContent_b__38_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                               ,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                        == 0) {
                      FUN_?();
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy
                              (pGVar1,(BaseEventData *)0x0,this_03,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                              );
                    return;
                  }
                  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
                  if (extraout_RAX != 0) {
                    if (cRam_? == '\0') {
                      FUN_?();
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0)
                    ;
                    if (this_02 != (MVWorldObjectClientManager *)0x0) {
                      avatarBody = (MVBody *)
                                   MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_GetWorldObjectClient_1
                                             (this_02,*(int32_t *)(extraout_RAX + 0xa8),
                                              MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                                             );
                      AccessoryShopController_UpdateContentWithBody
                                (this,avatarBody,(MethodInfo *)0x0);
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
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ClearShop() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_ClearShop
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
           (this->fields).tabs;
  if (pDVar1 != (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
    TypeConverterRegistry+ConverterKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
              (pDVar1,MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Clear__);
    pIVar2 = (this->fields).inventoryController;
    if ((pIVar2 != (InventoryController *)0x0) &&
       (pIVar3 = (pIVar2->fields).inventorySlots, pIVar3 != (InventorySlots *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                      ,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__Dispose__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__MoveNext__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_InventorySlot>__get_Current__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_InventorySlot>__GetEnumerator__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pDVar1 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)(pIVar3->fields).inventorySlots;
      if ((pDVar1 == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      *)0x0) ||
         (pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements
                   ::TypeConverterRegistry+ConverterKey,System::Object]::
                   Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                             (pDVar1,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_InventorySlot>__get_Values__
                             ),
         pDVar4 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0)) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pDStack_6 = (pDVar4->fields)._dictionary;
      puStack_7 = (undefined1 *)0x0;
      puStack_8 = (undefined *)0x0;
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&pDStack_10 >> 0xc);
        uVar11 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        do {
          uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
          puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
          LOCK();
          bVar14 = uVar12 == *puVar13;
          if (bVar14) {
            *puVar13 = uVar12 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar14);
      }
      if (pDStack_6 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        pDStack_10 = pDStack_6;
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iStack_15 = (pDStack_6->fields)._version;
      puStack_8 = (undefined *)0x0;
      uStack_16 = 0;
      pIStack_17 = (InventorySlot *)0x0;
      pDStack_10 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                    *)0x0;
      puStack_7 = (undefined1 *)&pDStack_6;
      do {
        if (pDStack_6 ==
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) {
code_?:
          FUN_?();
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (iStack_15 != (pDStack_6->fields)._version) {
code_?:
          mscorlib.dll::System::ThrowHelper::
          ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                    ((MethodInfo *)0x0);
          goto code_?;
        }
        do {
          if (pDStack_6 ==
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) goto code_?;
          if ((uint)(pDStack_6->fields)._count <= uStack_16) {
            return;
          }
          pDVar18 = (pDStack_6->fields)._entries;
          lVar19 = (longlong)(int)uStack_16;
          uVar9 = uStack_16 + 1;
          if (pDVar18 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                         *)0x0) goto code_?;
          if ((uint)pDVar18->max_length <= uStack_16) {
            uStack_16 = uVar9;
            FUN_?();
            goto code_?;
          }
          uStack_16 = uVar9;
        } while ((&pDVar18->vector[0].hashCode)[lVar19 * 6] < 0);
        pIStack_17 = *(InventorySlot **)((longlong)&pDVar18->vector[0].key + lVar19 * 0x18 + 8);
        func_?();
        this_00 = pIStack_17;
        if (pIStack_17 == (InventorySlot *)0x0) {
code_?:
          FUN_?();
          uVar9 = uStack_16;
code_?:
          uStack_16 = uVar9;
          FUN_?();
code_?:
          FUN_?();
          goto code_?;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar20 = InventorySlot::InventorySlot_get_Item(this_00,(MethodInfo *)0x0);
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
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar20 == (GameObject *)0x0) {
          bVar14 = false;
        }
        else {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar14 = (pGVar20->fields)._.m_CachedPtr != (void *)0x0;
        }
        if (bVar14) {
          pGVar20 = InventorySlot::InventorySlot_get_Item(this_00,(MethodInfo *)0x0);
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
                    ((Object_1 *)pGVar20,0.0,(MethodInfo *)0x0);
        }
      } while( true );
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void CreateAndAddTab(AccessoryCategoryClient, Int32) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_CreateAndAddTab
               (AccessoryShopController *this,AccessoryCategoryClient__Enum category,
               int32_t highestSlotIndex,MethodInfo *method)

{
  uVar1 = SUB84(method,0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                  ,CONCAT44(in_register_00000014,category),
                  CONCAT44(in_register_00000084,highestSlotIndex),uVar1);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TabState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar2 = LocalizedEnums::LocalizedEnums___3(category,(MethodInfo *)0x0);
  iVar3 = (this->fields).numberOfSlotsPrPage;
  value = (Object *)FUN_?(TypeInfo__TabState);
  bVar4 = iRam_? != 0;
  *(undefined4 *)((longlong)&value[2].klass + 4) = 1;
  *(AccessoryCategoryClient__Enum *)&value[2].monitor = category;
  *(int32_t *)&value[1].klass = iVar3;
  value[1].monitor = (MonitorData *)pSVar2;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&value[1].monitor >> 0xc);
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
  this_00 = (this->fields).tabs;
  if (this_00 == (Dictionary_2_System_Int32_TabState_ *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
  Dictionary_2_System_Int32_System_Object__TryInsert
            ((Dictionary_2_System_Int32_System_Object_ *)this_00,category,value,
             CONCAT31((int3)((uint)uVar1 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
             ->klass->rgctx_data[0x22].method);
  *(int32_t *)&value[2].klass = highestSlotIndex;
  return;
}


/* Void DisplayAllItems() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_DisplayAllItems
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                     (this,AccessoryCategoryClient__Enum_Hats,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
    AccessoryShopController_CreateAndAddTab
              (this,AccessoryCategoryClient__Enum_Hats,(pLVar1->fields)._size,(MethodInfo *)0x0);
    pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                       (this,AccessoryCategoryClient__Enum_Particles,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
      AccessoryShopController_CreateAndAddTab
                (this,AccessoryCategoryClient__Enum_Particles,(pLVar1->fields)._size,
                 (MethodInfo *)0x0);
      pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                         (this,AccessoryCategoryClient__Enum_BackAccessories,(MethodInfo *)0x0);
      if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
        AccessoryShopController_CreateAndAddTab
                  (this,AccessoryCategoryClient__Enum_BackAccessories,(pLVar1->fields)._size,
                   (MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                           (this,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
        if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
          iVar2 = (pLVar1->fields)._size;
          if (0 < iVar2) {
            AccessoryShopController_CreateAndAddTab
                      (this,AccessoryCategoryClient__Enum_Bundles,iVar2,(MethodInfo *)0x0);
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                             (this,AccessoryCategoryClient__Enum_Featured,(MethodInfo *)0x0);
          if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
            iVar2 = (pLVar1->fields)._size;
            if (0 < iVar2) {
              AccessoryShopController_CreateAndAddTab
                        (this,AccessoryCategoryClient__Enum_Featured,iVar2,(MethodInfo *)0x0);
            }
            pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                               (this,AccessoryCategoryClient__Enum_LevelUnlocks,(MethodInfo *)0x0);
            if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
              iVar3 = (pLVar1->fields)._size;
              uVar4 = 0;
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                              ,4,iVar3,0);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__TabState);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pSVar5 = LocalizedEnums::LocalizedEnums___3
                                 (AccessoryCategoryClient__Enum_LevelUnlocks,(MethodInfo *)0x0);
              iVar6 = (this->fields).numberOfSlotsPrPage;
              value = (Object *)FUN_?(TypeInfo__TabState);
              bVar7 = iRam_? != 0;
              *(undefined4 *)((longlong)&value[2].klass + 4) = 1;
              *(undefined4 *)&value[2].monitor = 4;
              *(int32_t *)&value[1].klass = iVar6;
              value[1].monitor = (MonitorData *)pSVar5;
              if (bVar7) {
                uVar8 = (uint)((ulonglong)&value[1].monitor >> 0xc);
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
              this_00 = (this->fields).tabs;
              if (this_00 == (Dictionary_2_System_Int32_TabState_ *)0x0) {
                FUN_?();
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryInsert
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,4,value,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                         ->klass->rgctx_data[0x22].method);
              *(int32_t *)&value[2].klass = iVar3;
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void DisplayOwnedItems() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_DisplayOwnedItems
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (Dictionary_2_System_UInt32_System_Object_ *)
               AccessoryDataManager::AccessoryDataManager_GetAccessoriesCategoryMap
                         ((MethodInfo *)0x0);
  if (pDStack_1 == (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  uStack_8 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_9 = 2;
  uStack_10 = 0;
  uStack_11 = 0;
  DStack_12._version = (undefined4)uStack_8;
  DStack_12._index = uStack_8._4_4_;
  DStack_12._current.key = 0;
  DStack_12._current._4_4_ = 0;
  DStack_12._current.value = (Object *)0x0;
  DStack_12._getEnumeratorRetType = 2;
  DStack_12._36_4_ = 0;
  DStack_12._dictionary = pDStack_1;
  do {
    bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
             ::UInt32,System::Object]::
             Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                       (&DStack_12,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__MoveNext__
                       );
    pOVar14 = DStack_12._current.value;
    if (bVar13 == 0) {
      return;
    }
    enumVal = DStack_12._current.key;
    pSVar15 = LocalizedEnums::LocalizedEnums___3(enumVal,(MethodInfo *)0x0);
    iVar16 = (this->fields).numberOfSlotsPrPage;
    value = (Object *)FUN_?();
    *(undefined4 *)((longlong)&value[2].klass + 4) = 1;
    *(AccessoryCategoryClient__Enum *)&value[2].monitor = enumVal;
    *(int32_t *)&value[1].klass = iVar16;
    value[1].monitor = (MonitorData *)pSVar15;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&value[1].monitor >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar7 = uVar5 == *puVar6;
        if (bVar7) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                   );
      LOCK();
      UNLOCK();
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar3 = 0;
    iVar17 = 0;
    if (pOVar14 == (Object *)0x0) goto code_?;
    while (iVar18 = iVar17, (int)uVar3 < (int)*(uint *)&pOVar14[1].monitor) {
      if (*(uint *)&pOVar14[1].monitor <= uVar3) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        goto code_?;
      }
      pOVar19 = pOVar14[1].klass;
      if (pOVar19 == (Object__Class *)0x0) {
code_?:
        FUN_?();
        goto code_?;
      }
      if (*(uint *)&(pOVar19->_0).namespaze <= uVar3) {
        FUN_?();
code_?:
        FUN_?();
        goto code_?;
      }
      pvVar20 = (&(pOVar19->_0).byval_arg.data)[(int)uVar3].dummy;
      if (pvVar20 == (void *)0x0) goto code_?;
      uVar3 = uVar3 + 1;
      iVar17 = iVar18 + 1;
      if (*(char *)((longlong)pvVar20 + 0x40) == '\0') {
        iVar17 = iVar18;
      }
    }
    if (value == (Object *)0x0) {
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(int *)&value[2].klass = iVar18;
    this_00 = (this->fields).tabs;
    if (this_00 == (Dictionary_2_System_Int32_TabState_ *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                ->klass->rgctx_data[0x22].method;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,enumVal,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),2),method_00);
  } while( true );
}


/* Void DisplayPurchasableItems(Boolean) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_DisplayPurchasableItems
               (AccessoryShopController *this,bool displayShopItems,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).displayShopItems = displayShopItems;
  if (bVar1) {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).tabs;
  if (this_00 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
  TypeConverterRegistry+ConverterKey,System::Object]::
  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
            (this_00,MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Clear__);
  pIVar3 = (this->fields).inventoryController;
  if ((pIVar3 == (InventoryController *)0x0) ||
     (pIVar4 = (pIVar3->fields).inventorySlots, pIVar4 == (InventorySlots *)0x0))
  goto code_?;
  InventorySlots::InventorySlots_Clear(pIVar4,(MethodInfo *)0x0);
  if (displayShopItems == 0) {
    AccessoryShopController_DisplayOwnedItems(this,(MethodInfo *)0x0);
  }
  else {
    AccessoryShopController_DisplayAllItems(this,(MethodInfo *)0x0);
  }
  pDVar5 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).tabs;
  if (pDVar5 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) goto code_?;
  iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                     (pDVar5,(this->fields).selectedTab,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                      ->klass->rgctx_data[0x21].method);
  if (iVar6 < 0) {
    (this->fields).selectedTab = (this->fields).startingCategory;
  }
  pDVar7 = (this->fields).tabs;
  if ((pDVar7 == (Dictionary_2_System_Int32_TabState_ *)0x0) ||
     (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,
                           (this->fields).selectedTab,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                          ), pOVar8 == (Object *)0x0)) goto code_?;
  FUN_?((float)*(int *)&pOVar8[2].klass / (float)*(int *)&pOVar8[1].klass);
  *(undefined4 *)((longlong)&pOVar8[2].klass + 4) = 1;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessoryShopController___UpdateContent_b__38_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_Root___AccessoryShopCont);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar9 = (this->fields).previewItemsRoot;
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
  if (pTVar9 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar9->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar9 = (this->fields).previewItemsRoot;
      if (pTVar9 == (Transform *)0x0) goto code_?;
      pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar9,(MethodInfo *)0x0);
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
                ((Object_1 *)pGVar10,0.0,(MethodInfo *)0x0);
    }
  }
  pGVar10 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  name = StringLiteral_Preview_Root___AccessoryShopCont;
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
            (pGVar10,name,(MethodInfo *)0x0);
  if (pGVar10 != (GameObject *)0x0) {
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar10,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).previewItemsRoot = pTVar9;
    if (bVar1) {
      uVar11 = (uint)((ulonglong)&(this->fields).previewItemsRoot >> 0xc);
      uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar13 == *puVar14;
        if (bVar1) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pIVar3 = (this->fields).inventoryController;
    if ((pIVar3 != (InventoryController *)0x0) &&
       (pIVar4 = (pIVar3->fields).inventorySlots, pIVar4 != (InventorySlots *)0x0)) {
      InventorySlots::InventorySlots_Clear(pIVar4,(MethodInfo *)0x0);
      pDVar5 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).tabs;
      if (pDVar5 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                           (pDVar5,(this->fields).selectedTab,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                            ->klass->rgctx_data[0x21].method);
        if (iVar6 < 0) {
          (this->fields).selectedTab = (this->fields).startingCategory;
        }
        pDVar7 = (this->fields).tabs;
        if (pDVar7 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
          pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,
                               (this->fields).selectedTab,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              );
          pIVar3 = (this->fields).inventoryController;
          uVar11 = (this->fields).selectedTab;
          if (pOVar8 != (Object *)0x0) {
            page = *(uint *)((longlong)&pOVar8[2].klass + 4);
            uVar15 = FUN_?((float)*(int *)&pOVar8[2].klass /
                                   (float)*(int *)&pOVar8[1].klass);
            uVar16 = 1;
            if (1 < (int)uVar15) {
              uVar16 = uVar15;
            }
            if ((pIVar3 != (InventoryController *)0x0) &&
               (pTVar17 = (pIVar3->fields).tabMenu, pTVar17 != (TabMenuBase *)0x0)) {
              (*(pTVar17->klass->vtable).__unknown_1.methodPtr)
                        (pTVar17,(ulonglong)uVar11,(ulonglong)page,(ulonglong)uVar16,
                         (pTVar17->klass->vtable).__unknown_1.method);
              pIVar4 = (pIVar3->fields).inventorySlots;
              if (pIVar4 != (InventorySlots *)0x0) {
                uVar11 = (pIVar3->fields).numberOfSlots;
                method_00 = (MethodInfo *)(ulonglong)uVar11;
                player = (MVPlayer *)(ulonglong)page;
                InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                          (pIVar4,page,uVar11,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pGVar18 = TypeInfo__MVGameControllerBase->static_fields->
                         _GameSessionData_k__BackingField;
                if (pGVar18 != (GameSessionData *)0x0) {
                  if ((pGVar18->fields).gameMode == 2) {
                    pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                    this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                              FUN_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                                           );
                    UnityEngine.UI.dll::UnityEngine::EventSystems::
                    ExecuteEvents+EventFunction`1[System::Object]::
                    ExecuteEvents_EventFunction_1_System_Object___ctor
                              (this_02,(Object *)this,
                               MethodInfo__AccessoryShopController___UpdateContent_b__38_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                               ,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                        == 0) {
                      FUN_?();
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy
                              (pGVar10,(BaseEventData *)0x0,this_02,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                              );
                    return;
                  }
                  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
                  if (extraout_RAX != 0) {
                    if (cRam_? == '\0') {
                      FUN_?();
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0)
                    ;
                    if (this_01 != (MVWorldObjectClientManager *)0x0) {
                      avatarBody = (MVBody *)
                                   MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_GetWorldObjectClient_1
                                             (this_01,*(int32_t *)(extraout_RAX + 0xa8),
                                              MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                                             );
                      AccessoryShopController_UpdateContentWithBody
                                (this,avatarBody,(MethodInfo *)0x0);
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
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* List`1[AccessoryDataClient] GetAccessoryDataFromCategoryType(AccessoryCategoryClient) */

List_1_AccessoryDataClient_ *
Assembly-CSharp.dll::AccessoryShopController::
AccessoryShopController_GetAccessoryDataFromCategoryType
          (AccessoryShopController *this,AccessoryCategoryClient__Enum category,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Linq__IOrderedEnumerable<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__OrderBy<AccessoryDataClient,_int>_System__Collections__Generic__IEnumerable<AccessoryDataClient>__System__Func<AccessoryDataClient,_int>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Collections__Generic__List<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__ToList<AccessoryDataClient>_System__Collections__Generic__IEnumerable<AccessoryDataClient>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<AccessoryDataClient,_int>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Add_AccessoryDataClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__Contains_AccessoryDataClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::Accessories::AccessoryBundleItem>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryShopController____c___GetAccessoryDataFromCategoryType_b__40_0_AccessoryDataClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryShopController____c___GetAccessoryDataFromCategoryType_b__40_1_AccessoryDataClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryShopController____c___GetAccessoryDataFromCategoryType_b__40_2_AccessoryDataClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryShopController____c___GetAccessoryDataFromCategoryType_b__40_3_AccessoryDataClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_UInt32_System_Object_ *)
            AccessoryDataManager::AccessoryDataManager_GetAccessoriesCategoryMap((MethodInfo *)0x0);
  if (category == AccessoryCategoryClient__Enum_LevelUnlocks) {
    pLVar2 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (pLVar2,MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    if (pDVar1 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      uStack_3 = 0;
      uStack_4 = 0;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
        lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      uStack_11 = (ulonglong)(uint)(pDVar1->fields)._version;
      uStack_12 = 2;
      DStack_13._version = (undefined4)uStack_11;
      DStack_13._index = uStack_11._4_4_;
      DStack_13._current.key = 0;
      DStack_13._current._4_4_ = 0;
      DStack_13._current.value = (Object *)0x0;
      DStack_13._getEnumeratorRetType = 2;
      DStack_13._36_4_ = 0;
      pDStack_6 = pDVar1;
      DStack_13._dictionary = pDVar1;
      while (bVar14 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               (&DStack_13,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__MoveNext__
                               ), pOVar15 = DStack_13._current.value, iVar16 = 0, bVar14 != 0) {
        while( true ) {
          if (pOVar15 == (Object *)0x0) goto code_?;
          if (*(int *)&pOVar15[1].monitor <= iVar16) break;
          lVar7 = FUN_?(pOVar15,iVar16);
          if (lVar7 == 0) goto code_?;
          if (((99 < *(int *)(lVar7 + 0x20)) || (*(int *)(lVar7 + 0x1c) == 0)) &&
             (*(int *)(lVar7 + 0x24) != 0)) {
            if (pLVar2 == (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0
               ) goto code_?;
            cVar17 = FUN_?(pLVar2,lVar7);
            if (cVar17 == '\0') {
              FUN_?(pLVar2,lVar7);
            }
          }
          iVar16 = iVar16 + 1;
        }
      }
      if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      pFVar18 = TypeInfo__AccessoryShopController____c->static_fields->__9__40_2;
      if (pFVar18 == (Func_2_AccessoryDataClient_Int32_ *)0x0) {
        if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        pAVar19 = TypeInfo__AccessoryShopController____c->static_fields->__9;
        pFVar18 = (Func_2_AccessoryDataClient_Int32_ *)
                  FUN_?(TypeInfo__System__Func<AccessoryDataClient,_int>);
        mscorlib.dll::System::Func`2[Object,Int32Enum]::Func_2_Object_Int32Enum___ctor
                  ((Func_2_Object_Int32Enum_ *)pFVar18,(Object *)pAVar19,
                   MethodInfo__AccessoryShopController____c___GetAccessoryDataFromCategoryType_b__40_2_AccessoryDataClient_
                   ,(MethodInfo *)0x0);
        TypeInfo__AccessoryShopController____c->static_fields->__9__40_2 = pFVar18;
        func_?(&TypeInfo__AccessoryShopController____c->static_fields->__9__40_2);
      }
      pIVar20 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_5
                          ((IEnumerable_1_System_Object_ *)pLVar2,(Func_2_Object_Int32_ *)pFVar18,
                           System__Linq__IOrderedEnumerable<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__OrderBy<AccessoryDataClient,_int>_System__Collections__Generic__IEnumerable<AccessoryDataClient>__System__Func<AccessoryDataClient,_int>_
                          );
      pMVar21 = 
      System__Collections__Generic__List<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__ToList<AccessoryDataClient>_System__Collections__Generic__IEnumerable<AccessoryDataClient>_
      ;
      if ((
          System__Collections__Generic__List<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__ToList<AccessoryDataClient>_System__Collections__Generic__IEnumerable<AccessoryDataClient>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     System__Collections__Generic__List<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__ToList<AccessoryDataClient>_System__Collections__Generic__IEnumerable<AccessoryDataClient>_
                     );
      }
      if (pIVar20 == (IOrderedEnumerable_1_System_Object_ *)0x0) {
        pSVar22 = (String *)func_?(&StringLiteral_source);
        pEVar23 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull
                            (pSVar22,(MethodInfo *)0x0);
        FUN_?(pEVar23,pMVar21);
        pcVar24 = (code *)swi(3);
        pLVar25 = (List_1_AccessoryDataClient_ *)(*pcVar24)();
        return pLVar25;
      }
code_?:
      pvVar26 = (pMVar21->field7_0x38).rgctx_data[1].rgctxDataDummy;
      if ((*(byte *)((longlong)pvVar26 + 0x135) & 1) == 0) {
        pvVar26 = (void *)FUN_?(pvVar26);
      }
      pLVar25 = (List_1_AccessoryDataClient_ *)FUN_?(pvVar26);
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object___ctor_1
                ((List_1_System_Object_ *)pLVar25,(IEnumerable_1_System_Object_ *)pIVar20,
                 (pMVar21->field7_0x38).rgctx_data[2].method);
      return pLVar25;
    }
  }
  else if (category == AccessoryCategoryClient__Enum_Bundles) {
    pLVar2 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (pLVar2,MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    pAVar27 = AccessoryDataManager::AccessoryDataManager_get_AccessoryBundleClient
                        ((MethodInfo *)0x0);
    if (pAVar27 != (AccessoryBundleClient *)0x0) {
      pLVar28 = (pAVar27->fields)._.accessoryBundleItems;
      uVar5 = 0;
      if (pLVar28 != (List_1_MV_WorldObject_Accessories_AccessoryBundleItem_ *)0x0) {
        lVar7 = 0x20;
        for (; (int)uVar5 < (pLVar28->fields)._size; uVar5 = uVar5 + 1) {
          if ((uint)(pLVar28->fields)._size <= uVar5) {
code_?:
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar24 = (code *)swi(3);
            pLVar25 = (List_1_AccessoryDataClient_ *)(*pcVar24)();
            return pLVar25;
          }
          pAVar29 = (pLVar28->fields)._items;
          if (pAVar29 == (AccessoryBundleItem__Array *)0x0) goto code_?;
          if ((uint)pAVar29->max_length <= uVar5) {
code_?:
            FUN_?();
            pcVar24 = (code *)swi(3);
            pLVar25 = (List_1_AccessoryDataClient_ *)(*pcVar24)();
            return pLVar25;
          }
          lVar30 = *(longlong *)((longlong)pAVar29->vector + lVar7 + -0x20);
          if (lVar30 == 0) goto code_?;
          pAVar31 = AccessoryDataManager::AccessoryDataManager_GetAccessoryDataByMetaDataId
                              (*(int32_t *)(lVar30 + 0x14),(MethodInfo *)0x0);
          if ((pAVar31 != (AccessoryDataClient *)0x0) && ((pAVar31->fields)._.owns == 0)) {
            if (pLVar2 == (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0
               ) goto code_?;
            FUN_?(pLVar2);
          }
          lVar7 = lVar7 + 8;
        }
        if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        pFVar18 = TypeInfo__AccessoryShopController____c->static_fields->__9__40_0;
        if (pFVar18 == (Func_2_AccessoryDataClient_Int32_ *)0x0) {
          if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
            FUN_?();
          }
          pAVar19 = TypeInfo__AccessoryShopController____c->static_fields->__9;
          pFVar18 = (Func_2_AccessoryDataClient_Int32_ *)
                    FUN_?(TypeInfo__System__Func<AccessoryDataClient,_int>);
          mscorlib.dll::System::Func`2[Object,Int32Enum]::Func_2_Object_Int32Enum___ctor
                    ((Func_2_Object_Int32Enum_ *)pFVar18,(Object *)pAVar19,
                     MethodInfo__AccessoryShopController____c___GetAccessoryDataFromCategoryType_b__40_0_AccessoryDataClient_
                     ,(MethodInfo *)0x0);
          TypeInfo__AccessoryShopController____c->static_fields->__9__40_0 = pFVar18;
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)
                            &TypeInfo__AccessoryShopController____c->static_fields->__9__40_0 >> 0xc
                           );
            lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
        }
        pIVar20 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_5
                            ((IEnumerable_1_System_Object_ *)pLVar2,(Func_2_Object_Int32_ *)pFVar18
                             ,
                             System__Linq__IOrderedEnumerable<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__OrderBy<AccessoryDataClient,_int>_System__Collections__Generic__IEnumerable<AccessoryDataClient>__System__Func<AccessoryDataClient,_int>_
                            );
        pMVar21 = 
        System__Collections__Generic__List<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__ToList<AccessoryDataClient>_System__Collections__Generic__IEnumerable<AccessoryDataClient>_
        ;
        if ((
            System__Collections__Generic__List<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__ToList<AccessoryDataClient>_System__Collections__Generic__IEnumerable<AccessoryDataClient>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       System__Collections__Generic__List<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__ToList<AccessoryDataClient>_System__Collections__Generic__IEnumerable<AccessoryDataClient>_
                       );
        }
        if (pIVar20 == (IOrderedEnumerable_1_System_Object_ *)0x0) {
          pSVar22 = (String *)func_?(&StringLiteral_source);
          pEVar23 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull
                              (pSVar22,(MethodInfo *)0x0);
          FUN_?(pEVar23,pMVar21);
code_?:
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
          FUN_?();
          pcVar24 = (code *)swi(3);
          pLVar25 = (List_1_AccessoryDataClient_ *)(*pcVar24)();
          return pLVar25;
        }
        goto code_?;
      }
    }
  }
  else if (category == AccessoryCategoryClient__Enum_Featured) {
    pLVar2 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<AccessoryDataClient>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (pLVar2,MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__List__);
    if (pDVar1 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      uStack_3 = 0;
      uStack_4 = 0;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&pDStack_6 >> 0xc);
        lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      uStack_11 = (ulonglong)(uint)(pDVar1->fields)._version;
      uStack_12 = 2;
      DStack_13._version = (undefined4)uStack_11;
      DStack_13._index = uStack_11._4_4_;
      DStack_13._current.key = 0;
      DStack_13._current._4_4_ = 0;
      DStack_13._current.value = (Object *)0x0;
      DStack_13._getEnumeratorRetType = 2;
      DStack_13._36_4_ = 0;
      pDStack_6 = pDVar1;
      DStack_13._dictionary = pDVar1;
      do {
        bVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_13,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessoryCategory,_System::Collections::Generic::List<AccessoryDataClient>_>__MoveNext__
                          );
        pOVar15 = DStack_13._current.value;
        iVar16 = 0;
        if (bVar14 == 0) {
          if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
            FUN_?();
          }
          pFVar18 = TypeInfo__AccessoryShopController____c->static_fields->__9__40_1;
          if (pFVar18 == (Func_2_AccessoryDataClient_Int32_ *)0x0) {
            if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
              FUN_?();
            }
            pAVar19 = TypeInfo__AccessoryShopController____c->static_fields->__9;
            pFVar18 = (Func_2_AccessoryDataClient_Int32_ *)
                      FUN_?(TypeInfo__System__Func<AccessoryDataClient,_int>);
            mscorlib.dll::System::Func`2[Object,Int32Enum]::Func_2_Object_Int32Enum___ctor
                      ((Func_2_Object_Int32Enum_ *)pFVar18,(Object *)pAVar19,
                       MethodInfo__AccessoryShopController____c___GetAccessoryDataFromCategoryType_b__40_1_AccessoryDataClient_
                       ,(MethodInfo *)0x0);
            TypeInfo__AccessoryShopController____c->static_fields->__9__40_1 = pFVar18;
            func_?(&TypeInfo__AccessoryShopController____c->static_fields->__9__40_1);
          }
          pIVar20 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_5
                              ((IEnumerable_1_System_Object_ *)pLVar2,
                               (Func_2_Object_Int32_ *)pFVar18,
                               System__Linq__IOrderedEnumerable<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__OrderBy<AccessoryDataClient,_int>_System__Collections__Generic__IEnumerable<AccessoryDataClient>__System__Func<AccessoryDataClient,_int>_
                              );
          pLVar25 = (List_1_AccessoryDataClient_ *)FUN_?(pIVar20);
          return pLVar25;
        }
        while( true ) {
          if (pOVar15 == (Object *)0x0) goto code_?;
          if (*(int *)&pOVar15[1].monitor <= iVar16) break;
          lVar7 = FUN_?(pOVar15,iVar16);
          if (lVar7 == 0) goto code_?;
          if ((*(char *)(lVar7 + 0x1a) != '\0') && (*(char *)(lVar7 + 0x40) == '\0')) {
            if (pLVar2 == (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0
               ) goto code_?;
            cVar17 = FUN_?(pLVar2,lVar7);
            if (cVar17 == '\0') {
              FUN_?(pLVar2,lVar7);
            }
          }
          iVar16 = iVar16 + 1;
        }
      } while( true );
    }
  }
  else {
    pLVar25 = AccessoryDataManager::AccessoryDataManager_GetAccessoriesByCategoryId
                        ((this->fields).selectedTab,(MethodInfo *)0x0);
    if (pLVar25 != (List_1_AccessoryDataClient_ *)0x0) {
      uVar5 = (pLVar25->fields)._size - 1;
      if (-1 < (int)uVar5) {
        lVar7 = (longlong)(int)uVar5 * 8 + 0x20;
        do {
          if ((uint)(pLVar25->fields)._size <= uVar5) goto code_?;
          pAVar32 = (pLVar25->fields)._items;
          if (pAVar32 == (AccessoryDataClient__Array *)0x0) goto code_?;
          if ((uint)pAVar32->max_length <= uVar5) goto code_?;
          lVar30 = *(longlong *)((longlong)pAVar32->vector + lVar7 + -0x20);
          if (lVar30 == 0) goto code_?;
          if (*(int *)(lVar30 + 0x1c) == (*(int *)(lVar30 + 0x20) * *(int *)(lVar30 + 0x1c)) / 100)
          {
            lVar30 = FUN_?(pLVar25,uVar5);
            if (lVar30 == 0) goto code_?;
            if (*(char *)(lVar30 + 0x40) == '\0') {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__RemoveAt
                        ((List_1_System_Object_ *)pLVar25,uVar5,
                         MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__RemoveAt_int_
                        );
            }
          }
          lVar7 = lVar7 + -8;
          uVar5 = uVar5 - 1;
        } while (-1 < (int)uVar5);
      }
      if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      pFVar18 = TypeInfo__AccessoryShopController____c->static_fields->__9__40_3;
      if (pFVar18 == (Func_2_AccessoryDataClient_Int32_ *)0x0) {
        if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
          FUN_?();
        }
        pAVar19 = TypeInfo__AccessoryShopController____c->static_fields->__9;
        pFVar18 = (Func_2_AccessoryDataClient_Int32_ *)
                  FUN_?(TypeInfo__System__Func<AccessoryDataClient,_int>);
        mscorlib.dll::System::Func`2[Object,Int32Enum]::Func_2_Object_Int32Enum___ctor
                  ((Func_2_Object_Int32Enum_ *)pFVar18,(Object *)pAVar19,
                   MethodInfo__AccessoryShopController____c___GetAccessoryDataFromCategoryType_b__40_3_AccessoryDataClient_
                   ,(MethodInfo *)0x0);
        TypeInfo__AccessoryShopController____c->static_fields->__9__40_3 = pFVar18;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)
                          &TypeInfo__AccessoryShopController____c->static_fields->__9__40_3 >> 0xc);
          lVar7 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
      }
      pIVar20 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_5
                          ((IEnumerable_1_System_Object_ *)pLVar25,(Func_2_Object_Int32_ *)pFVar18,
                           System__Linq__IOrderedEnumerable<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__OrderBy<AccessoryDataClient,_int>_System__Collections__Generic__IEnumerable<AccessoryDataClient>__System__Func<AccessoryDataClient,_int>_
                          );
      pMVar21 = 
      System__Collections__Generic__List<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__ToList<AccessoryDataClient>_System__Collections__Generic__IEnumerable<AccessoryDataClient>_
      ;
      if ((
          System__Collections__Generic__List<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__ToList<AccessoryDataClient>_System__Collections__Generic__IEnumerable<AccessoryDataClient>_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(
                     System__Collections__Generic__List<AccessoryDataClient>_MethodInfo__System__Linq__Enumerable__ToList<AccessoryDataClient>_System__Collections__Generic__IEnumerable<AccessoryDataClient>_
                     );
      }
      if (pIVar20 == (IOrderedEnumerable_1_System_Object_ *)0x0) {
        pSVar22 = (String *)func_?(&StringLiteral_source);
        pEVar23 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull
                            (pSVar22,(MethodInfo *)0x0);
        FUN_?(pEVar23,pMVar21);
        pcVar24 = (code *)swi(3);
        pLVar25 = (List_1_AccessoryDataClient_ *)(*pcVar24)();
        return pLVar25;
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
  FUN_?();
  pcVar24 = (code *)swi(3);
  pLVar25 = (List_1_AccessoryDataClient_ *)(*pcVar24)();
  return pLVar25;
}


/* Int32 GetOwnedAmount(List`1[AccessoryDataClient]) */

int32_t Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_GetOwnedAmount
                  (AccessoryShopController *this,List_1_AccessoryDataClient_ *accessoryList,
                  MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  if (accessoryList != (List_1_AccessoryDataClient_ *)0x0) {
    uVar2 = (accessoryList->fields)._size;
    lVar3 = 0x20;
    uVar4 = uVar1;
    while( true ) {
      uVar5 = uVar4;
      if ((int)uVar2 <= (int)uVar1) {
        return uVar5;
      }
      if (uVar2 <= uVar1) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      pAVar8 = (accessoryList->fields)._items;
      if (pAVar8 == (AccessoryDataClient__Array *)0x0) break;
      if ((uint)pAVar8->max_length <= uVar1) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        iVar7 = (*pcVar6)();
        return iVar7;
      }
      lVar9 = *(longlong *)((longlong)pAVar8->vector + lVar3 + -0x20);
      if (lVar9 == 0) break;
      uVar1 = uVar1 + 1;
      lVar3 = lVar3 + 8;
      uVar4 = uVar5 + 1;
      if (*(char *)(lVar9 + 0x40) == '\0') {
        uVar4 = uVar5;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  iVar7 = (*pcVar6)();
  return iVar7;
}


/* Void InventoryChanged() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_InventoryChanged
               (AccessoryShopController *this,MethodInfo *method)

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
                  MethodInfo__AccessoryShopController____c___InventoryChanged_b__33_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryShopController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AccessoryShopController____c);
  }
  this_02 = TypeInfo__AccessoryShopController____c->static_fields->__9__33_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AccessoryShopController____c);
    }
    object = TypeInfo__AccessoryShopController____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__AccessoryShopController____c___InventoryChanged_b__33_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryShopController____c->static_fields->__9__33_0 = this_02;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__AccessoryShopController____c->static_fields->__9__33_0 >>
                    0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  iVar5 = (this->fields).currentlyPushOption;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager,iVar5,0);
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
  (this->fields).pushOption = iVar5;
  pUVar6 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,MethodInfo__AccessoryShopController__ReadyCallback__,
             (MethodInfo *)0x0);
  pUVar6 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar6,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pUVar6 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
  }
  else {
    pUVar7 = (UnityAction *)0x0;
    if (pUVar6->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar7 = pUVar6;
    }
    if (pUVar7 == (UnityAction *)0x0) {
      FUN_?(pUVar6,TypeInfo__UnityEngine__Events__UnityAction,pUVar6,0,unaff_RDI);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar7;
    pUVar9 = (UnityAction *)0x0;
    if (pUVar6->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar9 = pUVar6;
    }
    if (pUVar9 == (UnityAction *)0x0) {
      FUN_?(pUVar6,TypeInfo__UnityEngine__Events__UnityAction,pUVar6,pUVar7,unaff_RDI);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__AccessoryDataManager->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (ulonglong)(uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar10 = TypeInfo__AccessoryDataManager->static_fields;
  if (pAVar10->accessoriesReady == 0) {
    if (pAVar10->accessoriesRequested == 0) {
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAccessoryData
                (this_00,(MethodInfo *)0x0);
      TypeInfo__AccessoryDataManager->static_fields->accessoriesRequested = 1;
      return;
    }
  }
  else if (pAVar10->readyCallback != (UnityAction *)0x0) {
    pUVar6 = pAVar10->readyCallback;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar6->fields)._._.invoke_impl)
              ((pUVar6->fields)._._.method_code,(pUVar6->fields)._._.method);
    return;
  }
  return;
}


/* Void OnPop() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_OnPop
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AccessoryShopController__ReadyCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryShopController____c___OnPop_b__37_0_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryShopController____c);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_02,(Object *)this,MethodInfo__AccessoryShopController__ReadyCallback__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_02,(MethodInfo *)0x0);
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
      FUN_?(pUVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)TypeInfo__AccessoryDataManager->static_fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AccessoryShopController____c);
  }
  this_03 = TypeInfo__AccessoryShopController____c->static_fields->__9__37_0;
  if (this_03 == (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
    if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AccessoryShopController____c);
    }
    object = TypeInfo__AccessoryShopController____c->static_fields->__9;
    this_03 = (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_03,(Object *)object,
               MethodInfo__AccessoryShopController____c___OnPop_b__37_0_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryShopController____c->static_fields->__9__37_0 = this_03;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&TypeInfo__AccessoryShopController____c->static_fields->__9__37_0
                     >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar9,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_03,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
            );
  pTVar10 = (this->fields).previewItemsRoot;
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
  if (pTVar10 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar10->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar10 = (this->fields).previewItemsRoot;
      if (pTVar10 == (Transform *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar10,(MethodInfo *)0x0);
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
                ((Object_1 *)pGVar9,0.0,(MethodInfo *)0x0);
    }
  }
  bVar8 = iRam_? != 0;
  (this->fields).previewItemsRoot = (Transform *)0x0;
  if (bVar8) {
    uVar4 = (uint)((ulonglong)&(this->fields).previewItemsRoot >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,0,(MethodInfo *)0x0);
  pMVar11 = (MethodInfo *)0x0;
  player = (MVPlayer *)0x0;
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryShopController____c__DisplayClass32_0___SetAccessoriesToSelectable_b__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryShopController____c__DisplayClass32_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__AccessoryShopController____c__DisplayClass32_0);
  if (object_00 != (Object *)0x0) {
    bVar8 = iRam_? != 0;
    object_00[1].klass = (Object__Class *)0x0;
    if (bVar8) {
      uVar4 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
      pMVar11 = (MethodInfo *)(ulonglong)(uVar4 & 0x3f);
      lVar12 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      player = (MVPlayer *)(lVar12 + 0xADDR);
      do {
        uVar5 = *(ulonglong *)(lVar12 + 0xADDR);
        LOCK();
        bVar8 = uVar5 == *(ulonglong *)(lVar12 + 0xADDR);
        if (bVar8) {
          *(ulonglong *)(lVar12 + 0xADDR) = uVar5 | 1L << (longlong)pMVar11;
        }
        UNLOCK();
      } while (!bVar8);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar13 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar13 != (GameSessionData *)0x0) {
      if ((pGVar13->fields).gameMode == 2) {
        pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_01,object_00,
                   MethodInfo__AccessoryShopController____c__DisplayClass32_0___SetAccessoriesToSelectable_b__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar9,(BaseEventData *)0x0,this_01,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                  );
      }
      else {
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,pMVar11);
        if (extraout_RAX == 0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_00 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pOVar14 = (Object__Class *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                           (this_00,*(int32_t *)(extraout_RAX + 0xa8),
                            MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                           );
        bVar8 = iRam_? != 0;
        object_00[1].klass = pOVar14;
        if (bVar8) {
          uVar4 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
          lVar12 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar5 = *(ulonglong *)(lVar12 + 0xADDR);
            puVar7 = (ulonglong *)(lVar12 + 0xADDR);
            LOCK();
            bVar8 = uVar5 == *puVar7;
            if (bVar8) {
              *puVar7 = uVar5 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
      }
      if ((object_00[1].klass != (Object__Class *)0x0) &&
         (pMVar11 = ((object_00[1].klass)->vtable).GetHashCode.method, pMVar11 != (MethodInfo *)0x0)
         ) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                        ,0,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Key__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        *(undefined1 *)&pMVar11->invoker_method = 0;
        if (((Component *)pMVar11->parameters != (Component *)0x0) &&
           (pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pMVar11->parameters,(MethodInfo *)0x0),
           pGVar9 != (GameObject *)0x0)) {
          p_Var7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren_4
                             (pGVar9,1,
                              SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                             );
          uVar4 = 0;
          if (p_Var7 != (_Il2CppFullySharedGenericType__Array *)0x0) {
            pp_Var13 = p_Var7->vector;
            while( true ) {
              if ((int)p_Var7->max_length <= (int)uVar4) {
                return;
              }
              if ((uint)p_Var7->max_length <= uVar4) {
                FUN_?();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if ((Component *)*pp_Var13 == (Component *)0x0) break;
              pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)*pp_Var13,(MethodInfo *)0x0);
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
                        ((Object_1 *)pGVar9,0.0,(MethodInfo *)0x0);
              uVar4 = uVar4 + 1;
              pp_Var13 = pp_Var13 + 1;
            }
          }
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IEnumerator OpenAccessoryViewDelayed() */

IEnumerator *
Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_OpenAccessoryViewDelayed
          (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryShopController___OpenAccessoryViewDelayed_d__21);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__AccessoryShopController___OpenAccessoryViewDelayed_d__21);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Void OpenInventoryAtItem(UIPushOption, AccessoryDataClient) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_OpenInventoryAtItem
               (AccessoryShopController *this,UIPushOption__Enum pushOption,
               AccessoryDataClient *accessoryData,MethodInfo *method)

{
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
  bVar1 = iRam_? != 0;
  (this->fields).accessoryDataToShow = accessoryData;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).accessoryDataToShow >> 0xc);
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
  (this->fields).pushOption = pushOption;
  pUVar6 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_01 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_01,(Object *)this,
             MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__,(MethodInfo *)0x0);
  pUVar6 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar6,(Delegate *)this_01,(MethodInfo *)0x0);
  if (pUVar6 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
  }
  else {
    pUVar7 = (UnityAction *)0x0;
    if (pUVar6->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar7 = pUVar6;
    }
    if (pUVar7 == (UnityAction *)0x0) {
      FUN_?(pUVar6,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = pUVar7;
    pUVar7 = (UnityAction *)0x0;
    if (pUVar6->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar7 = pUVar6;
    }
    if (pUVar7 == (UnityAction *)0x0) {
      FUN_?(pUVar6,TypeInfo__UnityEngine__Events__UnityAction);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)TypeInfo__AccessoryDataManager->static_fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
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
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestAccessoryData
                (this_00,(MethodInfo *)0x0);
      TypeInfo__AccessoryDataManager->static_fields->accessoriesRequested = 1;
      return;
    }
  }
  else if (pAVar9->readyCallback != (UnityAction *)0x0) {
    pUVar6 = pAVar9->readyCallback;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar6->fields)._._.invoke_impl)
              ((pUVar6->fields)._._.method_code,(pUVar6->fields)._._.method);
    return;
  }
  return;
}


/* Void PageTurned(Int32) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_PageTurned
               (AccessoryShopController *this,int32_t dir,MethodInfo *method)

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
        AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReadyCallback() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_ReadyCallback
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryDataManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AccessoryShopController__PageTurned_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AccessoryShopController__ReadyCallback__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AccessoryShopController__TabSelected_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryShopController___ReadyCallback_b__25_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__GetEnumerator__
                 );
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
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
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
                  MethodInfo__AccessoryShopController____c___ReadyCallback_b__25_0_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryShopController____c___ReadyCallback_b__25_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryShopController____c);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).selectedTab = (this->fields).startingCategory;
  if ((this->fields).firstTimeSetup != 0) {
    AccessoryShopController_DisplayAllItems(this,(MethodInfo *)0x0);
    (this->fields).firstTimeSetup = 0;
  }
  pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_03 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_03,(Object *)this,MethodInfo__AccessoryShopController__ReadyCallback__,
             (MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
            mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pUVar1,(Delegate *)this_03,(MethodInfo *)0x0);
  if (pUVar1 == (UnityAction *)0x0) {
    TypeInfo__AccessoryDataManager->static_fields->readyCallback = (UnityAction *)0x0;
  }
  else {
    pUVar2 = (UnityAction *)0x0;
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      FUN_?();
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
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)TypeInfo__AccessoryDataManager->static_fields >> 0xc);
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
  pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AccessoryShopController____c);
  }
  this_04 = TypeInfo__AccessoryShopController____c->static_fields->__9__25_0;
  if (this_04 == (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)0x0) {
    if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AccessoryShopController____c);
    }
    pAVar10 = TypeInfo__AccessoryShopController____c->static_fields->__9;
    this_04 = (ExecuteEvents_EventFunction_1_IEditStateCommands_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_04,(Object *)pAVar10,
               MethodInfo__AccessoryShopController____c___ReadyCallback_b__25_0_IEditStateCommands__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AccessoryShopController____c->static_fields->__9__25_0 = this_04;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&TypeInfo__AccessoryShopController____c->static_fields->__9__25_0
                     >> 0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar9,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_04,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IEditStateCommands>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IEditStateCommands>_
            );
  (this->fields).currentlyPushOption = (this->fields).pushOption;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  pIVar11 = (this->fields).inventoryControllerPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar11 = (InventoryController *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pIVar11,
                       InventoryController_MethodInfo__UnityEngine__Object__Instantiate<InventoryController>_InventoryController_
                      );
  (this->fields).inventoryController = pIVar11;
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).inventoryController >> 0xc);
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
  pIVar11 = (this->fields).inventoryController;
  if (pIVar11 != (InventoryController *)0x0) {
    pUVar12 = (pIVar11->fields).OnPageTurned;
    pDVar13 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    FUN_?(pDVar13,this);
    pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pUVar12,pDVar13,(MethodInfo *)0x0);
    pUVar14 = TypeInfo__UnityEngine__Events__UnityAction<int>;
    if (pDVar13 == (Delegate *)0x0) {
      (pIVar11->fields).OnPageTurned = (UnityAction_1_System_Int32_ *)0x0;
    }
    else {
      pUVar12 = (UnityAction_1_System_Int32_ *)
                FUN_?(pDVar13,TypeInfo__UnityEngine__Events__UnityAction<int>);
      if (pUVar12 == (UnityAction_1_System_Int32_ *)0x0) {
        FUN_?(pDVar13,pUVar14);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (pIVar11->fields).OnPageTurned = pUVar12;
      pUVar14 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      lVar5 = FUN_?(pDVar13,TypeInfo__UnityEngine__Events__UnityAction<int>);
      if (lVar5 == 0) {
        FUN_?(pDVar13,pUVar14);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&(pIVar11->fields).OnPageTurned >> 0xc);
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
    pIVar11 = (this->fields).inventoryController;
    if (pIVar11 != (InventoryController *)0x0) {
      pUVar12 = (pIVar11->fields).OnTabSelected;
      pDVar13 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      FUN_?(pDVar13,this);
      pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar12,pDVar13,(MethodInfo *)0x0);
      pUVar14 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      if (pDVar13 == (Delegate *)0x0) {
        (pIVar11->fields).OnTabSelected = (UnityAction_1_System_Int32_ *)0x0;
      }
      else {
        pUVar12 = (UnityAction_1_System_Int32_ *)
                  FUN_?(pDVar13,TypeInfo__UnityEngine__Events__UnityAction<int>);
        if (pUVar12 == (UnityAction_1_System_Int32_ *)0x0) {
          FUN_?(pDVar13,pUVar14);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (pIVar11->fields).OnTabSelected = pUVar12;
        pUVar14 = TypeInfo__UnityEngine__Events__UnityAction<int>;
        lVar5 = FUN_?(pDVar13,TypeInfo__UnityEngine__Events__UnityAction<int>);
        if (lVar5 == 0) {
          FUN_?(pDVar13,pUVar14);
code_?:
          FUN_?();
code_?:
          FUN_?();
code_?:
          FUN_?();
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&(pIVar11->fields).OnTabSelected >> 0xc);
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
      pIVar11 = (this->fields).inventoryController;
      if (pIVar11 != (InventoryController *)0x0) {
        InventoryController::InventoryController_Initialize
                  (pIVar11,(this->fields).numberOfSlotsPrPage,(MethodInfo *)0x0);
        (this->fields).displayShopItems = 1;
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Clear__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)(this->fields).tabs;
        if (this_00 !=
            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
          TypeConverterRegistry+ConverterKey,System::Object]::
          Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                    (this_00,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Clear__);
          pIVar11 = (this->fields).inventoryController;
          if ((pIVar11 != (InventoryController *)0x0) &&
             (this_01 = (pIVar11->fields).inventorySlots, this_01 != (InventorySlots *)0x0)) {
            InventorySlots::InventorySlots_Clear(this_01,(MethodInfo *)0x0);
            AccessoryShopController_DisplayAllItems(this,(MethodInfo *)0x0);
            pDVar15 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).tabs;
            if (pDVar15 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
              if (iRam_? != 0) {
                uVar4 = (uint)((ulonglong)&pDStack_16 >> 0xc);
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
              uStack_17 = (ulonglong)(uint)(pDVar15->fields)._version;
              uStack_18 = 2;
              uStack_19 = 0;
              uStack_20 = 0;
              DStack_21._version = (undefined4)uStack_17;
              DStack_21._index = uStack_17._4_4_;
              DStack_21._current._0_8_ = 0;
              DStack_21._current.value = (Object *)0x0;
              DStack_21._getEnumeratorRetType = 2;
              DStack_21._36_4_ = 0;
              pDStack_16 = pDVar15;
              DStack_21._dictionary = pDVar15;
              while (bVar22 = mscorlib.dll::System::Collections::Generic::
                             Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                             Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                       (&DStack_21,
                                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabState>__MoveNext__
                                       ), bVar22 != 0) {
                pIVar11 = (this->fields).inventoryController;
                if (DStack_21._current.value == (Object *)0x0) goto code_?;
                if (pIVar11 == (InventoryController *)0x0) goto code_?;
                pTVar23 = (pIVar11->fields).tabMenu;
                if (pTVar23 == (TabMenuBase *)0x0) goto code_?;
                (*(pTVar23->klass->vtable).__unknown.methodPtr)
                          (pTVar23,DStack_21._current._0_8_ & 0xffffffff,
                           DStack_21._current.value[1].monitor);
              }
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                             );
                LOCK();
                UNLOCK();
                FUN_?(&
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar24 = (this->fields)._._._._.m_CachedPtr;
              if (pvVar24 != (void *)0x0) {
                pcVar3 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                  uVar25 = func_?(&UNK_?);
                  FUN_?(uVar25,0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pcRam_? = pcVar3;
                pvVar24 = (void *)(*pcRam_?)(pvVar24);
                pGVar9 = (GameObject *)
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                          Unmarshal_UnmarshalUnityObject
                                    (pvVar24,
                                     UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                    );
                if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
                  FUN_?(TypeInfo__AccessoryShopController____c);
                }
                this_05 = TypeInfo__AccessoryShopController____c->static_fields->__9__25_1;
                if (this_05 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                  if (*(int *)&(TypeInfo__AccessoryShopController____c->_1).field_0x1c == 0) {
                    FUN_?(TypeInfo__AccessoryShopController____c);
                  }
                  pAVar10 = TypeInfo__AccessoryShopController____c->static_fields->__9;
                  this_05 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                            FUN_?(
                                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                         );
                  UnityEngine.UI.dll::UnityEngine::EventSystems::
                  ExecuteEvents+EventFunction`1[System::Object]::
                  ExecuteEvents_EventFunction_1_System_Object___ctor
                            ((ExecuteEvents_EventFunction_1_System_Object_ *)this_05,
                             (Object *)pAVar10,
                             MethodInfo__AccessoryShopController____c___ReadyCallback_b__25_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  TypeInfo__AccessoryShopController____c->static_fields->__9__25_1 = this_05;
                  if (iRam_? != 0) {
                    uVar4 = (uint)((ulonglong)
                                    &TypeInfo__AccessoryShopController____c->static_fields->
                                     __9__25_1 >> 0xc);
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
                }
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar9,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_05,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar24 = (this->fields)._._._._.m_CachedPtr;
                if (pvVar24 != (void *)0x0) {
                  pcVar3 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                    uVar25 = func_?(&UNK_?);
                    FUN_?(uVar25,0);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pcRam_? = pcVar3;
                  pvVar24 = (void *)(*pcRam_?)(pvVar24);
                  pGVar9 = (GameObject *)
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                            Unmarshal_UnmarshalUnityObject
                                      (pvVar24,
                                       UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                                      );
                  this_06 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                            FUN_?(
                                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                         );
                  UnityEngine.UI.dll::UnityEngine::EventSystems::
                  ExecuteEvents+EventFunction`1[System::Object]::
                  ExecuteEvents_EventFunction_1_System_Object___ctor
                            (this_06,(Object *)this,
                             MethodInfo__AccessoryShopController___ReadyCallback_b__25_2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            (pGVar9,(BaseEventData *)0x0,this_06,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                            );
                  AccessoryShopController_SetAccessoriesToSelectable(this,0,(MethodInfo *)0x0);
                  this_02 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).tabs;
                  if (this_02 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
                    iVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,UnityEngine::Vector3]::
                            Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                      (this_02,0xff,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                                       ->klass->rgctx_data[0x21].method);
                    if ((iVar26 < 0) || ((this->fields).startingCategory == 0xfe)) {
                      pIVar11 = (this->fields).inventoryController;
                      pSVar27 = LocalizedEnums::LocalizedEnums___3
                                          ((this->fields).selectedTab,(MethodInfo *)0x0);
                      if ((pIVar11 != (InventoryController *)0x0) &&
                         (pTVar28 = (pIVar11->fields).categoryHeaderText, pTVar28 != (Text *)0x0)) {
                        (*(pTVar28->klass->vtable).set_text.methodPtr)
                                  (pTVar28,pSVar27,(pTVar28->klass->vtable).set_text.method);
                        AccessoryShopController_UpdateContent(this,(MethodInfo *)0x0);
                        return;
                      }
                    }
                    else {
                      (this->fields).selectedTab = 0xff;
                      bVar22 = (this->fields).displayShopItems;
                      AccessoryShopController_DisplayPurchasableItems(this,1,(MethodInfo *)0x0);
                      (this->fields).displayShopItems = bVar22;
                      pIVar11 = (this->fields).inventoryController;
                      pSVar27 = LocalizedEnums::LocalizedEnums___3
                                          (AccessoryCategoryClient__Enum_Featured,(MethodInfo *)0x0)
                      ;
                      if ((pIVar11 != (InventoryController *)0x0) &&
                         (pTVar28 = (pIVar11->fields).categoryHeaderText, pTVar28 != (Text *)0x0)) {
                        (*(pTVar28->klass->vtable).set_text.methodPtr)
                                  (pTVar28,pSVar27,(pTVar28->klass->vtable).set_text.method);
                        return;
                      }
                    }
                  }
                  goto code_?;
                }
              }
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
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


/* Void ReadyCallbackAccessoryView() */

void Assembly-CSharp.dll::AccessoryShopController::
     AccessoryShopController_ReadyCallbackAccessoryView
               (AccessoryShopController *this,MethodInfo *method)

{
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
  pUVar1 = TypeInfo__AccessoryDataManager->static_fields->readyCallback;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__AccessoryShopController__ReadyCallbackAccessoryView__,(MethodInfo *)0x0);
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,(Delegate *)this_00,(MethodInfo *)0x0);
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
      FUN_?(pUVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)TypeInfo__AccessoryDataManager->static_fields >> 0xc);
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
  AccessoryShopController_ReadyCallback(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryShopController___OpenAccessoryViewDelayed_d__21);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar5 = FUN_?(TypeInfo__AccessoryShopController___OpenAccessoryViewDelayed_d__21);
  bVar8 = iRam_? != 0;
  *(undefined4 *)(lVar5 + 0x10) = 0;
  *(AccessoryShopController **)(lVar5 + 0x20) = this;
  if (bVar8) {
    uVar4 = (uint)(lVar5 + 0x20U >> 0xc);
    lVar9 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar9 + 0xADDR);
      puVar7 = (ulonglong *)(lVar9 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  if (lVar5 == 0) {
    uVar10 = func_?(&TypeInfo__System__NullReferenceException);
    this_01 = (NullReferenceException *)func_?(uVar10);
    pSVar11 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_01,pSVar11,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                );
    FUN_?(this_01,uVar10);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar12 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar12 == 0) {
    uVar10 = func_?(&TypeInfo__System__ArgumentException);
    this_02 = (InvalidEnumArgumentException *)func_?(uVar10);
    pSVar11 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_02,pSVar11,(MethodInfo *)0x0);
    uVar10 = func_?(&
                                 MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                );
    FUN_?(this_02,uVar10);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (AccessoryShopController *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pvVar13 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar13 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar13,lVar5);
  return;
}


/* Void RefreshItems() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_RefreshItems
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).tabs;
  if (pDVar1 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                     (pDVar1,(this->fields).selectedTab,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                      ->klass->rgctx_data[0x21].method);
  if (iVar3 < 0) {
    AccessoryShopController_TabSelected(this,(this->fields).startingCategory,(MethodInfo *)0x0);
  }
  pDVar4 = (this->fields).tabs;
  if ((pDVar4 == (Dictionary_2_System_Int32_TabState_ *)0x0) ||
     (pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,
                           (this->fields).selectedTab,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                          ), pOVar5 == (Object *)0x0)) goto code_?;
  iVar3 = *(int32_t *)((longlong)&pOVar5[2].klass + 4);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).tabs;
  if (this_00 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
  TypeConverterRegistry+ConverterKey,System::Object]::
  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
            (this_00,MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Clear__);
  pIVar6 = (this->fields).inventoryController;
  if ((pIVar6 == (InventoryController *)0x0) ||
     (pIVar7 = (pIVar6->fields).inventorySlots, pIVar7 == (InventorySlots *)0x0))
  goto code_?;
  InventorySlots::InventorySlots_Clear(pIVar7,(MethodInfo *)0x0);
  if ((this->fields).displayShopItems == 0) {
    AccessoryShopController_DisplayOwnedItems(this,(MethodInfo *)0x0);
  }
  else {
    AccessoryShopController_DisplayAllItems(this,(MethodInfo *)0x0);
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).tabs;
  if (pDVar1 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) goto code_?;
  iVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                     (pDVar1,(this->fields).selectedTab,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                      ->klass->rgctx_data[0x21].method);
  if (iVar8 < 0) {
    AccessoryShopController_TabSelected(this,(this->fields).startingCategory,(MethodInfo *)0x0);
  }
  pDVar4 = (this->fields).tabs;
  if ((pDVar4 == (Dictionary_2_System_Int32_TabState_ *)0x0) ||
     (this_01 = (TabState *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,
                           (this->fields).selectedTab,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                          ), this_01 == (TabState *)0x0)) goto code_?;
  TabState::TabState_SetPage(this_01,iVar3,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessoryShopController___UpdateContent_b__38_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_Root___AccessoryShopCont);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar9 = (this->fields).previewItemsRoot;
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
  if (pTVar9 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar9->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar9 = (this->fields).previewItemsRoot;
      if (pTVar9 == (Transform *)0x0) goto code_?;
      pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pTVar9,(MethodInfo *)0x0);
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
                ((Object_1 *)pGVar10,0.0,(MethodInfo *)0x0);
    }
  }
  pGVar10 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  name = StringLiteral_Preview_Root___AccessoryShopCont;
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
            (pGVar10,name,(MethodInfo *)0x0);
  if (pGVar10 != (GameObject *)0x0) {
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar10,(MethodInfo *)0x0);
    bVar11 = iRam_? != 0;
    (this->fields).previewItemsRoot = pTVar9;
    if (bVar11) {
      uVar12 = (uint)((ulonglong)&(this->fields).previewItemsRoot >> 0xc);
      uVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6);
      do {
        uVar14 = *(ulonglong *)(uVar13 * 8 + 0xADDR);
        puVar15 = (ulonglong *)(uVar13 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar14 == *puVar15;
        if (bVar11) {
          *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pIVar6 = (this->fields).inventoryController;
    if ((pIVar6 != (InventoryController *)0x0) &&
       (pIVar7 = (pIVar6->fields).inventorySlots, pIVar7 != (InventorySlots *)0x0)) {
      InventorySlots::InventorySlots_Clear(pIVar7,(MethodInfo *)0x0);
      pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).tabs;
      if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                           (pDVar1,(this->fields).selectedTab,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                            ->klass->rgctx_data[0x21].method);
        if (iVar3 < 0) {
          (this->fields).selectedTab = (this->fields).startingCategory;
        }
        pDVar4 = (this->fields).tabs;
        if (pDVar4 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
          pOVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,
                               (this->fields).selectedTab,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              );
          pIVar6 = (this->fields).inventoryController;
          uVar12 = (this->fields).selectedTab;
          if (pOVar5 != (Object *)0x0) {
            page = *(uint *)((longlong)&pOVar5[2].klass + 4);
            uVar16 = FUN_?((float)*(int *)&pOVar5[2].klass /
                                   (float)*(int *)&pOVar5[1].klass);
            uVar17 = 1;
            if (1 < (int)uVar16) {
              uVar17 = uVar16;
            }
            if ((pIVar6 != (InventoryController *)0x0) &&
               (pTVar18 = (pIVar6->fields).tabMenu, pTVar18 != (TabMenuBase *)0x0)) {
              (*(pTVar18->klass->vtable).__unknown_1.methodPtr)
                        (pTVar18,(ulonglong)uVar12,(ulonglong)page,(ulonglong)uVar17,
                         (pTVar18->klass->vtable).__unknown_1.method);
              pIVar7 = (pIVar6->fields).inventorySlots;
              if (pIVar7 != (InventorySlots *)0x0) {
                uVar12 = (pIVar6->fields).numberOfSlots;
                method_00 = (MethodInfo *)(ulonglong)uVar12;
                player = (MVPlayer *)(ulonglong)page;
                InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                          (pIVar7,page,uVar12,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pGVar19 = TypeInfo__MVGameControllerBase->static_fields->
                         _GameSessionData_k__BackingField;
                if (pGVar19 != (GameSessionData *)0x0) {
                  if ((pGVar19->fields).gameMode == 2) {
                    pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                    this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                              FUN_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                                           );
                    UnityEngine.UI.dll::UnityEngine::EventSystems::
                    ExecuteEvents+EventFunction`1[System::Object]::
                    ExecuteEvents_EventFunction_1_System_Object___ctor
                              (this_03,(Object *)this,
                               MethodInfo__AccessoryShopController___UpdateContent_b__38_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                               ,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                        == 0) {
                      FUN_?();
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy
                              (pGVar10,(BaseEventData *)0x0,this_03,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                              );
                    return;
                  }
                  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
                  if (extraout_RAX != 0) {
                    if (cRam_? == '\0') {
                      FUN_?();
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0)
                    ;
                    if (this_02 != (MVWorldObjectClientManager *)0x0) {
                      avatarBody = (MVBody *)
                                   MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_GetWorldObjectClient_1
                                             (this_02,*(int32_t *)(extraout_RAX + 0xa8),
                                              MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                                             );
                      AccessoryShopController_UpdateContentWithBody
                                (this,avatarBody,(MethodInfo *)0x0);
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
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetAfterBundlePurchase() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_ResetAfterBundlePurchase
               (AccessoryShopController *this,MethodInfo *method)

{
  (this->fields).startingCategory = 1;
  (this->fields).selectedTab = 1;
  AccessoryShopController_DisplayPurchasableItems
            (this,(this->fields).displayShopItems,(MethodInfo *)0x0);
  pIVar1 = (this->fields).inventoryController;
  pSVar2 = LocalizedEnums::LocalizedEnums___3(AccessoryCategoryClient__Enum_Hats,(MethodInfo *)0x0);
  if ((pIVar1 != (InventoryController *)0x0) &&
     (pTVar3 = (pIVar1->fields).categoryHeaderText, pTVar3 != (Text *)0x0)) {
    UNRECOVERED_JUMPTABLE = (pTVar3->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (pTVar3,pSVar2,(pTVar3->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetAccessoriesToSelectable(Boolean) */

void Assembly-CSharp.dll::AccessoryShopController::
     AccessoryShopController_SetAccessoriesToSelectable
               (AccessoryShopController *this,bool selectable,MethodInfo *method)

{
  player = (MVPlayer *)CONCAT71(in_register_00000011,selectable);
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AccessoryShopController____c__DisplayClass32_0___SetAccessoriesToSelectable_b__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AccessoryShopController____c__DisplayClass32_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__AccessoryShopController____c__DisplayClass32_0);
  if (object != (Object *)0x0) {
    bVar1 = iRam_? != 0;
    object[1].klass = (Object__Class *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      method = (MethodInfo *)(ulonglong)(uVar2 & 0x3f);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      player = (MVPlayer *)(lVar3 + 0xADDR);
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *(ulonglong *)(lVar3 + 0xADDR);
        if (bVar1) {
          *(ulonglong *)(lVar3 + 0xADDR) = uVar4 | 1L << (longlong)method;
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
    pGVar5 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar5 != (GameSessionData *)0x0) {
      if ((pGVar5->fields).gameMode == 2) {
        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_02,object,
                   MethodInfo__AccessoryShopController____c__DisplayClass32_0___SetAccessoriesToSelectable_b__0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar6,(BaseEventData *)0x0,this_02,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                  );
      }
      else {
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method);
        if (extraout_RAX == 0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pOVar7 = (Object__Class *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                           (this_01,*(int32_t *)(extraout_RAX + 0xa8),
                            MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                           );
        bVar1 = iRam_? != 0;
        object[1].klass = pOVar7;
        if (bVar1) {
          uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
          lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
          do {
            uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
            puVar8 = (ulonglong *)(lVar3 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar8;
            if (bVar1) {
              *puVar8 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
      }
      if ((object[1].klass != (Object__Class *)0x0) &&
         (this_00 = ((object[1].klass)->vtable).GetHashCode.method, this_00 != (MethodInfo *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<MV::Common::AccessorySlotType,_AvatarAccessory>__GetEnumerator__
                        ,selectable,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__Dispose__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Current__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Key__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__KeyValuePair<MV::Common::AccessorySlotType,_AvatarAccessory>__get_Value__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auStack_9 = (undefined1  [8])0x0;
        uStack_10._0_4_ = 0;
        uStack_10._4_4_ = 0;
        KStack_11.key = 0;
        KStack_11._4_4_ = 0;
        KStack_11.value = (Object *)0x0;
        uStack_12._0_4_ = 0;
        uStack_12._4_4_ = 0;
        ((BodyAccessoriesController__Fields *)&this_00->invoker_method)->accessoryMoveOverride =
             selectable;
        if (selectable == 0) {
          if (((BodyData *)this_00->parameters != (BodyData *)0x0) &&
             (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00->parameters,(MethodInfo *)0x0),
             pGVar6 != (GameObject *)0x0)) {
            p_Var8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren_4
                               (pGVar6,1,
                                SelectionHelperAvatarAccessory__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<SelectionHelperAvatarAccessory>_bool_____
                               );
            uVar2 = 0;
            if (p_Var8 != (_Il2CppFullySharedGenericType__Array *)0x0) {
              pp_Var11 = p_Var8->vector;
              while( true ) {
                if ((int)p_Var8->max_length <= (int)uVar2) {
                  return;
                }
                if ((uint)p_Var8->max_length <= uVar2) {
                  FUN_?();
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                if ((Component *)*pp_Var11 == (Component *)0x0) break;
                pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)*pp_Var11,(MethodInfo *)0x0);
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
                          ((Object_1 *)pGVar6,0.0,(MethodInfo *)0x0);
                uVar2 = uVar2 + 1;
                pp_Var11 = pp_Var11 + 1;
              }
            }
          }
        }
        else {
          pDStack_14 = (Dictionary_2_System_UInt32_System_Object_ *)this_00->name;
          if (pDStack_14 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
            if (iRam_? != 0) {
              uVar2 = (uint)((ulonglong)&pDStack_14 >> 0xc);
              uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
              do {
                uVar15 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                puVar8 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                LOCK();
                bVar1 = uVar15 == *puVar8;
                if (bVar1) {
                  *puVar8 = uVar15 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar1);
            }
            uStack_16 = (ulonglong)(uint)(pDStack_14->fields)._version;
            uStack_17 = 2;
            uStack_18 = 0;
            uStack_19 = 0;
            uStack_10 = (undefined *)uStack_16;
            KStack_11.key = 0;
            KStack_11._4_4_ = 0;
            KStack_11.value = (Object *)0x0;
            uStack_12._0_4_ = 2;
            uStack_12._4_4_ = 0;
            auStack_9 = (undefined1  [8])pDStack_14;
            while (bVar20 = mscorlib.dll::System::Collections::Generic::
                           Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                           Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                     ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                       *)auStack_9,
                                      MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::Common::AccessorySlotType,_AvatarAccessory>__MoveNext__
                                     ), bVar20 != 0) {
              BodyAccessoriesController::BodyAccessoriesController_MakeAccessorySelectable
                        ((BodyAccessoriesController *)this_00,(AvatarAccessory *)KStack_11.value,
                         KStack_11.key,(MethodInfo *)0x0);
            }
            return;
          }
        }
        FUN_?();
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Setup() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_Setup
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__,
                  0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                     (this,AccessoryCategoryClient__Enum_Hats,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
    AccessoryShopController_CreateAndAddTab
              (this,AccessoryCategoryClient__Enum_Hats,(pLVar1->fields)._size,(MethodInfo *)0x0);
    pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                       (this,AccessoryCategoryClient__Enum_Particles,(MethodInfo *)0x0);
    if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
      AccessoryShopController_CreateAndAddTab
                (this,AccessoryCategoryClient__Enum_Particles,(pLVar1->fields)._size,
                 (MethodInfo *)0x0);
      pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                         (this,AccessoryCategoryClient__Enum_BackAccessories,(MethodInfo *)0x0);
      if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
        AccessoryShopController_CreateAndAddTab
                  (this,AccessoryCategoryClient__Enum_BackAccessories,(pLVar1->fields)._size,
                   (MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                           (this,AccessoryCategoryClient__Enum_Bundles,(MethodInfo *)0x0);
        if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
          iVar2 = (pLVar1->fields)._size;
          if (0 < iVar2) {
            AccessoryShopController_CreateAndAddTab
                      (this,AccessoryCategoryClient__Enum_Bundles,iVar2,(MethodInfo *)0x0);
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                             (this,AccessoryCategoryClient__Enum_Featured,(MethodInfo *)0x0);
          if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
            iVar2 = (pLVar1->fields)._size;
            if (0 < iVar2) {
              AccessoryShopController_CreateAndAddTab
                        (this,AccessoryCategoryClient__Enum_Featured,iVar2,(MethodInfo *)0x0);
            }
            pLVar1 = AccessoryShopController_GetAccessoryDataFromCategoryType
                               (this,AccessoryCategoryClient__Enum_LevelUnlocks,(MethodInfo *)0x0);
            if (pLVar1 != (List_1_AccessoryDataClient_ *)0x0) {
              iVar3 = (pLVar1->fields)._size;
              uVar4 = 0;
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                              ,4,iVar3,0);
                LOCK();
                UNLOCK();
                FUN_?(&TypeInfo__TabState);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pSVar5 = LocalizedEnums::LocalizedEnums___3
                                 (AccessoryCategoryClient__Enum_LevelUnlocks,(MethodInfo *)0x0);
              iVar6 = (this->fields).numberOfSlotsPrPage;
              value = (Object *)FUN_?(TypeInfo__TabState);
              bVar7 = iRam_? != 0;
              *(undefined4 *)((longlong)&value[2].klass + 4) = 1;
              *(undefined4 *)&value[2].monitor = 4;
              *(int32_t *)&value[1].klass = iVar6;
              value[1].monitor = (MonitorData *)pSVar5;
              if (bVar7) {
                uVar8 = (uint)((ulonglong)&value[1].monitor >> 0xc);
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
              this_00 = (this->fields).tabs;
              if (this_00 == (Dictionary_2_System_Int32_TabState_ *)0x0) {
                FUN_?();
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__TryInsert
                        ((Dictionary_2_System_Int32_System_Object_ *)this_00,4,value,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar4 >> 8),2),
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Add_int__TabState_
                         ->klass->rgctx_data[0x22].method);
              *(int32_t *)&value[2].klass = iVar3;
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void TabSelected(Int32) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_TabSelected
               (AccessoryShopController *this,int32_t tabId,MethodInfo *method)

{
  (this->fields).selectedTab = tabId;
  if ((tabId == 0xff) || (tabId == 0xfe)) {
    bVar1 = (this->fields).displayShopItems;
    AccessoryShopController_DisplayPurchasableItems(this,1,(MethodInfo *)0x0);
    (this->fields).displayShopItems = bVar1;
  }
  else {
    AccessoryShopController_DisplayPurchasableItems
              (this,(this->fields).displayShopItems,(MethodInfo *)0x0);
  }
  pIVar2 = (this->fields).inventoryController;
  pSVar3 = LocalizedEnums::LocalizedEnums___3(tabId,(MethodInfo *)0x0);
  if ((pIVar2 != (InventoryController *)0x0) &&
     (pTVar4 = (pIVar2->fields).categoryHeaderText, pTVar4 != (Text *)0x0)) {
    UNRECOVERED_JUMPTABLE = (pTVar4->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (pTVar4,pSVar3,(pTVar4->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateContent() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_UpdateContent
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__AccessoryShopController___UpdateContent_b__38_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Preview_Root___AccessoryShopCont);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).previewItemsRoot;
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
      pTVar1 = (this->fields).previewItemsRoot;
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
  name = StringLiteral_Preview_Root___AccessoryShopCont;
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
            (pGVar2,name,(MethodInfo *)0x0);
  if (pGVar2 != (GameObject *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar2,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).previewItemsRoot = pTVar1;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).previewItemsRoot >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    pIVar8 = (this->fields).inventoryController;
    if ((pIVar8 != (InventoryController *)0x0) &&
       (pIVar9 = (pIVar8->fields).inventorySlots, pIVar9 != (InventorySlots *)0x0)) {
      InventorySlots::InventorySlots_Clear(pIVar9,(MethodInfo *)0x0);
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).tabs;
      if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        iVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                          (this_00,(this->fields).selectedTab,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__ContainsKey_int_
                           ->klass->rgctx_data[0x21].method);
        if (iVar10 < 0) {
          (this->fields).selectedTab = (this->fields).startingCategory;
        }
        this_01 = (this->fields).tabs;
        if (this_01 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
          pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__get_Item
                              ((Dictionary_2_System_Int32_System_Object_ *)this_01,
                               (this->fields).selectedTab,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                              );
          pIVar8 = (this->fields).inventoryController;
          uVar4 = (this->fields).selectedTab;
          if (pOVar11 != (Object *)0x0) {
            page = *(uint *)((longlong)&pOVar11[2].klass + 4);
            uVar12 = FUN_?((float)*(int *)&pOVar11[2].klass /
                                   (float)*(int *)&pOVar11[1].klass);
            uVar13 = 1;
            if (1 < (int)uVar12) {
              uVar13 = uVar12;
            }
            if ((pIVar8 != (InventoryController *)0x0) &&
               (pTVar14 = (pIVar8->fields).tabMenu, pTVar14 != (TabMenuBase *)0x0)) {
              (*(pTVar14->klass->vtable).__unknown_1.methodPtr)
                        (pTVar14,(ulonglong)uVar4,(ulonglong)page,(ulonglong)uVar13,
                         (pTVar14->klass->vtable).__unknown_1.method);
              pIVar9 = (pIVar8->fields).inventorySlots;
              if (pIVar9 != (InventorySlots *)0x0) {
                uVar4 = (pIVar8->fields).numberOfSlots;
                method_00 = (MethodInfo *)(ulonglong)uVar4;
                player = (MVPlayer *)(ulonglong)page;
                InventorySlots::InventorySlots_UpdateAbsoluteSlotValues
                          (pIVar9,page,uVar4,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pGVar15 = TypeInfo__MVGameControllerBase->static_fields->
                         _GameSessionData_k__BackingField;
                if (pGVar15 != (GameSessionData *)0x0) {
                  if ((pGVar15->fields).gameMode == 2) {
                    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                    this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                              FUN_?(
                                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>
                                           );
                    UnityEngine.UI.dll::UnityEngine::EventSystems::
                    ExecuteEvents+EventFunction`1[System::Object]::
                    ExecuteEvents_EventFunction_1_System_Object___ctor
                              (this_03,(Object *)this,
                               MethodInfo__AccessoryShopController___UpdateContent_b__38_0_UnityEngine__EventSystems__IGetCurrentBody__UnityEngine__EventSystems__BaseEventData_
                               ,(MethodInfo *)0x0);
                    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c
                        == 0) {
                      FUN_?();
                    }
                    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                    ExecuteEvents_ExecuteHierarchy
                              (pGVar2,(BaseEventData *)0x0,this_03,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IGetCurrentBody>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IGetCurrentBody>_
                              );
                    return;
                  }
                  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
                  if (extraout_RAX != 0) {
                    if (cRam_? == '\0') {
                      FUN_?();
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0)
                    ;
                    if (this_02 != (MVWorldObjectClientManager *)0x0) {
                      avatarBody = (MVBody *)
                                   MVWorldObjectClientManager::
                                   MVWorldObjectClientManager_GetWorldObjectClient_1
                                             (this_02,*(int32_t *)(extraout_RAX + 0xa8),
                                              MVBody_MethodInfo__MVWorldObjectClientManager__GetWorldObjectClient<MVBody>_int_
                                             );
                      AccessoryShopController_UpdateContentWithBody
                                (this,avatarBody,(MethodInfo *)0x0);
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
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void UpdateContentWithBody(MVBody) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController_UpdateContentWithBody
               (AccessoryShopController *this,MVBody *avatarBody,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AccessoryInventoryViewItem_MethodInfo__UnityEngine__Object__Instantiate<AccessoryInventoryViewItem>_AccessoryInventoryViewItem_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = AccessoryShopController_GetAccessoryDataFromCategoryType
                      (this,(this->fields).selectedTab,(MethodInfo *)0x0);
  if ((this->fields).displayShopItems == 0) {
    if (this_02 == (List_1_AccessoryDataClient_ *)0x0) goto code_?;
    uVar1 = (this_02->fields)._size - 1;
    if (-1 < (int)uVar1) {
      lVar2 = (longlong)(int)uVar1 * 8 + 0x20;
      do {
        if ((uint)(this_02->fields)._size <= uVar1) goto code_?;
        pAVar3 = (this_02->fields)._items;
        if (pAVar3 == (AccessoryDataClient__Array *)0x0) goto code_?;
        if ((uint)pAVar3->max_length <= uVar1) goto code_?;
        lVar4 = *(longlong *)((longlong)pAVar3->vector + lVar2 + -0x20);
        if (lVar4 == 0) goto code_?;
        if (*(char *)(lVar4 + 0x40) == '\0') {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)this_02,uVar1,
                     MethodInfo__System__Collections__Generic__List<AccessoryDataClient>__RemoveAt_int_
                    );
        }
        lVar2 = lVar2 + -8;
        uVar1 = uVar1 - 1;
      } while (-1 < (int)uVar1);
    }
  }
  pDVar5 = (this->fields).tabs;
  if (pDVar5 != (Dictionary_2_System_Int32_TabState_ *)0x0) {
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,
                        (this->fields).selectedTab,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                       );
    if (pOVar6 != (Object *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Int32);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      lVar2 = FUN_?(TypeInfo__System__Int32,2);
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x18) != 0) {
          *(int *)(lVar2 + 0x20) =
               (*(int *)((longlong)&pOVar6[2].klass + 4) + -1) * *(int *)&pOVar6[1].klass;
          if ((1 < *(uint *)(lVar2 + 0x18)) &&
             (*(int *)(lVar2 + 0x24) =
                   *(int *)((longlong)&pOVar6[2].klass + 4) * *(int *)&pOVar6[1].klass,
             *(int *)(lVar2 + 0x18) != 0)) {
            uVar1 = *(uint *)(lVar2 + 0x20);
            uVar7 = (ulonglong)(int)uVar1;
            if (this_02 != (List_1_AccessoryDataClient_ *)0x0) {
              lVar2 = uVar7 * 8 + 0x20;
              do {
                if ((this_02->fields)._size <= (int)uVar1) {
                  return;
                }
                if ((uint)(this_02->fields)._size <= uVar1) {
code_?:
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pAVar3 = (this_02->fields)._items;
                if (pAVar3 == (AccessoryDataClient__Array *)0x0) break;
                if ((uint)pAVar3->max_length <= uVar1) goto code_?;
                pDVar5 = (this->fields).tabs;
                this_00 = *(AccessoryData **)((longlong)pAVar3->vector + lVar2 + -0x20);
                if (pDVar5 == (Dictionary_2_System_Int32_TabState_ *)0x0) break;
                pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)pDVar5,
                                    (this->fields).selectedTab,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__get_Item_int_
                                   );
                if (pOVar6 == (Object *)0x0) break;
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Int32);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                lVar4 = FUN_?(TypeInfo__System__Int32);
                if (lVar4 == 0) break;
                if ((*(int *)(lVar4 + 0x18) == 0) ||
                   (*(int *)(lVar4 + 0x20) =
                         (*(int *)((longlong)&pOVar6[2].klass + 4) + -1) * *(int *)&pOVar6[1].klass,
                   *(uint *)(lVar4 + 0x18) < 2)) goto code_?;
                iVar9 = *(int *)((longlong)&pOVar6[2].klass + 4) * *(int *)&pOVar6[1].klass;
                *(int *)(lVar4 + 0x24) = iVar9;
                if (*(uint *)(lVar4 + 0x18) < 2) goto code_?;
                iVar10 = (int)uVar7;
                if (iVar10 < iVar9) {
                  if (this_00 == (AccessoryData *)0x0) break;
                  bVar11 = MVWorldObject.dll::MV::WorldObject::Accessories::AccessoryData::
                          AccessoryData_GetShowInShop(this_00,(MethodInfo *)0x0);
                  if ((bVar11 != 0) || ((this_00->fields).owns != 0)) {
                    pAVar12 = (this->fields).accessoryInventoryItemPrefab;
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    pAVar12 = (AccessoryInventoryViewItem *)
                             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                       ((Object *)pAVar12,
                                        AccessoryInventoryViewItem_MethodInfo__UnityEngine__Object__Instantiate<AccessoryInventoryViewItem>_AccessoryInventoryViewItem_
                                       );
                    this_01 = (this->fields).inventoryController;
                    if (pAVar12 == (AccessoryInventoryViewItem *)0x0) break;
                    item = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pAVar12,(MethodInfo *)0x0);
                    if (this_01 == (InventoryController *)0x0) break;
                    InventoryController::InventoryController_AddObject
                              (this_01,item,
                               (int32_t)((longlong)
                                         ((ulonglong)(uint)(iVar10 >> 0x1f) << 0x20 |
                                         uVar7 & 0xffffffff) %
                                        (longlong)(this->fields).numberOfSlotsPrPage),
                               (MethodInfo *)0x0);
                    accessoryDataClient = (AccessoryDataClient *)FUN_?(this_02,uVar1);
                    AccessoryInventoryViewItem::AccessoryInventoryViewItem_Initialize
                              (pAVar12,accessoryDataClient,(this->fields).previewItemsRoot,avatarBody
                               ,(this->fields).selectedTab == 0xfe,(MethodInfo *)0x0);
                    uVar7 = (ulonglong)(iVar10 + 1);
                  }
                }
                uVar1 = uVar1 + 1;
                lVar2 = lVar2 + 8;
              } while( true );
            }
            goto code_?;
          }
        }
code_?:
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <ReadyCallback>b__25_2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController__ReadyCallback_b__25_2
               (AccessoryShopController *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessoryShopController__OnPop__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).inventoryController;
  if (this_00 != (InventoryController *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__AccessoryShopController__OnPop__,(MethodInfo *)0x0
              );
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <UpdateContent>b__38_0(IGetCurrentBody, BaseEventData) */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController__UpdateContent_b__38_0
               (AccessoryShopController *this,IGetCurrentBody *x,BaseEventData *y,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AccessoryShopController__UpdateContentWithBody_MVBody_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<MVBody>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IGetCurrentBody);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityAction_1_System_Object_ *)FUN_?(TypeInfo__System__Action<MVBody>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__AccessoryShopController__UpdateContentWithBody_MVBody_,(MethodInfo *)0x0);
  if (x == (IGetCurrentBody *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = x->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IGetCurrentBody) {
        pIVar5 = &pIVar2->vtable + pIVar2->interfaceOffsets[uVar3].offset;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pIVar5 = (IGetCurrentBody__VTable *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IGetCurrentBody,0,this_00,unaff_RDI)
  ;
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar5->GetCurrentBody).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(x,this_00,(pIVar5->GetCurrentBody).method,UNRECOVERED_JUMPTABLE);
  return;
}


/* AccessoryShopController() */

void Assembly-CSharp.dll::AccessoryShopController::AccessoryShopController__ctor
               (AccessoryShopController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AccessoryAttacher);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_TabState>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabState>__Dictionary__);
  bVar1 = iRam_? != 0;
  (this->fields).tabs = (Dictionary_2_System_Int32_TabState_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).tabs >> 0xc);
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
  pAVar6 = (AccessoryAttacher *)FUN_?(TypeInfo__AccessoryAttacher);
  bVar1 = iRam_? != 0;
  (this->fields).accessoryAttacher = pAVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).accessoryAttacher >> 0xc);
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
  bVar1 = cRam_? == '\0';
  (this->fields).attachingReady = 1;
  (this->fields).startingCategory = 1;
  (this->fields).displayShopItems = 1;
  (this->fields).firstTimeSetup = 1;
  if (bVar1) {
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

