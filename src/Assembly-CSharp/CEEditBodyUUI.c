
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditBodyUUI::CEEditBodyUUI_Enter
               (CEEditBodyUUI *this,EditorStateMachine *esm,MethodInfo *method)

{
  pCVar1 = this;
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
  pMVar2 = (MVCubeModelInstance__Class *)0x0;
  if (esm == (EditorStateMachine *)0x0) goto code_?;
  root = (esm->fields).gameObject;
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
            (root,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditUIState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>_
            );
  pWVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                      ((MethodInfo *)0x0);
  (this->fields)._.tintedWo = pWVar3;
  func_?(&(this->fields)._.tintedWo,pWVar3);
  pMVar2 = (MVCubeModelInstance__Class *)
            EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
  if (pMVar2 == (MVCubeModelInstance__Class *)0x0) {
    pcVar4 = (char *)0xffffffff;
code_?:
    (this->fields).targetCubeModelId = (int32_t)pcVar4;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar5 == (MVGameControllerBase *)0x0) ||
       (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) {
code_?:
      func_?();
      pMVar7 = extraout_EDX;
      goto code_?;
    }
    pMVar8 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar6,(MethodInfo *)0x0);
    pMVar9 = pMVar8;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVCubeModelInstance);
      cRam_? = '\x01';
    }
    if ((this->fields).targetCubeModelId == -1) goto code_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar5 == (MVGameControllerBase *)0x0) ||
        (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
       (this_00 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar6,(MethodInfo *)0x0), this_00 == (MVWorldObjectClientManager *)0x0
       )) goto code_?;
    pMVar2 = (MVCubeModelInstance__Class *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_00,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    if ((pMVar2 != (MVCubeModelInstance__Class *)0x0) &&
       ((pIVar10 = (pMVar2->_0).image, pMVar7 = TypeInfo__MVCubeModelInstance,
        *(byte *)&pIVar10[4].assembly < (TypeInfo__MVCubeModelInstance->_1).naturalAligment ||
        (pMVar8 = pMVar9,
        *(MVCubeModelInstance__Class **)
         ((pIVar10[2].typeCount - 4) + (uint)(TypeInfo__MVCubeModelInstance->_1).naturalAligment * 4)
        != TypeInfo__MVCubeModelInstance)))) goto code_?;
    if ((pMVar2 == (MVCubeModelInstance__Class *)0x0) ||
       (pMVar8 == (MVWorldObjectClientManager *)0x0)) goto code_?;
    pMVar2 = (MVCubeModelInstance__Class *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar8,(int32_t)(pMVar2->_0).namespaze,(MethodInfo *)0x0);
    if (pMVar2 == (MVCubeModelInstance__Class *)0x0) {
      (this->fields).modelBody = (IWorldObjectWithModelingConstraint *)0x0;
      this_01 = (EditorStateMachine *)0x0;
    }
    else {
      pIVar11 = (IWorldObjectWithModelingConstraint *)func_?();
      if (pIVar11 == (IWorldObjectWithModelingConstraint *)0x0) goto code_?;
      (this->fields).modelBody = pIVar11;
      this_01 = (EditorStateMachine *)func_?();
      if (this_01 == (EditorStateMachine *)0x0) goto code_?;
    }
    func_?();
    bVar12 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(this_01,(MethodInfo *)0x0)
    ;
    if (bVar12 == 0) {
      pMVar13 = EditorStateMachine::EditorStateMachine_get_ParentGroup(this_01,(MethodInfo *)0x0);
      if (pMVar13 == (MVGroup *)0x0) goto code_?;
      pMVar2 = (MVCubeModelInstance__Class *)(pMVar13->fields)._.transform;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                ((Transform *)pMVar2,0,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVCubeModelInstance);
      cRam_? = '\x01';
    }
    if ((this->fields).targetCubeModelId == -1) goto code_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar5 == (MVGameControllerBase *)0x0) ||
        (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
       (pMVar8 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar6,(MethodInfo *)0x0), pMVar8 == (MVWorldObjectClientManager *)0x0
       )) goto code_?;
    pMVar14 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar8,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    pMVar2 = TypeInfo__MVCubeModelInstance;
    if ((pMVar14 == (MVWorldObject *)0x0) ||
       (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <= (pMVar14->klass->_1).naturalAligment
        && ((MVCubeModelInstance__Class *)
            (pMVar14->klass->_1).typeHierarchy
            [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] ==
            TypeInfo__MVCubeModelInstance)))) {
      if (pMVar14 != (MVWorldObject *)0x0) {
        pMVar2 = (MVCubeModelInstance__Class *)pMVar14[1].fields.ownerActorNr;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                  ((Transform *)pMVar2,1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVCubeModelInstance);
          cRam_? = '\x01';
        }
        if ((this->fields).targetCubeModelId != -1) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar5 != (MVGameControllerBase *)0x0) &&
              (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
             (pMVar8 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                  (pMVar6,(MethodInfo *)0x0),
             pMVar8 != (MVWorldObjectClientManager *)0x0)) {
            pMVar14 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (pMVar8,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
            pMVar2 = TypeInfo__MVCubeModelInstance;
            if ((pMVar14 != (MVWorldObject *)0x0) &&
               (((pMVar14->klass->_1).naturalAligment <
                 (TypeInfo__MVCubeModelInstance->_1).naturalAligment ||
                ((MVCubeModelInstance__Class *)
                 (pMVar14->klass->_1).typeHierarchy
                 [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] !=
                 TypeInfo__MVCubeModelInstance)))) goto code_?;
            if (pMVar14 != (MVWorldObject *)0x0) {
              value = pMVar14[1].fields.inputLinkRefs;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__DrawPlane);
                cRam_? = '\x01';
              }
              pMVar2 = (MVCubeModelInstance__Class *)
                        TypeInfo__DrawPlane->static_fields->drawPlaneController;
              if ((pMVar2 != (MVCubeModelInstance__Class *)0x0) &&
                 (pWVar15 = *(WorldEditorDrawPlane **)&(pMVar2->_0).byval_arg.attrs,
                 pWVar15 != (WorldEditorDrawPlane *)0x0)) {
                WorldEditorDrawPlane::WorldEditorDrawPlane_CachePos(pWVar15,(MethodInfo *)0x0);
                pWVar15 = *(WorldEditorDrawPlane **)&(pMVar2->_0).byval_arg.attrs;
                if (pWVar15 != (WorldEditorDrawPlane *)0x0) {
                  WorldEditorDrawPlane::WorldEditorDrawPlane_set_TargetGameObject
                            (pWVar15,(GameObject *)value,(MethodInfo *)0x0);
                  pWVar15 = *(WorldEditorDrawPlane **)&(pMVar2->_0).byval_arg.attrs;
                  if (pWVar15 != (WorldEditorDrawPlane *)0x0) {
                    WorldEditorDrawPlane::WorldEditorDrawPlane_SetToTargetGameObjectZero
                              (pWVar15,(MethodInfo *)0x0);
                    pIVar11 = (this->fields).modelBody;
                    this = (CEEditBodyUUI *)&(this->fields).modelBody;
                    if (cRam_? == '\0') {
                      this = (CEEditBodyUUI *)&TypeInfo__MVCubeModelInstance;
                      func_?();
                      cRam_? = '\x01';
                    }
                    if ((pCVar1->fields).targetCubeModelId == -1) {
code_?:
                      pMVar16 = (MVCubeModelInstance__Class *)0x0;
                    }
                    else {
                      if (cRam_? == '\0') {
                        func_?(&TypeInfo__MVGameControllerBase);
                        cRam_? = '\x01';
                      }
                      pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
                      if (((pMVar5 == (MVGameControllerBase *)0x0) ||
                          (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
                         (pMVar8 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                              (pMVar6,(MethodInfo *)0x0),
                         pMVar8 == (MVWorldObjectClientManager *)0x0)) goto code_?;
                      pMVar16 = (MVCubeModelInstance__Class *)
                                MVWorldObjectClientManager::
                                MVWorldObjectClientManager_GetWorldObject
                                          (pMVar8,(pCVar1->fields).targetCubeModelId,
                                           (MethodInfo *)0x0);
                      pMVar2 = pMVar16;
                      if (pMVar16 == (MVCubeModelInstance__Class *)0x0) goto code_?;
                      pIVar10 = (pMVar16->_0).image;
                      pMVar7 = TypeInfo__MVCubeModelInstance;
                      if ((*(byte *)&pIVar10[4].assembly <
                           (TypeInfo__MVCubeModelInstance->_1).naturalAligment) ||
                         (*(MVCubeModelInstance__Class **)
                           ((pIVar10[2].typeCount - 4) +
                           (uint)(TypeInfo__MVCubeModelInstance->_1).naturalAligment * 4) !=
                          TypeInfo__MVCubeModelInstance)) goto code_?;
                    }
                    if (pIVar11 != (IWorldObjectWithModelingConstraint *)0x0) {
                      pIVar17 = pIVar11->klass;
                      uVar18 = 0;
                      uVar19._0_1_ = (pIVar17->_1).rank;
                      uVar19._1_1_ = (pIVar17->_1).minimumAlignment;
                      if (uVar19 != 0) {
                        do {
                          if (pIVar17->interfaceOffsets[uVar18].interfaceType ==
                              (Il2CppClass *)TypeInfo__IWorldObjectWithModelingConstraint) {
                            ppMVar20 = &(&pIVar17->vtable)[pIVar17->interfaceOffsets[uVar18].offset].
                                        GetModelConstaint.method;
                            goto code_?;
                          }
                          uVar18 = uVar18 + 1;
                          pCVar1 = this;
                        } while (uVar18 < uVar19);
                      }
                      this = pCVar1;
                      ppMVar20 = (MethodInfo **)
                                 func_?(pIVar11,
                                                 TypeInfo__IWorldObjectWithModelingConstraint,0,
                                                 uVar19,0);
code_?:
                      constraint = (IModelingConstraint *)
                                   (*(code *)*ppMVar20)(pIVar11,pMVar16,ppMVar20[1]);
                      pMVar2 = (MVCubeModelInstance__Class *)
                                func_?(TypeInfo__UnityEngine__GameObject);
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                                ((GameObject *)pMVar2,StringLiteral_constrainVisualizer,
                                 (MethodInfo *)0x0);
                      if (pMVar2 != (MVCubeModelInstance__Class *)0x0) {
                        pCVar21 = (ConstraintVisualizer *)
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_AddComponent_1
                                            ((GameObject *)pMVar2,
                                             ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                                            );
                        (this->fields).constraintVisualizer = pCVar21;
                        func_?(&(this->fields).constraintVisualizer,pCVar21);
                        pCVar21 = (this->fields).constraintVisualizer;
                        pCVar22 = pCVar21;
                        if (cRam_? == '\0') {
                          func_?(&TypeInfo__MVCubeModelInstance,pCVar21);
                          cRam_? = '\x01';
                        }
                        if ((this->fields).targetCubeModelId == -1) {
code_?:
                          pMVar16 = (MVCubeModelInstance__Class *)0x0;
                          pCVar22 = pCVar21;
                        }
                        else {
                          if (cRam_? == '\0') {
                            func_?(&TypeInfo__MVGameControllerBase,pCVar22);
                            cRam_? = '\x01';
                          }
                          pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
                          if (((pMVar5 == (MVGameControllerBase *)0x0) ||
                              (pMVar6 = (pMVar5->fields).game, pMVar6 == (MVNetworkGame *)0x0)) ||
                             (pMVar8 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                                  (pMVar6,(MethodInfo *)0x0),
                             pMVar8 == (MVWorldObjectClientManager *)0x0)) goto code_?;
                          pCVar22 = (ConstraintVisualizer *)(this->fields).targetCubeModelId;
                          pMVar16 = (MVCubeModelInstance__Class *)
                                    MVWorldObjectClientManager::
                                    MVWorldObjectClientManager_GetWorldObject
                                              (pMVar8,(int32_t)pCVar22,(MethodInfo *)0x0);
                          pMVar2 = pMVar16;
                          if (pMVar16 == (MVCubeModelInstance__Class *)0x0) goto code_?;
                          pIVar10 = (pMVar16->_0).image;
                          pMVar7 = TypeInfo__MVCubeModelInstance;
                          if ((*(byte *)&pIVar10[4].assembly <
                               (TypeInfo__MVCubeModelInstance->_1).naturalAligment) ||
                             (*(MVCubeModelInstance__Class **)
                               ((pIVar10[2].typeCount - 4) +
                               (uint)(TypeInfo__MVCubeModelInstance->_1).naturalAligment * 4) !=
                              TypeInfo__MVCubeModelInstance)) goto code_?;
                        }
                        if (pCVar22 != (ConstraintVisualizer *)0x0) {
                          ConstraintVisualizer::ConstraintVisualizer_Init
                                    (pCVar22,(MVCubeModelBase *)pMVar16,constraint,
                                     StringLiteral_UIItems,(MethodInfo *)0x0);
                          pMVar2 = (MVCubeModelInstance__Class *)
                                    (this_01->fields).cubeModelingStateMachine;
                          targetCubeModel =
                               CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
                          if (pMVar2 != (MVCubeModelInstance__Class *)0x0) {
                            CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                                      ((CubeModelingStateMachine *)pMVar2,
                                       (MVCubeModelBase *)targetCubeModel,constraint,
                                       (MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
                            if (((pMVar5 != (MVGameControllerBase *)0x0) &&
                                (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
                               (pGVar23 = (pMVar6->fields).GameEventManager,
                               pGVar23 != (GameEventManager *)0x0)) {
                              pGVar24 = (pGVar23->fields).AvatarCommandsBuildMode;
                              pMVar25 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                                  (this_01,(MethodInfo *)0x0);
                              if (pMVar25 != (MVWorldObjectClient *)0x0) {
                                pMVar2 = (MVCubeModelInstance__Class *)(pMVar25->fields)._.id;
                                puVar26 = &UNK_?;
                                this_02 = (SubscribableVariable_1_System_Int32Enum_ *)
                                          func_?(
                                                  TypeInfo__MVBuildModeAvatarLocal_EditMode__CEEditBodyUUIData
                                                  );
                                SubscribableVariable`1[System::Int32Enum]::
                                SubscribableVariable_1_System_Int32Enum___ctor
                                          (this_02,(Int32Enum__Enum)pMVar2,(MethodInfo *)0x0);
                                if (pGVar24 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0
                                   ) {
                                  if ((pGVar24->fields).OnEnterBuildStateEvent !=
                                      (Action_2_EditorEvent_Object_ *)0x0) {
                                    pAVar27 = (pGVar24->fields).OnEnterBuildStateEvent;
                                    (*(pAVar27->fields)._._.invoke_impl)
                                              ((pAVar27->fields)._._.method_code,puVar26,this_02,
                                               (pAVar27->fields)._._.method);
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
      goto code_?;
    }
  }
  else {
    pIVar10 = (pMVar2->_0).image;
    pMVar7 = TypeInfo__MVCubeModelInstance;
    if (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <= *(byte *)&pIVar10[4].assembly) &&
       (*(MVCubeModelInstance__Class **)
         ((pIVar10[2].typeCount - 4) + (uint)(TypeInfo__MVCubeModelInstance->_1).naturalAligment * 4)
        == TypeInfo__MVCubeModelInstance)) {
      pcVar4 = (pMVar2->_0).name;
      goto code_?;
    }
code_?:
    func_?(pMVar2,pMVar7);
    pMVar14 = extraout_EDX_00;
  }
code_?:
  func_?(pMVar14,pMVar2);
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
  this_01 = esm;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,(ExceptionArgument__Enum)esm,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DrawPlane);
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0)) {
    WorldEditorDrawPlane::WorldEditorDrawPlane_ReturnDrawPlaneToLandscape(pWVar2,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
    if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
       (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0)) {
      if ((pWVar2->fields).isActive != 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__DrawPlane);
          cRam_? = '\x01';
        }
        pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
        if (pDVar1 == (DrawPlaneControllerUUI *)0x0) goto code_?;
        DrawPlaneControllerUUI::DrawPlaneControllerUUI_ToggleDrawPlane(pDVar1,(MethodInfo *)0x0);
      }
      this_00 = (this->fields).constraintVisualizer;
      if (this_00 != (ConstraintVisualizer *)0x0) {
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)obj,(MethodInfo *)0x0);
        if (esm != (EditorStateMachine *)0x0) {
          bVar3 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                             (esm,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            if (cRam_? == '\0') {
              func_?(&TypeInfo__MVGameControllerBase);
              cRam_? = '\x01';
            }
            pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar4 == (MVGameControllerBase *)0x0) ||
               (pMVar5 = (pMVar4->fields).game, pMVar5 == (MVNetworkGame *)0x0))
            goto code_?;
            this_02 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                (pMVar5,(MethodInfo *)0x0);
            id = EditorStateMachine::EditorStateMachine_get_ParentGroupID(esm,(MethodInfo *)0x0);
            if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
            pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (this_02,id,(MethodInfo *)0x0);
            if (pMVar6 == (MVWorldObject *)0x0) goto code_?;
            t = (Transform *)pMVar6[1].fields.ownerActorNr;
            if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            esm._0_1_ = 1;
          }
          else {
            pMVar7 = CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
            if (pMVar7 == (MVCubeModelInstance *)0x0) goto code_?;
            t = (pMVar7->fields)._._.transform;
            if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            esm._0_1_ = 0;
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                    (t,(bool)esm,(MethodInfo *)0x0);
          EditorStateMachine::EditorStateMachine_DeSelectAll(this_01,(MethodInfo *)0x0);
          pCVar8 = (this_01->fields).cubeModelingStateMachine;
          if (pCVar8 != (CubeModelingStateMachine *)0x0) {
            CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors
                      (pCVar8,(MethodInfo *)0x0);
            pCVar8 = (this_01->fields).cubeModelingStateMachine;
            if (pCVar8 != (CubeModelingStateMachine *)0x0) {
              CubeModelingStateMachine::CubeModelingStateMachine_EndEdit(pCVar8,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((((pMVar4 != (MVGameControllerBase *)0x0) &&
                   (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
                  (pGVar9 = (pMVar5->fields).GameEventManager, pGVar9 != (GameEventManager *)0x0))
                 && (pGVar10 = (pGVar9->fields).AvatarCommandsBuildMode,
                    pGVar10 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
                if ((pGVar10->fields).OnExitBuildStateEvent != (Action_2_EditorEvent_Object_ *)0x0) {
                  pAVar11 = (pGVar10->fields).OnExitBuildStateEvent;
                  (*(pAVar11->fields)._._.invoke_impl)
                            ((pAVar11->fields)._._.method_code,(this->fields)._.stateType,0,
                             (pAVar11->fields)._._.method);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (this_00 = (pMVar1->fields).game, this_00 != (MVNetworkGame *)0x0)) &&
     (this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(this_00,(MethodInfo *)0x0)
     , this_01 != (MVWorldObjectClientManager *)0x0)) {
    pMVar2 = (MVCubeModelInstance *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_01,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    if (pMVar2 == (MVCubeModelInstance *)0x0) {
      return (MVCubeModelInstance *)0x0;
    }
    if (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <= (pMVar2->klass->_1).naturalAligment)
       && ((MVCubeModelInstance__Class *)
           (pMVar2->klass->_1).typeHierarchy
           [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] ==
           TypeInfo__MVCubeModelInstance)) {
      return pMVar2;
    }
    func_?();
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pMVar2 = (MVCubeModelInstance *)(*pcVar3)();
  return pMVar2;
}

