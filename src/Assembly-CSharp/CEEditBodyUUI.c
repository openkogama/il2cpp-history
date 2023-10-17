
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
  if (esm == (EditorStateMachine *)0x0) goto code_?;
  root = (esm->fields).gameObject;
  pGVar2 = root;
  if ((TypeInfo__CEEditBodyUUI____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CEEditBodyUUI____c);
  }
  callbackFunction = TypeInfo__CEEditBodyUUI____c->static_fields->__9__6_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)0x0) {
    root = pGVar2;
    if ((TypeInfo__CEEditBodyUUI____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CEEditBodyUUI____c);
      root = pGVar2;
    }
    object = TypeInfo__CEEditBodyUUI____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IAvatarEditUIState>
                        );
    unaff_EDI = (MVCubeModelInstance__Class *)0x0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IAvatarEditUIState_ *)0x0)
    goto code_?;
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
  unaff_EDI = (MVCubeModelInstance__Class *)
              EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
  if (unaff_EDI == (MVCubeModelInstance__Class *)0x0) {
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
    unaff_EDI = (MVCubeModelInstance__Class *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (this_00,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    if ((unaff_EDI != (MVCubeModelInstance__Class *)0x0) &&
       ((pIVar10 = (unaff_EDI->_0).image, pMVar7 = TypeInfo__MVCubeModelInstance,
        *(byte *)&pIVar10[4].nameNoExt < (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth ||
        (pMVar8 = pMVar9,
        *(MVCubeModelInstance__Class **)
         ((pIVar10[2].typeCount - 4) +
         (uint)(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth * 4) !=
        TypeInfo__MVCubeModelInstance)))) goto code_?;
    if ((unaff_EDI == (MVCubeModelInstance__Class *)0x0) ||
       (pMVar8 == (MVWorldObjectClientManager *)0x0)) goto code_?;
    unaff_EDI = (MVCubeModelInstance__Class *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar8,(int32_t)(unaff_EDI->_0).namespaze,(MethodInfo *)0x0);
    if (unaff_EDI == (MVCubeModelInstance__Class *)0x0) {
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
      unaff_EDI = (MVCubeModelInstance__Class *)(pMVar13->fields)._.transform;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                ((Transform *)unaff_EDI,0,(MethodInfo *)0x0);
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
    unaff_EDI = TypeInfo__MVCubeModelInstance;
    if ((pMVar14 == (MVWorldObject *)0x0) ||
       (((TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth <=
         (pMVar14->klass->_1).typeHierarchyDepth &&
        ((MVCubeModelInstance__Class *)
         (pMVar14->klass->_1).typeHierarchy
         [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] ==
         TypeInfo__MVCubeModelInstance)))) {
      if (pMVar14 != (MVWorldObject *)0x0) {
        unaff_EDI = (MVCubeModelInstance__Class *)pMVar14[1].fields.ownerActorNr;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                  ((Transform *)unaff_EDI,1,(MethodInfo *)0x0);
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
            unaff_EDI = TypeInfo__MVCubeModelInstance;
            if ((pMVar14 != (MVWorldObject *)0x0) &&
               (((pMVar14->klass->_1).typeHierarchyDepth <
                 (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth ||
                ((MVCubeModelInstance__Class *)
                 (pMVar14->klass->_1).typeHierarchy
                 [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] !=
                 TypeInfo__MVCubeModelInstance)))) goto code_?;
            if (pMVar14 != (MVWorldObject *)0x0) {
              value = pMVar14[1].fields.inputLinkRefs;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__DrawPlane);
                cRam_? = '\x01';
              }
              unaff_EDI = (MVCubeModelInstance__Class *)
                          TypeInfo__DrawPlane->static_fields->drawPlaneController;
              if ((unaff_EDI != (MVCubeModelInstance__Class *)0x0) &&
                 (pWVar15 = (WorldEditorDrawPlane *)(unaff_EDI->_0).byval_arg.data.typeHandle,
                 pWVar15 != (WorldEditorDrawPlane *)0x0)) {
                WorldEditorDrawPlane::WorldEditorDrawPlane_CachePos(pWVar15,(MethodInfo *)0x0);
                pWVar15 = (WorldEditorDrawPlane *)(unaff_EDI->_0).byval_arg.data.typeHandle;
                if (pWVar15 != (WorldEditorDrawPlane *)0x0) {
                  WorldEditorDrawPlane::WorldEditorDrawPlane_set_TargetGameObject
                            (pWVar15,(GameObject *)value,(MethodInfo *)0x0);
                  pWVar15 = (WorldEditorDrawPlane *)(unaff_EDI->_0).byval_arg.data.typeHandle;
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
                      unaff_EDI = pMVar16;
                      if (pMVar16 == (MVCubeModelInstance__Class *)0x0) goto code_?;
                      pIVar10 = (pMVar16->_0).image;
                      pMVar7 = TypeInfo__MVCubeModelInstance;
                      if ((*(byte *)&pIVar10[4].nameNoExt <
                           (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth) ||
                         (*(MVCubeModelInstance__Class **)
                           ((pIVar10[2].typeCount - 4) +
                           (uint)(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth * 4) !=
                          TypeInfo__MVCubeModelInstance)) goto code_?;
                    }
                    if (pIVar11 != (IWorldObjectWithModelingConstraint *)0x0) {
                      pIVar17 = pIVar11->klass;
                      uVar18 = 0;
                      uVar19 = (pIVar17->_1).interface_offsets_count;
                      if (uVar19 != 0) {
                        do {
                          if (pIVar17->interfaceOffsets[uVar18].interfaceType ==
                              (Il2CppClass *)TypeInfo__IWorldObjectWithModelingConstraint) {
                            pIVar20 = &pIVar17->vtable + pIVar17->interfaceOffsets[uVar18].offset;
                            goto code_?;
                          }
                          uVar18 = uVar18 + 1;
                          pCVar1 = this;
                        } while (uVar18 < uVar19);
                      }
                      this = pCVar1;
                      pIVar20 = (IWorldObjectWithModelingConstraint__VTable *)
                                func_?(pIVar11,TypeInfo__IWorldObjectWithModelingConstraint
                                                ,0,uVar19,0);
code_?:
                      constraint = (IModelingConstraint *)
                                   (*(pIVar20->GetModelConstaint).methodPtr)
                                             (pIVar11,pMVar16,(pIVar20->GetModelConstaint).method);
                      unaff_EDI = (MVCubeModelInstance__Class *)
                                  func_?(TypeInfo__UnityEngine__GameObject);
                      if (unaff_EDI != (MVCubeModelInstance__Class *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                                  ((GameObject *)unaff_EDI,StringLiteral_constrainVisualizer,
                                   (MethodInfo *)0x0);
                        pCVar21 = (ConstraintVisualizer *)
                                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_AddComponent_1
                                            ((GameObject *)unaff_EDI,
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
                          unaff_EDI = pMVar16;
                          if (pMVar16 == (MVCubeModelInstance__Class *)0x0) goto code_?;
                          pIVar10 = (pMVar16->_0).image;
                          pMVar7 = TypeInfo__MVCubeModelInstance;
                          if ((*(byte *)&pIVar10[4].nameNoExt <
                               (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth) ||
                             (*(MVCubeModelInstance__Class **)
                               ((pIVar10[2].typeCount - 4) +
                               (uint)(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth * 4) !=
                              TypeInfo__MVCubeModelInstance)) goto code_?;
                        }
                        if (pCVar22 != (ConstraintVisualizer *)0x0) {
                          ConstraintVisualizer::ConstraintVisualizer_Init
                                    (pCVar22,(MVCubeModelBase *)pMVar16,constraint,
                                     StringLiteral_UIItems,(MethodInfo *)0x0);
                          unaff_EDI = (MVCubeModelInstance__Class *)
                                      (this_01->fields).cubeModelingStateMachine;
                          targetCubeModel =
                               CEEditBodyUUI_get_TargetCubeModel(this,(MethodInfo *)0x0);
                          if (unaff_EDI != (MVCubeModelInstance__Class *)0x0) {
                            CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                                      ((CubeModelingStateMachine *)unaff_EDI,
                                       (MVCubeModelBase *)targetCubeModel,constraint,
                                       (MethodInfo *)0x0);
                            if (cRam_? == '\0') {
                              func_?();
                              cRam_? = '\x01';
                            }
                            pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
                            if ((pMVar5 != (MVGameControllerBase *)0x0) &&
                               (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) {
                              pGVar23 = (pMVar6->fields).GameEventManager;
                              unaff_EDI = (MVCubeModelInstance__Class *)0x0;
                              if (pGVar23 != (GameEventManager *)0x0) {
                                iVar24 = (this->fields)._.stateType;
                                unaff_EDI = (MVCubeModelInstance__Class *)
                                            (pGVar23->fields).AvatarCommandsBuildMode;
                                pMVar25 = EditorStateMachine::
                                          EditorStateMachine_get_SingleSelectedWO
                                                    (this_01,(MethodInfo *)0x0);
                                if (pMVar25 != (MVWorldObjectClient *)0x0) {
                                  value_00 = (pMVar25->fields)._.id;
                                  this_02 = (SubscribableVariableBase_1_System_Int32Enum_ *)
                                            func_?(
                                                  TypeInfo__MVBuildModeAvatarLocal_EditMode__CEEditBodyUUIData
                                                  );
                                  if ((this_02 !=
                                       (SubscribableVariableBase_1_System_Int32Enum_ *)0x0) &&
                                     (SubscribableVariableBase`1[System::Int32Enum]::
                                      SubscribableVariableBase_1_System_Int32Enum___ctor
                                                (this_02,value_00,(MethodInfo *)0x0),
                                     unaff_EDI != (MVCubeModelInstance__Class *)0x0)) {
                                    if ((((Transform__Fields *)&(unaff_EDI->_0).name)->_)._.
                                        m_CachedPtr != (void *)0x0) {
                                      pvVar26 = (((Transform__Fields *)&(unaff_EDI->_0).name)->_)._.
                                               m_CachedPtr;
                                      (**(code **)((int)pvVar26 + 0xc))
                                                (*(undefined4 *)((int)pvVar26 + 0x20),iVar24,this_02,
                                                 *(undefined4 *)((int)pvVar26 + 0x14));
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
      goto code_?;
    }
  }
  else {
    pIVar10 = (unaff_EDI->_0).image;
    pMVar7 = TypeInfo__MVCubeModelInstance;
    if (((TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth <= *(byte *)&pIVar10[4].nameNoExt) &&
       (*(MVCubeModelInstance__Class **)
         ((pIVar10[2].typeCount - 4) +
         (uint)(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth * 4) ==
        TypeInfo__MVCubeModelInstance)) {
      pcVar4 = (unaff_EDI->_0).name;
      goto code_?;
    }
code_?:
    func_?(unaff_EDI,pMVar7);
    pMVar14 = extraout_EDX_00;
  }
code_?:
  func_?(pMVar14,unaff_EDI);
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
    (*(pCVar2->klass->vtable).Update.methodPtr)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
    if (((TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth <=
         (pMVar2->klass->_1).typeHierarchyDepth) &&
       ((MVCubeModelInstance__Class *)
        (pMVar2->klass->_1).typeHierarchy
        [(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1] ==
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

