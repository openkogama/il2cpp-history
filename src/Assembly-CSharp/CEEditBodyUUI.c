
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
  t = (MVCubeModelInstance__Class *)esm;
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
  ppWVar3 = &(this->fields)._.tintedWo;
  *ppWVar3 = pWVar2;
  func_?(ppWVar3,pWVar2);
  targetCubeModel =
       (MVCubeModelInstance__Class *)
       EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
  t = TypeInfo__MVCubeModelInstance;
  if (targetCubeModel == (MVCubeModelInstance__Class *)0x0) {
    pcVar4 = (char *)0xffffffff;
code_?:
    (this->fields).targetCubeModelId = (int32_t)pcVar4;
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVCubeModelInstance);
      cRam_? = '\x01';
    }
    if ((((this->fields).targetCubeModelId == -1) ||
        (this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
        this_02 == (MVWorldObjectClientManager *)0x0)) ||
       (targetCubeModel =
             (MVCubeModelInstance__Class *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_02,(this->fields).targetCubeModelId,(MethodInfo *)0x0),
       t = TypeInfo__MVCubeModelInstance, targetCubeModel == (MVCubeModelInstance__Class *)0x0))
    goto code_?;
    pIVar6 = (targetCubeModel->_0).image;
    bVar7 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    t = TypeInfo__MVCubeModelInstance;
    if ((*(byte *)&pIVar6[4].assembly < bVar7) ||
       (*(MVCubeModelInstance__Class **)((pIVar6[2].typeCount - 4) + (uint)bVar7 * 4) !=
        TypeInfo__MVCubeModelInstance)) goto code_?;
    t = TypeInfo__MVCubeModelInstance;
    if (pMVar5 == (MVWorldObjectClientManager *)0x0) {
code_?:
      func_?();
      targetCubeModel = extraout_EDX;
      goto code_?;
    }
    pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar5,(int32_t)(targetCubeModel->_0).namespaze,(MethodInfo *)0x0);
    if (pMVar8 == (MVWorldObject *)0x0) {
      (this->fields).modelBody = (IWorldObjectWithModelingConstraint *)0x0;
      pCVar9 = (CEEditBodyUUI *)0x0;
code_?:
      func_?();
      bVar10 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(esm,(MethodInfo *)0x0);
      t = (MVCubeModelInstance__Class *)esm;
      if (bVar10 == 0) {
        pMVar11 = EditorStateMachine::EditorStateMachine_get_ParentGroup(esm,(MethodInfo *)0x0);
        if (pMVar11 == (MVGroup *)0x0) goto code_?;
        t = (MVCubeModelInstance__Class *)(pMVar11->fields)._.transform;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                  ((Transform *)t,0,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVCubeModelInstance);
        cRam_? = '\x01';
      }
      if ((((this->fields).targetCubeModelId != -1) &&
          (pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
          pMVar5 != (MVWorldObjectClientManager *)0x0)) &&
         (targetCubeModel =
               (MVCubeModelInstance__Class *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar5,(this->fields).targetCubeModelId,(MethodInfo *)0x0),
         t = TypeInfo__MVCubeModelInstance, targetCubeModel != (MVCubeModelInstance__Class *)0x0)) {
        pIVar6 = (targetCubeModel->_0).image;
        bVar7 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
        t = TypeInfo__MVCubeModelInstance;
        if ((*(byte *)&pIVar6[4].assembly < bVar7) ||
           (*(MVCubeModelInstance__Class **)((pIVar6[2].typeCount - 4) + (uint)bVar7 * 4) !=
            TypeInfo__MVCubeModelInstance)) goto code_?;
        t = (MVCubeModelInstance__Class *)(targetCubeModel->_1).static_fields_size;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                  ((Transform *)t,1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVCubeModelInstance);
          cRam_? = '\x01';
        }
        if ((((this->fields).targetCubeModelId != -1) &&
            (pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
            pMVar5 != (MVWorldObjectClientManager *)0x0)) &&
           (targetCubeModel =
                 (MVCubeModelInstance__Class *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar5,(this->fields).targetCubeModelId,(MethodInfo *)0x0),
           t = TypeInfo__MVCubeModelInstance, targetCubeModel != (MVCubeModelInstance__Class *)0x0))
        {
          pIVar6 = (targetCubeModel->_0).image;
          bVar7 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
          if ((*(byte *)&pIVar6[4].assembly < bVar7) ||
             (*(MVCubeModelInstance__Class **)((pIVar6[2].typeCount - 4) + (uint)bVar7 * 4) !=
              TypeInfo__MVCubeModelInstance)) goto code_?;
          DrawPlane::DrawPlane_DrawPlaneToModel
                    ((GameObject *)(targetCubeModel->_1).element_size,(MethodInfo *)0x0);
          pIVar12 = (this->fields).modelBody;
          pIVar13 = pIVar12;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((this->fields).targetCubeModelId == -1) {
code_?:
            targetCubeModel = (MVCubeModelInstance__Class *)0x0;
          }
          else {
            pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar5 == (MVWorldObjectClientManager *)0x0) goto code_?;
            targetCubeModel =
                 (MVCubeModelInstance__Class *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar5,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
            if (targetCubeModel == (MVCubeModelInstance__Class *)0x0) goto code_?;
            pIVar6 = (targetCubeModel->_0).image;
            bVar7 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
            t = TypeInfo__MVCubeModelInstance;
            if ((*(byte *)&pIVar6[4].assembly < bVar7) ||
               (*(MVCubeModelInstance__Class **)((pIVar6[2].typeCount - 4) + (uint)bVar7 * 4) !=
                TypeInfo__MVCubeModelInstance)) goto code_?;
          }
          t = targetCubeModel;
          if (pIVar12 != (IWorldObjectWithModelingConstraint *)0x0) {
            uVar14 = 0;
            pIVar15 = pIVar13->klass;
            uVar16._0_1_ = (pIVar15->_1).rank;
            uVar16._1_1_ = (pIVar15->_1).minimumAlignment;
            if (uVar16 != 0) {
              do {
                if (pIVar15->interfaceOffsets[uVar14].interfaceType ==
                    (Il2CppClass *)TypeInfo__IWorldObjectWithModelingConstraint) {
                  ppMVar17 = &(&pIVar15->vtable)[pIVar15->interfaceOffsets[uVar14].offset].
                              GetModelConstaint.method;
                  goto code_?;
                }
                uVar14 = uVar14 + 1;
                this = pCVar9;
              } while (uVar14 < uVar16);
            }
            pCVar9 = this;
            ppMVar17 = (MethodInfo **)
                       func_?(pIVar13,TypeInfo__IWorldObjectWithModelingConstraint,0,uVar16,
                                       0);
code_?:
            constraint = (IModelingConstraint *)
                         (*(code *)*ppMVar17)(pIVar13,targetCubeModel,ppMVar17[1]);
            pGVar1 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                      (pGVar1,StringLiteral_constrainVisualizer,(MethodInfo *)0x0);
            t = (MVCubeModelInstance__Class *)0x0;
            if (pGVar1 != (GameObject *)0x0) {
              pCVar18 = (ConstraintVisualizer *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_AddComponent_1
                                  (pGVar1,
                                   ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                                  );
              t = (MVCubeModelInstance__Class *)&(pCVar9->fields).constraintVisualizer;
              *(ConstraintVisualizer **)t = pCVar18;
              func_?(t,pCVar18);
              pCVar18 = *(ConstraintVisualizer **)t;
              if (cRam_? == '\0') {
                func_?(&TypeInfo__MVCubeModelInstance);
                cRam_? = '\x01';
              }
              if ((pCVar9->fields).targetCubeModelId == -1) {
code_?:
                targetCubeModel = (MVCubeModelInstance__Class *)0x0;
              }
              else {
                pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                if (pMVar5 == (MVWorldObjectClientManager *)0x0) goto code_?;
                targetCubeModel =
                     (MVCubeModelInstance__Class *)
                     MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (pMVar5,(pCVar9->fields).targetCubeModelId,(MethodInfo *)0x0);
                t = TypeInfo__MVCubeModelInstance;
                if (targetCubeModel == (MVCubeModelInstance__Class *)0x0) goto code_?;
                pIVar6 = (targetCubeModel->_0).image;
                bVar7 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
                if ((*(byte *)&pIVar6[4].assembly < bVar7) ||
                   (*(MVCubeModelInstance__Class **)((pIVar6[2].typeCount - 4) + (uint)bVar7 * 4) !=
                    TypeInfo__MVCubeModelInstance)) goto code_?;
              }
              if (pCVar18 != (ConstraintVisualizer *)0x0) {
                ConstraintVisualizer::ConstraintVisualizer_Init
                          (pCVar18,(MVCubeModelBase *)targetCubeModel,constraint,
                           StringLiteral_UIItems,(MethodInfo *)0x0);
                this_00 = (esm->fields).cubeModelingStateMachine;
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__MVCubeModelInstance);
                  cRam_? = '\x01';
                }
                if ((pCVar9->fields).targetCubeModelId == -1) {
                  targetCubeModel = (MVCubeModelInstance__Class *)0x0;
                }
                else {
                  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                  t = (MVCubeModelInstance__Class *)esm;
                  if (pMVar5 == (MVWorldObjectClientManager *)0x0) goto code_?;
                  targetCubeModel =
                       (MVCubeModelInstance__Class *)
                       MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                 (pMVar5,(pCVar9->fields).targetCubeModelId,(MethodInfo *)0x0);
                  if (targetCubeModel != (MVCubeModelInstance__Class *)0x0) {
                    pIVar6 = (targetCubeModel->_0).image;
                    bVar7 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
                    t = TypeInfo__MVCubeModelInstance;
                    if ((*(byte *)&pIVar6[4].assembly < bVar7) ||
                       (*(MVCubeModelInstance__Class **)
                         ((pIVar6[2].typeCount - 4) + (uint)bVar7 * 4) !=
                        TypeInfo__MVCubeModelInstance)) goto code_?;
                  }
                }
                t = (MVCubeModelInstance__Class *)esm;
                if (this_00 != (CubeModelingStateMachine *)0x0) {
                  CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                            (this_00,(MVCubeModelBase *)targetCubeModel,constraint,(MethodInfo *)0x0
                            );
                  pGVar19 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                      ((MethodInfo *)0x0);
                  if (pGVar19 != (GameEventManager *)0x0) {
                    this_01 = (pGVar19->fields).AvatarCommandsBuildMode;
                    editorEvent = (pCVar9->fields)._.stateType;
                    pMVar20 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                        (esm,(MethodInfo *)0x0);
                    if (pMVar20 != (MVWorldObjectClient *)0x0) {
                      t = (MVCubeModelInstance__Class *)(pMVar20->fields)._.id;
                      this_03 = (SubscribableVariable_1_System_Int32Enum_ *)func_?();
                      SubscribableVariable`1[System::Int32Enum]::
                      SubscribableVariable_1_System_Int32Enum___ctor
                                (this_03,(Int32Enum__Enum)t,(MethodInfo *)0x0);
                      if (this_01 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0) {
                        GameEventManager+AvatarCommandsBuildModeManager::
                        GameEventManager_AvatarCommandsBuildModeManager_EnterBuildStateEvent
                                  (this_01,editorEvent,(Object *)this_03,(MethodInfo *)0x0);
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
      goto code_?;
    }
    pIVar12 = (IWorldObjectWithModelingConstraint *)func_?();
    if (pIVar12 == (IWorldObjectWithModelingConstraint *)0x0) goto code_?;
    (this->fields).modelBody = pIVar12;
    pCVar9 = (CEEditBodyUUI *)func_?();
    if (pCVar9 != (CEEditBodyUUI *)0x0) goto code_?;
  }
  else {
    pIVar6 = (targetCubeModel->_0).image;
    bVar7 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if ((bVar7 <= *(byte *)&pIVar6[4].assembly) &&
       (*(MVCubeModelInstance__Class **)((pIVar6[2].typeCount - 4) + (uint)bVar7 * 4) ==
        TypeInfo__MVCubeModelInstance)) {
      pcVar4 = (targetCubeModel->_0).name;
      goto code_?;
    }
code_?:
    func_?(targetCubeModel,t);
  }
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
  pEVar1 = esm;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
          if (pCVar6 != (CubeModelingStateMachine *)0x0) {
            this_02 = (pCVar6->fields)._TargetCubeModel_k__BackingField;
            if (this_02 != (MVCubeModelBase *)0x0) {
              MVCubeModelBase::MVCubeModelBase_set_BeingEdited(this_02,0,(MethodInfo *)0x0);
              (pCVar6->fields)._TargetCubeModel_k__BackingField = (MVCubeModelBase *)0x0;
              func_?();
              pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                 ((MethodInfo *)0x0);
              if ((pGVar7 != (GameEventManager *)0x0) &&
                 (this_03 = (pGVar7->fields).AvatarCommandsBuildMode,
                 this_03 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
                UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                KeyboardNavigationManipulator::KeyboardNavigationManipulator_Invoke
                          ((KeyboardNavigationManipulator *)this_03,(this->fields)._.stateType,
                           (EventBase *)0x0,(MethodInfo *)0x0);
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
    bVar2 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVCubeModelInstance__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
        TypeInfo__MVCubeModelInstance)) {
      return pMVar1;
    }
    func_?();
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pMVar1 = (MVCubeModelInstance *)(*pcVar3)();
  return pMVar1;
}

