
/* Void CreateConstraint() */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_CreateConstraint
               (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&StringLiteral_ConstrainVisualizer);
    func_?(&StringLiteral_UIItems);
    cRam_? = '\x01';
  }
  this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
            (this_00,StringLiteral_ConstrainVisualizer,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    pCVar1 = (ConstraintVisualizer *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (this_00,
                        ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                       );
    ppCVar2 = &(this->fields).constraintVisualizer;
    *ppCVar2 = pCVar1;
    func_?(ppCVar2,&stack0xfffffffc,&UNK_?,ppCVar2,pCVar1);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean DoReset() */

bool Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_DoReset
               (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(0xade0);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).resettingBookkeeping;
  if (pCVar1 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
    iVar2 = WaitForTicksLocal::WaitForTicksLocal_Diff
                      ((pCVar1->fields).resettingBeginTime,(MethodInfo *)0x0);
    if (iVar2 <= (pCVar1->fields).resettingDelay) {
      return 0;
    }
    pCVar1 = (this->fields).resettingBookkeeping;
    if (pCVar1 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
      (pCVar1->fields).resettingDelay = 0;
      this_00 = (this->fields).CMSM;
      if (this_00 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                  (this_00,1,(MethodInfo *)0x0);
        pEVar3 = (this->fields).cubeModelWrapper;
        if ((pEVar3 != (EditableCubeModelWrapper *)0x0) &&
           (pMVar4 = (pEVar3->fields).cubeModelBase, pMVar4 != (MVCubeModelInstance *)0x0)) {
          pCVar5 = MVCubeModelBase::MVCubeModelBase_GetCube
                             ((MVCubeModelBase *)pMVar4,(this->fields).zeroPos,(MethodInfo *)0x0);
          if ((pCVar5 != (Cube *)0x0) &&
             (pBVar6 = (pCVar5->fields)._.faceMaterials, pBVar6 != (Byte__Array *)0x0)) {
            if (pBVar6->max_length == 0) {
              func_?();
            }
            else {
              pEVar3 = (this->fields).cubeModelWrapper;
              if ((pEVar3 != (EditableCubeModelWrapper *)0x0) &&
                 (pMVar4 = (pEVar3->fields).cubeModelBase, pMVar4 != (MVCubeModelInstance *)0x0))
              {
                MVCubeModelBase::MVCubeModelBase_RemoveCube
                          ((MVCubeModelBase *)pMVar4,(this->fields).zeroPos,(MethodInfo *)0x0);
                x = -1;
                do {
                  y = -1;
                  do {
                    z = -1;
                    do {
                      pEVar3 = (this->fields).cubeModelWrapper;
                      if (pEVar3 == (EditableCubeModelWrapper *)0x0) goto code_?;
                      this_01 = (pEVar3->fields).cubeModelBase;
                      uVar7 = 0;
                      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                ((IntVector *)&stack0xffffffec,x,y,z,(MethodInfo *)0x0);
                      if (this_01 == (MVCubeModelInstance *)0x0) goto code_?;
                      pos_00.y = 0;
                      pos_00.z = 0;
                      pos_00.x = uVar7;
                      MVCubeModelBase::MVCubeModelBase_RemoveCube
                                ((MVCubeModelBase *)this_01,pos_00,(MethodInfo *)0x0);
                      material = (uint8_t)pMVar4;
                      z = z + 1;
                    } while (z < 2);
                    y = y + 1;
                  } while (y < 2);
                  x = x + 1;
                } while (x < 2);
                pEVar3 = (this->fields).cubeModelWrapper;
                if (pEVar3 != (EditableCubeModelWrapper *)0x0) {
                  pMVar4 = (pEVar3->fields).cubeModelBase;
                  iVar8 = (this->fields).zeroPos.x;
                  uVar9 = (this->fields).zeroPos.y;
                  iVar10 = (this->fields).zeroPos.z;
                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  corners = MVWorldObject.dll::MV::WorldObject::CubeBase::
                            CubeBase_get_IdentityCorners((MethodInfo *)0x0);
                  if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor ==
                      0) {
                    func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
                  }
                  pBVar6 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                            CubeDataPacker_CornersToByteArray(corners,(MethodInfo *)0x0);
                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__Cube);
                  }
                  faceMaterials = Cube::Cube_CreateMaterialArray(material,(MethodInfo *)0x0);
                  pCVar5 = (Cube *)func_?(TypeInfo__Cube);
                  Cube::Cube__ctor(pCVar5,pBVar6,faceMaterials,(MethodInfo *)0x0);
                  if (pMVar4 != (MVCubeModelInstance *)0x0) {
                    pos.y = uVar9;
                    pos.x = iVar8;
                    pos.z = iVar10;
                    MVCubeModelBase::MVCubeModelBase_AddCube
                              ((MVCubeModelBase *)pMVar4,pos,(CubeBase *)pCVar5,(MethodInfo *)0x0);
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_Enter
               (CEEditCubeTutorial *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_EditCubeChange>);
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                   );
    func_?(&MethodInfo__CEEditCubeTutorial__OnEditCubeChange_int__EditCubeChange_);
    func_?(&
                    MethodInfo__CEEditCubeTutorial__SetFirstTimeEventsHappened_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&
                    MethodInfo__CEEditCubeTutorial___Enter_b__23_0_UnityEngine__EventSystems__IHandleCubeEditTutorial__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__CubeModelTool);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__ESEditCubeTutorialData);
    func_?(&TypeInfo__EditableCubeModelWrapper);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleCubeEditTutorial>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleCubeEditTutorial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleCubeEditTutorial>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__MVCubeModelBase);
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&StringLiteral_ESEditCubeTutorial_must_not_be_e);
    cRam_? = '\x01';
  }
  (this->fields).exiting = 0;
  (this->fields).hasExited = 0;
  if (e == (EditorStateMachine *)0x0) goto code_?;
  pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?((short)TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_ESEditCubeTutorial_must_not_be_e,(MethodInfo *)0x0);
    FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
    return;
  }
  pDVar2 = CEEditCubeTutorial_GetFirstTimeEventCheck(this,(MethodInfo *)0x0);
  ppDVar3 = &(this->fields).firstTimeEventChangeCheck;
  *ppDVar3 = pDVar2;
  func_?(ppDVar3,(short)pDVar2);
  pMVar4 = (MVCubeModelInstance *)
            EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar4 == (MVCubeModelInstance *)0x0) {
    (this->fields).selectedInstance = (MVCubeModelInstance *)0x0;
  }
  else {
    bVar5 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((pMVar4->klass->_1).naturalAligment < bVar5) ||
       ((MVCubeModelInstance__Class *)(pMVar4->klass->_1).typeHierarchy[bVar5 - 1] !=
        TypeInfo__MVCubeModelInstance)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pMVar7 = (MVCubeModelInstance *)0x0;
    if (bVar6) {
      pMVar7 = pMVar4;
    }
    (this->fields).selectedInstance = pMVar7;
  }
  func_?();
  pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    iVar8 = -1;
code_?:
    (this->fields).targetCubeModelId = iVar8;
    (this->fields).CMSM = (e->fields).cubeModelingStateMachine;
    func_?();
    pAVar9 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
    pAVar10 = TypeInfo__System__Action<int,_EditCubeChange>;
    this_01 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_01,(Object *)this,
               MethodInfo__CEEditCubeTutorial__OnEditCubeChange_int__EditCubeChange_,
               (MethodInfo *)0x0);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar9,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar11 == (Delegate *)0x0) {
      TypeInfo__CubeModelTool->static_fields->OnEditCubeChange =
           (Action_2_Int32_EditCubeChange_ *)0x0;
    }
    else {
      pAVar9 = (Action_2_Int32_EditCubeChange_ *)func_?();
      if (pAVar9 == (Action_2_Int32_EditCubeChange_ *)0x0) goto code_?;
      TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar9;
      iVar12 = func_?();
      if (iVar12 == 0) goto code_?;
    }
    func_?();
    e = (EditorStateMachine *)func_?();
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              ((EventHandler_1_Object_ *)e,(Object *)this,
               MethodInfo__CEEditCubeTutorial__SetFirstTimeEventsHappened_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
               ,(MethodInfo *)0x0);
    FirstTimeEventManager::FirstTimeEventManager_SubscribeToFirstTimeState
              ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                *)e,(MethodInfo *)0x0);
    if ((this->fields).bordersExpanded == 0) {
      pMVar4 = (MVCubeModelInstance *)(pAVar10->_0).image;
      iVar13 = 0;
      iVar14 = 0;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xffffffe8,-1,-1,-1,(MethodInfo *)0x0);
      uVar15._0_2_ = 0;
      uVar15._2_2_ = 0;
      iVar16 = 0;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xfffffff0,1,1,1,(MethodInfo *)0x0);
      e = (EditorStateMachine *)func_?(TypeInfo__EditableCubeModelWrapper);
      min.y = iVar14;
      min.x = iVar13;
      min.z = 0x1b;
      max.z = iVar16;
      max.x = (int16_t)uVar15;
      max.y = SUB42(uVar15,2);
      EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                ((EditableCubeModelWrapper *)e,pMVar4,min,max,0x1b,(MethodInfo *)0x0);
      (this->fields).cubeModelWrapper = (EditableCubeModelWrapper *)e;
      func_?();
    }
    DrawPlane::DrawPlane_HideDrawPlane((MethodInfo *)0x0);
    pGVar17 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar17 == (GameEventManager *)0x0) {
code_?:
      func_?();
      goto code_?;
    }
    this_00 = (pGVar17->fields).AvatarCommandsBuildMode;
    editorEvent = (this->fields)._.stateType;
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                        ((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) goto code_?;
    e = (EditorStateMachine *)(pMVar1->fields)._.id;
    this_02 = (SubscribableVariable_1_System_Int32Enum_ *)
              func_?(TypeInfo__MVBuildModeAvatarLocal_EditMode__ESEditCubeTutorialData);
    SubscribableVariable`1[System::Int32Enum]::SubscribableVariable_1_System_Int32Enum___ctor
              (this_02,(Int32Enum__Enum)e,(MethodInfo *)0x0);
    if (this_00 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0) goto code_?;
    GameEventManager+AvatarCommandsBuildModeManager::
    GameEventManager_AvatarCommandsBuildModeManager_EnterBuildStateEvent
              (this_00,editorEvent,(Object *)this_02,(MethodInfo *)0x0);
    pGVar18 = _UNK_?;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleCubeEditTutorial>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__CEEditCubeTutorial___Enter_b__23_0_UnityEngine__EventSystems__IHandleCubeEditTutorial__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar18,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleCubeEditTutorial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleCubeEditTutorial>_
              );
    (this->fields)._.tintedWo = (WorldObjectClientRef *)0x0;
    func_?();
    e = (EditorStateMachine *)(this->fields).constraintVisualizer;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)e,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar19 != 0) {
      CEEditCubeTutorial_CreateConstraint(this,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVCubeModelBase);
      cRam_? = '\x01';
    }
    if ((((this->fields).targetCubeModelId == -1) ||
        (pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
        pMVar20 == (MVWorldObjectClientManager *)0x0)) ||
       (targetCubeModel =
             (MVCubeModelBase *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar20,(this->fields).targetCubeModelId,(MethodInfo *)0x0),
       e = (EditorStateMachine *)TypeInfo__MVCubeModelBase,
       targetCubeModel == (MVCubeModelBase *)0x0)) goto code_?;
    bVar5 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    pMVar21 = TypeInfo__MVCubeModelBase;
    if ((bVar5 <= (targetCubeModel->klass->_1).naturalAligment) &&
       ((MVCubeModelBase__Class *)(targetCubeModel->klass->_1).typeHierarchy[bVar5 - 1] ==
        TypeInfo__MVCubeModelBase)) {
      (*(code *)(targetCubeModel->klass->vtable).RemoveSelectionBox.method)(targetCubeModel);
      bVar19 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot
                        ((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
      if (bVar19 == 0) {
        e = (EditorStateMachine *)
            MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        iVar8 = EditorStateMachine::EditorStateMachine_get_ParentGroupID
                           ((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
        if (((MVCubeModelBase__Class *)e == (MVCubeModelBase__Class *)0x0) ||
           (pMVar22 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                ((MVWorldObjectClientManager *)e,iVar8,(MethodInfo *)0x0),
           pMVar22 == (MVWorldObject *)0x0)) goto code_?;
        e = (EditorStateMachine *)pMVar22[1].fields.ownerActorNr;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively
                  ((Transform *)e,0,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        func_?(&TypeInfo__MVCubeModelBase);
        cRam_? = '\x01';
      }
      if ((((this->fields).targetCubeModelId != -1) &&
          (pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
          pMVar20 != (MVWorldObjectClientManager *)0x0)) &&
         (targetCubeModel =
               (MVCubeModelBase *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar20,(this->fields).targetCubeModelId,(MethodInfo *)0x0),
         e = (EditorStateMachine *)TypeInfo__MVCubeModelBase,
         targetCubeModel != (MVCubeModelBase *)0x0)) {
        bVar5 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
        pMVar21 = TypeInfo__MVCubeModelBase;
        if (((targetCubeModel->klass->_1).naturalAligment < bVar5) ||
           ((MVCubeModelBase__Class *)(targetCubeModel->klass->_1).typeHierarchy[bVar5 - 1] !=
            TypeInfo__MVCubeModelBase)) goto code_?;
        t = (targetCubeModel->fields)._.transform;
        if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(t,1,(MethodInfo *)0x0);
        e = (EditorStateMachine *)(this->fields).CMSM;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVCubeModelBase);
          cRam_? = '\x01';
        }
        if ((this->fields).targetCubeModelId == -1) {
          targetCubeModel = (MVCubeModelBase *)0x0;
        }
        else {
          pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (pMVar20 == (MVWorldObjectClientManager *)0x0) goto code_?;
          targetCubeModel =
               (MVCubeModelBase *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar20,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
          if (targetCubeModel != (MVCubeModelBase *)0x0) {
            bVar5 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
            pMVar21 = TypeInfo__MVCubeModelBase;
            if (((targetCubeModel->klass->_1).naturalAligment < bVar5) ||
               ((MVCubeModelBase__Class *)(targetCubeModel->klass->_1).typeHierarchy[bVar5 - 1] !=
                TypeInfo__MVCubeModelBase)) goto code_?;
          }
        }
        if (((MVCubeModelBase__Class *)e != (MVCubeModelBase__Class *)0x0) &&
           ((CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                       ((CubeModelingStateMachine *)e,targetCubeModel,(this->fields).constraint,
                        (MethodInfo *)0x0), _UNK_? != (MainCameraManager *)0x0 &&
            (pCVar23 = (_UNK_?->fields).mainCamera, pCVar23 != (Camera *)0x0)))) {
          iVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                             (pCVar23,(MethodInfo *)0x0);
          (this->fields).mainCameraDefaultMask = iVar8;
          if ((_UNK_? != (MainCameraManager *)0x0) &&
             ((pCVar23 = (_UNK_?->fields).mainCamera, pCVar23 != (Camera *)0x0 &&
              (UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                         (pCVar23,0,(MethodInfo *)0x0), _UNK_? != (MainCameraManager *)0x0))))
          {
            MainCameraManager::MainCameraManager_set_BlueModeEnabled
                      (_UNK_?,1,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            if (cRam_? == '\0') {
              func_?(&TypeInfo__MVCubeModelBase);
              cRam_? = '\x01';
            }
            if ((((this->fields).targetCubeModelId != -1) &&
                (pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
                pMVar20 != (MVWorldObjectClientManager *)0x0)) &&
               (targetCubeModel =
                     (MVCubeModelBase *)
                     MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (pMVar20,(this->fields).targetCubeModelId,(MethodInfo *)0x0),
               e = (EditorStateMachine *)TypeInfo__MVCubeModelBase,
               targetCubeModel != (MVCubeModelBase *)0x0)) {
              bVar5 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
              pMVar21 = TypeInfo__MVCubeModelBase;
              if (((targetCubeModel->klass->_1).naturalAligment < bVar5) ||
                 ((MVCubeModelBase__Class *)(targetCubeModel->klass->_1).typeHierarchy[bVar5 - 1] !=
                  TypeInfo__MVCubeModelBase)) goto code_?;
              pGVar18 = (targetCubeModel->fields)._.gameObject;
              if (pGVar18 != (GameObject *)0x0) {
                pFVar24 = (FirstTimeCubeModelBlinker *)
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_AddComponent_1
                                    (pGVar18,
                                     FirstTimeCubeModelBlinker_MethodInfo__UnityEngine__GameObject__AddComponent<FirstTimeCubeModelBlinker>__
                                    );
                ppFVar25 = &(this->fields).blinker;
                *ppFVar25 = pFVar24;
                func_?(ppFVar25);
                pFVar24 = *ppFVar25;
                if (cRam_? == '\0') {
                  func_?(&TypeInfo__PrefabPool);
                  cRam_? = '\x01';
                }
                pPVar26 = TypeInfo__PrefabPool->static_fields->instance;
                e = (EditorStateMachine *)0x0;
                if (pPVar26 != (PrefabPool *)0x0) {
                  e = (EditorStateMachine *)(pPVar26->fields).blinkerDefaultMaterial;
                  this_03 = (Material *)func_?(TypeInfo__UnityEngine__Material);
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                            (this_03,(Material *)e,(MethodInfo *)0x0);
                  this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                      ((MethodInfo *)0x0);
                  if (this_04 != (MainCameraManager *)0x0) {
                    e = (EditorStateMachine *)
                        MainCameraManager::MainCameraManager_get_SecondaryCamera
                                  (this_04,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      func_?(&TypeInfo__MVCubeModelBase);
                      cRam_? = '\x01';
                    }
                    if ((this->fields).targetCubeModelId == -1) {
                      targetCubeModel = (MVCubeModelBase *)0x0;
                    }
                    else {
                      pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                          ((MethodInfo *)0x0);
                      if (pMVar20 == (MVWorldObjectClientManager *)0x0) goto code_?;
                      targetCubeModel =
                           (MVCubeModelBase *)
                           MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                     (pMVar20,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
                      if (targetCubeModel != (MVCubeModelBase *)0x0) {
                        bVar5 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
                        pMVar21 = TypeInfo__MVCubeModelBase;
                        if (((targetCubeModel->klass->_1).naturalAligment < bVar5) ||
                           ((MVCubeModelBase__Class *)
                            (targetCubeModel->klass->_1).typeHierarchy[bVar5 - 1] !=
                            TypeInfo__MVCubeModelBase)) goto code_?;
                      }
                    }
                    if (pFVar24 != (FirstTimeCubeModelBlinker *)0x0) {
                      FirstTimeCubeModelBlinker::FirstTimeCubeModelBlinker_Initialize
                                (pFVar24,this_03,(Camera *)e,targetCubeModel,(MethodInfo *)0x0);
                      if (*ppFVar25 != (FirstTimeCubeModelBlinker *)0x0) {
                        ((*ppFVar25)->fields)._.visible = 1;
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
  }
  else {
    bVar5 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    if ((bVar5 <= (pMVar1->klass->_1).naturalAligment) &&
       ((MVCubeModelBase__Class *)(pMVar1->klass->_1).typeHierarchy[bVar5 - 1] ==
        TypeInfo__MVCubeModelBase)) {
      iVar8 = (pMVar1->fields)._.id;
      goto code_?;
    }
code_?:
    func_?();
    targetCubeModel = extraout_EDX;
    pMVar21 = (MVCubeModelBase__Class *)e;
  }
code_?:
  func_?(targetCubeModel,pMVar21);
code_?:
  func_?();
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_Execute
               (CEEditCubeTutorial *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__EditorEvent);
    func_?(&StringLiteral_Hiding_cursor);
    cRam_? = '\x01';
  }
  this_00 = this;
  if ((this->fields).exiting == 0) {
    pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
    bVar2 = 1 - (pMVar1 != (MVCubeModelBase *)0x0);
  }
  else {
    bVar2 = 1;
  }
  (this_00->fields).exiting = bVar2;
  if (bVar2 == 0) {
    if ((this_00->fields).hasExited != 0) {
      return;
    }
    pCVar3 = (this_00->fields).resettingBookkeeping;
    if (pCVar3 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
      if ((((pCVar3->fields).doReset != 0) || ((this_00->fields).disableCubeModeling != 0)) &&
         (bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_get_visible
                            ((MethodInfo *)0x0), bVar2 != 0)) {
        pCVar3 = (this_00->fields).resettingBookkeeping;
        if (pCVar3 == (CEEditCubeTutorial_ResettingBookkeeping *)0x0) goto code_?;
        if ((pCVar3->fields).doReset != 0) {
          (pCVar3->fields).doReset = 0;
          (pCVar3->fields).isResetting = 1;
          iVar4 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
          (pCVar3->fields).resettingBeginTime = iVar4;
        }
        pCVar5 = (this_00->fields).CMSM;
        if (pCVar5 == (CubeModelingStateMachine *)0x0) goto code_?;
        CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                  (pCVar5,0,(MethodInfo *)0x0);
        (this_00->fields).disableCubeModeling = 0;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          method = (MethodInfo *)TypeInfo__UnityEngine__Debug;
          e = (EditorStateMachine *)&UNK_?;
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Hiding_cursor,(MethodInfo *)0x0);
      }
      pCVar3 = (this_00->fields).resettingBookkeeping;
      if (pCVar3 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
        if ((pCVar3->fields).isResetting == 0) {
          if ((this_00->fields).enableCubemodeling == 0) {
            UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                      (1,(MethodInfo *)0x0);
            return;
          }
          if ((e != (EditorStateMachine *)0x0) &&
             (pCVar5 = (e->fields).cubeModelingStateMachine,
             pCVar5 != (CubeModelingStateMachine *)0x0)) {
            (*(code *)(pCVar5->klass->vtable).Update.method)(pCVar5,pCVar5->klass[1]._0.image);
            return;
          }
        }
        else {
          bVar2 = CEEditCubeTutorial_DoReset(this_00,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            return;
          }
          pCVar3 = (this_00->fields).resettingBookkeeping;
          if (pCVar3 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
            (pCVar3->fields).isResetting = 0;
            return;
          }
        }
      }
    }
  }
  else {
    this = (CEEditCubeTutorial *)0x39;
    value = (Object *)func_?(TypeInfo__EditorEvent,&this);
    if (e != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
      (this_00->fields).hasExited = 1;
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_Exit
               (CEEditCubeTutorial *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_EditCubeChange>);
    func_?(&
                    TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                   );
    func_?(&MethodInfo__CEEditCubeTutorial__OnEditCubeChange_int__EditCubeChange_);
    func_?(&
                    MethodInfo__CEEditCubeTutorial__SetFirstTimeEventsHappened_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&TypeInfo__CubeModelTool);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__CEEditCubeTutorial____c__DisplayClass28_0___Exit_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__CEEditCubeTutorial____c__DisplayClass28_0);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__CEEditCubeTutorial____c__DisplayClass28_0;
  obj = (Action_2_Int32_EditCubeChange___Class *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)obj,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (((esm != (EditorStateMachine *)0x0) &&
      (pMVar1 = (esm->fields).weCamera, pMVar1 != (MainCameraManager *)0x0)) &&
     (this_00 = (pMVar1->fields).mainCamera, this_00 != (Camera *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
              (this_00,(this->fields).mainCameraDefaultMask,(MethodInfo *)0x0);
    if (obj != (Action_2_Int32_EditCubeChange___Class *)0x0) {
      ppcVar2 = &(obj->_0).name;
      *ppcVar2 = (char *)::StringLiteral__;
      func_?(ppcVar2,::StringLiteral__);
      pMVar3 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
      MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar3 != (MVCubeModelBase *)0x0) {
        ppcVar2 = &(obj->_0).name;
        cVar4 = (*(code *)(pMVar3->klass->vtable).Delete.method)
                          (pMVar3,ppcVar2,ppcVar2,(pMVar3->klass->vtable).get_Visible.methodPtr);
        if (cVar4 == '\0') {
          root = (GameObject *)&UNK_?;
          callbackFunction =
               (ExecuteEvents_EventFunction_1_System_Object_ *)
               func_?(
                              TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                              );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)obj,
                     MethodInfo__CEEditCubeTutorial____c__DisplayClass28_0___Exit_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                     ,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor ==
              0) {
            func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,callbackFunction,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                    );
        }
        this_01 = (this->fields).constraintVisualizer;
        if (this_01 != (ConstraintVisualizer *)0x0) {
          obj = (Action_2_Int32_EditCubeChange___Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_01,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
          pGVar5 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                             ((MethodInfo *)0x0);
          if ((pGVar5 != (GameEventManager *)0x0) &&
             (this_02 = (pGVar5->fields).AvatarCommandsBuildMode,
             this_02 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) {
            UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::KeyboardNavigationManipulator
            ::KeyboardNavigationManipulator_Invoke
                      ((KeyboardNavigationManipulator *)this_02,(this->fields)._.stateType,
                       (EventBase *)0x0,(MethodInfo *)0x0);
            pCVar6 = (esm->fields).cubeModelingStateMachine;
            if (pCVar6 != (CubeModelingStateMachine *)0x0) {
              CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors
                        (pCVar6,(MethodInfo *)0x0);
              pCVar6 = (esm->fields).cubeModelingStateMachine;
              if (pCVar6 != (CubeModelingStateMachine *)0x0) {
                CubeModelingStateMachine::CubeModelingStateMachine_EndEdit(pCVar6,(MethodInfo *)0x0)
                ;
                ppMVar7 = &(this->fields).selectedInstance;
                (this->fields).targetCubeModelId = -1;
                *ppMVar7 = (MVCubeModelInstance *)0x0;
                func_?(ppMVar7,0);
                EditorStateMachine::EditorStateMachine_DeSelectAll(esm,(MethodInfo *)0x0);
                this_03 = (EventHandler_1_Object_ *)
                          func_?(
                                         TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                                         );
                mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                          (this_03,(Object *)this,
                           MethodInfo__CEEditCubeTutorial__SetFirstTimeEventsHappened_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                           ,(MethodInfo *)0x0);
                FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
                          ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                            *)this_03,(MethodInfo *)0x0);
                pAVar8 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
                this_04 = (UnityAction_2_System_Int32_System_Int32_ *)
                          func_?(TypeInfo__System__Action<int,_EditCubeChange>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System
                ::Int32]::UnityAction_2_System_Int32_System_Int32___ctor
                          (this_04,(Object *)this,
                           MethodInfo__CEEditCubeTutorial__OnEditCubeChange_int__EditCubeChange_,
                           (MethodInfo *)0x0);
                esm = (EditorStateMachine *)
                      mscorlib.dll::System::Delegate::Delegate_Remove
                                ((Delegate *)pAVar8,(Delegate *)this_04,(MethodInfo *)0x0);
                obj = TypeInfo__System__Action<int,_EditCubeChange>;
                if (esm == (EditorStateMachine *)0x0) {
                  TypeInfo__CubeModelTool->static_fields->OnEditCubeChange =
                       (Action_2_Int32_EditCubeChange_ *)0x0;
                  pAStack9 = (Action_2_Int32_EditCubeChange___Class *)0x0;
code_?:
                  pEStack10 =
                       (EditorStateMachine *)
                       &TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
                  func_?();
                  (this->fields).blinker = (FirstTimeCubeModelBlinker *)0x0;
                  puStack11 = (undefined *)0x0;
                  func_?();
                  return;
                }
                pAStack9 = TypeInfo__System__Action<int,_EditCubeChange>;
                pEStack10 = esm;
                pAVar8 = (Action_2_Int32_EditCubeChange_ *)func_?();
                if (pAVar8 != (Action_2_Int32_EditCubeChange_ *)0x0) {
                  TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar8;
                  obj = TypeInfo__System__Action<int,_EditCubeChange>;
                  pAStack9 = TypeInfo__System__Action<int,_EditCubeChange>;
                  pEStack10 = esm;
                  pAStack9 = (Action_2_Int32_EditCubeChange___Class *)func_?();
                  if (pAStack9 != (Action_2_Int32_EditCubeChange___Class *)0x0)
                  goto code_?;
                }
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  pEStack10 = esm;
  pAStack9 = obj;
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Dictionary`2[EditCubeChange,System.Boolean] GetFirstTimeEventCheck() */

Dictionary_2_EditCubeChange_System_Boolean_ *
Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_GetFirstTimeEventCheck
          (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>);
    cRam_? = '\x01';
  }
  bVar1 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_TryExtrudingCube,(MethodInfo *)0x0);
  bVar2 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_TryTiltingCube,(MethodInfo *)0x0);
  bVar3 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_TryTiltingCorner,(MethodInfo *)0x0);
  bVar4 = FirstTimeEventManager::FirstTimeEventManager_HasFirstTimeEventOccured
                    (FirstTimeEvent__Enum_BM_TryAddingCube,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Dictionary__
            );
  if (this_00 != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Boolean]::
    Dictionary_2_System_Int32Enum_System_Boolean__Add
              ((Dictionary_2_System_Int32Enum_System_Boolean_ *)this_00,3,bVar1 == 0,
               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Boolean]::
    Dictionary_2_System_Int32Enum_System_Boolean__Add
              ((Dictionary_2_System_Int32Enum_System_Boolean_ *)this_00,2,bVar2 == 0,
               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Boolean]::
    Dictionary_2_System_Int32Enum_System_Boolean__Add
              ((Dictionary_2_System_Int32Enum_System_Boolean_ *)this_00,1,bVar3 == 0,
               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Boolean]::
    Dictionary_2_System_Int32Enum_System_Boolean__Add
              ((Dictionary_2_System_Int32Enum_System_Boolean_ *)this_00,5,bVar4 == 0,
               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
              );
    return (Dictionary_2_EditCubeChange_System_Boolean_ *)this_00;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pDVar6 = (Dictionary_2_EditCubeChange_System_Boolean_ *)(*pcVar5)();
  return pDVar6;
}


