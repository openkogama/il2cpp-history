
/* Boolean DoAddLink() */

bool Assembly-CSharp.dll::ESAddObjectLink::ESAddObjectLink_DoAddLink
               (ESAddObjectLink *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).operationRequests,
     this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddObjectLink
              (this_00,(this->fields).tempLink,(MethodInfo *)0x0);
    return 1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddObjectLink::ESAddObjectLink_Enter
               (ESAddObjectLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__ObjectLink);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_state_started_with_multi_selecti);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Should_not_happen___object_links);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (esm != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
    message = StringLiteral_state_started_with_multi_selecti;
    if ((pMVar1 == (MVWorldObjectClient *)0x0) ||
       (message = StringLiteral_Should_not_happen___object_links,
       (pMVar1->fields).selectedConnector != 3)) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)message,(MethodInfo *)0x0);
      FSMEntity::FSMEntity_PopState((FSMEntity *)esm,(MethodInfo *)0x0);
      return;
    }
    pOVar2 = (ObjectLink *)FUN_?(TypeInfo__MV__WorldObject__ObjectLink);
    bVar3 = iRam_? != 0;
    (pOVar2->fields).id = -1;
    (pOVar2->fields).objectConnectorWOID = -1;
    (pOVar2->fields).objectWOID = -1;
    (pOVar2->fields).isSet = 1;
    (this->fields).tempLink = pOVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).tempLink >> 0xc);
      method = (MethodInfo *)(ulonglong)(uVar4 & 0x3f);
      lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (longlong)method;
        }
        UNLOCK();
      } while (!bVar3);
    }
    pOVar2 = (this->fields).tempLink;
    pMVar8 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
    if ((pMVar8 != (MVWorldObjectClient *)0x0) && (pOVar2 != (ObjectLink *)0x0)) {
      (pOVar2->fields).objectConnectorWOID = (pMVar8->fields)._.id;
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar9 != (MainCameraManager *)0x0) &&
         (this_00 = (ValueAnimation_1_StyleValues_ *)(pMVar9->fields).lineDrawManager,
         this_00 != (ValueAnimation_1_StyleValues_ *)0x0)) {
        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::Experimental::
        ValueAnimation`1[StyleValues]::ValueAnimation_1_StyleValues__set_onAnimationCompleted
                  (this_00,(Action *)(this->fields).tempLink,method);
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_01 != (MVWorldObjectClientManager *)0x0) {
          pWVar10 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                             (this_01,(pMVar1->fields)._.id,(MethodInfo *)0x0);
          bVar3 = iRam_? == 0;
          (this->fields).woRef = pWVar10;
          if (bVar3) {
            return;
          }
          uVar4 = (uint)((ulonglong)&(this->fields).woRef >> 0xc);
          lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
          do {
            uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
            puVar7 = (ulonglong *)(lVar5 + 0xADDR);
            LOCK();
            bVar3 = uVar6 == *puVar7;
            if (bVar3) {
              *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
            }
            UNLOCK();
          } while (!bVar3);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddObjectLink::ESAddObjectLink_Execute
               (ESAddObjectLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__Exists_System__Predicate<MV::WorldObject::ObjectLink>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Predicate<MV::WorldObject::ObjectLink>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__ESAddObjectLink____c__DisplayClass3_0___Execute_b__0_MV__WorldObject__ObjectLink_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ESAddObjectLink____c__DisplayClass3_0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?();
  pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  pWVar2 = (this->fields).woRef;
  if ((pWVar2 == (WorldObjectClientRef *)0x0) ||
     (pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
     pMVar3 == (MVWorldObjectClientManager *)0x0)) goto code_?;
  pOVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient_1
                      (pMVar3,(pWVar2->fields)._.woId,pMVar1->klass->rgctx_data[1].method);
  if (pOVar4 != (Object *)0x0) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_PointerSelect,KeyState__Enum_Up,(MethodInfo *)0x0);
    if (bVar5 == 0) {
      return;
    }
    if (object == (Object *)0x0) goto code_?;
    object[1].klass = (Object__Class *)0x0;
    object[1].monitor = (MonitorData *)0x0;
    object[2].klass = (Object__Class *)0x0;
    object[2].monitor = (MonitorData *)0x0;
    object[3].klass = (Object__Class *)0x0;
    object[3].monitor = (MonitorData *)0x0;
    object[4].klass = (Object__Class *)0x0;
    object[4].monitor = (MonitorData *)0x0;
    object[5].klass = (Object__Class *)0x0;
    object[5].monitor = (MonitorData *)0x0;
    object[6].klass = (Object__Class *)0x0;
    bVar5 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      ((VoxelHit *)(object + 1),(HashSet_1_System_Int32_ *)0x0,-0x40005,
                       (MethodInfo *)0x0);
    if ((bVar5 != 0) && (*(int *)&object[3].monitor != -1)) {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar3,*(int32_t *)&object[3].monitor,(MethodInfo *)0x0);
      if ((pMVar6 != (MVWorldObjectClient *)0x0) &&
         (*(int *)&pOVar4[1].klass != *(int *)&object[3].monitor)) {
        this_00 = pOVar4[3].klass;
        this_03 = (Predicate_1_Object_ *)
                  FUN_?(TypeInfo__System__Predicate<MV::WorldObject::ObjectLink>);
        mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                  (this_03,object,
                   MethodInfo__ESAddObjectLink____c__DisplayClass3_0___Execute_b__0_MV__WorldObject__ObjectLink_
                   ,(MethodInfo *)0x0);
        if (this_00 == (Object__Class *)0x0) goto code_?;
        iVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
                EntryPreProcessor+AllocSize]::
                List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__FindIndex
                          ((List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)this_00
                           ,(Predicate_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
                            this_03,MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__Exists_System__Predicate<MV::WorldObject::ObjectLink>_
                                    ->klass->rgctx_data[0x1d].method);
        if ((iVar7 == -1) &&
           (cVar8 = (*(code *)pOVar4->klass[3]._0.nestedTypes)(pOVar4), cVar8 != '\0')) {
          pOVar9 = (this->fields).tempLink;
          if (pOVar9 == (ObjectLink *)0x0) goto code_?;
          bVar10 = cRam_? == '\0';
          (pOVar9->fields).objectWOID = *(int32_t *)&object[3].monitor;
          if (bVar10) {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar11 == (MVGameControllerBase *)0x0) ||
              (pMVar12 = (pMVar11->fields).game, pMVar12 == (MVNetworkGame *)0x0)) ||
             (this_01 = (pMVar12->fields).operationRequests,
             this_01 == (MVNetworkGame_OperationRequests *)0x0)) goto code_?;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddObjectLink
                    (this_01,(this->fields).tempLink,(MethodInfo *)0x0);
        }
      }
    }
    if ((esm == (EditorStateMachine *)0x0) ||
       (this_02 = (esm->fields).selectionController, this_02 == (SelectionController *)0x0)) {
code_?:
      FUN_?();
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    SelectionController::SelectionController_DeSelectAll(this_02,(MethodInfo *)0x0);
  }
  ESAddObjectLink_LeaveAddLink(this,esm,(MethodInfo *)0x0);
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddObjectLink::ESAddObjectLink_Exit
               (ESAddObjectLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (pLVar2 = (pMVar1->fields).lineDrawManager, pLVar2 != (LineDrawManager *)0x0)) {
    bVar3 = iRam_? != 0;
    (pLVar2->fields).tempObjectLink = (ObjectLink *)0x0;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(pLVar2->fields).tempObjectLink >> 0xc);
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
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void LeaveAddLink(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddObjectLink::ESAddObjectLink_LeaveAddLink
               (ESAddObjectLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((esm == (EditorStateMachine *)0x0) ||
     (pSVar1 = (esm->fields).selectionController, pSVar1 == (SelectionController *)0x0)) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pSVar1->fields).parentGroups == (Stack_1_System_Int32_ *)0x0) goto code_?;
  iVar3 = FUN_?();
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_03 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                          (this_03,(MethodInfo *)0x0), pMVar4 == (MVGroup *)0x0))
  goto code_?;
  if (iVar3 != (pMVar4->fields)._._.id) {
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
    if ((esm->fields)._.lockState == 0) {
      this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(esm->fields)._.stateStack;
      if (this_00 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (0 < (this_00->fields)._size) {
        mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
        Stack_1_UnityEngine_UIElements_TextureId__Pop
                  (this_00,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
        (esm->fields)._.clearStack = 0;
        pOVar5 = (Object *)FUN_?(TypeInfo__EditorEvent,&stack0x00000008);
        FSMEntity::FSMEntity_set_Event((FSMEntity *)esm,pOVar5,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
  pOVar5 = (Object *)FUN_?(TypeInfo__EditorEvent,&stack0x00000010);
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
  pSVar6 = StringLiteral_State_is_locked__could_not_set_s;
  if ((esm->fields)._.lockState != 0) {
    if (pOVar5 == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(pOVar5->klass->vtable).ToString.methodPtr)
                       (pOVar5,(pOVar5->klass->vtable).ToString.method);
    }
    pSVar6 = mscorlib.dll::System::String::String_Concat_4(pSVar6,str1,(MethodInfo *)0x0);
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
    pIVar7 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar7 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar7,2,pSVar6);
    return;
  }
  bVar8 = iRam_? != 0;
  (esm->fields)._.nextEvent = pOVar5;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&(esm->fields)._.nextEvent >> 0xc);
    lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
    do {
      uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar12 = (ulonglong *)(lVar10 + 0xADDR);
      LOCK();
      bVar8 = uVar11 == *puVar12;
      if (bVar8) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  if (pOVar5 == (Object *)0x0) {
    if ((esm->fields)._.currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar8 = iRam_? != 0;
    (esm->fields)._.currentState = (IState *)0x0;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(esm->fields)._.currentState >> 0xc);
      lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
        puVar12 = (ulonglong *)(lVar10 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  else {
    this_01 = (esm->fields)._.transitionTable;
    if (this_01 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar13 = StateTransitionTable::StateTransitionTable_GetState(this_01,pOVar5,(MethodInfo *)0x0)
    ;
    if (pIVar13 != (IState *)0x0) {
      if ((esm->fields)._.currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar6 = (String *)
                (*(pOVar5->klass->vtable).ToString.methodPtr)
                          (pOVar5,(pOVar5->klass->vtable).ToString.method);
      (esm->fields)._.stateName = pSVar6;
      func_?(&(esm->fields)._.stateName);
      (esm->fields)._.currentState = pIVar13;
      func_?(&(esm->fields)._.currentState);
      (esm->fields)._.nextEvent = (Object *)0x0;
      func_?(&(esm->fields)._.nextEvent);
      (esm->fields)._.prevEvent = (esm->fields)._.curEvent;
      func_?(&esm->fields);
      (esm->fields)._.curEvent = pOVar5;
      func_?(&(esm->fields)._.curEvent);
      if ((esm->fields)._.currentState == (IState *)0x0) goto DAT_?;
      FUN_?(0);
      this_02 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(esm->fields)._.data;
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
    if ((esm->fields)._.clearStack == 0) {
      (esm->fields)._.clearStack = 1;
    }
    else {
      pSVar14 = (esm->fields)._.stateStack;
      if (pSVar14 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar15 = &(pSVar14->fields)._version;
      *piVar15 = *piVar15 + 1;
      (pSVar14->fields)._size = 0;
    }
  }
  return;
}


/* Void LeaveAddLinkAndDeSelectAll(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddObjectLink::ESAddObjectLink_LeaveAddLinkAndDeSelectAll
               (ESAddObjectLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (esm == (EditorStateMachine *)0x0) {
code_?:
    FUN_?(this);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pSVar2 = (esm->fields).selectionController;
  this = (ESAddObjectLink *)0x0;
  if (pSVar2 == (SelectionController *)0x0) goto code_?;
  SelectionController::SelectionController_DeSelectAll(pSVar2,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((esm == (EditorStateMachine *)0x0) ||
     (pSVar2 = (esm->fields).selectionController, pSVar2 == (SelectionController *)0x0)) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pSVar2->fields).parentGroups == (Stack_1_System_Int32_ *)0x0) goto code_?;
  iVar3 = FUN_?();
  this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_03 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                          (this_03,(MethodInfo *)0x0), pMVar4 == (MVGroup *)0x0))
  goto code_?;
  if (iVar3 != (pMVar4->fields)._._.id) {
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
    if ((esm->fields)._.lockState == 0) {
      this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(esm->fields)._.stateStack;
      if (this_00 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (0 < (this_00->fields)._size) {
        mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]::
        Stack_1_UnityEngine_UIElements_TextureId__Pop
                  (this_00,MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Pop__);
        (esm->fields)._.clearStack = 0;
        pOVar5 = (Object *)FUN_?(TypeInfo__EditorEvent,&stack0x00000008);
        FSMEntity::FSMEntity_set_Event((FSMEntity *)esm,pOVar5,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
  pOVar5 = (Object *)FUN_?(TypeInfo__EditorEvent,&stack0x00000010);
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
  pSVar6 = StringLiteral_State_is_locked__could_not_set_s;
  if ((esm->fields)._.lockState != 0) {
    if (pOVar5 == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(pOVar5->klass->vtable).ToString.methodPtr)
                       (pOVar5,(pOVar5->klass->vtable).ToString.method);
    }
    pSVar6 = mscorlib.dll::System::String::String_Concat_4(pSVar6,str1,(MethodInfo *)0x0);
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
    pIVar7 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar7 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar7,2,pSVar6);
    return;
  }
  bVar8 = iRam_? != 0;
  (esm->fields)._.nextEvent = pOVar5;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&(esm->fields)._.nextEvent >> 0xc);
    lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
    do {
      uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
      puVar12 = (ulonglong *)(lVar10 + 0xADDR);
      LOCK();
      bVar8 = uVar11 == *puVar12;
      if (bVar8) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  if (pOVar5 == (Object *)0x0) {
    if ((esm->fields)._.currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar8 = iRam_? != 0;
    (esm->fields)._.currentState = (IState *)0x0;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(esm->fields)._.currentState >> 0xc);
      lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
        puVar12 = (ulonglong *)(lVar10 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
  }
  else {
    this_01 = (esm->fields)._.transitionTable;
    if (this_01 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar13 = StateTransitionTable::StateTransitionTable_GetState(this_01,pOVar5,(MethodInfo *)0x0)
    ;
    if (pIVar13 != (IState *)0x0) {
      if ((esm->fields)._.currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar6 = (String *)
                (*(pOVar5->klass->vtable).ToString.methodPtr)
                          (pOVar5,(pOVar5->klass->vtable).ToString.method);
      (esm->fields)._.stateName = pSVar6;
      func_?(&(esm->fields)._.stateName);
      (esm->fields)._.currentState = pIVar13;
      func_?(&(esm->fields)._.currentState);
      (esm->fields)._.nextEvent = (Object *)0x0;
      func_?(&(esm->fields)._.nextEvent);
      (esm->fields)._.prevEvent = (esm->fields)._.curEvent;
      func_?(&esm->fields);
      (esm->fields)._.curEvent = pOVar5;
      func_?(&(esm->fields)._.curEvent);
      if ((esm->fields)._.currentState == (IState *)0x0) goto DAT_?;
      FUN_?(0);
      this_02 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(esm->fields)._.data;
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
    if ((esm->fields)._.clearStack == 0) {
      (esm->fields)._.clearStack = 1;
    }
    else {
      pSVar14 = (esm->fields)._.stateStack;
      if (pSVar14 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      piVar15 = &(pSVar14->fields)._version;
      *piVar15 = *piVar15 + 1;
      (pSVar14->fields)._size = 0;
    }
  }
  return;
}

