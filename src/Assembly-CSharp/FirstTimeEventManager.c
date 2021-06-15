
/* Void Destroy() */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_Destroy(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  TypeInfo__FirstTimeEventManager->static_fields->firstTimeState = (FirstTimeState *)0x0;
  return;
}


/* Boolean HasFirstTimeEventOccured(FirstTimeEvent) */

bool Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
               (FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  this = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if (this != (FirstTimeState *)0x0) {
    bVar1 = MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
            FirstTimeState_HasFirstTimeEventOccured(this,firstTimeEvent,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void Initialize(FirstTimeState) */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_Initialize
               (FirstTimeState *firstTimeState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  bVar1 = cRam_? == '\0';
  TypeInfo__FirstTimeEventManager->static_fields->firstTimeState = firstTimeState;
  if (bVar1) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  TypeInfo__FirstTimeEventManager->static_fields->_FirstTimeSystemInitialized_k__BackingField = 1;
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  bVar2 = LevelingManager::LevelingManager_get_IsInitialized((MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__LevelingManager);
    }
    pUVar3 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    if (TypeInfo__FirstTimeEventManager->static_fields->__f__mg_cache0 == (UnityAction *)0x0) {
      this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_00,(Object *)0x0,MethodInfo__FirstTimeEventManager__OnLevelingInitialized__,
                 (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__FirstTimeEventManager);
      }
      TypeInfo__FirstTimeEventManager->static_fields->__f__mg_cache0 = (UnityAction *)this_00;
    }
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    pUVar3 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar3,
                        (Delegate *)TypeInfo__FirstTimeEventManager->static_fields->__f__mg_cache0,
                        (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
      func_?();
    }
    pUVar4 = (UnityAction *)0x0;
    if (pUVar3 != (UnityAction *)0x0) {
      if (pUVar3->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar4 = pUVar3;
      }
      if (pUVar4 == (UnityAction *)0x0) goto code_?;
    }
    TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar4;
  }
  else {
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    if (TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher !=
        (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)
        0x0) {
      if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
        func_?(TypeInfo__FirstTimeEventManager);
      }
      this = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
             TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher;
      if (this != (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0) {
        System.Core.dll::System::Action`2[Object,UnityEngine::ReflectionProbe+ReflectionProbeEvent]
        ::Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                  (this,(Object *)firstTimeState,
                   ~ReflectionProbe_ReflectionProbeEvent__Enum_ReflectionProbeAdded,
                   MethodInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>__Invoke_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                  );
        return;
      }
      func_?(0);
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}


/* Void OnFirstTimeEventResponse(FirstTimeEvent, XPRewardType) */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_OnFirstTimeEventResponse
               (FirstTimeEvent__Enum firstTimeEvent,XPRewardType__Enum xpRewardType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  bVar1 = LevelingManager::LevelingManager_get_IsInitialized((MethodInfo *)0x0);
  if ((bVar1 != 0) && ((undefined1)xpRewardType != XPRewardType__Enum_None)) {
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    this = (JumpState_OnWallJumpDelegate *)
           TypeInfo__FirstTimeEventManager->static_fields->XPRewarded;
    if (this == (JumpState_OnWallJumpDelegate *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnLevelingInitialized() */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_OnLevelingInitialized
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  if (TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher !=
      (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)0x0
     ) {
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    this = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
           TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher;
    if (this == (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0)
    goto code_?;
    System.Core.dll::System::Action`2[Object,UnityEngine::ReflectionProbe+ReflectionProbeEvent]::
    Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
              (this,(Object *)TypeInfo__FirstTimeEventManager->static_fields->firstTimeState,
               ~ReflectionProbe_ReflectionProbeEvent__Enum_ReflectionProbeAdded,
               MethodInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>__Invoke_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
              );
  }
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LevelingManager);
  }
  pUVar1 = TypeInfo__LevelingManager->static_fields->OnLevelingInitialized;
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  if (TypeInfo__FirstTimeEventManager->static_fields->__f__mg_cache1 == (UnityAction *)0x0) {
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)0x0,MethodInfo__FirstTimeEventManager__OnLevelingInitialized__,
               (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    TypeInfo__FirstTimeEventManager->static_fields->__f__mg_cache1 = (UnityAction *)this_00;
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  pUVar1 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar1,
                      (Delegate *)TypeInfo__FirstTimeEventManager->static_fields->__f__mg_cache1,
                      (MethodInfo *)0x0);
  if ((((uint)(TypeInfo__LevelingManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LevelingManager->_1).cctor_started == 0)) {
    func_?();
  }
  pUVar2 = (UnityAction *)0x0;
  if (pUVar1 != (UnityAction *)0x0) {
    if (pUVar1->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar1;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      func_?(pUVar1);
code_?:
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TypeInfo__LevelingManager->static_fields->OnLevelingInitialized = pUVar2;
  return;
}


/* Void OverrideFirstTimeEvent(FirstTimeEvent, Boolean) */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_OverrideFirstTimeEvent
               (FirstTimeEvent__Enum firstTimeEvent,bool overrideValue,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  this = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if (this != (FirstTimeState *)0x0) {
    MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
    FirstTimeState_OverrideFirstTimeEvent(this,firstTimeEvent,overrideValue,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      overrideValue = (bool)TypeInfo__MVGameControllerBase;
      firstTimeEvent = (FirstTimeEvent__Enum)&UNK_?;
      func_?();
    }
    this_01 = (MVJetPack *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVJetPack *)0x0) {
      this_02 = MVJetPack::MVJetPack_get_Shield(this_01,(MethodInfo *)0x0);
      if (this_02 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_OverrideFirstTimeEvent
                  ((MVNetworkGame_OperationRequests *)this_02,firstTimeEvent,overrideValue,
                   (MethodInfo *)0x0);
        if (TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher !=
            (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
             *)0x0) {
          if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
            func_?(TypeInfo__FirstTimeEventManager);
          }
          this_00 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
                    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher;
          if (this_00 == (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0)
          goto code_?;
          System.Core.dll::System::Action`2[Object,UnityEngine::
          ReflectionProbe+ReflectionProbeEvent]::
          Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                    (this_00,(Object *)
                             TypeInfo__FirstTimeEventManager->static_fields->firstTimeState,
                     ~ReflectionProbe_ReflectionProbeEvent__Enum_ReflectionProbeAdded,
                     MethodInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>__Invoke_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void ResetFirstTimeEvents(Boolean) */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_ResetFirstTimeEvents
               (bool overrideValue,MethodInfo *method)

{
  method_00 = (MethodInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  handle = TypeRef__MV__WorldObject__MetaData__FirstTimeEvent;
  if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Type->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__Type);
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this_01 != (Array *)0x0) {
    pIVar1 = mscorlib.dll::System::Array::Array_GetEnumerator(this_01,(MethodInfo *)0x0);
    while (pIVar1 != (IEnumerator *)0x0) {
      pIVar2 = pIVar1;
      cVar3 = func_?();
      if (cVar3 == '\0') {
        pIVar2->klass = (IEnumerator__Class *)0x62;
        iVar4 = func_?();
        if (iVar4 != 0) {
          func_?();
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_02 = (MVJetPack *)
                  MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((this_02 == (MVJetPack *)0x0) ||
           (this_03 = MVJetPack::MVJetPack_get_Shield(this_02,(MethodInfo *)0x0),
           this_03 == (MVRuntimeDataVariableClampedFloat *)0x0)) break;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ResetFirstTimeEvents
                  ((MVNetworkGame_OperationRequests *)this_03,overrideValue,method_00);
        if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
          func_?();
        }
        if (TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher !=
            (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
             *)0x0) {
          if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
            func_?();
          }
          this_00 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
                    TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher;
          if (this_00 == (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0)
          break;
          System.Core.dll::System::Action`2[Object,UnityEngine::
          ReflectionProbe+ReflectionProbeEvent]::
          Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                    (this_00,(Object *)
                             TypeInfo__FirstTimeEventManager->static_fields->firstTimeState,
                     ~ReflectionProbe_ReflectionProbeEvent__Enum_ReflectionProbeAdded,
                     MethodInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>__Invoke_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                    );
        }
        *unaff_FS_OFFSET = method_00;
        return;
      }
      pIVar5 = pIVar1->klass;
      uVar6 = 0;
      uVar7._0_1_ = (pIVar5->_1).rank;
      uVar7._1_1_ = (pIVar5->_1).minimumAlignment;
      if (uVar7 != 0) {
        do {
          if (pIVar5->interfaceOffsets[uVar6].interfaceType ==
              (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
            ppMVar8 = &(&(pIVar1->klass->vtable).get_Current)
                       [pIVar5->interfaceOffsets[uVar6].offset].method;
            goto code_?;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      ppMVar8 = (MethodInfo **)func_?();
code_?:
      piVar9 = (int *)(*(code *)*ppMVar8)();
      if (piVar9 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar9 + 0x20) !=
          (TypeInfo__MV__WorldObject__MetaData__FirstTimeEvent->_0).element_class) {
        func_?();
        break;
      }
      pFVar10 = (FirstTimeEvent__Enum *)func_?();
      firstTimeEvent = *pFVar10;
      if (firstTimeEvent != FirstTimeEvent__Enum_NoEvent) {
        if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
          func_?();
        }
        this = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
        if (this == (FirstTimeState *)0x0) break;
        MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::
        FirstTimeState_OverrideFirstTimeEvent(this,firstTimeEvent,overrideValue,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetFirstTimeEvent(FirstTimeEvent) */

void Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
               (FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  this = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if (this != (FirstTimeState *)0x0) {
    MVWorldObject.dll::MV::WorldObject::MetaData::FirstTimeState::FirstTimeState_SetFirstTimeEvent
              (this,firstTimeEvent,(MethodInfo *)0x0);
    if (TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher !=
        (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)
        0x0) {
      if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
        func_?();
      }
      this_00 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
                TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher;
      if (this_00 == (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0)
      goto code_?;
      System.Core.dll::System::Action`2[Object,UnityEngine::ReflectionProbe+ReflectionProbeEvent]::
      Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
                (this_00,(Object *)TypeInfo__FirstTimeEventManager->static_fields->firstTimeState,
                 firstTimeEvent,
                 MethodInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>__Invoke_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                );
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_01 = (MVJetPack *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (this_01 != (MVJetPack *)0x0) {
      this_02 = MVJetPack::MVJetPack_get_Shield(this_01,(MethodInfo *)0x0);
      if (this_02 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetFirstTimeEvent
                  ((MVNetworkGame_OperationRequests *)this_02,firstTimeEvent,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  if (TypeInfo__FirstTimeEventManager->static_fields->firstTimeState != (FirstTimeState *)0x0) {
    if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__FirstTimeEventManager);
    }
    if (firstTimeStateReceiver ==
        (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_ *)
        0x0) goto code_?;
    System.Core.dll::System::Action`2[Object,UnityEngine::ReflectionProbe+ReflectionProbeEvent]::
    Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
              ((Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
               firstTimeStateReceiver,
               (Object *)TypeInfo__FirstTimeEventManager->static_fields->firstTimeState,
               ~ReflectionProbe_ReflectionProbeEvent__Enum_ReflectionProbeAdded,
               MethodInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>__Invoke_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
              );
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  pAVar1 = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
            *)mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)
                         TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher,
                         (Delegate *)firstTimeStateReceiver,(MethodInfo *)0x0);
  pAVar2 = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
            *)0x0;
  if (pAVar1 != (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                 *)0x0) {
    if (pAVar1->klass ==
        TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
       ) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                   *)0x0) {
      func_?();
code_?:
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher = pAVar2;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  pAVar1 = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
            *)mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)
                         TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher,
                         (Delegate *)firstTimeStateReceiver,(MethodInfo *)0x0);
  pAVar2 = (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
            *)0x0;
  if (pAVar1 != (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                 *)0x0) {
    if (pAVar1->klass ==
        TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
       ) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                   *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TypeInfo__FirstTimeEventManager->static_fields->firstTimeStatePublisher = pAVar2;
  return;
}


/* Boolean get_FirstTimeSystemInitialized() */

bool Assembly-CSharp.dll::FirstTimeEventManager::
     FirstTimeEventManager_get_FirstTimeSystemInitialized(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  return TypeInfo__FirstTimeEventManager->static_fields->_FirstTimeSystemInitialized_k__BackingField
  ;
}


/* Boolean get_GetProfileMetaDataOk() */

bool Assembly-CSharp.dll::FirstTimeEventManager::FirstTimeEventManager_get_GetProfileMetaDataOk
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
  }
  return TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField;
}


/* Void set_FirstTimeSystemInitialized(Boolean) */

void Assembly-CSharp.dll::FirstTimeEventManager::
     FirstTimeEventManager_set_FirstTimeSystemInitialized(bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
    TypeInfo__FirstTimeEventManager->static_fields->_FirstTimeSystemInitialized_k__BackingField =
         value;
    return;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FirstTimeEventManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FirstTimeEventManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__FirstTimeEventManager);
    TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField = value;
    return;
  }
  TypeInfo__FirstTimeEventManager->static_fields->_GetProfileMetaDataOk_k__BackingField = value;
  return;
}

