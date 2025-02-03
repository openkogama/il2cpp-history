
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditBodyUUI::CEEditBodyUUI_Enter
               (CEEditBodyUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__CEEditBodyUUIData);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditUIState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__IWorldObjectWithModelingConstraint);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&
                    MethodInfo__CEEditBodyUUI____c___Enter_b__6_0_UnityEngine__EventSystems__IAvatarEditUIState__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__CEEditBodyUUI____c);
    func_?(&StringLiteral_UIItems);
    func_?(&StringLiteral_constrainVisualizer);
    cRam_? = '\x01';
  }
  ESStateBase::ESStateBase_Enter((ESStateBase *)this,esm,(MethodInfo *)0x0);
  if (esm == (EditorStateMachine *)0x0) goto code_?;
  pGVar1 = (esm->fields).gameObject;
  if ((TypeInfo__CEEditBodyUUI____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CEEditBodyUUI____c);
  }
  callbackFunction = TypeInfo__CEEditBodyUUI____c->static_fields->__9__6_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)0x0) {
    if ((TypeInfo__CEEditBodyUUI____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CEEditBodyUUI____c);
    }
    object = TypeInfo__CEEditBodyUUI____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__CEEditBodyUUI____c___Enter_b__6_0_UnityEngine__EventSystems__IAvatarEditUIState__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__CEEditBodyUUI____c->static_fields->__9__6_0 = callbackFunction;
    func_?(&TypeInfo__CEEditBodyUUI____c->static_fields->__9__6_0,callbackFunction);
  }
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditUIState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>_
            );
  pWVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  (this->fields)._.tintedWo = pWVar2;
  func_?(&(this->fields)._.tintedWo,pWVar2);
  unaff_ESI = (MVCubeModelInstance__Class *)
              EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
  if (unaff_ESI == (MVCubeModelInstance__Class *)0x0) {
    pcVar3 = (char *)0xffffffff;
code_?:
    (this->fields).targetCubeModelId = (int32_t)pcVar3;
    pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVCubeModelInstance);
      cRam_? = '\x01';
    }
    if (((this->fields).targetCubeModelId == -1) ||
       (this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
       this_01 == (MVWorldObjectClientManager *)0x0)) {
code_?:
      func_?();
      pMVar5 = extraout_EDX;
      goto code_?;
    }
    targetCubeModel =
         (MVCubeModelBase *)
         MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                   (this_01,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    unaff_ESI = TypeInfo__MVCubeModelInstance;
    if ((targetCubeModel == (MVCubeModelBase *)0x0) ||
       (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <=
         (targetCubeModel->klass->_1).naturalAligment &&
        ((MVCubeModelInstance__Class *)
         (targetCubeModel->klass->_1).typeHierarchy
         [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] == TypeInfo__MVCubeModelInstance)
        ))) {
      if ((targetCubeModel != (MVCubeModelBase *)0x0) &&
         (pMVar4 != (MVWorldObjectClientManager *)0x0)) {
        unaff_ESI = (MVCubeModelInstance__Class *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar4,(targetCubeModel->fields)._._.groupId,(MethodInfo *)0x0);
        if (unaff_ESI == (MVCubeModelInstance__Class *)0x0) {
          (this->fields).modelBody = (IWorldObjectWithModelingConstraint *)0x0;
          this_02 = (MVCubeModelInstance__Class *)0x0;
        }
        else {
          pIVar6 = (IWorldObjectWithModelingConstraint *)func_?();
          if (pIVar6 == (IWorldObjectWithModelingConstraint *)0x0) goto code_?;
          (this->fields).modelBody = pIVar6;
          this_02 = (MVCubeModelInstance__Class *)func_?();
          if (this_02 == (MVCubeModelInstance__Class *)0x0) goto code_?;
        }
        func_?();
        bVar7 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(esm,(MethodInfo *)0x0);
        if (bVar7 == 0) {
          pMVar8 = EditorStateMachine::EditorStateMachine_get_ParentGroup(esm,(MethodInfo *)0x0);
          if (pMVar8 == (MVGroup *)0x0) goto code_?;
          unaff_ESI = (MVCubeModelInstance__Class *)(pMVar8->fields)._.transform;
          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__SharedCubeFunctions);
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                    ((Transform *)unaff_ESI,0,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVCubeModelInstance);
          cRam_? = '\x01';
        }
        if (((this->fields).targetCubeModelId != -1) &&
           (pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
           pMVar4 != (MVWorldObjectClientManager *)0x0)) {
          targetCubeModel =
               (MVCubeModelBase *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar4,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
          unaff_ESI = TypeInfo__MVCubeModelInstance;
          if ((targetCubeModel != (MVCubeModelBase *)0x0) &&
             (((targetCubeModel->klass->_1).naturalAligment <
               (TypeInfo__MVCubeModelInstance->_1).naturalAligment ||
              ((MVCubeModelInstance__Class *)
               (targetCubeModel->klass->_1).typeHierarchy
               [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] !=
               TypeInfo__MVCubeModelInstance)))) goto code_?;
          if (targetCubeModel != (MVCubeModelBase *)0x0) {
            unaff_ESI = (MVCubeModelInstance__Class *)(targetCubeModel->fields)._.transform;
            if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__SharedCubeFunctions);
            }
            SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                      ((Transform *)unaff_ESI,1,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__MVCubeModelInstance);
              cRam_? = '\x01';
            }
            if (((this->fields).targetCubeModelId != -1) &&
               (pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
               pMVar4 != (MVWorldObjectClientManager *)0x0)) {
              targetCubeModel =
                   (MVCubeModelBase *)
                   MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (pMVar4,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
              unaff_ESI = TypeInfo__MVCubeModelInstance;
              if ((targetCubeModel != (MVCubeModelBase *)0x0) &&
                 (((targetCubeModel->klass->_1).naturalAligment <
                   (TypeInfo__MVCubeModelInstance->_1).naturalAligment ||
                  ((MVCubeModelInstance__Class *)
                   (targetCubeModel->klass->_1).typeHierarchy
                   [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] !=
                   TypeInfo__MVCubeModelInstance)))) goto code_?;
              if (targetCubeModel != (MVCubeModelBase *)0x0) {
                DrawPlane::DrawPlane_DrawPlaneToModel
                          ((targetCubeModel->fields)._.gameObject,(MethodInfo *)0x0);
                pIVar6 = (this->fields).modelBody;
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                if ((this->fields).targetCubeModelId == -1) {
code_?:
                  unaff_ESI = (MVCubeModelInstance__Class *)0x0;
                }
                else {
                  pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                  if (pMVar4 == (MVWorldObjectClientManager *)0x0) goto code_?;
                  unaff_ESI = (MVCubeModelInstance__Class *)
                              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                        (pMVar4,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
                  if (unaff_ESI == (MVCubeModelInstance__Class *)0x0) goto code_?;
                  pMVar5 = TypeInfo__MVCubeModelInstance;
                  if ((*(byte *)&(unaff_ESI->_0).image[4].assembly <
                       (TypeInfo__MVCubeModelInstance->_1).naturalAligment) ||
                     (*(MVCubeModelInstance__Class **)
                       (((unaff_ESI->_0).image[2].typeCount - 4) +
                       (uint)(TypeInfo__MVCubeModelInstance->_1).naturalAligment * 4) !=
                      TypeInfo__MVCubeModelInstance)) goto code_?;
                }
                if (pIVar6 != (IWorldObjectWithModelingConstraint *)0x0) {
                  pIVar9 = pIVar6->klass;
                  uVar10 = 0;
                  uVar11._0_1_ = (pIVar9->_1).rank;
                  uVar11._1_1_ = (pIVar9->_1).minimumAlignment;
                  if (uVar11 != 0) {
                    do {
                      if (pIVar9->interfaceOffsets[uVar10].interfaceType ==
                          (Il2CppClass *)TypeInfo__IWorldObjectWithModelingConstraint) {
                        ppMVar12 = &(&pIVar9->vtable)[pIVar9->interfaceOffsets[uVar10].offset].
                                    GetModelConstaint.method;
                        goto code_?;
                      }
                      uVar10 = uVar10 + 1;
                      this = (CEEditBodyUUI *)this_02;
                    } while (uVar10 < uVar11);
                  }
                  this_02 = (MVCubeModelInstance__Class *)this;
                  ppMVar12 = (MethodInfo **)
                             func_?(pIVar6,TypeInfo__IWorldObjectWithModelingConstraint,0,
                                             uVar11,0);
code_?:
                  constraint = (IModelingConstraint *)
                               (*(code *)*ppMVar12)(pIVar6,unaff_ESI,ppMVar12[1]);
                  pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                            (pGVar1,StringLiteral_constrainVisualizer,(MethodInfo *)0x0);
                  unaff_ESI = (MVCubeModelInstance__Class *)0x0;
                  if (pGVar1 != (GameObject *)0x0) {
                    pSVar13 = (StateTransitionTable *)
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_AddComponent_1
                                        (pGVar1,
                                         ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                                        );
                    *(StateTransitionTable **)&(this_02->_0).byval_arg.attrs = pSVar13;
                    func_?(&(this_02->_0).byval_arg.attrs,pSVar13);
                    unaff_ESI = *(MVCubeModelInstance__Class **)&(this_02->_0).byval_arg.attrs;
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__MVCubeModelInstance,unaff_ESI);
                      cRam_? = '\x01';
                    }
                    if (*(String **)&(this_02->_0).this_arg.attrs == (String *)0xffffffff) {
                      targetCubeModel = (MVCubeModelBase *)0x0;
                      pMVar5 = unaff_ESI;
                    }
                    else {
                      pMVar4 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                         ((MethodInfo *)0x0);
                      if (pMVar4 == (MVWorldObjectClientManager *)0x0) goto code_?;
                      pMVar5 = (MVCubeModelInstance__Class *)0x0;
                      targetCubeModel =
                           (MVCubeModelBase *)
                           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                     (pMVar4,(int32_t)*(String **)&(this_02->_0).this_arg.attrs,
                                      (MethodInfo *)0x0);
                      if ((targetCubeModel != (MVCubeModelBase *)0x0) &&
                         ((unaff_ESI = TypeInfo__MVCubeModelInstance,
                          (targetCubeModel->klass->_1).naturalAligment <
                          (TypeInfo__MVCubeModelInstance->_1).naturalAligment ||
                          ((MVCubeModelInstance__Class *)
                           (targetCubeModel->klass->_1).typeHierarchy
                           [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] !=
                           TypeInfo__MVCubeModelInstance)))) goto code_?;
                    }
                    unaff_ESI = (MVCubeModelInstance__Class *)0x0;
                    if (pMVar5 != (MVCubeModelInstance__Class *)0x0) {
                      ConstraintVisualizer::ConstraintVisualizer_Init
                                ((ConstraintVisualizer *)pMVar5,targetCubeModel,constraint,
                                 StringLiteral_UIItems,(MethodInfo *)0x0);
                      unaff_ESI = (MVCubeModelInstance__Class *)
                                  (esm->fields).cubeModelingStateMachine;
                      pMVar5 = this_02;
                      targetCubeModel_00 =
                           CEEditBodyUUI_get_TargetCubeModel
                                     ((CEEditBodyUUI *)this_02,(MethodInfo *)0x0);
                      if (unaff_ESI != (MVCubeModelInstance__Class *)0x0) {
                        CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                                  ((CubeModelingStateMachine *)unaff_ESI,
                                   (MVCubeModelBase *)targetCubeModel_00,constraint,
                                   (MethodInfo *)0x0);
                        pGVar14 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                            ((MethodInfo *)0x0);
                        if (pGVar14 != (GameEventManager *)0x0) {
                          this_00 = (pGVar14->fields).AvatarCommandsBuildMode;
                          editorEvent = (((CubeModelingStateMachine__Fields *)&(this_02->_0).name)->
                                        _).prevEvent;
                          pMVar15 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                              (esm,(MethodInfo *)0x0);
                          if (pMVar15 != (MVWorldObjectClient *)0x0) {
                            value = (pMVar15->fields)._.id;
                            this_03 = (SubscribableVariable_1_System_Int32Enum_ *)func_?();
                            unaff_ESI = pMVar5;
                            SubscribableVariable`1[System::Int32Enum]::
                            SubscribableVariable_1_System_Int32Enum___ctor
                                      (this_03,value,(MethodInfo *)0x0);
                            if (this_00 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
                              GameEventManager+AvatarCommandsBuildModeManager::
                              GameEventManager_AvatarCommandsBuildModeManager_EnterBuildStateEvent
                                        (this_00,(EditorEvent__Enum)editorEvent,(Object *)this_03,
                                         (MethodInfo *)0x0);
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
      goto code_?;
    }
  }
  else {
    pMVar5 = TypeInfo__MVCubeModelInstance;
    if (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <=
         *(byte *)&(unaff_ESI->_0).image[4].assembly) &&
       (*(MVCubeModelInstance__Class **)
         (((unaff_ESI->_0).image[2].typeCount - 4) +
         (uint)(TypeInfo__MVCubeModelInstance->_1).naturalAligment * 4) ==
        TypeInfo__MVCubeModelInstance)) {
      pcVar3 = (unaff_ESI->_0).name;
      goto code_?;
    }
code_?:
    func_?(unaff_ESI,pMVar5);
    targetCubeModel = extraout_EDX_00;
  }
code_?:
  func_?(targetCubeModel,unaff_ESI);
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditBodyUUI::CEEditBodyUUI_Execute
               (CEEditBodyUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,(ExceptionArgument__Enum)esm,(MethodInfo *)0x0);
  pMVar1 = CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
  if (pMVar1 == (MVCubeModelInstance *)0x0) {
    value = (Object *)func_?();
    if (esm != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_set_Event((FSMEntity *)esm,value,(MethodInfo *)0x0);
      return;
    }
  }
  else if ((esm != (EditorStateMachine *)0x0) &&
          (pCVar2 = (esm->fields).cubeModelingStateMachine,
          pCVar2 != (CubeModelingStateMachine *)0x0)) {
    (*(code *)(pCVar2->klass->vtable).Update.method)();
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditBodyUUI::CEEditBodyUUI_Exit
               (CEEditBodyUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  pEVar1 = esm;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,(ExceptionArgument__Enum)esm,(MethodInfo *)0x0);
  DrawPlane::DrawPlane_ReturnDrawPlaneToLandscape((MethodInfo *)0x0);
  bVar2 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
  if (bVar2 != 0) {
    DrawPlane::DrawPlane_ToggleDrawPlane((MethodInfo *)0x0);
  }
  this_00 = (this->fields).constraintVisualizer;
  if (this_00 != (ConstraintVisualizer *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this_00,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
    if (esm != (EditorStateMachine *)0x0) {
      bVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(esm,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pSVar3 = (esm->fields).selectionController;
        if (pSVar3 == (SelectionController *)0x0) goto code_?;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_01 = (Stack_1_UnityEngine_UIElements_TextureId_ *)(pSVar3->fields).parentGroups;
        if (this_01 == (Stack_1_UnityEngine_UIElements_TextureId_ *)0x0) goto code_?;
        id = mscorlib.dll::System::Collections::Generic::Stack`1[UnityEngine::UIElements::TextureId]
             ::Stack_1_UnityEngine_UIElements_TextureId__Peek
                       (this_01,MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
        if (this_04 == (MVWorldObjectClientManager *)0x0) goto code_?;
        pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_04,id.m_Index,(MethodInfo *)0x0);
        if (pMVar4 == (MVWorldObject *)0x0) goto code_?;
        t = (Transform *)pMVar4[1].fields.ownerActorNr;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        esm._0_1_ = 1;
      }
      else {
        pMVar5 = CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
        if (pMVar5 == (MVCubeModelInstance *)0x0) goto code_?;
        t = (pMVar5->fields)._._.transform;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        esm._0_1_ = 0;
      }
      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,(bool)esm,(MethodInfo *)0x0);
      pSVar3 = (pEVar1->fields).selectionController;
      if (pSVar3 != (SelectionController *)0x0) {
        SelectionController::SelectionController_DeSelectAll(pSVar3,(MethodInfo *)0x0);
        pCVar6 = (pEVar1->fields).cubeModelingStateMachine;
        if (pCVar6 != (CubeModelingStateMachine *)0x0) {
          CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors(pCVar6,(MethodInfo *)0x0)
          ;
          pCVar6 = (pEVar1->fields).cubeModelingStateMachine;
          if ((pCVar6 != (CubeModelingStateMachine *)0x0) &&
             (this_02 = (pCVar6->fields)._TargetCubeModel_k__BackingField,
             this_02 != (MVCubeModelBase *)0x0)) {
            MVCubeModelBase::MVCubeModelBase_set_BeingEdited(this_02,0,(MethodInfo *)0x0);
            (pCVar6->fields)._TargetCubeModel_k__BackingField = (MVCubeModelBase *)0x0;
            func_?();
            pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                               ((MethodInfo *)0x0);
            if ((pGVar7 != (GameEventManager *)0x0) &&
               (this_03 = (pGVar7->fields).AvatarCommandsBuildMode,
               this_03 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
              GameEventManager+AvatarCommandsBuildModeManager::
              GameEventManager_AvatarCommandsBuildModeManager_ExitBuildStateEvent
                        (this_03,(this->fields)._.stateType,(Object *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* MVCubeModelInstance get_TargetCubeModel() */

MVCubeModelInstance *
Assembly-CSharp.dll::CEEditBodyUUI::CEEditBodyUUI_get_TargetCubeModel
          (CEEditBodyUUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCubeModelInstance);
    cRam_? = '\x01';
  }
  if ((this->fields).targetCubeModelId == -1) {
    return (MVCubeModelInstance *)0x0;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = (MVCubeModelInstance *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    if (pMVar1 == (MVCubeModelInstance *)0x0) {
      return (MVCubeModelInstance *)0x0;
    }
    if (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <= (pMVar1->klass->_1).naturalAligment)
       && ((MVCubeModelInstance__Class *)
           (pMVar1->klass->_1).typeHierarchy
           [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] ==
           TypeInfo__MVCubeModelInstance)) {
      return pMVar1;
    }
    func_?(pMVar1);
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pMVar1 = (MVCubeModelInstance *)(*pcVar2)();
  return pMVar1;
}

