
/* Void Destroy() */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimeEventManager);
    cRam_? = '\x01';
  }
  TypeInfo__FirstTimeEventManager->static_fields->firstTimeState = (FirstTimeState *)0x0;
  func_?(&TypeInfo__FirstTimeEventManager->static_fields->firstTimeState,0);
  return;
}


/* Boolean HasFirstTimeEventOccured(FirstTimeEvent) */

bool Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
               (FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if (this != (FirstTimeState *)0x0) {
    bVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
            FirstTimeState_HasFirstTimeEventOccured(this,firstTimeEvent,(MethodInfo *)0x0);
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void Initialize(FirstTimeState) */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_Initialize
               (FirstTimeState *firstTimeState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__FirstTimeEventManager__OnLevelingInitialized__);
    func_?(&TypeInfo__FirstTimeEventManager);
    func_?(&TypeInfo__LevelingManager);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  TypeInfo__FirstTimeEventManager->static_fields->firstTimeState = firstTimeState;
  func_?(&TypeInfo__FirstTimeEventManager->static_fields->firstTimeState,firstTimeState);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimeEventManager);
    cRam_? = '\x01';
  }
  TypeInfo__FirstTimeEventManager->static_fields->_FirstTimeSystemInitialized_k__BackingField = 1;
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__LevelingManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
  }
  if (TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField != 0) {
    pAVar1 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher;
    if (pAVar1 != (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                   *)0x0) {
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,firstTimeState,0xffffffff,
                 (pAVar1->fields)._._.method);
    }
    return;
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
  }
  pUVar2 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  this = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this,(Object *)0x0,MethodInfo__FirstTimeEventManager__OnLevelingInitialized__,
             (MethodInfo *)0x0);
  pUStack3 =
       (UnityAction *)
       mscorlib.dll::System::Delegate::Delegate_Combine
                 ((Delegate *)pUVar2,(Delegate *)this,(MethodInfo *)0x0);
  if (pUStack3 == (UnityAction *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
    pUStack4 = (UnityAction__Class *)0x0;
code_?:
    pUStack3 = (UnityAction *)TypeInfo__LevelingManager->static_fields;
    func_?();
    return;
  }
  pUVar2 = (UnityAction *)0x0;
  if (pUStack3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUVar2 = pUStack3;
  }
  pUStack4 = TypeInfo__UnityEngine__Events__UnityAction;
  if (pUVar2 != (UnityAction *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar2;
    pUStack4 = (UnityAction__Class *)(UnityAction *)0x0;
    if (pUStack3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUStack4 = (UnityAction__Class *)pUStack3;
    }
    if (pUStack4 != (UnityAction__Class *)0x0) goto code_?;
    pUStack4 = TypeInfo__UnityEngine__Events__UnityAction;
    pUStack4 = (UnityAction__Class *)func_?();
    pUStack3 = extraout_ECX;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnFirstTimeEventResponse(FirstTimeEvent, XPRewardType) */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
               (FirstTimeEvent__Enum firstTimeEvent,XPRewardType__Enum xpRewardType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    pLStack_1 = (LevelingManager__Class *)&TypeInfo__FirstTimeEventManager;
    func_?();
    ppLStack_2 = &TypeInfo__LevelingManager;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    pLStack_1 = TypeInfo__LevelingManager;
    func_?();
  }
  if (cRam_? == '\0') {
    pLStack_1 = (LevelingManager__Class *)&TypeInfo__LevelingManager;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    pLStack_1 = TypeInfo__LevelingManager;
    func_?();
  }
  if ((TypeInfo__LevelingManager->static_fields->_IsInitialized_k__BackingField != 0) &&
     ((undefined1)xpRewardType != XPRewardType__Enum_None)) {
    pAVar3 = TypeInfo__FirstTimeEventManager->static_fields->XPRewarded;
    if (pAVar3 == (Action *)0x0) {
      pLStack_1 = (LevelingManager__Class *)&stack0xfffffffc;
      uVar4 = func_?(&puStack_5);
      func_?(uVar4);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pLStack_1 = (pAVar3->fields)._._.method;
    ppLStack_2 = (pAVar3->fields)._._.method_code;
    (*(pAVar3->fields)._._.invoke_impl)();
  }
  return;
}


/* Void OnLevelingInitialized() */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_OnLevelingInitialized
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__FirstTimeEventManager__OnLevelingInitialized__);
    func_?(&TypeInfo__FirstTimeEventManager);
    func_?(&TypeInfo__LevelingManager);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher;
  if (pAVar1 != (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                 *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,
               TypeInfo__FirstTimeEventManager->static_fields->firstTimeState,0xffffffff,
               (pAVar1->fields)._._.method);
  }
  if ((TypeInfo__LevelingManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__LevelingManager);
  }
  pUVar2 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  this = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this,(Object *)0x0,MethodInfo__FirstTimeEventManager__OnLevelingInitialized__,
             (MethodInfo *)0x0);
  pUStack3 =
       (UnityAction *)
       mscorlib.dll::System::Delegate::Delegate_Remove
                 ((Delegate *)pUVar2,(Delegate *)this,(MethodInfo *)0x0);
  if (pUStack3 == (UnityAction *)0x0) {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = (UnityAction *)0x0;
    pUStack4 = (UnityAction__Class *)0x0;
    pUStack3 = (UnityAction *)TypeInfo__LevelingManager->static_fields;
    func_?();
    return;
  }
  pUVar2 = (UnityAction *)0x0;
  if (pUStack3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
    pUVar2 = pUStack3;
  }
  if (pUVar2 == (UnityAction *)0x0) {
    pUStack4 = TypeInfo__UnityEngine__Events__UnityAction;
    func_?();
    pUStack3 = extraout_ECX;
    pUStack4 = extraout_EDX;
  }
  else {
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar2;
    pUVar2 = (UnityAction *)0x0;
    if (pUStack3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUStack3;
    }
    pUStack4 = TypeInfo__UnityEngine__Events__UnityAction;
    if (pUVar2 != (UnityAction *)0x0) {
      pUStack3 = (UnityAction *)TypeInfo__LevelingManager->static_fields;
      pUStack4 = (UnityAction__Class *)pUVar2;
      func_?();
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OverrideFirstTimeEvent(FirstTimeEvent, Boolean) */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_OverrideFirstTimeEvent
               (FirstTimeEvent__Enum firstTimeEvent,bool overrideValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if (this != (FirstTimeState *)0x0) {
    MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
    FirstTimeState_OverrideFirstTimeEvent(this,firstTimeEvent,overrideValue,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar1->fields).operationRequests,
       this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_OverrideFirstTimeEvent
                (this_00,firstTimeEvent,overrideValue,(MethodInfo *)0x0);
      pAVar2 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher;
      if (pAVar2 != (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                     *)0x0) {
        pvStack3 = (pAVar2->fields)._._.method;
        uStack4 = 0xffffffff;
        pFStack5 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
        pvStack6 = (pAVar2->fields)._._.method_code;
        (*(pAVar2->fields)._._.invoke_impl)();
      }
      return;
    }
  }
  uVar7 = func_?(&stack0xfffffff0);
  func_?(uVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void ResetFirstTimeEvents(Boolean) */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_ResetFirstTimeEvents
               (bool overrideValue,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Enum);
    func_?(&TypeInfo__FirstTimeEventManager);
    func_?(&TypeRef__MV__WorldObject__MetaData__FirstTimeEvent);
    func_?(&TypeInfo__MV__WorldObject__MetaData__FirstTimeEvent);
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  handle = TypeRef__MV__WorldObject__MetaData__FirstTimeEvent;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_01 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this_01 != (Array *)0x0) {
    pIVar4 = mscorlib.dll::System::Array::Array_GetEnumerator(this_01,(MethodInfo *)0x0);
    uStack_1 = 1;
    while (pIVar4 != (IEnumerator *)0x0) {
      cVar5 = func_?();
      if (cVar5 == '\0') {
        uStack_1 = 0xffffffff;
        iVar6 = func_?();
        if (iVar6 != 0) {
          func_?();
        }
        uStack_1 = 0xffffffff;
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar7 != (MVNetworkGame *)0x0) &&
           (this_00 = (pMVar7->fields).operationRequests,
           this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ResetFirstTimeEvents
                    (this_00,overrideValue,(MethodInfo *)0x0);
          pAVar8 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher;
          if (pAVar8 != (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                         *)0x0) {
            (*(pAVar8->fields)._._.invoke_impl)();
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        break;
      }
      if (pIVar4 == (IEnumerator *)0x0) break;
      pIVar9 = pIVar4->klass;
      uVar10 = 0;
      uVar11._0_1_ = (pIVar9->_1).rank;
      uVar11._1_1_ = (pIVar9->_1).minimumAlignment;
      if (uVar11 != 0) {
        do {
          if (pIVar9->interfaceOffsets[uVar10].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            ppMVar12 = &(&(pIVar4->klass->vtable).get_Current)
                       [pIVar9->interfaceOffsets[uVar10].offset].method;
            goto code_?;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar11);
      }
      ppMVar12 = (MethodInfo **)func_?();
code_?:
      piVar13 = (int *)(*(code *)*ppMVar12)();
      if (piVar13 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar13 + 0x20) !=
          (TypeInfo__MV__WorldObject__MetaData__FirstTimeEvent->_0).element_class)
      goto code_?;
      pFVar14 = (FirstTimeEvent__Enum *)func_?();
      if (*pFVar14 != FirstTimeEvent__Enum_NoEvent) {
        this = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
        if (this == (FirstTimeState *)0x0) break;
        MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
        FirstTimeState_OverrideFirstTimeEvent(this,*pFVar14,overrideValue,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void SetFirstTimeEvent(FirstTimeEvent) */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
               (FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimeEventManager);
    cRam_? = '\x01';
  }
  this = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if (this != (FirstTimeState *)0x0) {
    MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState_SetFirstTimeEvent
              (this,firstTimeEvent,(MethodInfo *)0x0);
    pAVar1 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher;
    if (pAVar1 != (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                   *)0x0) {
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,
                 TypeInfo__FirstTimeEventManager->static_fields->firstTimeState,firstTimeEvent);
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar2->fields).operationRequests,
       this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetFirstTimeEvent
                (this_00,firstTimeEvent,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void 
   SubscribeToFirstTimeState(Action`2[MV.WorldObject.MetaData.FirstTimeState,MV.WorldObject.MetaData.FirstTimeEvent])
    */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_SubscribeToFirstTimeState
               (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                *firstTimeStateReceiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                   );
    func_?(&TypeInfo__FirstTimeEventManager);
    cRam_? = '\x01';
  }
  pFVar1 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if (pFVar1 != (FirstTimeState *)0x0) {
    if (firstTimeStateReceiver ==
        (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)
        0x0) goto code_?;
    (*(firstTimeStateReceiver->fields)._._.invoke_impl)
              ((firstTimeStateReceiver->fields)._._.method_code,pFVar1,0xffffffff,
               (firstTimeStateReceiver->fields)._._.method);
  }
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)
                      TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher,
                      (Delegate *)firstTimeStateReceiver,(MethodInfo *)0x0);
  pAVar3 = 
  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
  ;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher =
         (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)
         0x0;
    iVar4 = 0;
code_?:
    func_?(TypeInfo__FirstTimeEventManager->static_fields,iVar4);
    return;
  }
  pAVar5 = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
            *)func_?(pDVar2,
                              TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                             );
  if (pAVar5 != (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                 *)0x0) {
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher = pAVar5;
    pAVar3 = 
    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
    ;
    iVar4 = func_?(pDVar2,
                            TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                           );
    if (iVar4 != 0) goto code_?;
  }
  func_?(pDVar2,pAVar3);
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void 
   UnSubscribeToFirstTimeState(Action`2[MV.WorldObject.MetaData.FirstTimeState,MV.WorldObject.MetaData.FirstTimeEvent])
    */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
               (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                *firstTimeStateReceiver,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                   );
    func_?(&TypeInfo__FirstTimeEventManager);
    cRam_? = '\x01';
  }
  pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)
                      TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher,
                      (Delegate *)firstTimeStateReceiver,(MethodInfo *)0x0);
  pAVar2 = 
  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
  ;
  if (pDVar1 == (Delegate *)0x0) {
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher =
         (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)
         0x0;
    iVar3 = 0;
code_?:
    func_?(TypeInfo__FirstTimeEventManager->static_fields,iVar3);
    return;
  }
  pAVar4 = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
            *)func_?(pDVar1,
                              TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                             );
  if (pAVar4 != (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                 *)0x0) {
    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher = pAVar4;
    pAVar2 = 
    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
    ;
    iVar3 = func_?(pDVar1,
                            TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                           );
    if (iVar3 != 0) goto code_?;
  }
  func_?(pDVar1,pAVar2);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean get_FirstTimeSystemInitialized() */

bool Assembly-CSharp.dll::FirstTimeEventManager::
     FirstTimeEventManager_get_FirstTimeSystemInitialized(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimeEventManager);
    cRam_? = '\x01';
  }
  return TypeInfo__FirstTimeEventManager->static_fields->_FirstTimeSystemInitialized_k__BackingField
  ;
}


/* Boolean get_GetProfileMetaDataOk() */

bool Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_get_GetProfileMetaDataOk
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimeEventManager);
    cRam_? = '\x01';
  }
  return TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField;
}


/* Void set_FirstTimeSystemInitialized(Boolean) */

void Assembly-CSharp.dll::FirstTimeEventManager::
     FirstTimeEventManager_set_FirstTimeSystemInitialized(bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimeEventManager);
    cRam_? = '\x01';
  }
  TypeInfo__FirstTimeEventManager->static_fields->_FirstTimeSystemInitialized_k__BackingField =
       value;
  return;
}


/* Void set_GetProfileMetaDataOk(Boolean) */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_set_GetProfileMetaDataOk
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FirstTimeEventManager);
    cRam_? = '\x01';
  }
  TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField = value;
  return;
}

