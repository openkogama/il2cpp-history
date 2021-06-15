
/* Void AddFixedUpdateObject(IUpdatecontrollerSubscriberFixedUpdate, UpdatePriority, Int32) */

void Assembly-CSharp.dll::UpdateController::UpdateController_AddFixedUpdateObject
               (IUpdatecontrollerSubscriberFixedUpdate *obj,UpdatePriority__Enum priority,
               int32_t conditionInp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  pLVar1 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
  if (pLVar1 != (List_1_PriorityDataFixedUpdate___Array *)0x0) {
    if (pLVar1->max_length <= priority) goto code_?;
    if ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLVar1->vector[priority] !=
        (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      item.m_DelagateState = (Object *)priority;
      item.m_DelagateCallback = (SendOrPostCallback *)obj;
      item.m_WaitHandle = (ManualResetEvent *)conditionInp;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                 pLVar1->vector[priority],item,
                 MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__Add_PriorityDataFixedUpdate_
                );
      return;
    }
  }
  func_?(0);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AddLateUpdateObject(IUpdatecontrollerSubscriberLateUpdate, UpdatePriority, Int32) */

void Assembly-CSharp.dll::UpdateController::UpdateController_AddLateUpdateObject
               (IUpdatecontrollerSubscriberLateUpdate *obj,UpdatePriority__Enum priority,
               int32_t conditionInp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  pLVar1 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
  if (pLVar1 != (List_1_PriorityDataLateUpdate___Array *)0x0) {
    if (pLVar1->max_length <= priority) goto code_?;
    if ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLVar1->vector[priority] !=
        (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      item.m_DelagateState = (Object *)priority;
      item.m_DelagateCallback = (SendOrPostCallback *)obj;
      item.m_WaitHandle = (ManualResetEvent *)conditionInp;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                 pLVar1->vector[priority],item,
                 MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__Add_PriorityDataLateUpdate_
                );
      return;
    }
  }
  func_?(0);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AddUpdateObject(IUpdatecontrollerSubscriberUpdate, UpdatePriority, Int32) */

void Assembly-CSharp.dll::UpdateController::UpdateController_AddUpdateObject
               (IUpdatecontrollerSubscriberUpdate *obj,UpdatePriority__Enum priority,
               int32_t conditionInp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  pLVar1 = TypeInfo__UpdateController->static_fields->updateBuckets;
  if (pLVar1 != (List_1_PriorityDataUpdate___Array *)0x0) {
    if (pLVar1->max_length <= priority) goto code_?;
    if ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)pLVar1->vector[priority] !=
        (List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
      item.m_DelagateState = (Object *)priority;
      item.m_DelagateCallback = (SendOrPostCallback *)obj;
      item.m_WaitHandle = (ManualResetEvent *)conditionInp;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::
      UnitySynchronizationContext+WorkRequest]::
      List_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Add
                ((List_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
                 pLVar1->vector[priority],item,
                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                );
      return;
    }
  }
  func_?(0);
code_?:
  uVar2 = func_?(0,0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::UpdateController::UpdateController_Clear(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  while( true ) {
    if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
      func_?(TypeInfo__UpdateController);
    }
    pLVar2 = TypeInfo__UpdateController->static_fields->updateBuckets;
    if (pLVar2 == (List_1_PriorityDataUpdate___Array *)0x0) break;
    if ((int)pLVar2->max_length <= iVar1) {
      iVar1 = 0;
      goto code_?;
    }
    if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
      func_?(TypeInfo__UpdateController);
    }
    if (TypeInfo__UpdateController->static_fields->updateBuckets ==
        (List_1_PriorityDataUpdate___Array *)0x0) break;
    pLVar3 = (List_1_UnityEngine_UIVertex_ *)func_?(iVar1);
    if (pLVar3 == (List_1_UnityEngine_UIVertex_ *)0x0) break;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
    List_1_UnityEngine_UIVertex__Clear
              (pLVar3,MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Clear__);
    iVar1 = iVar1 + 1;
  }
