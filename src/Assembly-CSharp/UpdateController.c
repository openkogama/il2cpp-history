
/* Void AddFixedUpdateObject(IUpdatecontrollerSubscriberFixedUpdate, UpdatePriority, Int32) */

void Assembly-CSharp.dll::UpdateController::UpdateController_AddFixedUpdateObject
               (IUpdatecontrollerSubscriberFixedUpdate *obj,UpdatePriority__Enum priority,
               int32_t conditionInp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__Add_PriorityDataFixedUpdate_
                   );
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  pIStack_1 = obj;
  UStack_2 = 0;
  pVStack_3 = (VisualTreeAsset *)0x0;
  func_?(&pIStack_1,obj);
  UStack_2 = priority;
  pVStack_3 = (VisualTreeAsset *)conditionInp;
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  pMVar4 = 
  MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__Add_PriorityDataFixedUpdate_
  ;
  pLVar5 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
  if (pLVar5 != (List_1_PriorityDataFixedUpdate___Array *)0x0) {
    if (pLVar5->max_length <= priority) goto code_?;
    this = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pLVar5->vector[priority];
    if (this != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
      piVar6 = &(this->fields)._version;
      *piVar6 = *piVar6 + 1;
      pVVar7 = (this->fields)._items;
      if (pVVar7 != (VisualTreeAsset_UsingEntry__Array *)0x0) {
        uVar8 = (this->fields)._size;
        if (pVVar7->max_length <= uVar8) {
          item.path = (String *)UStack_2;
          item.alias = (String *)pIStack_1;
          item.asset = pVStack_3;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
          VisualTreeAsset+UsingEntry]::
          List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__AddWithResize
                    (this,item,pMVar4->klass->rgctx_data[0xe].method);
          return;
        }
        (this->fields)._size = uVar8 + 1;
        if (uVar8 < pVVar7->max_length) {
          pVVar9 = pVVar7->vector + uVar8;
          pVVar9->alias = (String *)pIStack_1;
          pVVar9->path = (String *)UStack_2;
          pVVar9->asset = pVStack_3;
          func_?(pVVar9,0);
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void AddLateUpdateObject(IUpdatecontrollerSubscriberLateUpdate, UpdatePriority, Int32) */

void Assembly-CSharp.dll::UpdateController::UpdateController_AddLateUpdateObject
               (IUpdatecontrollerSubscriberLateUpdate *obj,UpdatePriority__Enum priority,
               int32_t conditionInp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__Add_PriorityDataLateUpdate_
                   );
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  pIStack_1 = obj;
  UStack_2 = 0;
  pVStack_3 = (VisualTreeAsset *)0x0;
  func_?(&pIStack_1,obj);
  UStack_2 = priority;
  pVStack_3 = (VisualTreeAsset *)conditionInp;
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  pMVar4 = 
  MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__Add_PriorityDataLateUpdate_
  ;
  pLVar5 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
  if (pLVar5 != (List_1_PriorityDataLateUpdate___Array *)0x0) {
    if (pLVar5->max_length <= priority) goto code_?;
    this = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pLVar5->vector[priority];
    if (this != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
      piVar6 = &(this->fields)._version;
      *piVar6 = *piVar6 + 1;
      pVVar7 = (this->fields)._items;
      if (pVVar7 != (VisualTreeAsset_UsingEntry__Array *)0x0) {
        uVar8 = (this->fields)._size;
        if (pVVar7->max_length <= uVar8) {
          item.path = (String *)UStack_2;
          item.alias = (String *)pIStack_1;
          item.asset = pVStack_3;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
          VisualTreeAsset+UsingEntry]::
          List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__AddWithResize
                    (this,item,pMVar4->klass->rgctx_data[0xe].method);
          return;
        }
        (this->fields)._size = uVar8 + 1;
        if (uVar8 < pVVar7->max_length) {
          pVVar9 = pVVar7->vector + uVar8;
          pVVar9->alias = (String *)pIStack_1;
          pVVar9->path = (String *)UStack_2;
          pVVar9->asset = pVStack_3;
          func_?(pVVar9,0);
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void AddUpdateObject(IUpdatecontrollerSubscriberUpdate, UpdatePriority, Int32) */

void Assembly-CSharp.dll::UpdateController::UpdateController_AddUpdateObject
               (IUpdatecontrollerSubscriberUpdate *obj,UpdatePriority__Enum priority,
               int32_t conditionInp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_
                   );
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  pIStack_1 = obj;
  UStack_2 = 0;
  pVStack_3 = (VisualTreeAsset *)0x0;
  func_?(&pIStack_1,obj);
  UStack_2 = priority;
  pVStack_3 = (VisualTreeAsset *)conditionInp;
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  pMVar4 = 
  MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Add_PriorityDataUpdate_;
  pLVar5 = TypeInfo__UpdateController->static_fields->updateBuckets;
  if (pLVar5 != (List_1_PriorityDataUpdate___Array *)0x0) {
    if (pLVar5->max_length <= priority) goto code_?;
    this = (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pLVar5->vector[priority];
    if (this != (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
      piVar6 = &(this->fields)._version;
      *piVar6 = *piVar6 + 1;
      pVVar7 = (this->fields)._items;
      if (pVVar7 != (VisualTreeAsset_UsingEntry__Array *)0x0) {
        uVar8 = (this->fields)._size;
        if (pVVar7->max_length <= uVar8) {
          item.path = (String *)UStack_2;
          item.alias = (String *)pIStack_1;
          item.asset = pVStack_3;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
          VisualTreeAsset+UsingEntry]::
          List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__AddWithResize
                    (this,item,pMVar4->klass->rgctx_data[0xe].method);
          return;
        }
        (this->fields)._size = uVar8 + 1;
        if (uVar8 < pVVar7->max_length) {
          pVVar9 = pVVar7->vector + uVar8;
          pVVar9->alias = (String *)pIStack_1;
          pVVar9->path = (String *)UStack_2;
          pVVar9->asset = pVStack_3;
          func_?(pVVar9,0);
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Clear() */

void Assembly-CSharp.dll::UpdateController::UpdateController_Clear(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__Clear__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__Clear__
                   );
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  iVar2 = 0x10;
  while( true ) {
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UpdateController);
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->updateBuckets;
    if (pLVar3 == (List_1_PriorityDataUpdate___Array *)0x0) break;
    if ((int)pLVar3->max_length <= (int)uVar1) {
      uVar1 = 0;
      iVar2 = 0x10;
      goto code_?;
    }
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UpdateController);
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->updateBuckets;
    if (pLVar3 == (List_1_PriorityDataUpdate___Array *)0x0) break;
    if (pLVar3->max_length <= uVar1) goto code_?;
    iVar4 = *(int *)((int)pLVar3->vector + iVar2 + -0x10);
    if (iVar4 == 0) break;
    iVar5 = *(int *)(iVar4 + 0xc);
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
    *(undefined4 *)(iVar4 + 0xc) = 0;
    if (0 < iVar5) {
      mscorlib.dll::System::Array::Array_Clear(*(Array **)(iVar4 + 8),0,iVar5,(MethodInfo *)0x0);
    }
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 4;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
code_?:
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  pLVar7 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
  if (pLVar7 == (List_1_PriorityDataFixedUpdate___Array *)0x0) goto code_?;
  if ((int)pLVar7->max_length <= (int)uVar1) {
    uVar1 = 0;
    iVar2 = 0x10;
    goto code_?;
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  pLVar7 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
  if (pLVar7 == (List_1_PriorityDataFixedUpdate___Array *)0x0) goto code_?;
  if (pLVar7->max_length <= uVar1) goto code_?;
  iVar4 = *(int *)((int)pLVar7->vector + iVar2 + -0x10);
  if (iVar4 == 0) goto code_?;
  iVar5 = *(int *)(iVar4 + 0xc);
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  if (0 < iVar5) {
    mscorlib.dll::System::Array::Array_Clear(*(Array **)(iVar4 + 8),0,iVar5,(MethodInfo *)0x0);
  }
  uVar1 = uVar1 + 1;
  iVar2 = iVar2 + 4;
  goto code_?;
code_?:
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  pLVar8 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
  if (pLVar8 == (List_1_PriorityDataLateUpdate___Array *)0x0) goto code_?;
  if ((int)pLVar8->max_length <= (int)uVar1) {
    return;
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  pLVar8 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
  if (pLVar8 == (List_1_PriorityDataLateUpdate___Array *)0x0) goto code_?;
  if (pLVar8->max_length <= uVar1) goto code_?;
  iVar4 = *(int *)((int)pLVar8->vector + iVar2 + -0x10);
  if (iVar4 == 0) goto code_?;
  iVar5 = *(int *)(iVar4 + 0xc);
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  *(undefined4 *)(iVar4 + 0xc) = 0;
  if (0 < iVar5) {
    mscorlib.dll::System::Array::Array_Clear(*(Array **)(iVar4 + 8),0,iVar5,(MethodInfo *)0x0);
  }
  uVar1 = uVar1 + 1;
  iVar2 = iVar2 + 4;
  goto code_?;
code_?:
  func_?();
  goto code_?;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::UpdateController::UpdateController_FixedUpdate(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  state = UpdateController_GetPresentState((MethodInfo *)0x0);
  uVar1 = 0;
  iVar2 = 0x10;
  while( true ) {
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UpdateController);
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
    if (pLVar3 == (List_1_PriorityDataFixedUpdate___Array *)0x0) goto code_?;
    if ((int)pLVar3->max_length <= (int)uVar1) {
      return;
    }
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UpdateController);
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
    if (pLVar3 == (List_1_PriorityDataFixedUpdate___Array *)0x0) goto code_?;
    if (pLVar3->max_length <= uVar1) break;
    UpdateController_FixedUpdateList
              (state,*(List_1_PriorityDataFixedUpdate_ **)((int)pLVar3->vector + iVar2 + -0x10),
               (MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 4;
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IUpdatecontrollerSubscriberFixedUpdate);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__get_Item_int_
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  index = 0;
  uStack_6 = 0;
  while( true ) {
    iStack_7 = index;
    if (priorityDatas == (List_1_PriorityDataFixedUpdate_ *)0x0) break;
    if ((priorityDatas->fields)._size <= index) {
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       (&VStack_9,
                        (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)priorityDatas,
                        index,
                        MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__get_Item_int_
                       );
    if (0 < (int)(state & (uint)pVVar8->asset)) {
      uStack_1 = 0;
      piVar10 = (int *)func_?();
      if (*piVar10 == 0) break;
      func_?(0,TypeInfo__IUpdatecontrollerSubscriberFixedUpdate,*piVar10);
      uStack_1 = 0xffffffff;
    }
    index = index + 1;
  }
  func_?();
  uVar11 = func_?(&
                          MethodInfo__UpdateController__FixedUpdateList_int__System__Collections__Generic__List<PriorityDataFixedUpdate>_
                         );
  func_?(priorityDatas,uVar11);
  pLStack_12 = priorityDatas->klass;
  func_?(&pLStack_12,&UNK_?);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Int32 GetPresentState() */

int32_t Assembly-CSharp.dll::UpdateController::UpdateController_GetPresentState(MethodInfo *method)

{
  iVar1 = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_IsInitialized_k__BackingField != 0) {
    MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar2 == MVGameMode__Enum_Edit) {
      iVar1 = 5;
    }
    MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar2 == MVGameMode__Enum_Edit) {
      this = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this == (MVNetworkGame *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        iVar1 = (*pcVar3)();
        return iVar1;
      }
      bVar4 = MVNetworkGame::MVNetworkGame_get_IsPlaying(this,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        iVar1 = iVar1 + 8;
      }
    }
    MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    if (MVar2 == MVGameMode__Enum_Play) {
      iVar1 = iVar1 + 2;
    }
  }
  return iVar1;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::UpdateController::UpdateController_LateUpdate(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  state = UpdateController_GetPresentState((MethodInfo *)0x0);
  uVar1 = 0;
  iVar2 = 0x10;
  while( true ) {
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UpdateController);
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
    if (pLVar3 == (List_1_PriorityDataLateUpdate___Array *)0x0) goto code_?;
    if ((int)pLVar3->max_length <= (int)uVar1) {
      return;
    }
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UpdateController);
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
    if (pLVar3 == (List_1_PriorityDataLateUpdate___Array *)0x0) goto code_?;
    if (pLVar3->max_length <= uVar1) break;
    UpdateController_LateUpdateList
              (state,*(List_1_PriorityDataLateUpdate_ **)((int)pLVar3->vector + iVar2 + -0x10),
               (MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 4;
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IUpdatecontrollerSubscriberLateUpdate);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__get_Item_int_
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  index = 0;
  uStack_6 = 0;
  while( true ) {
    iStack_7 = index;
    if (priorityDatas == (List_1_PriorityDataLateUpdate_ *)0x0) break;
    if ((priorityDatas->fields)._size <= index) {
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       (&VStack_9,
                        (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)priorityDatas,
                        index,
                        MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__get_Item_int_
                       );
    if (0 < (int)(state & (uint)pVVar8->asset)) {
      uStack_1 = 0;
      piVar10 = (int *)func_?();
      if (*piVar10 == 0) break;
      func_?(0,TypeInfo__IUpdatecontrollerSubscriberLateUpdate,*piVar10);
      uStack_1 = 0xffffffff;
    }
    index = index + 1;
  }
  func_?();
  uVar11 = func_?(&
                          MethodInfo__UpdateController__LateUpdateList_int__System__Collections__Generic__List<PriorityDataLateUpdate>_
                         );
  func_?(priorityDatas,uVar11);
  pLStack_12 = priorityDatas->klass;
  func_?(&pLStack_12,&UNK_?);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void RemoveFixedUpdateObject(IUpdatecontrollerSubscriberFixedUpdate) */

void Assembly-CSharp.dll::UpdateController::UpdateController_RemoveFixedUpdateObject
               (IUpdatecontrollerSubscriberFixedUpdate *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__RemoveAll_System__Predicate<PriorityDataFixedUpdate>_
                   );
    func_?(&TypeInfo__System__Predicate<PriorityDataFixedUpdate>);
    func_?(&
                    MethodInfo__UpdateController____c__DisplayClass7_0___RemoveFixedUpdateObject_b__0_PriorityDataFixedUpdate_
                   );
    func_?(&TypeInfo__UpdateController____c__DisplayClass7_0);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UpdateController____c__DisplayClass7_0;
  pOStack_1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (pOStack_1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pOStack_1 != (Object *)0x0) {
    pOStack_1[1].klass = (Object__Class *)obj;
    func_?(pOStack_1 + 1,obj);
    iVar2 = 0x10;
    uVar3 = 0;
    while( true ) {
      pOVar4 = pOStack_1;
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar5 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
      if (pLVar5 == (List_1_PriorityDataFixedUpdate___Array *)0x0) goto code_?;
      if ((int)pLVar5->max_length <= (int)uVar3) {
        return;
      }
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar5 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
      if (pLVar5 == (List_1_PriorityDataFixedUpdate___Array *)0x0) goto code_?;
      if (pLVar5->max_length <= uVar3) break;
      this_00 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pOVar4[1].monitor;
      this = *(List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ **)
              ((int)pLVar5->vector + iVar2 + -0x10);
      if (this_00 == (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
        this_00 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                  func_?(TypeInfo__System__Predicate<PriorityDataFixedUpdate>);
        mscorlib.dll::System::Predicate`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::
        Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___ctor
                  (this_00,pOStack_1,
                   MethodInfo__UpdateController____c__DisplayClass7_0___RemoveFixedUpdateObject_b__0_PriorityDataFixedUpdate_
                   ,(MethodInfo *)0x0);
        pOStack_1[1].monitor = (MonitorData *)this_00;
        func_?(&pOStack_1[1].monitor,this_00);
      }
      if (this == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
      VisualTreeAsset+UsingEntry]::
      List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__RemoveAll
                (this,this_00,
                 MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__RemoveAll_System__Predicate<PriorityDataFixedUpdate>_
                );
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RemoveLateUpdateObject(IUpdatecontrollerSubscriberLateUpdate) */

void Assembly-CSharp.dll::UpdateController::UpdateController_RemoveLateUpdateObject
               (IUpdatecontrollerSubscriberLateUpdate *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__RemoveAll_System__Predicate<PriorityDataLateUpdate>_
                   );
    func_?(&TypeInfo__System__Predicate<PriorityDataLateUpdate>);
    func_?(&
                    MethodInfo__UpdateController____c__DisplayClass8_0___RemoveLateUpdateObject_b__0_PriorityDataLateUpdate_
                   );
    func_?(&TypeInfo__UpdateController____c__DisplayClass8_0);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UpdateController____c__DisplayClass8_0;
  pOStack_1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (pOStack_1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pOStack_1 != (Object *)0x0) {
    pOStack_1[1].klass = (Object__Class *)obj;
    func_?(pOStack_1 + 1,obj);
    iVar2 = 0x10;
    uVar3 = 0;
    while( true ) {
      pOVar4 = pOStack_1;
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar5 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
      if (pLVar5 == (List_1_PriorityDataLateUpdate___Array *)0x0) goto code_?;
      if ((int)pLVar5->max_length <= (int)uVar3) {
        return;
      }
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar5 = TypeInfo__UpdateController->static_fields->lateUpdateBuckets;
      if (pLVar5 == (List_1_PriorityDataLateUpdate___Array *)0x0) goto code_?;
      if (pLVar5->max_length <= uVar3) break;
      this_00 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pOVar4[1].monitor;
      this = *(List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ **)
              ((int)pLVar5->vector + iVar2 + -0x10);
      if (this_00 == (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
        this_00 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                  func_?(TypeInfo__System__Predicate<PriorityDataLateUpdate>);
        mscorlib.dll::System::Predicate`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::
        Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___ctor
                  (this_00,pOStack_1,
                   MethodInfo__UpdateController____c__DisplayClass8_0___RemoveLateUpdateObject_b__0_PriorityDataLateUpdate_
                   ,(MethodInfo *)0x0);
        pOStack_1[1].monitor = (MonitorData *)this_00;
        func_?(&pOStack_1[1].monitor,this_00);
      }
      if (this == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
      VisualTreeAsset+UsingEntry]::
      List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__RemoveAll
                (this,this_00,
                 MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__RemoveAll_System__Predicate<PriorityDataLateUpdate>_
                );
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void RemoveUpdateObject(IUpdatecontrollerSubscriberUpdate) */

void Assembly-CSharp.dll::UpdateController::UpdateController_RemoveUpdateObject
               (IUpdatecontrollerSubscriberUpdate *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                   );
    func_?(&TypeInfo__System__Predicate<PriorityDataUpdate>);
    func_?(&
                    MethodInfo__UpdateController____c__DisplayClass6_0___RemoveUpdateObject_b__0_PriorityDataUpdate_
                   );
    func_?(&TypeInfo__UpdateController____c__DisplayClass6_0);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UpdateController____c__DisplayClass6_0;
  pOStack_1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (pOStack_1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (pOStack_1 != (Object *)0x0) {
    pOStack_1[1].klass = (Object__Class *)obj;
    func_?(pOStack_1 + 1,obj);
    iVar2 = 0x10;
    uVar3 = 0;
    while( true ) {
      pOVar4 = pOStack_1;
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar5 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar5 == (List_1_PriorityDataUpdate___Array *)0x0) goto code_?;
      if ((int)pLVar5->max_length <= (int)uVar3) {
        return;
      }
      if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UpdateController);
      }
      pLVar5 = TypeInfo__UpdateController->static_fields->updateBuckets;
      if (pLVar5 == (List_1_PriorityDataUpdate___Array *)0x0) goto code_?;
      if (pLVar5->max_length <= uVar3) break;
      this_00 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)pOVar4[1].monitor;
      this = *(List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ **)
              ((int)pLVar5->vector + iVar2 + -0x10);
      if (this_00 == (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0) {
        this_00 = (Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)
                  func_?(TypeInfo__System__Predicate<PriorityDataUpdate>);
        mscorlib.dll::System::Predicate`1[UnityEngine::UIElements::VisualTreeAsset+UsingEntry]::
        Predicate_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry___ctor
                  (this_00,pOStack_1,
                   MethodInfo__UpdateController____c__DisplayClass6_0___RemoveUpdateObject_b__0_PriorityDataUpdate_
                   ,(MethodInfo *)0x0);
        pOStack_1[1].monitor = (MonitorData *)this_00;
        func_?(&pOStack_1[1].monitor,this_00);
      }
      if (this == (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)0x0)
      goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
      VisualTreeAsset+UsingEntry]::
      List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__RemoveAll
                (this,this_00,
                 MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__RemoveAll_System__Predicate<PriorityDataUpdate>_
                );
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 4;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::UpdateController::UpdateController_Update(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  state = UpdateController_GetPresentState((MethodInfo *)0x0);
  uVar1 = 0;
  iVar2 = 0x10;
  while( true ) {
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UpdateController);
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->updateBuckets;
    if (pLVar3 == (List_1_PriorityDataUpdate___Array *)0x0) goto code_?;
    if ((int)pLVar3->max_length <= (int)uVar1) {
      return;
    }
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UpdateController);
    }
    pLVar3 = TypeInfo__UpdateController->static_fields->updateBuckets;
    if (pLVar3 == (List_1_PriorityDataUpdate___Array *)0x0) goto code_?;
    if (pLVar3->max_length <= uVar1) break;
    UpdateController_UpdateList
              (state,*(List_1_PriorityDataUpdate_ **)((int)pLVar3->vector + iVar2 + -0x10),
               (MethodInfo *)0x0);
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 4;
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IUpdatecontrollerSubscriberUpdate);
    func_?(&MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__get_Item_int_
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  index = 0;
  uStack_6 = 0;
  while( true ) {
    iStack_7 = index;
    if (priorityDatas == (List_1_PriorityDataUpdate_ *)0x0) break;
    if ((priorityDatas->fields)._size <= index) {
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pVVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+UsingEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry__get_Item
                       (&VStack_9,
                        (List_1_UnityEngine_UIElements_VisualTreeAsset_UsingEntry_ *)priorityDatas,
                        index,
                        MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__get_Item_int_
                       );
    uStack_10._0_4_ = pVVar8->alias;
    uStack_10._4_4_ = pVVar8->path;
    if ((undefined4)uStack_10 != 0) {
      apMStack_11[0] =
           MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__get_Item_int_;
      iVar12 = func_?();
      if (0 < (int)(state & *(uint *)(iVar12 + 8))) {
        uStack_1 = 0;
        piVar13 = (int *)func_?(apMStack_11,priorityDatas,index,
                                        MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__get_Item_int_
                                       );
        if (*piVar13 == 0) break;
        func_?(0,TypeInfo__IUpdatecontrollerSubscriberUpdate,*piVar13);
        uStack_1 = 0xffffffff;
      }
    }
    index = index + 1;
  }
  func_?();
  uVar14 = func_?();
  func_?(uVar14);
  pLStack_15 = priorityDatas->klass;
  func_?(&pLStack_15,&UNK_?);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* UpdateController() */

void Assembly-CSharp.dll::UpdateController::UpdateController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>);
    func_?(&TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>);
    func_?(&TypeInfo__System__Collections__Generic__List<PriorityDataLateUpdate>);
    func_?(&MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__List__)
    ;
    func_?(&MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>);
    func_?(&TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>);
    func_?(&TypeInfo__System__Collections__Generic__List<PriorityDataLateUpdate>);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_PriorityDataUpdate___Array *)
           func_?(TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>,5);
  pLVar2 = (List_1_PriorityDataUpdate_ *)
           func_?(TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__List__);
  if (pLVar1 == (List_1_PriorityDataUpdate___Array *)0x0) {
code_?:
    func_?();
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
code_?:
    uVar3 = func_?(0);
    func_?(uVar3);
  }
  else {
    if (pLVar2 != (List_1_PriorityDataUpdate_ *)0x0) {
      iVar4 = func_?(pLVar2,(pLVar1->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar1->max_length == 0) goto code_?;
    pLVar1->vector[0] = pLVar2;
    func_?(pLVar1->vector,pLVar2);
    pLVar2 = (List_1_PriorityDataUpdate_ *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
               MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__List__);
    if (pLVar2 != (List_1_PriorityDataUpdate_ *)0x0) {
      iVar4 = func_?(pLVar2,(pLVar1->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar1->max_length < 2) goto code_?;
    pLVar1->vector[1] = pLVar2;
    func_?(pLVar1->vector + 1,pLVar2);
    pLVar2 = (List_1_PriorityDataUpdate_ *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
               MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__List__);
    if (pLVar2 != (List_1_PriorityDataUpdate_ *)0x0) {
      iVar4 = func_?(pLVar2,(pLVar1->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar1->max_length < 3) goto code_?;
    pLVar1->vector[2] = pLVar2;
    func_?(pLVar1->vector + 2,pLVar2);
    pLVar2 = (List_1_PriorityDataUpdate_ *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
               MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__List__);
    if (pLVar2 != (List_1_PriorityDataUpdate_ *)0x0) {
      iVar4 = func_?(pLVar2,(pLVar1->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar1->max_length < 4) goto code_?;
    pLVar1->vector[3] = pLVar2;
    func_?(pLVar1->vector + 3,pLVar2);
    pLVar2 = (List_1_PriorityDataUpdate_ *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataUpdate>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
               MethodInfo__System__Collections__Generic__List<PriorityDataUpdate>__List__);
    if (pLVar2 != (List_1_PriorityDataUpdate_ *)0x0) {
      iVar4 = func_?(pLVar2,(pLVar1->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar1->max_length < 5) goto code_?;
    pLVar1->vector[4] = pLVar2;
    func_?(pLVar1->vector + 4,pLVar2);
    TypeInfo__UpdateController->static_fields->updateBuckets = pLVar1;
    func_?(TypeInfo__UpdateController->static_fields,pLVar1);
    pLVar5 = (List_1_PriorityDataFixedUpdate___Array *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>,5
                            );
    pLVar6 = (List_1_PriorityDataFixedUpdate_ *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
               MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__List__);
    if (pLVar5 == (List_1_PriorityDataFixedUpdate___Array *)0x0) goto code_?;
    if (pLVar6 != (List_1_PriorityDataFixedUpdate_ *)0x0) {
      iVar4 = func_?(pLVar6,(pLVar5->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar5->max_length == 0) goto code_?;
    pLVar5->vector[0] = pLVar6;
    func_?(pLVar5->vector,pLVar6);
    pLVar6 = (List_1_PriorityDataFixedUpdate_ *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
               MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__List__);
    if (pLVar6 != (List_1_PriorityDataFixedUpdate_ *)0x0) {
      iVar4 = func_?(pLVar6,(pLVar5->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar5->max_length < 2) goto code_?;
    pLVar5->vector[1] = pLVar6;
    func_?(pLVar5->vector + 1,pLVar6);
    pLVar6 = (List_1_PriorityDataFixedUpdate_ *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
               MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__List__);
    if (pLVar6 != (List_1_PriorityDataFixedUpdate_ *)0x0) {
      iVar4 = func_?(pLVar6,(pLVar5->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar5->max_length < 3) goto code_?;
    pLVar5->vector[2] = pLVar6;
    func_?(pLVar5->vector + 2,pLVar6);
    pLVar6 = (List_1_PriorityDataFixedUpdate_ *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
               MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__List__);
    if (pLVar6 != (List_1_PriorityDataFixedUpdate_ *)0x0) {
      iVar4 = func_?(pLVar6,(pLVar5->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar5->max_length < 4) goto code_?;
    pLVar5->vector[3] = pLVar6;
    func_?(pLVar5->vector + 3,pLVar6);
    pLVar6 = (List_1_PriorityDataFixedUpdate_ *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
               MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__List__);
    if (pLVar6 != (List_1_PriorityDataFixedUpdate_ *)0x0) {
      iVar4 = func_?(pLVar6,(pLVar5->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar5->max_length < 5) goto code_?;
    pLVar5->vector[4] = pLVar6;
    func_?(pLVar5->vector + 4,pLVar6);
    TypeInfo__UpdateController->static_fields->fixedUpdateBuckets = pLVar5;
    func_?(&TypeInfo__UpdateController->static_fields->fixedUpdateBuckets,pLVar5);
    pLVar7 = (List_1_PriorityDataLateUpdate___Array *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataLateUpdate>,5)
    ;
    pLVar8 = (List_1_PriorityDataLateUpdate_ *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataLateUpdate>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar8,
               MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__List__);
    if (pLVar7 == (List_1_PriorityDataLateUpdate___Array *)0x0) goto code_?;
    if (pLVar8 != (List_1_PriorityDataLateUpdate_ *)0x0) {
      iVar4 = func_?(pLVar8,(pLVar7->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar7->max_length == 0) goto code_?;
    pLVar7->vector[0] = pLVar8;
    func_?(pLVar7->vector,pLVar8);
    pLVar8 = (List_1_PriorityDataLateUpdate_ *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataLateUpdate>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar8,
               MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__List__);
    if (pLVar8 != (List_1_PriorityDataLateUpdate_ *)0x0) {
      iVar4 = func_?(pLVar8,(pLVar7->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar7->max_length < 2) goto code_?;
    pLVar7->vector[1] = pLVar8;
    func_?(pLVar7->vector + 1,pLVar8);
    pLVar8 = (List_1_PriorityDataLateUpdate_ *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataLateUpdate>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar8,
               MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__List__);
    if (pLVar8 != (List_1_PriorityDataLateUpdate_ *)0x0) {
      iVar4 = func_?(pLVar8,(pLVar7->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar7->max_length < 3) goto code_?;
    pLVar7->vector[2] = pLVar8;
    func_?(pLVar7->vector + 2,pLVar8);
    pLVar8 = (List_1_PriorityDataLateUpdate_ *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataLateUpdate>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar8,
               MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__List__);
    if (pLVar8 != (List_1_PriorityDataLateUpdate_ *)0x0) {
      iVar4 = func_?(pLVar8,(pLVar7->klass->_0).element_class);
      if (iVar4 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pLVar7->max_length < 4) goto code_?;
    pLVar7->vector[3] = pLVar8;
    func_?(pLVar7->vector + 3,pLVar8);
    pLVar8 = (List_1_PriorityDataLateUpdate_ *)
             func_?(TypeInfo__System__Collections__Generic__List<PriorityDataLateUpdate>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar8,
               MethodInfo__System__Collections__Generic__List<PriorityDataLateUpdate>__List__);
    if (pLVar8 == (List_1_PriorityDataLateUpdate_ *)0x0) {
code_?:
      if (4 < pLVar7->max_length) {
        pLVar7->vector[4] = pLVar8;
        func_?(pLVar7->vector + 4,pLVar8);
        TypeInfo__UpdateController->static_fields->lateUpdateBuckets = pLVar7;
        func_?(&TypeInfo__UpdateController->static_fields->lateUpdateBuckets,pLVar7);
        return;
      }
      goto code_?;
    }
    iVar4 = func_?(pLVar8,(pLVar7->klass->_0).element_class);
    if (iVar4 != 0) goto code_?;
  }
  uVar3 = func_?(0);
  func_?(uVar3);
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

