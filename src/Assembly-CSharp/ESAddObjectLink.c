
/* Boolean DoAddLink() */

bool Assembly-CSharp.dll::ESAddObjectLink::ESAddObjectLink_DoAddLink
               (ESAddObjectLink *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddObjectLink
              (this_00,(this->fields).tempLink,(MethodInfo *)0x0);
    return 1;
  }
  uVar1 = func_?(&stack0xfffffff4);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddObjectLink::ESAddObjectLink_Enter
               (ESAddObjectLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MV__WorldObject__ObjectLink);
    func_?(&StringLiteral_state_started_with_multi_selecti);
    func_?(&StringLiteral_Should_not_happen___object_links);
    cRam_? = '\x01';
  }
  if (esm != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
    message = StringLiteral_state_started_with_multi_selecti;
    if ((pMVar1 == (MVWorldObjectClient *)0x0) ||
       (message = StringLiteral_Should_not_happen___object_links,
       (pMVar1->fields).selectedConnector != 3)) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)message,(MethodInfo *)0x0);
      FSMEntity::FSMEntity_PopState((FSMEntity *)esm,(MethodInfo *)0x0);
      return;
    }
    pOVar2 = (ObjectLink *)func_?(TypeInfo__MV__WorldObject__ObjectLink);
    MVWorldObject.dll::MV::WorldObject::ObjectLink::ObjectLink__ctor_1(pOVar2,(MethodInfo *)0x0);
    (this->fields).tempLink = pOVar2;
    func_?(&(this->fields).tempLink,pOVar2);
    pOVar2 = (this->fields).tempLink;
    pMVar3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
    if ((pMVar3 != (MVWorldObjectClient *)0x0) && (pOVar2 != (ObjectLink *)0x0)) {
      (pOVar2->fields).objectConnectorWOID = (pMVar3->fields)._.id;
      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((pMVar4 != (MainCameraManager *)0x0) &&
         (pLVar5 = (pMVar4->fields).lineDrawManager, pLVar5 != (LineDrawManager *)0x0)) {
        pOVar2 = (this->fields).tempLink;
        (pLVar5->fields).tempObjectLink = pOVar2;
        func_?(&(pLVar5->fields).tempObjectLink,pOVar2);
        this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_00 != (MVWorldObjectClientManager *)0x0) {
          pWVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                             (this_00,(pMVar1->fields)._.id,(MethodInfo *)0x0);
          (this->fields).woRef = pWVar6;
          func_?(&(this->fields).woRef,pWVar6);
          return;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddObjectLink::ESAddObjectLink_Execute
               (ESAddObjectLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__Exists_System__Predicate<MV::WorldObject::ObjectLink>_
                   );
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__System__Predicate<MV::WorldObject::ObjectLink>);
    func_?(&
                    MethodInfo__ESAddObjectLink____c__DisplayClass3_0___Execute_b__0_MV__WorldObject__ObjectLink_
                   );
    func_?(&TypeInfo__ESAddObjectLink____c__DisplayClass3_0);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__ESAddObjectLink____c__DisplayClass3_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,(ExceptionArgument__Enum)esm,(MethodInfo *)0x0);
  this_00 = (this->fields).woRef;
  if (this_00 == (WorldObjectClientRef *)0x0) goto code_?;
  pOVar1 = WorldObjectClientRef`1[System::Object]::
           WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                     ((WorldObjectClientRef_1_System_Object_ *)this_00,
                      MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                     );
  if (pOVar1 == (Object *)0x0) {
    ESAddObjectLink_LeaveAddLink(this,esm,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                    (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (value == (Object *)0x0) goto code_?;
    func_?(value + 1);
    bVar2 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      ((VoxelHit *)(value + 1),(HashSet_1_System_Int32_ *)0x0,-0x40005,
                       (MethodInfo *)0x0);
    if ((bVar2 != 0) && (value[6].klass != (Object__Class *)0xffffffff)) {
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_03,(int32_t)value[6].klass,(MethodInfo *)0x0);
      if ((pMVar3 != (MVWorldObject *)0x0) && (pOVar1[1].klass != value[6].klass)) {
        this_01 = pOVar1[4].klass;
        this_04 = (Predicate_1_Object_ *)func_?();
        mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
                  (this_04,value,
                   MethodInfo__ESAddObjectLink____c__DisplayClass3_0___Execute_b__0_MV__WorldObject__ObjectLink_
                   ,(MethodInfo *)0x0);
        if (this_01 == (Object__Class *)0x0) goto code_?;
        bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Exists
                          ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           this_01,(Predicate_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                    *)
                                   MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__Exists_System__Predicate<MV::WorldObject::ObjectLink>_
                           ,
                           MethodInfo__System__Collections__Generic__List<MV::WorldObject::ObjectLink>__Exists_System__Predicate<MV::WorldObject::ObjectLink>_
                          );
        if (bVar2 == 0) {
          cVar4 = (**(code **)&pOVar1->klass[3]._0.byval_arg.attrs)(pOVar1);
          if (cVar4 != '\0') {
            pOVar5 = (this->fields).tempLink;
            if (pOVar5 == (ObjectLink *)0x0) goto code_?;
            (pOVar5->fields).objectWOID = (int32_t)value[6].klass;
            this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            if (this_05 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddObjectLink
                      (this_05,(this->fields).tempLink,(MethodInfo *)0x0);
          }
        }
      }
    }
    if ((esm == (EditorStateMachine *)0x0) ||
       (this_02 = (esm->fields).selectionController, this_02 == (SelectionController *)0x0)) {
code_?:
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SelectionController::SelectionController_DeSelectAll(this_02,(MethodInfo *)0x0);
    ESAddObjectLink_LeaveAddLink(this,esm,(MethodInfo *)0x0);
  }
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddObjectLink::ESAddObjectLink_Exit
               (ESAddObjectLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar1 != (MainCameraManager *)0x0) &&
     (pLVar2 = (pMVar1->fields).lineDrawManager, pLVar2 != (LineDrawManager *)0x0)) {
    (pLVar2->fields).tempObjectLink = (ObjectLink *)0x0;
    func_?();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void LeaveAddLink(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddObjectLink::ESAddObjectLink_LeaveAddLink
               (ESAddObjectLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  this_01 = esm;
  if (esm != (EditorStateMachine *)0x0) {
    pSVar1 = (esm->fields).selectionController;
    if (pSVar1 != (SelectionController *)0x0) {
      if (cRam_? == '\0') {
        func_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
        cRam_? = '\x01';
      }
      this_00 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(pSVar1->fields).parentGroups;
      if (this_00 != (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) {
        TVar2 = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::
                TextureId]::Stack_1_UnityEngine_UIElements_TextureId__Peek
                          (this_00,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
        this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_02 != (MVWorldObjectClientManager *)0x0) {
          pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                             (this_02,(MethodInfo *)0x0);
          if (pMVar3 != (MVGroup *)0x0) {
            if (TVar2.m_Index != (pMVar3->fields)._._.id) {
              esm = (EditorStateMachine *)0x0;
              FSMEntity::FSMEntity_PopState((FSMEntity *)this_01,(MethodInfo *)0x0);
              return;
            }
            esm = (EditorStateMachine *)&esm;
            value = (Object *)func_?();
            FSMEntity::FSMEntity_set_Event((FSMEntity *)this_01,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void LeaveAddLinkAndDeSelectAll(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddObjectLink::ESAddObjectLink_LeaveAddLinkAndDeSelectAll
               (ESAddObjectLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if ((esm != (EditorStateMachine *)0x0) &&
     (this_00 = (esm->fields).selectionController, this_00 != (SelectionController *)0x0)) {
    SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    ESAddObjectLink_LeaveAddLink(this,esm,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