/* Void HandleCubeModelingEnabling(FirstTimeEvent) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_HandleCubeModelingEnabling
               (CEEditCubeTutorial *this,FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CEEditCubeTutorial);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__CEEditCubeTutorial->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CEEditCubeTutorial);
  }
  pHVar1 = (HashSet_1_System_Int32Enum_ *)
           TypeInfo__CEEditCubeTutorial->static_fields->enableCubeModelingEvents;
  if (pHVar1 != (HashSet_1_System_Int32Enum_ *)0x0) {
    bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (pHVar1,firstTimeEvent,
                       MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                      );
    if (bVar2 != 0) {
      this_00 = (this->fields).CMSM;
      (this->fields).disableCubeModeling = 0;
      (this->fields).enableCubemodeling = 1;
      if (this_00 == (CubeModelingStateMachine *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                (this_00,1,(MethodInfo *)0x0);
    }
    if ((TypeInfo__CEEditCubeTutorial->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CEEditCubeTutorial);
    }
    pHVar1 = (HashSet_1_System_Int32Enum_ *)
             TypeInfo__CEEditCubeTutorial->static_fields->disableCubeModelingEvents;
    if (pHVar1 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (pHVar1,firstTimeEvent,
                         MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                        );
      if (bVar2 != 0) {
        (this->fields).disableCubeModeling = 1;
        (this->fields).enableCubemodeling = 0;
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEditCubeChange(Int32, EditCubeChange) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_OnEditCubeChange
               (CEEditCubeTutorial *this,int32_t cubeCount,EditCubeChange__Enum editCubeChange,
               MethodInfo *method)

{
  if ((this->fields).bordersExpanded == 0) {
    this_00 = (this->fields).resettingBookkeeping;
    if (this_00 == (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
      uVar1 = func_?(&stack0xfffffff0);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    CEEditCubeTutorial+ResettingBookkeeping::
    CEEditCubeTutorial_ResettingBookkeeping_InitializeResetting(this_00,400,(MethodInfo *)0x0);
  }
  return;
}


/* Void SetFirstTimeEventsHappened(FirstTimeState, FirstTimeEvent) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_SetFirstTimeEventsHappened
               (CEEditCubeTutorial *this,FirstTimeState *firstTimeState,
               FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff98;
  puVar5 = &stack0xffffff98;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CEEditCubeTutorial);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__get_Item_EditCubeChange_
                   );
    func_?(&TypeInfo__EditableCubeModelWrapper);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EditCubeChange,_bool>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EditCubeChange,_bool>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EditCubeChange,_bool>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<EditCubeChange,_bool>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<EditCubeChange,_bool>__get_Value__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CEEditCubeTutorial);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__CEEditCubeTutorial->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CEEditCubeTutorial);
  }
  pHVar6 = (HashSet_1_System_Int32Enum_ *)
           TypeInfo__CEEditCubeTutorial->static_fields->enableCubeModelingEvents;
  if (pHVar6 != (HashSet_1_System_Int32Enum_ *)0x0) {
    bVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
            HashSet_1_System_Int32Enum__Contains
                      (pHVar6,firstTimeEvent,
                       MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                      );
    if (bVar7 != 0) {
      this_00 = (this->fields).CMSM;
      (this->fields).disableCubeModeling = 0;
      (this->fields).enableCubemodeling = 1;
      if (this_00 == (CubeModelingStateMachine *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                (this_00,1,(MethodInfo *)0x0);
    }
    if ((TypeInfo__CEEditCubeTutorial->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CEEditCubeTutorial);
    }
    pHVar6 = (HashSet_1_System_Int32Enum_ *)
             TypeInfo__CEEditCubeTutorial->static_fields->disableCubeModelingEvents;
    if (pHVar6 != (HashSet_1_System_Int32Enum_ *)0x0) {
      bVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
              HashSet_1_System_Int32Enum__Contains
                        (pHVar6,firstTimeEvent,
                         MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                        );
      if (bVar7 != 0) {
        (this->fields).disableCubeModeling = 1;
        (this->fields).enableCubemodeling = 0;
      }
      if ((TypeInfo__CEEditCubeTutorial->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pHVar6 = (HashSet_1_System_Int32Enum_ *)
               TypeInfo__CEEditCubeTutorial->static_fields->successEvents;
      if (pHVar6 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          (pHVar6,firstTimeEvent,
                           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                          );
        if (bVar7 != 0) {
          this_01 = (this->fields).blinker;
          if (this_01 == (FirstTimeCubeModelBlinker *)0x0) goto code_?;
          BlinkerBase::BlinkerBase_StartBlinking
                    ((BlinkerBase *)this_01,BlinkType__Enum_OnBoardingCubeModelSuccess,2.0,
                     (MethodInfo *)0x0);
        }
        pDStack_8 = (Dictionary_2_System_UInt32_System_Object_ *)
                     (this->fields).firstTimeEventChangeCheck;
        ppDVar9 = &(this->fields).firstTimeEventChangeCheck;
        pDVar10 = CEEditCubeTutorial_GetFirstTimeEventCheck(this,(MethodInfo *)0x0);
        *ppDVar9 = pDVar10;
        func_?(ppDVar9,pDVar10);
        bVar11 = true;
        if (pDStack_8 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
          pDVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
                    Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                              ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                               &stack0xffffffa4,pDStack_8,
                               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__GetEnumerator__
                              );
          uVar13 = (pDVar12->_current).key;
          uVar14 = (undefined2)uVar13;
          uStack_15 = (undefined2)(uVar13 >> 0x10);
          pDVar16 = (Dictionary_2_System_UInt32_System_Object_ *)(pDVar12->_current).value;
          uStack_1 = 1;
          while( true ) {
            bVar7 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Byte]::
                    Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Byte__MoveNext
                              ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Byte_ *)
                               &stack0xffffffbc,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EditCubeChange,_bool>__MoveNext__
                              );
            if (bVar7 == 0) break;
            IStack_17._0_4_ = CONCAT22(uStack_15,uVar14);
            pDVar10 = (this->fields).firstTimeEventChangeCheck;
            pDStack_8 = pDVar16;
            if (pDVar10 == (Dictionary_2_EditCubeChange_System_Boolean_ *)0x0)
            goto code_?;
            uVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Byte]::Dictionary_2_System_Int32Enum_System_Byte__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Byte_ *)pDVar10,IStack_17._0_4_
                               ,
                               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__get_Item_EditCubeChange_
                              );
            if (uVar18 != (uint8_t)pDStack_8) {
              in_stack_19 = (MethodInfo *)(this->fields).resettingBookkeeping;
              if (in_stack_19 == (MethodInfo *)0x0) goto code_?;
              CEEditCubeTutorial+ResettingBookkeeping::
              CEEditCubeTutorial_ResettingBookkeeping_InitializeResetting
                        ((CEEditCubeTutorial_ResettingBookkeeping *)in_stack_19,2000,
                         (MethodInfo *)0x0);
            }
            pDVar10 = (this->fields).firstTimeEventChangeCheck;
            if (pDVar10 == (Dictionary_2_EditCubeChange_System_Boolean_ *)0x0)
            goto code_?;
            uVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Byte]::Dictionary_2_System_Int32Enum_System_Byte__get_Item
                              ((Dictionary_2_System_Int32Enum_System_Byte_ *)pDVar10,IStack_17._0_4_
                               ,
                               MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__get_Item_EditCubeChange_
                              );
            if (uVar18 != 0) {
              bVar11 = false;
            }
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                    ((Object *)&stack0xffffffbc,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EditCubeChange,_bool>__Dispose__
                     ,in_stack_19);
          uStack_1 = 0xffffffff;
          if (bVar11) {
            if ((this->fields).bordersExpanded == 0) {
              (this->fields).bordersExpanded = 1;
              cubeModelBase = (this->fields).selectedInstance;
              uVar20 = 0;
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                        ((IntVector *)&stack0xffffffd4,-0xf,-0xf,-0xf,(MethodInfo *)0x0);
              IStack_17.x = 0;
              IStack_17.y = 0;
              IStack_17.z = 0;
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                        (&IStack_17,0xf,0xf,0xf,(MethodInfo *)0x0);
              this_02 = (EditableCubeModelWrapper *)func_?();
              min.z = 0;
              min.x = (short)uVar20;
              min.y = (short)(uVar20 >> 0x10);
              max.z = IStack_17.z;
              max.x = IStack_17.x;
              max.y = IStack_17.y;
              EditableCubeModelWrapper::EditableCubeModelWrapper__ctor_1
                        (this_02,cubeModelBase,min,max,1,(MethodInfo *)0x0);
              (this->fields).cubeModelWrapper = this_02;
              func_?();
              CEEditCubeTutorial_SetFocus(this,(this->fields).multiCubeDistance,(MethodInfo *)0x0);
              this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                  ((MethodInfo *)0x0);
              if (this_03 != (MainCameraManager *)0x0) {
                MainCameraManager::MainCameraManager_StartTransitionCam
                          (this_03,1.0,0,(MethodInfo *)0x0);
                pCVar21 = (this->fields).constraintVisualizer;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                  ((Object_1 *)pCVar21,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar7 != 0) {
                  pCVar21 = (this->fields).constraintVisualizer;
                  if (pCVar21 == (ConstraintVisualizer *)0x0) goto code_?;
                  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pCVar21,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                            ((Object_1 *)obj,(MethodInfo *)0x0);
                }
                CEEditCubeTutorial_CreateConstraint(this,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = uStack_3;
                return;
              }
              goto code_?;
            }
          }
          else if ((this->fields).bordersExpanded == 0) {
            CEEditCubeTutorial_SetFocus(this,(this->fields).oneCubeDistance,(MethodInfo *)0x0);
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
      }
    }
  }
code_?:
  uVar22 = func_?();
  func_?(uVar22);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void SetFocus(Single) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_SetFocus
               (CEEditCubeTutorial *this,float distance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__JetPackCamera);
    cRam_? = '\x01';
  }
  pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
  if ((pMVar1 != (MVCubeModelBase *)0x0) &&
     (pTVar2 = (pMVar1->fields)._.transform, pTVar2 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
    pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
    if ((pMVar1 != (MVCubeModelBase *)0x0) &&
       (pTVar2 = (pMVar1->fields)._.transform, pTVar2 != (Transform *)0x0)) {
      pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffd4,pTVar2,(MethodInfo *)0x0);
      pVVar4 = &(this->fields).focusOffset;
      fVar5 = pVVar4->y;
      fVar6 = (this->fields).focusOffset.z;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffffd8,*pQVar3,*pVVar4,(MethodInfo *)0x0);
      uVar7 = pVVar4->y;
      fVar8 = pVVar4->z;
      this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_00 != (MainCameraManager *)0x0) {
        this_01 = (JetPackCamera *)
                  MainCameraManager::MainCameraManager_get_CurrentCamera(this_00,(MethodInfo *)0x0);
        pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
        if (pMVar1 != (MVCubeModelBase *)0x0) {
          pVVar4 = (Vector3 *)(*(code *)(pMVar1->klass->vtable).get_WorldPivot.method)();
          if (this_01 != (JetPackCamera *)0x0) {
            bVar9 = (TypeInfo__JetPackCamera->_1).naturalAligment;
            if ((bVar9 <= (this_01->klass->_1).naturalAligment) &&
               ((this_01->klass->_1).typeHierarchy[bVar9 - 1] ==
                (Il2CppClass *)TypeInfo__JetPackCamera)) {
              auVar10._4_4_ = fVar6 + fVar8 * distance;
              auVar10._0_4_ = fVar5 + (float)uVar7 * distance;
              auVar10._8_4_ = 0;
              JetPackCamera::JetPackCamera_FocusOnPointFromAvatarPosition
                        (this_01,*pVVar4,(Vector3)(auVar10 << 0x20),(MethodInfo *)0x0);
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void SetupBlinker() */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_SetupBlinker
               (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    FirstTimeCubeModelBlinker_MethodInfo__UnityEngine__GameObject__AddComponent<FirstTimeCubeModelBlinker>__
                   );
    func_?(&TypeInfo__UnityEngine__Material);
    cRam_? = '\x01';
  }
  pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
  if ((pMVar1 != (MVCubeModelBase *)0x0) &&
     (this_00 = (pMVar1->fields)._.gameObject, this_00 != (GameObject *)0x0)) {
    pFVar2 = (FirstTimeCubeModelBlinker *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (this_00,
                        FirstTimeCubeModelBlinker_MethodInfo__UnityEngine__GameObject__AddComponent<FirstTimeCubeModelBlinker>__
                       );
    ppFVar3 = &(this->fields).blinker;
    *ppFVar3 = pFVar2;
    func_?(ppFVar3,pFVar2);
    pFVar2 = *ppFVar3;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar4 != (PrefabPool *)0x0) {
      source = (pPVar4->fields).blinkerDefaultMaterial;
      this_01 = (Material *)func_?(TypeInfo__UnityEngine__Material);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                (this_01,source,(MethodInfo *)0x0);
      this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_02 != (MainCameraManager *)0x0) {
        targetCamera = MainCameraManager::MainCameraManager_get_SecondaryCamera
                                 (this_02,(MethodInfo *)0x0);
        pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
        if (pFVar2 != (FirstTimeCubeModelBlinker *)0x0) {
          FirstTimeCubeModelBlinker::FirstTimeCubeModelBlinker_Initialize
                    (pFVar2,this_01,targetCamera,pMVar1,(MethodInfo *)0x0);
          if (*ppFVar3 != (FirstTimeCubeModelBlinker *)0x0) {
            ((*ppFVar3)->fields)._.visible = 1;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <Enter>b__23_0(IHandleCubeEditTutorial, BaseEventData) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial__Enter_b__23_0
               (CEEditCubeTutorial *this,IHandleCubeEditTutorial *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__CEEditCubeTutorial__OnClosed__);
    func_?(&TypeInfo__UnityEngine__EventSystems__IHandleCubeEditTutorial);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction);
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__CEEditCubeTutorial__OnClosed__,(MethodInfo *)0x0);
  if (handler == (IHandleCubeEditTutorial *)0x0) {
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
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IHandleCubeEditTutorial) {
        ppMVar5 = &(&handler->klass->vtable)[pIVar2->interfaceOffsets[uVar3].offset].
                   PushCubeEditCubeTutorialTools.method;
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  ppMVar5 = (MethodInfo **)
            func_?(handler,TypeInfo__UnityEngine__EventSystems__IHandleCubeEditTutorial,0);
code_?:
  (*(code *)*ppMVar5)(handler,ppMVar5[1]);
  return;
}


/* CEEditCubeTutorial() */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CEEditCubeTutorial);
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__HashSet__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>
                   );
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_Int32Enum_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
  HashSet_1_System_Int32Enum___ctor
            (pHVar1,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__HashSet__
            );
  if (pHVar1 != (HashSet_1_System_Int32Enum_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum__System_Collections_Generic_ICollection_T__Add
              (pHVar1,0x7a,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum__System_Collections_Generic_ICollection_T__Add
              (pHVar1,0x79,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum__System_Collections_Generic_ICollection_T__Add
              (pHVar1,0x7d,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum__System_Collections_Generic_ICollection_T__Add
              (pHVar1,0x78,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum__System_Collections_Generic_ICollection_T__Add
              (pHVar1,0x8d,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum__System_Collections_Generic_ICollection_T__Add
              (pHVar1,0x8e,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum__System_Collections_Generic_ICollection_T__Add
              (pHVar1,0x8f,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
              );
    TypeInfo__CEEditCubeTutorial->static_fields->successEvents =
         (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)pHVar1;
    func_?();
    pHVar1 = (HashSet_1_System_Int32Enum_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum___ctor
              (pHVar1,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__HashSet__
              );
    if (pHVar1 != (HashSet_1_System_Int32Enum_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
      HashSet_1_System_Int32Enum__System_Collections_Generic_ICollection_T__Add
                (pHVar1,0x8d,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                );
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
      HashSet_1_System_Int32Enum__System_Collections_Generic_ICollection_T__Add
                (pHVar1,0x8e,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                );
      TypeInfo__CEEditCubeTutorial->static_fields->disableCubeModelingEvents =
           (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)pHVar1;
      func_?(&TypeInfo__CEEditCubeTutorial->static_fields->disableCubeModelingEvents);
      pHVar1 = (HashSet_1_System_Int32Enum_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>
                              );
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
      HashSet_1_System_Int32Enum___ctor
                (pHVar1,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__HashSet__
                );
      if (pHVar1 != (HashSet_1_System_Int32Enum_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
        HashSet_1_System_Int32Enum__System_Collections_Generic_ICollection_T__Add
                  (pHVar1,0x7c,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                  );
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
        HashSet_1_System_Int32Enum__System_Collections_Generic_ICollection_T__Add
                  (pHVar1,0x77,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                  );
        TypeInfo__CEEditCubeTutorial->static_fields->enableCubeModelingEvents =
             (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)pHVar1;
        func_?(&TypeInfo__CEEditCubeTutorial->static_fields->enableCubeModelingEvents);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CEEditCubeTutorial() */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial__ctor
               (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>);
    func_?(&TypeInfo__CEEditCubeTutorial__ResettingBookkeeping);
    cRam_? = '\x01';
  }
  (this->fields).targetCubeModelId = -1;
  (this->fields).oneCubeDistance = 4.0;
  (this->fields).multiCubeDistance = 16.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_2.x = (pVVar1->rightVector).x;
  VStack_2.y = (pVVar1->rightVector).y;
  VStack_2.z = (pVVar1->rightVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_3._0_4_ = (pVVar1->upVector).x;
  uStack_3._4_4_ = (pVVar1->upVector).y;
  puStack_4 = (undefined *)(pVVar1->upVector).z;
  fVar5 = (float)(undefined4)uStack_3 + VStack_2.x;
  fVar6 = (float)uStack_3._4_4_ + VStack_2.y;
  fVar7 = (float)puStack_4 + VStack_2.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_2.x = (pVVar1->backVector).x;
  VStack_2.y = (pVVar1->backVector).y;
  VStack_2.z = (pVVar1->backVector).z + fVar7;
  value.y = VStack_2.y + fVar6;
  value.x = VStack_2.x + fVar5;
  value.z = VStack_2.z;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_2,value,(MethodInfo *)0x0);
  fVar6 = pVVar8->y;
  fVar5 = pVVar8->z;
  (this->fields).focusOffset.x = pVVar8->x;
  (this->fields).focusOffset.y = fVar6;
  (this->fields).focusOffset.z = fVar5;
  uVar9._0_2_ = 0;
  uVar9._2_2_ = 0;
  iVar10 = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&stack0xffffffec,0,0,0,(MethodInfo *)0x0);
  (this->fields).zeroPos.x = (int16_t)uVar9;
  (this->fields).zeroPos.y = SUB42(uVar9,2);
  (this->fields).zeroPos.z = iVar10;
  this_00 = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Dictionary__
            );
  ppDVar11 = &(this->fields).firstTimeEventChangeCheck;
  *ppDVar11 = (Dictionary_2_EditCubeChange_System_Boolean_ *)this_00;
  func_?(ppDVar11,this_00);
  value_00 = (CEEditCubeTutorial_ResettingBookkeeping *)
             func_?(TypeInfo__CEEditCubeTutorial__ResettingBookkeeping);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)value_00,ExceptionArgument__Enum_obj,unaff_EBP);
  (this->fields).resettingBookkeeping = value_00;
  func_?();
  (this->fields).enableCubemodeling = 1;
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  return;
}


/* MVCubeModelBase get_TargetCubeModel() */

MVCubeModelBase *
Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_get_TargetCubeModel
          (CEEditCubeTutorial *this,MethodInfo *method)

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

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_set_TargetCubeModel
               (CEEditCubeTutorial *this,MVCubeModelBase *value,MethodInfo *method)

{
  if (value == (MVCubeModelBase *)0x0) {
    (this->fields).targetCubeModelId = -1;
    return;
  }
  (this->fields).targetCubeModelId = (value->fields)._._.id;
  return;
}

