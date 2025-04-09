
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CERoamUUI::CERoamUUI_Enter
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditAnimationState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>_
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditUIState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&
                    MethodInfo__CERoamUUI____c___Enter_b__4_0_UnityEngine__EventSystems__IAvatarEditUIState__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    MethodInfo__CERoamUUI____c___Enter_b__4_1_UnityEngine__EventSystems__IAvatarEditAnimationState__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__CERoamUUI____c);
    cRam_? = '\x01';
  }
  (this->fields).didExit = 0;
  if (esm != (EditorStateMachine *)0x0) {
    pEStack_1 = (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)
                 (esm->fields).gameObject;
    if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CERoamUUI____c);
    }
    callbackFunction = TypeInfo__CERoamUUI____c->static_fields->__9__4_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)0x0) {
      if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CERoamUUI____c);
      }
      pCVar2 = TypeInfo__CERoamUUI____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>
                          );
      pEStack_3 = callbackFunction;
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)pCVar2,
                 MethodInfo__CERoamUUI____c___Enter_b__4_0_UnityEngine__EventSystems__IAvatarEditUIState__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__CERoamUUI____c->static_fields->__9__4_0 = callbackFunction;
      func_?(&TypeInfo__CERoamUUI____c->static_fields->__9__4_0,callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              ((GameObject *)pEStack_1,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditUIState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>_
              );
    this_00 = (esm->fields).cubeModelingStateMachine;
    if (this_00 != (CubeModelingStateMachine *)0x0) {
      CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors(this_00,(MethodInfo *)0x0);
      pWVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                         ((MethodInfo *)0x0);
      ppWVar5 = &(this->fields)._.tintedWo;
      *ppWVar5 = pWVar4;
      func_?(ppWVar5,pWVar4);
      pMVar6 = EditorStateMachine::EditorStateMachine_get_ParentGroup(esm,(MethodInfo *)0x0);
      if (pMVar6 != (MVGroup *)0x0) {
        pTVar7 = (pMVar6->fields)._.transform;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar7,1,(MethodInfo *)0x0);
        pEStack_3 = (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)(esm->fields).gameObject;
        if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CERoamUUI____c);
        }
        callbackFunction_00 = TypeInfo__CERoamUUI____c->static_fields->__9__4_1;
        if (callbackFunction_00 == (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)0x0)
        {
          if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CERoamUUI____c);
          }
          pCVar2 = TypeInfo__CERoamUUI____c->static_fields->__9;
          callbackFunction_00 =
               (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>
                              );
          pEStack_1 = callbackFunction_00;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction_00,
                     (Object *)pCVar2,
                     MethodInfo__CERoamUUI____c___Enter_b__4_1_UnityEngine__EventSystems__IAvatarEditAnimationState__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          TypeInfo__CERoamUUI____c->static_fields->__9__4_1 = callbackFunction_00;
          func_?(&TypeInfo__CERoamUUI____c->static_fields->__9__4_1,callbackFunction_00);
        }
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  ((GameObject *)pEStack_3,(BaseEventData *)0x0,
                   (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditAnimationState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>_
                  );
        pGVar8 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if (pGVar8 != (GameEventManager *)0x0) {
          this_01 = (pGVar8->fields).AvatarCommandsBuildMode;
          EStack_9 = (this->fields)._.stateType;
          uStack_10._0_4_ = (this->fields).centerPos.x;
          uStack_10._4_4_ = (this->fields).centerPos.y;
          pEStack_3 = (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)
                       (this->fields).centerPos.z;
          pMVar6 = EditorStateMachine::EditorStateMachine_get_ParentGroup(esm,(MethodInfo *)0x0);
          if ((pMVar6 != (MVGroup *)0x0) &&
             (pTVar7 = (pMVar6->fields)._.transform, pTVar7 != (Transform *)0x0)) {
            pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_12,pTVar7,(MethodInfo *)0x0);
            uVar13 = pVVar11->x;
            uVar14 = pVVar11->y;
            fVar15 = pVVar11->z;
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Vector3);
              cRam_? = '\x01';
            }
            pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
            VStack_12.x = (pVVar16->upVector).x;
            VStack_12.y = (pVVar16->upVector).y;
            VStack_12.z = (pVVar16->upVector).z;
            fVar17 = VStack_12.x + (float)uVar13;
            pEStack_1 = (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)
                         ((float)uVar14 + VStack_12.y);
            fVar15 = VStack_12.z + fVar15;
            this_02 = (MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData *)
                      func_?(TypeInfo__MVBuildModeAvatarLocal_EditMode__CERoamUUISetupData)
            ;
            centerPos.z = (float)pEStack_3;
            centerPos.x = (float)(undefined4)uStack_10;
            centerPos.y = (float)uStack_10._4_4_;
            lookAtPosition.y = (float)pEStack_1;
            lookAtPosition.x = fVar17;
            lookAtPosition.z = fVar15;
            MVBuildModeAvatarLocal+EditMode+CERoamUUISetupData::
            MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData__ctor
                      (this_02,centerPos,lookAtPosition,(MethodInfo *)0x0);
            if (this_01 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
              GameEventManager+AvatarCommandsBuildModeManager::
              GameEventManager_AvatarCommandsBuildModeManager_EnterBuildStateEvent
                        (this_01,EStack_9,(Object *)this_02,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Boolean EnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::CERoamUUI::CERoamUUI_EnterObject
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditAnimationState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&TypeInfo__MVGroup);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&
                    MethodInfo__CERoamUUI____c___EnterObject_b__9_0_UnityEngine__EventSystems__IAvatarEditAnimationState__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__CERoamUUI____c);
    cRam_? = '\x01';
  }
  if (esm != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      return 0;
    }
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
      if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
         ((MVCubeModelInstance__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
          TypeInfo__MVCubeModelInstance)) {
        pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
        if (pMVar1 == (MVWorldObjectClient *)0x0) goto code_?;
        iVar3 = (pMVar1->fields)._.groupId;
        iVar4 = EditorStateMachine::EditorStateMachine_get_ParentGroupID(esm,(MethodInfo *)0x0);
        if (iVar3 == iVar4) {
          root = (esm->fields).gameObject;
          if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          callbackFunction = TypeInfo__CERoamUUI____c->static_fields->__9__9_0;
          if (callbackFunction == (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)0x0) {
            if ((TypeInfo__CERoamUUI____c->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            object = TypeInfo__CERoamUUI____c->static_fields->__9;
            callbackFunction =
                 (ExecuteEvents_EventFunction_1_IAvatarEditAnimationState_ *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                       (Object *)object,
                       MethodInfo__CERoamUUI____c___EnterObject_b__9_0_UnityEngine__EventSystems__IAvatarEditAnimationState__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            TypeInfo__CERoamUUI____c->static_fields->__9__9_0 = callbackFunction;
            func_?();
          }
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditAnimationState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditAnimationState>_
                    );
          uRam_? = 1;
          return 1;
        }
      }
    }
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      return 0;
    }
    bVar2 = (TypeInfo__MVGroup->_1).naturalAligment;
    if ((pMVar1->klass->_1).naturalAligment < bVar2) {
      return 0;
    }
    if ((MVGroup__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] != TypeInfo__MVGroup) {
      return 0;
    }
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      pMVar1 = (MVWorldObjectClient *)0x0;
    }
    else {
      bVar2 = (TypeInfo__MVGroup->_1).naturalAligment;
      if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
         ((MVGroup__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] != TypeInfo__MVGroup))
      goto code_?;
    }
    this_00 = (esm->fields).selectionController;
    if (this_00 != (SelectionController *)0x0) {
      SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
      SelectionController::SelectionController_PushWOParents(this_00,pMVar1,1,(MethodInfo *)0x0);
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
        t = (pMVar1->fields).transform;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,1,(MethodInfo *)0x0);
        this_01 = (esm->fields).weCamera;
        if (this_01 != (MainCameraManager *)0x0) {
          MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_01,1,(MethodInfo *)0x0);
          value = (Object *)func_?();
          FSMEntity::FSMEntity_set_Event((FSMEntity *)esm,value,(MethodInfo *)0x0);
          return 1;
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::CERoamUUI::CERoamUUI_Execute
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  e = esm;
  this_01 = this;
  if ((this->fields).enterEditNextFrame != 0) {
    (this->fields).enterEditNextFrame = 0;
    this = (CERoamUUI *)0x35;
    value = (Object *)func_?(TypeInfo__EditorEvent,&this);
    if (e == (EditorStateMachine *)0x0) goto code_?;
    FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    ESStateBase::ESStateBase_TintObjectsOnMouseOver((ESStateBase *)this_01,e,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Hidden);
    cRam_? = '\x01';
  }
  if ((this_01->fields).didExit == 0) {
    func_?(auStack_1,0,0x48);
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Hidden,(MethodInfo *)0x0);
    this = (CERoamUUI *)(~(1 << (uVar2 & 0x1f)) & 0xfffffffb);
    this_02 = (HashSet_1_System_Int32_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor
              (this_02,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      ((VoxelHit *)auStack_1,this_02,(int32_t)this,(MethodInfo *)0x0);
    if ((bVar3 != 0) && (auStack_1._40_4_ != -1)) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if ((bVar3 == 0) || ((this_01->fields).downWorldObjectID != auStack_1._40_4_)) {
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MVInputWrapper);
        }
        bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                          (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          (this_01->fields).downWorldObjectID = auStack_1._40_4_;
        }
      }
      else {
        (this_01->fields).downWorldObjectID = -1;
        if ((e == (EditorStateMachine *)0x0) ||
           (this_00 = (e->fields).selectionController, this_00 == (SelectionController *)0x0)) {
code_?:
          func_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        func_?(&stack0xffffffb4,0,0x48);
        bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                          ((VoxelHit *)&stack0xffffffb4,(HashSet_1_System_Int32_ *)0x0,(int32_t)this
                           ,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          pWVar5 = (WorldObjectClientRef *)0x0;
        }
        else {
          hit.point.y = in_stack_6;
          hit.point.x = in_stack_7;
          hit.point.z = fStack_8;
          hit.normal.x = fStack_9;
          hit.normal.y = fStack_10;
          hit.normal.z = (float)IStack_11._0_4_;
          hit.cubePos._0_4_ = stack0xffffffd0;
          hit._28_4_ = iStack_12;
          hit.face = uStack_13;
          hit._36_4_ = iStack_14;
          hit.woId = (int32_t)pCStack_15;
          hit.cube = (Cube *)fStack_16;
          hit.distance = (float)pCStack_17;
          hit.collider = (Collider *)pTStack_18;
          hit.transform = (Transform *)uStack_19;
          hit._60_4_ = (int)iStack_20;
          hit.interactionFlags._0_4_ = (int)((ulonglong)iStack_20 >> 0x20);
          hit.interactionFlags._4_4_ = 0;
          pWVar5 = SelectionController::SelectionController_Select_1(this_00,hit,1,0,unaff_ESI);
        }
        if (pWVar5 != (WorldObjectClientRef *)0x0) {
          auStack_1._68_4_ = &UNK_?;
          CERoamUUI_EnterObject(this_01,e,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::CERoamUUI::CERoamUUI_Exit
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  ESStateBase::ESStateBase_DeTintCurrent((ESStateBase *)this,(MethodInfo *)0x0);
  (this->fields).didExit = 1;
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if ((pGVar1 != (GameEventManager *)0x0) &&
     (this_00 = (pGVar1->fields).AvatarCommandsBuildMode,
     this_00 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::KeyboardNavigationManipulator::
    KeyboardNavigationManipulator_Invoke
              ((KeyboardNavigationManipulator *)this_00,(this->fields)._.stateType,(EventBase *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean HandleSelect(EditorStateMachine) */

bool Assembly-CSharp.dll::CERoamUUI::CERoamUUI_HandleSelect
               (CERoamUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Hidden);
    cRam_? = '\x01';
  }
  if ((this->fields).didExit == 0) {
    func_?(&stack0xffffff6c,0,0x48);
    uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Hidden,(MethodInfo *)0x0);
    uVar1 = ~(1 << (uVar1 & 0x1f)) & 0xfffffffb;
    this_01 = (HashSet_1_System_Int32_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor
              (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    bVar2 = EditModeObjectPicker::EditModeObjectPicker_Pick
                      ((VoxelHit *)&stack0xffffff6c,this_01,uVar1,(MethodInfo *)0x0);
    if ((bVar2 != 0) && (in_stack_3 != -1)) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if ((bVar2 != 0) && ((this->fields).downWorldObjectID == in_stack_3)) {
        (this->fields).downWorldObjectID = -1;
        if ((esm != (EditorStateMachine *)0x0) &&
           (this_00 = (esm->fields).selectionController, this_00 != (SelectionController *)0x0)) {
          func_?();
          bVar2 = EditModeObjectPicker::EditModeObjectPicker_Pick
                            (&VStack_4,(HashSet_1_System_Int32_ *)0x0,uVar1,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            uVar5 = (undefined4)((ulonglong)VStack_4.interactionFlags >> 0x20);
            hit.point.y = VStack_4.point.z;
            hit.point.x = VStack_4.point.y;
            hit.point.z = VStack_4.normal.x;
            hit.normal.x = VStack_4.normal.y;
            hit.normal.y = VStack_4.normal.z;
            hit.normal.z = (float)VStack_4.cubePos._0_4_;
            hit.cubePos.x = VStack_4.cubePos.z;
            hit.cubePos.y = VStack_4._30_2_;
            hit._28_4_ = VStack_4.face;
            hit.face = VStack_4._36_4_;
            hit._36_4_ = VStack_4.woId;
            hit.woId = (int32_t)VStack_4.cube;
            hit.cube = (Cube *)VStack_4.distance;
            hit.distance = (float)VStack_4.collider;
            hit.collider = (Collider *)VStack_4.transform;
            hit.transform = (Transform *)VStack_4._60_4_;
            hit._60_2_ = (int16_t)(int)VStack_4.interactionFlags;
            hit._62_2_ = SUB42((int)VStack_4.interactionFlags,2);
            hit.interactionFlags._0_2_ = (int16_t)uVar5;
            hit.interactionFlags._2_2_ = SUB42(uVar5,2);
            hit.interactionFlags._4_4_ = 0;
            pWVar6 = SelectionController::SelectionController_Select_1
                               (this_00,hit,1,0,in_stack_7);
            return pWVar6 != (WorldObjectClientRef *)0x0;
          }
          return 0;
        }
        func_?();
        pcVar8 = (code *)swi(3);
        bVar2 = (*pcVar8)();
        return bVar2;
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        (this->fields).downWorldObjectID = in_stack_3;
      }
    }
  }
  return 0;
}


/* CERoamUUI(Vector3) */

void Assembly-CSharp.dll::CERoamUUI::CERoamUUI__ctor
               (CERoamUUI *this,Vector3 centerPos,MethodInfo *method)

{
  (this->fields).downWorldObjectID = -1;
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  (this->fields).centerPos.x = centerPos.x;
  (this->fields).centerPos.y = centerPos.y;
  (this->fields).centerPos.z = centerPos.z;
  return;
}

