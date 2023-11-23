
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
  pGVar3 = (esm->fields).gameObject;
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
            (pGVar3,(BaseEventData *)0x0,
             (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IAvatarEditUIState>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>_
            );
  pWVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                      ((MethodInfo *)0x0);
  (this->fields)._.tintedWo = pWVar4;
  func_?(&(this->fields)._.tintedWo,pWVar4);
  pMVar2 = (MVCubeModelInstance__Class *)
            EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
  if (pMVar2 == (MVCubeModelInstance__Class *)0x0) {
    pcVar5 = (char *)0xffffffff;
code_?:
    (this->fields).targetCubeModelId = (int32_t)pcVar5;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar6 == (MVGameControllerBase *)0x0) ||
       (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) {
code_?:
      func_?();
      pMVar8 = extraout_EDX;
      goto code_?;
    }
    pMVar9 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(pMVar7,(MethodInfo *)0x0);
    pMVar10 = pMVar9;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVCubeModelInstance);
      cRam_? = '\x01';
    }
    if ((this->fields).targetCubeModelId == -1) goto code_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar6 == (MVGameControllerBase *)0x0) ||
        (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
       (this_00 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                            (pMVar7,(MethodInfo *)0x0), this_00 == (MVWorldObjectClientManager *)0x0
       )) goto code_?;
    targetCubeModel =
         (MVCubeModelBase *)
         MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                   (this_00,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    pMVar2 = TypeInfo__MVCubeModelInstance;
    if ((targetCubeModel == (MVCubeModelBase *)0x0) ||
       (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <=
         (targetCubeModel->klass->_1).naturalAligment &&
        (pMVar9 = pMVar10,
        (MVCubeModelInstance__Class *)
        (targetCubeModel->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] == TypeInfo__MVCubeModelInstance))
       )) {
      if ((targetCubeModel != (MVCubeModelBase *)0x0) &&
         (pMVar9 != (MVWorldObjectClientManager *)0x0)) {
        pMVar2 = (MVCubeModelInstance__Class *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar9,(targetCubeModel->fields)._._.groupId,(MethodInfo *)0x0);
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
        bVar12 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                           (this_01,(MethodInfo *)0x0);
        if (bVar12 == 0) {
          pMVar13 = EditorStateMachine::EditorStateMachine_get_ParentGroup
                              (this_01,(MethodInfo *)0x0);
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
        if ((this->fields).targetCubeModelId != -1) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__MVGameControllerBase);
            cRam_? = '\x01';
          }
          pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar6 != (MVGameControllerBase *)0x0) &&
              (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
             (pMVar9 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                  (pMVar7,(MethodInfo *)0x0),
             pMVar9 != (MVWorldObjectClientManager *)0x0)) {
            targetCubeModel =
                 (MVCubeModelBase *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar9,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
            pMVar2 = TypeInfo__MVCubeModelInstance;
            if ((targetCubeModel != (MVCubeModelBase *)0x0) &&
               (((targetCubeModel->klass->_1).naturalAligment <
                 (TypeInfo__MVCubeModelInstance->_1).naturalAligment ||
                ((MVCubeModelInstance__Class *)
                 (targetCubeModel->klass->_1).typeHierarchy
                 [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] !=
                 TypeInfo__MVCubeModelInstance)))) goto code_?;
            if (targetCubeModel != (MVCubeModelBase *)0x0) {
              pMVar2 = (MVCubeModelInstance__Class *)(targetCubeModel->fields)._.transform;
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
                pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (((pMVar6 != (MVGameControllerBase *)0x0) &&
                    (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
                   (pMVar9 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                        (pMVar7,(MethodInfo *)0x0),
                   pMVar9 != (MVWorldObjectClientManager *)0x0)) {
                  targetCubeModel =
                       (MVCubeModelBase *)
                       MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMVar9,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
                  pMVar2 = TypeInfo__MVCubeModelInstance;
                  if ((targetCubeModel != (MVCubeModelBase *)0x0) &&
                     (((targetCubeModel->klass->_1).naturalAligment <
                       (TypeInfo__MVCubeModelInstance->_1).naturalAligment ||
                      ((MVCubeModelInstance__Class *)
                       (targetCubeModel->klass->_1).typeHierarchy
                       [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] !=
                       TypeInfo__MVCubeModelInstance)))) goto code_?;
                  if (targetCubeModel != (MVCubeModelBase *)0x0) {
                    pGVar3 = (targetCubeModel->fields)._.gameObject;
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__DrawPlane);
                      cRam_? = '\x01';
                    }
                    pMVar2 = (MVCubeModelInstance__Class *)
                              TypeInfo__DrawPlane->static_fields->drawPlaneController;
                    if ((pMVar2 != (MVCubeModelInstance__Class *)0x0) &&
                       (pWVar14 = *(WorldEditorDrawPlane **)&(pMVar2->_0).byval_arg.attrs,
                       pWVar14 != (WorldEditorDrawPlane *)0x0)) {
                      WorldEditorDrawPlane::WorldEditorDrawPlane_CachePos(pWVar14,(MethodInfo *)0x0);
                      pWVar14 = *(WorldEditorDrawPlane **)&(pMVar2->_0).byval_arg.attrs;
                      if (pWVar14 != (WorldEditorDrawPlane *)0x0) {
                        WorldEditorDrawPlane::WorldEditorDrawPlane_set_TargetGameObject
                                  (pWVar14,pGVar3,(MethodInfo *)0x0);
                        pWVar14 = *(WorldEditorDrawPlane **)&(pMVar2->_0).byval_arg.attrs;
                        if (pWVar14 != (WorldEditorDrawPlane *)0x0) {
                          WorldEditorDrawPlane::WorldEditorDrawPlane_SetToTargetGameObjectZero
                                    (pWVar14,(MethodInfo *)0x0);
                          pIVar11 = (this->fields).modelBody;
                          this = (CEEditBodyUUI *)&(this->fields).modelBody;
                          pIVar15 = pIVar11;
                          if (cRam_? == '\0') {
                            this = (CEEditBodyUUI *)&TypeInfo__MVCubeModelInstance;
                            func_?();
                            cRam_? = '\x01';
                          }
                          if ((pCVar1->fields).targetCubeModelId == -1) {
code_?:
                            pMVar2 = (MVCubeModelInstance__Class *)0x0;
                          }
                          else {
                            if (cRam_? == '\0') {
                              func_?(&TypeInfo__MVGameControllerBase);
                              cRam_? = '\x01';
                            }
                            pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
                            if (((pMVar6 == (MVGameControllerBase *)0x0) ||
                                (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
                               (pMVar9 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager
                                                    (pMVar7,(MethodInfo *)0x0),
                               pMVar9 == (MVWorldObjectClientManager *)0x0)) goto code_?;
                            pMVar2 = (MVCubeModelInstance__Class *)
                                      MVWorldObjectClientManager::
                                      MVWorldObjectClientManager_GetWorldObject
                                                (pMVar9,(pCVar1->fields).targetCubeModelId,
                                                 (MethodInfo *)0x0);
                            if (pMVar2 == (MVCubeModelInstance__Class *)0x0) goto code_?;
                            pMVar8 = TypeInfo__MVCubeModelInstance;
                            if ((*(byte *)&(pMVar2->_0).image[4].assembly <
                                 (TypeInfo__MVCubeModelInstance->_1).naturalAligment) ||
                               (*(MVCubeModelInstance__Class **)
                                 (((pMVar2->_0).image[2].typeCount - 4) +
                                 (uint)(TypeInfo__MVCubeModelInstance->_1).naturalAligment * 4) !=
                                TypeInfo__MVCubeModelInstance)) goto code_?;
                          }
                          if (pIVar11 != (IWorldObjectWithModelingConstraint *)0x0) {
                            uVar16 = 0;
                            pIVar17 = pIVar15->klass;
                            uVar18._0_1_ = (pIVar17->_1).rank;
                            uVar18._1_1_ = (pIVar17->_1).minimumAlignment;
                            if (uVar18 != 0) {
                              do {
                                if (pIVar17->interfaceOffsets[uVar16].interfaceType ==
                                    (Il2CppClass *)TypeInfo__IWorldObjectWithModelingConstraint) {
                                  ppMVar19 = &(&pIVar17->vtable)
                                              [pIVar17->interfaceOffsets[uVar16].offset].
                                              GetModelConstaint.method;
                                  goto code_?;
                                }
                                uVar16 = uVar16 + 1;
                                pCVar1 = this;
                              } while (uVar16 < uVar18);
                            }
                            this = pCVar1;
                            ppMVar19 = (MethodInfo **)
                                       func_?(pIVar15,
                                                  TypeInfo__IWorldObjectWithModelingConstraint,0,
                                                  uVar18,0);
code_?:
                            constraint = (IModelingConstraint *)
                                         (*(code *)*ppMVar19)(pIVar15,pMVar2,ppMVar19[1]);
                            pMVar2 = (MVCubeModelInstance__Class *)
                                      func_?(TypeInfo__UnityEngine__GameObject);
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                                      ((GameObject *)pMVar2,StringLiteral_constrainVisualizer,
                                       (MethodInfo *)0x0);
                            if (pMVar2 != (MVCubeModelInstance__Class *)0x0) {
                              pCVar20 = (ConstraintVisualizer *)
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_AddComponent_1
                                                  ((GameObject *)pMVar2,
                                                                                                      
                                                  ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                                                  );
                              (this->fields).constraintVisualizer = pCVar20;
                              func_?(&(this->fields).constraintVisualizer,pCVar20);
                              pCVar20 = (this->fields).constraintVisualizer;
                              pCVar21 = pCVar20;
                              if (cRam_? == '\0') {
                                func_?(&TypeInfo__MVCubeModelInstance,pCVar20);
                                cRam_? = '\x01';
                              }
                              if ((this->fields).targetCubeModelId == -1) {
code_?:
                                targetCubeModel = (MVCubeModelBase *)0x0;
                                pCVar21 = pCVar20;
                              }
                              else {
                                if (cRam_? == '\0') {
                                  func_?(&TypeInfo__MVGameControllerBase,pCVar21);
                                  cRam_? = '\x01';
                                }
                                pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
                                if (((pMVar6 == (MVGameControllerBase *)0x0) ||
                                    (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)
                                    ) || (pMVar9 = MVNetworkGame::
                                                    MVNetworkGame_get_WorldObjectClientManager
                                                              (pMVar7,(MethodInfo *)0x0),
                                         pMVar9 == (MVWorldObjectClientManager *)0x0))
                                goto code_?;
                                pCVar21 = (ConstraintVisualizer *)(this->fields).targetCubeModelId;
                                targetCubeModel =
                                     (MVCubeModelBase *)
                                     MVWorldObjectClientManager::
                                     MVWorldObjectClientManager_GetWorldObject
                                               (pMVar9,(int32_t)pCVar21,(MethodInfo *)0x0);
                                pMVar2 = TypeInfo__MVCubeModelInstance;
                                if (targetCubeModel == (MVCubeModelBase *)0x0)
                                goto code_?;
                                if (((targetCubeModel->klass->_1).naturalAligment <
                                     (TypeInfo__MVCubeModelInstance->_1).naturalAligment) ||
                                   ((MVCubeModelInstance__Class *)
                                    (targetCubeModel->klass->_1).typeHierarchy
                                    [(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] !=
                                    TypeInfo__MVCubeModelInstance)) goto code_?;
                              }
                              if (pCVar21 != (ConstraintVisualizer *)0x0) {
                                ConstraintVisualizer::ConstraintVisualizer_Init
                                          (pCVar21,targetCubeModel,constraint,StringLiteral_UIItems,
                                           (MethodInfo *)0x0);
                                pMVar2 = (MVCubeModelInstance__Class *)
                                          (this_01->fields).cubeModelingStateMachine;
                                targetCubeModel_00 =
                                     CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
                                if (pMVar2 != (MVCubeModelInstance__Class *)0x0) {
                                  CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                                            ((CubeModelingStateMachine *)pMVar2,
                                             (MVCubeModelBase *)targetCubeModel_00,constraint,
                                             (MethodInfo *)0x0);
                                  if (cRam_? == '\0') {
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
                                  if (((pMVar6 != (MVGameControllerBase *)0x0) &&
                                      (pMVar7 = (pMVar6->fields).game,
                                      pMVar7 != (MVNetworkGame *)0x0)) &&
                                     (pGVar22 = (pMVar7->fields).GameEventManager,
                                     pGVar22 != (GameEventManager *)0x0)) {
                                    pGVar23 = (pGVar22->fields).AvatarCommandsBuildMode;
                                    pMVar24 = EditorStateMachine::
                                              EditorStateMachine_get_SingleSelectedWO
                                                        (this_01,(MethodInfo *)0x0);
                                    if (pMVar24 != (MVWorldObjectClient *)0x0) {
                                      pMVar2 = (MVCubeModelInstance__Class *)(pMVar24->fields)._.id
                                      ;
                                      puVar25 = &UNK_?;
                                      this_02 = (SubscribableVariable_1_System_Int32Enum_ *)
                                                func_?(
                                                  TypeInfo__MVBuildModeAvatarLocal_EditMode__CEEditBodyUUIData
                                                  );
                                      SubscribableVariable`1[System::Int32Enum]::
                                      SubscribableVariable_1_System_Int32Enum___ctor
                                                (this_02,(Int32Enum__Enum)pMVar2,(MethodInfo *)0x0)
                                      ;
                                      if (pGVar23 != (GameEventManager_AvatarCommandsBuildModeManager
                                                     *)0x0) {
                                        if ((pGVar23->fields).OnEnterBuildStateEvent !=
                                            (Action_2_EditorEvent_Object_ *)0x0) {
                                          pAVar26 = (pGVar23->fields).OnEnterBuildStateEvent;
                                          (*(pAVar26->fields)._._.invoke_impl)
                                                    ((pAVar26->fields)._._.method_code,puVar25,
                                                     this_02,(pAVar26->fields)._._.method);
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
          }
        }
      }
      goto code_?;
    }
  }
  else {
    pIVar27 = (pMVar2->_0).image;
    pMVar8 = TypeInfo__MVCubeModelInstance;
    if (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <= *(byte *)&pIVar27[4].assembly) &&
       (*(MVCubeModelInstance__Class **)
         ((pIVar27[2].typeCount - 4) + (uint)(TypeInfo__MVCubeModelInstance->_1).naturalAligment * 4)
        == TypeInfo__MVCubeModelInstance)) {
      pcVar5 = (pMVar2->_0).name;
      goto code_?;
    }
code_?:
    func_?(pMVar2,pMVar8);
    targetCubeModel = extraout_EDX_00;
  }
code_?:
  func_?(targetCubeModel,pMVar2);
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
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (this_00 = (pMVar1->fields).game, this_00 != (MVNetworkGame *)0x0)) {
    this_01 = MVNetworkGame::MVNetworkGame_get_WorldObjectClientManager(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = (MVCubeModelInstance *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (this_01,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
      if (pMVar2 == (MVCubeModelInstance *)0x0) {
        return (MVCubeModelInstance *)0x0;
      }
      if (((TypeInfo__MVCubeModelInstance->_1).naturalAligment <=
           (pMVar2->klass->_1).naturalAligment) &&
         ((MVCubeModelInstance__Class *)
          (pMVar2->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1]
          == TypeInfo__MVCubeModelInstance)) {
        return pMVar2;
      }
      func_?();
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pMVar2 = (MVCubeModelInstance *)(*pcVar3)();
  return pMVar2;
}