code_?:
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
code_?:
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  pLVar5 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
  if (pLVar5 == (List_1_PriorityDataFixedUpdate___Array *)0x0) goto code_?;
  if ((int)pLVar5->max_length <= iVar1) {
    iVar1 = 0;
    goto code_?;
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  if (TypeInfo__UpdateController->static_fields->fixedUpdateBuckets ==
      (List_1_PriorityDataFixedUpdate___Array *)0x0) goto code_?;
  pLVar3 = (List_1_UnityEngine_UIVertex_ *)func_?(iVar1);
  if (pLVar3 == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
  List_1_UnityEngine_UIVertex__Clear
            (pLVar3,MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__Clear__
            );
  iVar1 = iVar1 + 1;
  goto code_?;
code_?:
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?();
  }
  pLVar6 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
  if (pLVar6 == (List_1_PriorityDataLateUpdate___Array *)0x0) goto code_?;
  if ((int)pLVar6->max_length <= iVar1) {
    return;
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  if (TypeInfo__UpdateController->static_fields->lateUpdateBuckets ==
      (List_1_PriorityDataLateUpdate___Array *)0x0) goto code_?;
  pLVar3 = (List_1_UnityEngine_UIVertex_ *)func_?(iVar1);
  if (pLVar3 == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
  List_1_UnityEngine_UIVertex__Clear
            (pLVar3,MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__Clear__)
  ;
  iVar1 = iVar1 + 1;
  goto code_?;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::UpdateController::UpdateController_FixedUpdate(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  state = UpdateController_GetPresentState((MethodInfo *)0x0);
  iVar1 = 0;
  while( true ) {
    if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
      func_?(TypeInfo__UpdateController);
    }
    pLVar2 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
    if (pLVar2 == (List_1_PriorityDataFixedUpdate___Array *)0x0) break;
    if ((int)pLVar2->max_length <= iVar1) {
      return;
    }
    if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
      func_?(TypeInfo__UpdateController);
    }
    if (TypeInfo__UpdateController->static_fields->fixedUpdateBuckets ==
        (List_1_PriorityDataFixedUpdate___Array *)0x0) break;
    priorityDatas = (List_1_PriorityDataFixedUpdate_ *)func_?(iVar1);
    UpdateController_FixedUpdateList(state,priorityDatas,(MethodInfo *)0x0);
    iVar1 = iVar1 + 1;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void FixedUpdateList(Int32, List`1[PriorityDataFixedUpdate]) */

void Assembly-CSharp.dll::UpdateController::UpdateController_FixedUpdateList
               (int32_t state,List_1_PriorityDataFixedUpdate_ *priorityDatas,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?();
  index = (undefined4 *)0x0;
  puStack_4 = &stack0xffffffa0;
  while( true ) {
    puStack_6 = index;
    if (priorityDatas == (List_1_PriorityDataFixedUpdate_ *)0x0) break;
    pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)priorityDatas,
                        MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__get_Count__
                       );
    if ((int)pOVar7 <= (int)index) {
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pPVar8 = mscorlib.dll::System::Collections::Generic::List`1[PriorityDataFixedUpdate]::
             List_1_PriorityDataFixedUpdate__get_Item
                       (&PStack_9,priorityDatas,(int32_t)index,
                        MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__get_Item_int_
                       );
    if (0 < (state & pPVar8->condition)) {
      uStack_1 = 0;
      puVar10 = (undefined8 *)func_?();
      uStack_11 = *puVar10;
      if ((int)uStack_11 == 0) break;
      func_?(0,TypeInfo__IUpdatecontrollerSubscriberFixedUpdate,(int)uStack_11);
      uStack_1 = 0xffffffff;
    }
    index = (undefined4 *)((int)index + 1);
  }
  func_?(0);
  func_?(uStack_12,0,
                  MethodInfo__UpdateController__FixedUpdateList_int__System__Collections__Generic__List<PriorityDataFixedUpdate>_
                 );
  uStack_13 = *index;
  func_?(&uStack_13,&UNK_?);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Int32 GetPresentState() */

int32_t Assembly-CSharp.dll::UpdateController::UpdateController_GetPresentState(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsInitialized((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar3 == MVGameMode__Enum_Edit) {
      iVar1 = 5;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar3 == MVGameMode__Enum_Edit) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this == (MVNetworkGame *)0x0) {
        func_?();
        pcVar4 = (code *)swi(3);
        iVar1 = (*pcVar4)();
        return iVar1;
      }
      bVar2 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        iVar1 = iVar1 + 8;
      }
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar3 == MVGameMode__Enum_Play) {
      iVar1 = iVar1 + 2;
    }
  }
  return iVar1;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::UpdateController::UpdateController_LateUpdate(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  state = UpdateController_GetPresentState((MethodInfo *)0x0);
  iVar1 = 0;
  while( true ) {
    if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
      func_?(TypeInfo__UpdateController);
    }
    pLVar2 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
    if (pLVar2 == (List_1_PriorityDataLateUpdate___Array *)0x0) break;
    if ((int)pLVar2->max_length <= iVar1) {
      return;
    }
    if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
      func_?(TypeInfo__UpdateController);
    }
    if (TypeInfo__UpdateController->static_fields->lateUpdateBuckets ==
        (List_1_PriorityDataLateUpdate___Array *)0x0) break;
    priorityDatas = (List_1_PriorityDataLateUpdate_ *)func_?(iVar1);
    UpdateController_LateUpdateList(state,priorityDatas,(MethodInfo *)0x0);
    iVar1 = iVar1 + 1;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void LateUpdateList(Int32, List`1[PriorityDataLateUpdate]) */

void Assembly-CSharp.dll::UpdateController::UpdateController_LateUpdateList
               (int32_t state,List_1_PriorityDataLateUpdate_ *priorityDatas,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?();
  index = (undefined4 *)0x0;
  puStack_4 = &stack0xffffffa0;
  while( true ) {
    puStack_6 = index;
    if (priorityDatas == (List_1_PriorityDataLateUpdate_ *)0x0) break;
    pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)priorityDatas,
                        MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__get_Count__
                       );
    if ((int)pOVar7 <= (int)index) {
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pPVar8 = mscorlib.dll::System::Collections::Generic::List`1[PriorityDataLateUpdate]::
             List_1_PriorityDataLateUpdate__get_Item
                       (&PStack_9,priorityDatas,(int32_t)index,
                        MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__get_Item_int_
                       );
    if (0 < (state & pPVar8->condition)) {
      uStack_1 = 0;
      puVar10 = (undefined8 *)func_?();
      uStack_11 = *puVar10;
      if ((int)uStack_11 == 0) break;
      func_?(0,TypeInfo__IUpdatecontrollerSubscriberLateUpdate,(int)uStack_11);
      uStack_1 = 0xffffffff;
    }
    index = (undefined4 *)((int)index + 1);
  }
  func_?(0);
  func_?(uStack_12,0,
                  MethodInfo__UpdateController__LateUpdateList_int__System__Collections__Generic__List<PriorityDataLateUpdate>_
                 );
  uStack_13 = *index;
  func_?(&uStack_13,&UNK_?);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void RemoveFixedUpdateObject(IUpdatecontrollerSubscriberFixedUpdate) */

void Assembly-CSharp.dll::UpdateController::UpdateController_RemoveFixedUpdateObject
               (IUpdatecontrollerSubscriberFixedUpdate *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UpdateController___RemoveFixedUpdateObject_c__AnonStorey1;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    iVar1 = 0;
    (this->fields)._._._._.m_CachedPtr = obj;
    while( true ) {
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar2 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
      if (pLVar2 == (List_1_PriorityDataFixedUpdate___Array *)0x0) break;
      if ((int)pLVar2->max_length <= iVar1) {
        return;
      }
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?(TypeInfo__UpdateController);
      }
      if (TypeInfo__UpdateController->static_fields->fixedUpdateBuckets ==
          (List_1_PriorityDataFixedUpdate___Array *)0x0) break;
      this_00 = (List_1_UnityEngine_Vector3_ *)func_?(iVar1);
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Predicate<PriorityDataFixedUpdate>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__UpdateController___RemoveFixedUpdateObject_c__AnonStorey1____m__0_PriorityDataFixedUpdate_
                 ,
                 MethodInfo__System__Predicate<PriorityDataFixedUpdate>__Predicate_System__Object__void__
                );
      if (this_00 == (List_1_UnityEngine_Vector3_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__RemoveAll
                (this_00,(Predicate_1_UnityEngine_Vector3_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__RemoveAll_System__Predicate<PriorityDataFixedUpdate>_
                );
      iVar1 = iVar1 + 1;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RemoveLateUpdateObject(IUpdatecontrollerSubscriberLateUpdate) */

void Assembly-CSharp.dll::UpdateController::UpdateController_RemoveLateUpdateObject
               (IUpdatecontrollerSubscriberLateUpdate *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UpdateController___RemoveLateUpdateObject_c__AnonStorey2;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    iVar1 = 0;
    (this->fields)._._._._.m_CachedPtr = obj;
    while( true ) {
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar2 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
      if (pLVar2 == (List_1_PriorityDataLateUpdate___Array *)0x0) break;
      if ((int)pLVar2->max_length <= iVar1) {
        return;
      }
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?(TypeInfo__UpdateController);
      }
      if (TypeInfo__UpdateController->static_fields->lateUpdateBuckets ==
          (List_1_PriorityDataLateUpdate___Array *)0x0) break;
      this_00 = (List_1_UnityEngine_Vector3_ *)func_?(iVar1);
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Predicate<PriorityDataLateUpdate>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__UpdateController___RemoveLateUpdateObject_c__AnonStorey2____m__0_PriorityDataLateUpdate_
                 ,
                 MethodInfo__System__Predicate<PriorityDataLateUpdate>__Predicate_System__Object__void__
                );
      if (this_00 == (List_1_UnityEngine_Vector3_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__RemoveAll
                (this_00,(Predicate_1_UnityEngine_Vector3_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__RemoveAll_System__Predicate<PriorityDataLateUpdate>_
                );
      iVar1 = iVar1 + 1;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RemoveUpdateObject(IUpdatecontrollerSubscriberUpdate) */

void Assembly-CSharp.dll::UpdateController::UpdateController_RemoveUpdateObject
               (IUpdatecontrollerSubscriberUpdate *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UpdateController___RemoveUpdateObject_c__AnonStorey0;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  if (this != (ScaleAnimationBase *)0x0) {
    iVar1 = 0;
    (this->fields)._._._._.m_CachedPtr = obj;
    while( true ) {
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar2 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar2 == (List_1_PriorityDataUpdate___Array *)0x0) break;
      if ((int)pLVar2->max_length <= iVar1) {
        return;
      }
      if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
        func_?(TypeInfo__UpdateController);
      }
      if (TypeInfo__UpdateController->static_fields->updateBuckets ==
          (List_1_PriorityDataUpdate___Array *)0x0) break;
      this_00 = (List_1_UnityEngine_Vector3_ *)func_?(iVar1);
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?(TypeInfo__System__Predicate<PriorityDataUpdate>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this,
                 MethodInfo__UpdateController___RemoveUpdateObject_c__AnonStorey0____m__0_PriorityDataUpdate_
                 ,
                 MethodInfo__System__Predicate<PriorityDataUpdate>__Predicate_System__Object__void__
                );
      if (this_00 == (List_1_UnityEngine_Vector3_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
      List_1_UnityEngine_Vector3__RemoveAll
                (this_00,(Predicate_1_UnityEngine_Vector3_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                );
      iVar1 = iVar1 + 1;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::UpdateController::UpdateController_Update(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  state = UpdateController_GetPresentState((MethodInfo *)0x0);
  iVar1 = 0;
  while( true ) {
    if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
      func_?(TypeInfo__UpdateController);
    }
    pLVar2 = TypeInfo__UpdateController->static_fields->updateBuckets;
    if (pLVar2 == (List_1_PriorityDataUpdate___Array *)0x0) break;
    if ((int)pLVar2->max_length <= iVar1) {
      return;
    }
    if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
      func_?(TypeInfo__UpdateController);
    }
    if (TypeInfo__UpdateController->static_fields->updateBuckets ==
        (List_1_PriorityDataUpdate___Array *)0x0) break;
    priorityDatas = (List_1_PriorityDataUpdate_ *)func_?(iVar1);
    UpdateController_UpdateList(state,priorityDatas,(MethodInfo *)0x0);
    iVar1 = iVar1 + 1;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateList(Int32, List`1[PriorityDataUpdate]) */

void Assembly-CSharp.dll::UpdateController::UpdateController_UpdateList
               (int32_t state,List_1_PriorityDataUpdate_ *priorityDatas,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff88;
  puVar5 = &stack0xffffff88;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?();
  index = (undefined4 *)0x0;
  puStack_4 = &stack0xffffff88;
  while( true ) {
    puStack_6 = index;
    if (priorityDatas == (List_1_PriorityDataUpdate_ *)0x0) break;
    pOVar7 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)priorityDatas,
                        MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__get_Count__
                       );
    if ((int)pOVar7 <= (int)index) {
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pPVar8 = mscorlib.dll::System::Collections::Generic::List`1[PriorityDataUpdate]::
             List_1_PriorityDataUpdate__get_Item
                       (&PStack_9,priorityDatas,(int32_t)index,
                        MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__get_Item_int_
                       );
    uStack_10._0_4_ = pPVar8->obj;
    uStack_10._4_4_ = pPVar8->priority;
    if ((undefined4)uStack_10 != 0) {
      pMStack_11 = MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__get_Item_int_
      ;
      pLStack_12 = priorityDatas;
      puStack_13 = index;
      puVar14 = (undefined8 *)func_?();
      uStack_15 = *puVar14;
      if (0 < (int)(state & *(uint *)(puVar14 + 1))) {
        uStack_1 = 0;
        puVar14 = (undefined8 *)
                 func_?(&pLStack_12,priorityDatas,index,
                                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__get_Item_int_
                                );
        uStack_16 = *puVar14;
        if ((int)uStack_16 == 0) break;
        func_?(0,TypeInfo__IUpdatecontrollerSubscriberUpdate,(int)uStack_16);
        uStack_1 = 0xffffffff;
      }
    }
    index = (undefined4 *)((int)index + 1);
  }
  func_?(0);
  func_?(uStack_17,0,
                  MethodInfo__UpdateController__UpdateList_int__System__Collections__Generic__List<PriorityDataUpdate>_
                 );
  uStack_18 = *index;
  func_?(&uStack_18,&UNK_?);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* UpdateController() */

void Assembly-CSharp.dll::UpdateController::UpdateController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_PriorityDataUpdate___Array *)
           func_?(TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>,5);
  pLVar2 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar2,MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__List__);
  if (pLVar1 == (List_1_PriorityDataUpdate___Array *)0x0) {
code_?:
    func_?(0);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?();
    func_?(uVar3);
code_?:
    uVar3 = func_?();
    func_?(uVar3);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?();
    func_?(uVar3);
code_?:
    uVar3 = func_?();
    func_?(uVar3);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0,0);
    func_?(uVar3);
code_?:
    uVar3 = func_?();
    func_?(uVar3);
code_?:
    uVar3 = func_?();
    func_?(uVar3);
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
    func_?();
  }
  else {
    if (pLVar2 != (List_1_UnityEngine_Vector4_ *)0x0) {
      iVar4 = func_?(pLVar2,(pLVar1->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar1->max_length == 0) goto code_?;
    pLVar1->vector[0] = (List_1_PriorityDataUpdate_ *)pLVar2;
    pLVar2 = (List_1_UnityEngine_Vector4_ *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar2,MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__List__);
    if (pLVar2 != (List_1_UnityEngine_Vector4_ *)0x0) {
      iVar4 = func_?();
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar1->max_length < 2) goto code_?;
    pLVar1->vector[1] = (List_1_PriorityDataUpdate_ *)pLVar2;
    pLVar2 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar2,MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__List__);
    if (pLVar2 != (List_1_UnityEngine_Vector4_ *)0x0) {
      iVar4 = func_?();
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar1->max_length < 3) goto code_?;
    pLVar1->vector[2] = (List_1_PriorityDataUpdate_ *)pLVar2;
    pLVar2 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar2,MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__List__);
    if (pLVar2 != (List_1_UnityEngine_Vector4_ *)0x0) {
      iVar4 = func_?();
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar1->max_length < 4) goto code_?;
    pLVar1->vector[3] = (List_1_PriorityDataUpdate_ *)pLVar2;
    pLVar2 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar2,MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__List__);
    if (pLVar2 != (List_1_UnityEngine_Vector4_ *)0x0) {
      iVar4 = func_?();
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar1->max_length < 5) goto code_?;
    pLVar1->vector[4] = (List_1_PriorityDataUpdate_ *)pLVar2;
    TypeInfo__UpdateController->static_fields->updateBuckets = pLVar1;
    pLVar5 = (List_1_PriorityDataFixedUpdate___Array *)func_?();
    pLVar2 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar2,
               MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__List__);
    if (pLVar5 == (List_1_PriorityDataFixedUpdate___Array *)0x0) goto code_?;
    if (pLVar2 != (List_1_UnityEngine_Vector4_ *)0x0) {
      iVar4 = func_?(pLVar2,(pLVar5->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar5->max_length == 0) goto code_?;
    pLVar5->vector[0] = (List_1_PriorityDataFixedUpdate_ *)pLVar2;
    pLVar2 = (List_1_UnityEngine_Vector4_ *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar2,
               MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__List__);
    if (pLVar2 != (List_1_UnityEngine_Vector4_ *)0x0) {
      iVar4 = func_?();
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar5->max_length < 2) goto code_?;
    pLVar5->vector[1] = (List_1_PriorityDataFixedUpdate_ *)pLVar2;
    pLVar2 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar2,
               MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__List__);
    if (pLVar2 != (List_1_UnityEngine_Vector4_ *)0x0) {
      iVar4 = func_?();
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar5->max_length < 3) goto code_?;
    pLVar5->vector[2] = (List_1_PriorityDataFixedUpdate_ *)pLVar2;
    pLVar2 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar2,
               MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__List__);
    if (pLVar2 != (List_1_UnityEngine_Vector4_ *)0x0) {
      iVar4 = func_?();
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar5->max_length < 4) goto code_?;
    pLVar5->vector[3] = (List_1_PriorityDataFixedUpdate_ *)pLVar2;
    pLVar2 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar2,
               MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__List__);
    if (pLVar2 != (List_1_UnityEngine_Vector4_ *)0x0) {
      iVar4 = func_?();
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar5->max_length < 5) goto code_?;
    pLVar5->vector[4] = (List_1_PriorityDataFixedUpdate_ *)pLVar2;
    TypeInfo__UpdateController->static_fields->fixedUpdateBuckets = pLVar5;
    pLVar6 = (List_1_PriorityDataLateUpdate___Array *)func_?();
    pLVar2 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar2,MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__List__
              );
    if (pLVar6 == (List_1_PriorityDataLateUpdate___Array *)0x0) goto code_?;
    if (pLVar2 != (List_1_UnityEngine_Vector4_ *)0x0) {
      iVar4 = func_?(pLVar2,(pLVar6->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar6->max_length == 0) goto code_?;
    pLVar6->vector[0] = (List_1_PriorityDataLateUpdate_ *)pLVar2;
    pLVar2 = (List_1_UnityEngine_Vector4_ *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataLateUpdate>);
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar2,MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__List__
              );
    if (pLVar2 != (List_1_UnityEngine_Vector4_ *)0x0) {
      iVar4 = func_?();
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar6->max_length < 2) goto code_?;
    pLVar6->vector[1] = (List_1_PriorityDataLateUpdate_ *)pLVar2;
    pLVar2 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar2,MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__List__
              );
    if (pLVar2 != (List_1_UnityEngine_Vector4_ *)0x0) {
      iVar4 = func_?();
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar6->max_length < 3) goto code_?;
    pLVar6->vector[2] = (List_1_PriorityDataLateUpdate_ *)pLVar2;
    pLVar2 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar2,MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__List__
              );
    if (pLVar2 != (List_1_UnityEngine_Vector4_ *)0x0) {
      iVar4 = func_?();
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar6->max_length < 4) goto code_?;
    pLVar6->vector[3] = (List_1_PriorityDataLateUpdate_ *)pLVar2;
    pLVar2 = (List_1_UnityEngine_Vector4_ *)func_?();
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
    List_1_UnityEngine_Vector4___ctor
              (pLVar2,MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__List__
              );
    if (pLVar2 == (List_1_UnityEngine_Vector4_ *)0x0) {
code_?:
      if (4 < pLVar6->max_length) {
        pLVar6->vector[4] = (List_1_PriorityDataLateUpdate_ *)pLVar2;
        TypeInfo__UpdateController->static_fields->lateUpdateBuckets = pLVar6;
        return;
      }
      goto code_?;
    }
    iVar4 = func_?();
    if (iVar4 != 0) goto code_?;
  }
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

