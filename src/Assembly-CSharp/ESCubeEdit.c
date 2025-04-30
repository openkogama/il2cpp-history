
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_Enter
               (ESCubeEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?();
    func_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__EditCubesSetupData);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>
                   );
    func_?();
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__MVCubeModelBase);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&StringLiteral_ConstrainVisualizer);
    func_?(&StringLiteral_UIItems);
    func_?(&StringLiteral_ESCubeEdit_must_not_be_entered_w);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar1->fields)._MaterialRepository_k__BackingField, e == (EditorStateMachine *)0x0
     )) {
code_?:
    func_?();
    targetCubeModel = extraout_EDX;
    OVar2 = unaff_ESI;
  }
  else {
    pCVar3 = (e->fields).cubeModelingStateMachine;
    unaff_ESI.currentCryptoKey = 0;
    unaff_ESI.hiddenValue = 0;
    unaff_ESI.fakeValue = 0;
    unaff_ESI.inited = 0;
    if (pCVar3 == (CubeModelingStateMachine *)0x0) goto code_?;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
      cRam_? = '\x01';
    }
    unaff_ESI = (pCVar3->fields).currentMaterialId;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    }
    materialId = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
                 ObscuredByte_op_Implicit_1(unaff_ESI,(MethodInfo *)0x0);
    if ((this_00 == (MVMaterialRepository *)0x0) ||
       (this_03 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                            (this_00,materialId,(MethodInfo *)0x0), this_03 == (MVMaterial *)0x0))
    goto code_?;
    bVar4 = MVMaterial::MVMaterial_get_IsAvailable(this_03,(MethodInfo *)0x0);
    if (bVar4 == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Handle_if_default_material_is_no,(MethodInfo *)0x0);
      pCVar3 = (e->fields).cubeModelingStateMachine;
      if (pCVar3 == (CubeModelingStateMachine *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                (pCVar3,0x15,(MethodInfo *)0x0);
    }
    (this->fields).exiting = 0;
    pMVar5 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar5 == (MVWorldObjectClient *)0x0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_ESCubeEdit_must_not_be_entered_w,(MethodInfo *)0x0);
      FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
      return;
    }
    pGVar6 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar6 == (GameEventManager *)0x0) goto code_?;
    this_01 = (pGVar6->fields).AvatarCommandsBuildMode;
    editorEvent = (this->fields)._.stateType;
    pMVar5 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar5 == (MVWorldObjectClient *)0x0) goto code_?;
    unaff_ESI = (ObscuredByte)(pMVar5->fields)._.id;
    this_04 = (SubscribableVariable_1_System_Int32Enum_ *)
              func_?(TypeInfo__MVBuildModeAvatarLocal_EditMode__EditCubesSetupData);
    SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
              (this_04,(Int32Enum__Enum)unaff_ESI,(MethodInfo *)0x0);
    if (this_01 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0) goto code_?;
    GameEventManager+AvatarCommandsBuildModeManager::
    GameEventManager_AvatarCommandsBuildModeManager_EnterBuildStateEvent
              (this_01,editorEvent,(Object *)this_04,(MethodInfo *)0x0);
    DrawPlane::DrawPlane_HideDrawPlane((MethodInfo *)0x0);
    callbackFunction =
         (UnityAction_2_System_Object_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (callbackFunction,(Object *)this,
               MethodInfo__ESCubeEdit___Enter_b__7_0_IHandleCubeModelEdit__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              ((GameObject *)callbackFunction,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<IHandleCubeModelEdit>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<IHandleCubeModelEdit>_
              );
    pWVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                        ((MethodInfo *)0x0);
    (this->fields)._.tintedWo = pWVar7;
    func_?();
    targetCubeModel =
         (MVCubeModelBase *)
         EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    unaff_ESI = (ObscuredByte)TypeInfo__MVCubeModelBase;
    if (targetCubeModel != (MVCubeModelBase *)0x0) {
      bVar8 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
      OVar2 = (ObscuredByte)TypeInfo__MVCubeModelBase;
      if ((bVar8 <= (targetCubeModel->klass->_1).naturalAligment) &&
         ((MVCubeModelBase__Class *)(targetCubeModel->klass->_1).typeHierarchy[bVar8 - 1] ==
          TypeInfo__MVCubeModelBase)) {
        iVar9 = (targetCubeModel->fields)._._.id;
        goto code_?;
      }
      goto code_?;
    }
    iVar9 = -1;
code_?:
    (this->fields).targetCubeModelId = iVar9;
    this_02 = (e->fields).selectionController;
    if (this_02 == (SelectionController *)0x0) goto code_?;
    SelectionController::SelectionController_DeSelectAll(this_02,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVCubeModelBase);
      cRam_? = '\x01';
    }
    if ((((this->fields).targetCubeModelId == -1) ||
        (pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
        pMVar10 == (MVWorldObjectClientManager *)0x0)) ||
       (targetCubeModel =
             (MVCubeModelBase *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar10,(this->fields).targetCubeModelId,(MethodInfo *)0x0),
       unaff_ESI = (ObscuredByte)TypeInfo__MVCubeModelBase,
       targetCubeModel == (MVCubeModelBase *)0x0)) goto code_?;
    bVar8 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    OVar2 = (ObscuredByte)TypeInfo__MVCubeModelBase;
    if (((targetCubeModel->klass->_1).naturalAligment < bVar8) ||
       ((MVCubeModelBase__Class *)(targetCubeModel->klass->_1).typeHierarchy[bVar8 - 1] !=
        TypeInfo__MVCubeModelBase)) goto code_?;
    pFVar11 = (targetCubeModel->fields)._ModelingConstraintBuilder_k__BackingField;
    if (pFVar11 == (Func_1_IModelingConstraint_ *)0x0) goto code_?;
    pIVar12 = (IModelingConstraint *)
              (*(pFVar11->fields)._._.invoke_impl)
                        ((pFVar11->fields)._._.method_code,(pFVar11->fields)._._.method);
    ppIVar13 = &(this->fields).constraint;
    *ppIVar13 = pIVar12;
    func_?(ppIVar13,pIVar12);
    this_05 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
              (this_05,StringLiteral_ConstrainVisualizer,(MethodInfo *)0x0);
    unaff_ESI.currentCryptoKey = 0;
    unaff_ESI.hiddenValue = 0;
    unaff_ESI.fakeValue = 0;
    unaff_ESI.inited = 0;
    if (this_05 == (GameObject *)0x0) goto code_?;
    pCVar14 = (ConstraintVisualizer *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (this_05,
                         ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                        );
    ppCVar15 = &(this->fields).constraintVisualizer;
    *ppCVar15 = pCVar14;
    func_?(ppCVar15,pCVar14);
    unaff_ESI = (ObscuredByte)*ppCVar15;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVCubeModelBase);
      cRam_? = '\x01';
    }
    if ((this->fields).targetCubeModelId == -1) {
      targetCubeModel = (MVCubeModelBase *)0x0;
    }
    else {
      pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar10 == (MVWorldObjectClientManager *)0x0) goto code_?;
      targetCubeModel =
           (MVCubeModelBase *)
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (pMVar10,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
      if (targetCubeModel != (MVCubeModelBase *)0x0) {
        bVar8 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
        OVar2 = (ObscuredByte)TypeInfo__MVCubeModelBase;
        if (((targetCubeModel->klass->_1).naturalAligment < bVar8) ||
           ((MVCubeModelBase__Class *)(targetCubeModel->klass->_1).typeHierarchy[bVar8 - 1] !=
            TypeInfo__MVCubeModelBase)) goto code_?;
      }
    }
    if (unaff_ESI == (ObscuredByte)0x0) goto code_?;
    ConstraintVisualizer::ConstraintVisualizer_Init
              ((ConstraintVisualizer *)unaff_ESI,targetCubeModel,(this->fields).constraint,
               StringLiteral_UIItems,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVCubeModelBase);
      cRam_? = '\x01';
    }
    if ((((this->fields).targetCubeModelId == -1) ||
        (pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
        pMVar10 == (MVWorldObjectClientManager *)0x0)) ||
       (targetCubeModel =
             (MVCubeModelBase *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar10,(this->fields).targetCubeModelId,(MethodInfo *)0x0),
       unaff_ESI = (ObscuredByte)TypeInfo__MVCubeModelBase,
       targetCubeModel == (MVCubeModelBase *)0x0)) goto code_?;
    bVar8 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    OVar2 = (ObscuredByte)TypeInfo__MVCubeModelBase;
    if ((bVar8 <= (targetCubeModel->klass->_1).naturalAligment) &&
       ((MVCubeModelBase__Class *)(targetCubeModel->klass->_1).typeHierarchy[bVar8 - 1] ==
        TypeInfo__MVCubeModelBase)) {
      bVar4 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                        ((MVWorldObjectClient *)targetCubeModel,InteractionFlags__Enum_IsPreview,
                         (MethodInfo *)0x0);
      if (bVar4 != 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((((this->fields).targetCubeModelId == -1) ||
            (pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
            pMVar10 == (MVWorldObjectClientManager *)0x0)) ||
           (targetCubeModel =
                 (MVCubeModelBase *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar10,(this->fields).targetCubeModelId,(MethodInfo *)0x0),
           unaff_ESI = (ObscuredByte)TypeInfo__MVCubeModelBase,
           targetCubeModel == (MVCubeModelBase *)0x0)) goto code_?;
        bVar8 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
        OVar2 = (ObscuredByte)TypeInfo__MVCubeModelBase;
        if (((targetCubeModel->klass->_1).naturalAligment < bVar8) ||
           ((MVCubeModelBase__Class *)(targetCubeModel->klass->_1).typeHierarchy[bVar8 - 1] !=
            TypeInfo__MVCubeModelBase)) goto code_?;
        (*(code *)(targetCubeModel->klass->vtable).RemovePreviewBox.method)
                  (targetCubeModel,(targetCubeModel->klass->vtable).HideConnectors.methodPtr);
      }
      bVar4 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        unaff_ESI = (ObscuredByte)
                    MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        iVar9 = EditorStateMachine::EditorStateMachine_get_ParentGroupID(e,(MethodInfo *)0x0);
        if ((unaff_ESI == (ObscuredByte)0x0) ||
           (pMVar16 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                ((MVWorldObjectClientManager *)unaff_ESI,iVar9,(MethodInfo *)0x0),
           pMVar16 == (MVWorldObject *)0x0)) goto code_?;
        unaff_ESI = (ObscuredByte)pMVar16[1].fields.ownerActorNr;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                  ((Transform *)unaff_ESI,0,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVCubeModelBase);
        cRam_? = '\x01';
      }
      if ((((this->fields).targetCubeModelId != -1) &&
          (pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
          pMVar10 != (MVWorldObjectClientManager *)0x0)) &&
         (targetCubeModel =
               (MVCubeModelBase *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar10,(this->fields).targetCubeModelId,(MethodInfo *)0x0),
         unaff_ESI = (ObscuredByte)TypeInfo__MVCubeModelBase,
         targetCubeModel != (MVCubeModelBase *)0x0)) {
        bVar8 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
        OVar2 = (ObscuredByte)TypeInfo__MVCubeModelBase;
        if (((targetCubeModel->klass->_1).naturalAligment < bVar8) ||
           ((MVCubeModelBase__Class *)(targetCubeModel->klass->_1).typeHierarchy[bVar8 - 1] !=
            TypeInfo__MVCubeModelBase)) goto code_?;
        unaff_ESI = (ObscuredByte)(targetCubeModel->fields)._.transform;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__SharedCubeFunctions);
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                  ((Transform *)unaff_ESI,1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVCubeModelBase);
          cRam_? = '\x01';
        }
        if ((((this->fields).targetCubeModelId != -1) &&
            (pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
            pMVar10 != (MVWorldObjectClientManager *)0x0)) &&
           (targetCubeModel =
                 (MVCubeModelBase *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar10,(this->fields).targetCubeModelId,(MethodInfo *)0x0),
           unaff_ESI = (ObscuredByte)TypeInfo__MVCubeModelBase,
           targetCubeModel != (MVCubeModelBase *)0x0)) {
          bVar8 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
          OVar2 = (ObscuredByte)TypeInfo__MVCubeModelBase;
          if (((targetCubeModel->klass->_1).naturalAligment < bVar8) ||
             ((MVCubeModelBase__Class *)(targetCubeModel->klass->_1).typeHierarchy[bVar8 - 1] !=
              TypeInfo__MVCubeModelBase)) goto code_?;
          DrawPlane::DrawPlane_DrawPlaneToModel
                    ((targetCubeModel->fields)._.gameObject,(MethodInfo *)0x0);
          unaff_ESI = (ObscuredByte)(e->fields).cubeModelingStateMachine;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((this->fields).targetCubeModelId == -1) {
            targetCubeModel = (MVCubeModelBase *)0x0;
          }
          else {
            pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar10 == (MVWorldObjectClientManager *)0x0) goto code_?;
            targetCubeModel =
                 (MVCubeModelBase *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (pMVar10,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
            if (targetCubeModel != (MVCubeModelBase *)0x0) {
              bVar8 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
              OVar2 = (ObscuredByte)TypeInfo__MVCubeModelBase;
              if (((targetCubeModel->klass->_1).naturalAligment < bVar8) ||
                 ((MVCubeModelBase__Class *)(targetCubeModel->klass->_1).typeHierarchy[bVar8 - 1] !=
                  TypeInfo__MVCubeModelBase)) goto code_?;
            }
          }
          if (unaff_ESI != (ObscuredByte)0x0) {
            CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                      ((CubeModelingStateMachine *)unaff_ESI,targetCubeModel,
                       (this->fields).constraint,(MethodInfo *)0x0);
            pMVar17 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                ((MethodInfo *)0x0);
            if (pMVar17 != (MainCameraManager *)0x0) {
              unaff_ESI = (ObscuredByte)
                          MainCameraManager::MainCameraManager_get_CurrentCamera
                                    (pMVar17,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((this->fields).targetCubeModelId == -1) {
                OVar2.currentCryptoKey = 0;
                OVar2.hiddenValue = 0;
                OVar2.fakeValue = 0;
                OVar2.inited = 0;
              }
              else {
                pMVar10 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                if (pMVar10 == (MVWorldObjectClientManager *)0x0) goto code_?;
                OVar2 = (ObscuredByte)
                         MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                   (pMVar10,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
                if (OVar2 == (ObscuredByte)0x0) {
                  OVar2.currentCryptoKey = 0;
                  OVar2.hiddenValue = 0;
                  OVar2.fakeValue = 0;
                  OVar2.inited = 0;
                }
                else {
                  bVar8 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
                  pMVar18 = TypeInfo__MVCubeModelBase;
                  if ((*(byte *)(*(int *)OVar2 + 0xb8) < bVar8) ||
                     (*(MVCubeModelBase__Class **)
                       (*(int *)(*(int *)OVar2 + 100) + -4 + (uint)bVar8 * 4) !=
                      TypeInfo__MVCubeModelBase)) goto code_?;
                }
              }
              if (unaff_ESI != (ObscuredByte)0x0) {
                (**(code **)(*(int *)unaff_ESI + 0x130))
                          (unaff_ESI,OVar2,0x40000000,0,0,0,0,
                           *(undefined4 *)(*(int *)unaff_ESI + 0x134));
                pMVar17 = (e->fields).weCamera;
                if (pMVar17 != (MainCameraManager *)0x0) {
                  MainCameraManager::MainCameraManager_set_BlueModeEnabled
                            (pMVar17,1,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
  }
code_?:
  func_?(targetCubeModel,OVar2);
  pMVar18 = extraout_EDX_00;
code_?:
  func_?(OVar2,pMVar18);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_Execute
               (ESCubeEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  this_00 = e;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__EditorEvent);
    func_?(&StringLiteral_Looping_up_tree);
    func_?(&StringLiteral_ParentGroup_was_null);
    func_?(&StringLiteral_This_prototype_is_empty_and_shou);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,(ExceptionArgument__Enum)this_00,(MethodInfo *)0x0);
  if ((this->fields).exiting == 0) {
    pMVar1 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
    bVar2 = 1 - (pMVar1 != (MVCubeModelBase *)0x0);
  }
  else {
    bVar2 = 1;
  }
  (this->fields).exiting = bVar2;
  if (this_00 != (EditorStateMachine *)0x0) {
    if (bVar2 != 0) {
      bVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                        (this_00,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        e = (EditorStateMachine *)0x0;
        pMVar3 = EditorStateMachine::EditorStateMachine_get_ParentGroup(this_00,(MethodInfo *)0x0);
        if (pMVar3 != (MVGroup *)0x0) {
          method = (MethodInfo *)this_00;
          e = (EditorStateMachine *)&UNK_?;
          for (pMVar3 = EditorStateMachine::EditorStateMachine_get_ParentGroup
                                  (this_00,(MethodInfo *)0x0); pMVar3 != (MVGroup *)0x0;
              pMVar3 = (pMVar3->fields)._.group) {
            cVar4 = (*(code *)(pMVar3->klass->vtable).OnExitObject.method)(pMVar3,this_00);
            if ((cVar4 != '\0') || ((pMVar3->fields)._.group == (MVGroup *)0x0))
            goto code_?;
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)StringLiteral_Looping_up_tree,(MethodInfo *)0x0);
          }
          goto code_?;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          method = (MethodInfo *)&UNK_?;
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_ParentGroup_was_null,(MethodInfo *)0x0);
        EditorStateMachine::EditorStateMachine_ExitGroupToRoot(this_00,(MethodInfo *)0x0);
      }
      else {
        e = (EditorStateMachine *)&e;
        pOVar5 = (Object *)func_?();
        FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,pOVar5,(MethodInfo *)0x0);
      }
code_?:
      if ((this_00->fields)._MuzzleEditMode_k__BackingField == 0) {
        return;
      }
      Assets::Scripts::IngameController::CubeModeling::MuzzleEditController::
      MuzzleEditController_ExitMuzzleEdit((MethodInfo *)0x0);
      return;
    }
    pCVar6 = (this_00->fields).cubeModelingStateMachine;
    if (pCVar6 != (CubeModelingStateMachine *)0x0) {
      (*(code *)(pCVar6->klass->vtable).Update.method)(pCVar6);
      pMVar1 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
      if (pMVar1 != (MVCubeModelBase *)0x0) {
        bVar2 = MVCubeModelBase::MVCubeModelBase_get_ContainsCubes(pMVar1,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          return;
        }
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          e = (EditorStateMachine *)TypeInfo__UnityEngine__Debug;
          func_?();
        }
        e = (EditorStateMachine *)0x0;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_This_prototype_is_empty_and_shou,(MethodInfo *)0x0);
        e = (EditorStateMachine *)&e;
        pOVar5 = (Object *)func_?();
        FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,pOVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_Exit
               (ESCubeEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  pEVar1 = e;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    func_?(&TypeInfo__ModelingDynamicBoxConstraint);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&
                    MethodInfo__ESCubeEdit____c___Exit_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__ESCubeEdit____c);
    cRam_? = '\x01';
  }
  DrawPlane::DrawPlane_HideDrawPlane((MethodInfo *)0x0);
  if (e == (EditorStateMachine *)0x0) {
code_?:
    func_?();
  }
  else {
    pGVar2 = (e->fields).gameObject;
    pGVar3 = pGVar2;
    if ((TypeInfo__ESCubeEdit____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__ESCubeEdit____c);
    }
    callbackFunction = TypeInfo__ESCubeEdit____c->static_fields->__9__9_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      pGVar2 = pGVar3;
      if ((TypeInfo__ESCubeEdit____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__ESCubeEdit____c);
        pGVar2 = pGVar3;
      }
      object = TypeInfo__ESCubeEdit____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__ESCubeEdit____c___Exit_b__9_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__ESCubeEdit____c->static_fields->__9__9_0 = callbackFunction;
      func_?(&TypeInfo__ESCubeEdit____c->static_fields->__9__9_0,callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    pMVar4 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
    if (pMVar4 != (MVCubeModelBase *)0x0) {
      pMVar4 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
      if (pMVar4 != (MVCubeModelBase *)0x0) {
        bVar5 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                           ((MVWorldObjectClient *)pMVar4,InteractionFlags__Enum_IsPreview,
                            (MethodInfo *)0x0);
        if (bVar5 != 0) {
          pMVar4 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
          if (pMVar4 == (MVCubeModelBase *)0x0) goto code_?;
          (*(code *)(pMVar4->klass->vtable).AddPreviewBox.method)();
        }
        bVar5 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          id = EditorStateMachine::EditorStateMachine_get_ParentGroupID(e,(MethodInfo *)0x0);
          if (this_02 != (MVWorldObjectClientManager *)0x0) {
            pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (this_02,id,(MethodInfo *)0x0);
            if (pMVar6 != (MVWorldObject *)0x0) {
              pTVar7 = (Transform *)pMVar6[1].fields.ownerActorNr;
              if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                        (pTVar7,0,(MethodInfo *)0x0);
              e = (EditorStateMachine *)this_02;
              goto code_?;
            }
          }
        }
        else {
code_?:
          pMVar4 = ESCubeEdit_get_TargetCubeModel(this,(MethodInfo *)0x0);
          if (pMVar4 != (MVCubeModelBase *)0x0) {
            pTVar7 = (pMVar4->fields)._.transform;
            if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
              e = (EditorStateMachine *)&UNK_?;
              func_?();
            }
            SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar7,0,(MethodInfo *)0x0)
            ;
            goto code_?;
          }
        }
      }
      goto code_?;
    }
code_?:
    this_00 = (pEVar1->fields).weCamera;
    if (this_00 == (MainCameraManager *)0x0) goto code_?;
    MainCameraManager::MainCameraManager_set_BlueModeEnabled(this_00,0,(MethodInfo *)0x0);
    DrawPlane::DrawPlane_ReturnDrawPlaneToLandscape((MethodInfo *)0x0);
    pCVar8 = (this->fields).constraintVisualizer;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)pCVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      pCVar8 = (this->fields).constraintVisualizer;
      if (pCVar8 == (ConstraintVisualizer *)0x0) goto code_?;
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pCVar8,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar2,(MethodInfo *)0x0);
    }
    pOVar9 = (Object *)(this->fields).constraint;
    ppIVar10 = &(this->fields).constraint;
    if (pOVar9 == (Object *)0x0) {
code_?:
      *ppIVar10 = (IModelingConstraint *)0x0;
      func_?(ppIVar10,0);
      pGVar11 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar11 != (GameEventManager *)0x0) &&
          (pGVar12 = (pGVar11->fields).AvatarCommandsBuildMode,
          pGVar12 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (this_01 = (pGVar12->fields).LaserCommands,
         this_01 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioClip::
        AudioClip_InvokePCMSetPositionCallback_Internal((AudioClip *)this_01,0,(MethodInfo *)0x0);
        pSVar13 = (pEVar1->fields).selectionController;
        if ((pSVar13 != (SelectionController *)0x0) &&
           (pHVar14 = (pSVar13->fields).selectedIDs, pHVar14 != (HashSet_1_System_Int32_ *)0x0)) {
          if ((pHVar14->fields)._count == 0) {
            ESStateBase::ESStateBase_DeTintCurrent((ESStateBase *)this,(MethodInfo *)0x0);
          }
          pCVar15 = (pEVar1->fields).cubeModelingStateMachine;
          if (pCVar15 != (CubeModelingStateMachine *)0x0) {
            CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors
                      (pCVar15,(MethodInfo *)0x0);
            pCVar15 = (pEVar1->fields).cubeModelingStateMachine;
            if (pCVar15 != (CubeModelingStateMachine *)0x0) {
              pMVar4 = (pCVar15->fields)._TargetCubeModel_k__BackingField;
              ppMVar16 = &(pCVar15->fields)._TargetCubeModel_k__BackingField;
              if (pMVar4 != (MVCubeModelBase *)0x0) {
                MVCubeModelBase::MVCubeModelBase_set_BeingEdited(pMVar4,0,(MethodInfo *)0x0);
                *ppMVar16 = (MVCubeModelBase *)0x0;
                func_?(ppMVar16,0);
                pGVar11 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
                if ((pGVar11 != (GameEventManager *)0x0) &&
                   (pGVar12 = (pGVar11->fields).AvatarCommandsBuildMode,
                   pGVar12 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
                  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                  KeyboardNavigationManipulator::KeyboardNavigationManipulator_Invoke
                            ((KeyboardNavigationManipulator *)pGVar12,(this->fields)._.stateType,
                             (EventBase *)0x0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    bVar17 = (TypeInfo__ModelingDynamicBoxConstraint->_1).naturalAligment;
    if (((pOVar9->klass->_1).naturalAligment < bVar17) ||
       (pEVar1 = e,
       (pOVar9->klass->_1).typeHierarchy[bVar17 - 1] !=
       (Il2CppClass *)TypeInfo__ModelingDynamicBoxConstraint)) goto code_?;
    object_00 = pOVar9;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
      func_?(&
                      MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_
                     );
      cRam_? = '\x01';
    }
    pOVar18 = pOVar9[0xc].klass;
    if (pOVar18 == (Object__Class *)0x0) goto code_?;
    pDVar19 = (Delegate *)pOVar18[1]._0.byval_arg.data.typeHandle;
    this_03 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_03,object_00,
               MethodInfo__ModelingDynamicBoxConstraint__CubeModel_Changed_CubeModelChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar19 = mscorlib.dll::System::Delegate::Delegate_Remove
                        (pDVar19,(Delegate *)this_03,(MethodInfo *)0x0);
    if (pDVar19 == (Delegate *)0x0) {
      pOVar18[1]._0.byval_arg.data.dummy = (void *)0x0;
      this = (ESCubeEdit *)0x0;
code_?:
      func_?();
      goto code_?;
    }
    pvVar20 = (void *)func_?();
    if (pvVar20 == (void *)0x0) goto code_?;
    pOVar18[1]._0.byval_arg.data.dummy = pvVar20;
    this = (ESCubeEdit *)func_?();
    if (this != (ESCubeEdit *)0x0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void HandleUnavailableMaterial(EditorStateMachine) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_HandleUnavailableMaterial
               (ESCubeEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Handle_if_default_material_is_no);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    this_00 = (pMVar1->fields)._MaterialRepository_k__BackingField;
    if (e != (EditorStateMachine *)0x0) {
      pCVar2 = (e->fields).cubeModelingStateMachine;
      if (pCVar2 != (CubeModelingStateMachine *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
          cRam_? = '\x01';
        }
        value = (pCVar2->fields).currentMaterialId;
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
        }
        materialId = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                     ObscuredByte::ObscuredByte_op_Implicit_1(value,(MethodInfo *)0x0);
        if (this_00 != (MVMaterialRepository *)0x0) {
          this_01 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                              (this_00,materialId,(MethodInfo *)0x0);
          if (this_01 != (MVMaterial *)0x0) {
            bVar3 = MVMaterial::MVMaterial_get_IsAvailable(this_01,(MethodInfo *)0x0);
            if (bVar3 == 0) {
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                        ((Object *)StringLiteral_Handle_if_default_material_is_no,(MethodInfo *)0x0)
              ;
              pCVar2 = (e->fields).cubeModelingStateMachine;
              if (pCVar2 == (CubeModelingStateMachine *)0x0) goto code_?;
              CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                        (pCVar2,0x15,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <Enter>b__7_0(IHandleCubeModelEdit, BaseEventData) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit__Enter_b__7_0
               (ESCubeEdit *this,IHandleCubeModelEdit *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__ESCubeEdit__Exit__);
    func_?(&TypeInfo__IHandleCubeModelEdit);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__ESCubeEdit__Exit__,(MethodInfo *)0x0);
  if (handler == (IHandleCubeModelEdit *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = handler->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  if (uVar4 != 0) {
    do {
      if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
          (Il2CppClass *)TypeInfo__IHandleCubeModelEdit) {
        ppMVar5 = &(&(handler->klass->vtable).Open)[pIVar2->interfaceOffsets[uVar3].offset].method;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppMVar5 = (MethodInfo **)func_?(handler,TypeInfo__IHandleCubeModelEdit,0);
code_?:
  (*(code *)*ppMVar5)(handler,ppMVar5[1]);
  return;
}


/* ESCubeEdit() */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit__ctor(ESCubeEdit *this,MethodInfo *method)

{
  (this->fields).targetCubeModelId = -1;
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  ppWVar2 = &(this->fields)._.tintedWo;
  *ppWVar2 = pWVar1;
  func_?(ppWVar2,&stack0xfffffffc,&UNK_?,ppWVar2,pWVar1);
  return;
}


/* MVCubeModelBase get_TargetCubeModel() */

MVCubeModelBase *
Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_get_TargetCubeModel(ESCubeEdit *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCubeModelBase);
    cRam_? = '\x01';
  }
  if ((this->fields).targetCubeModelId == -1) {
    return (MVCubeModelBase *)0x0;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = (MVCubeModelBase *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    if (pMVar1 == (MVCubeModelBase *)0x0) {
      return (MVCubeModelBase *)0x0;
    }
    bVar2 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    if ((bVar2 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVCubeModelBase__Class *)(pMVar1->klass->_1).typeHierarchy[bVar2 - 1] ==
        TypeInfo__MVCubeModelBase)) {
      return pMVar1;
    }
    func_?();
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pMVar1 = (MVCubeModelBase *)(*pcVar3)();
  return pMVar1;
}


/* Void set_TargetCubeModel(MVCubeModelBase) */

void Assembly-CSharp.dll::ESCubeEdit::ESCubeEdit_set_TargetCubeModel
               (ESCubeEdit *this,MVCubeModelBase *value,MethodInfo *method)

{
  if (value == (MVCubeModelBase *)0x0) {
    (this->fields).targetCubeModelId = -1;
    return;
  }
  (this->fields).targetCubeModelId = (value->fields)._._.id;
  return;
}

