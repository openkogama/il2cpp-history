
/* Void CreateConstraint() */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_CreateConstraint
               (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ConstrainVisualizer);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_UIItems);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  name = StringLiteral_ConstrainVisualizer;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (self,name,(MethodInfo *)0x0);
  if (self != (GameObject *)0x0) {
    pCVar1 = (ConstraintVisualizer *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (self,
                        ConstraintVisualizer_MethodInfo__UnityEngine__GameObject__AddComponent<ConstraintVisualizer>__
                       );
    bVar2 = iRam_? != 0;
    (this->fields).constraintVisualizer = pCVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).constraintVisualizer >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pMVar7 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
    if ((pMVar7 != (MVCubeModelBase *)0x0) &&
       (pFVar8 = (pMVar7->fields)._ModelingConstraintBuilder_k__BackingField,
       pFVar8 != (Func_1_IModelingConstraint_ *)0x0)) {
      pIVar9 = (IModelingConstraint *)
               (*(pFVar8->fields)._._.invoke_impl)((pFVar8->fields)._._.method_code);
      bVar2 = iRam_? != 0;
      (this->fields).constraint = pIVar9;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).constraint >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pCVar1 = (this->fields).constraintVisualizer;
      pMVar7 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
      if (pCVar1 != (ConstraintVisualizer *)0x0) {
        ConstraintVisualizer::ConstraintVisualizer_Init
                  (pCVar1,pMVar7,(this->fields).constraint,StringLiteral_UIItems,(MethodInfo *)0x0);
        pCVar10 = (this->fields).CMSM;
        if (pCVar10 != (CubeModelingStateMachine *)0x0) {
          bVar2 = iRam_? != 0;
          (pCVar10->fields).constraint = (this->fields).constraint;
          if (bVar2) {
            uVar3 = (uint)((ulonglong)&(pCVar10->fields).constraint >> 0xc);
            lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
            do {
              uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
              puVar6 = (ulonglong *)(lVar4 + 0xADDR);
              LOCK();
              bVar2 = uVar5 == *puVar6;
              if (bVar2) {
                *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
              }
              UNLOCK();
            } while (!bVar2);
          }
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


/* Boolean DoReset() */

bool Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_DoReset
               (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).resettingBookkeeping;
  if (pCVar1 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
    iVar2 = (pCVar1->fields).resettingBeginTime;
    iVar3 = FUN_?();
    if (iVar3 - iVar2 <= (pCVar1->fields).resettingDelay) {
      return 0;
    }
    pCVar1 = (this->fields).resettingBookkeeping;
    if (pCVar1 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
      (pCVar1->fields).resettingDelay = 0;
      this_00 = (this->fields).CMSM;
      if (this_00 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                  (this_00,1,(MethodInfo *)0x0);
        pEVar4 = (this->fields).cubeModelWrapper;
        if (((pEVar4 != (EditableCubeModelWrapper *)0x0) &&
            (pMVar5 = (pEVar4->fields).cubeModelBase, pMVar5 != (MVCubeModelInstance *)0x0)) &&
           (this_01 = (pMVar5->fields)._.prototypeCubeModel,
           this_01 != (RuntimePrototypeCubeModel *)0x0)) {
          IStackX_8.x = (this->fields).zeroPos.x;
          IStackX_8.y = (this->fields).zeroPos.y;
          IStackX_8.z = (this->fields).zeroPos.z;
          pCVar6 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                             (this_01,&IStackX_8,(MethodInfo *)0x0);
          if ((pCVar6 != (Cube *)0x0) &&
             (pBVar7 = (pCVar6->fields)._.faceMaterials, pBVar7 != (Byte__Array *)0x0)) {
            if ((int)pBVar7->max_length == 0) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              bVar9 = (*pcVar8)();
              return bVar9;
            }
            material = pBVar7->vector[0];
            pEVar4 = (this->fields).cubeModelWrapper;
            if ((pEVar4 != (EditableCubeModelWrapper *)0x0) &&
               (pMVar5 = (pEVar4->fields).cubeModelBase, pMVar5 != (MVCubeModelInstance *)0x0)) {
              IStackX_8.x = (this->fields).zeroPos.x;
              IStackX_8.y = (this->fields).zeroPos.y;
              IStackX_8.z = (this->fields).zeroPos.z;
              MVCubeModelBase::MVCubeModelBase_RemoveCube
                        ((MVCubeModelBase *)pMVar5,&IStackX_8,(MethodInfo *)0x0);
              iVar2 = -1;
              do {
                iVar3 = -1;
                do {
                  iVar10 = -1;
                  do {
                    pEVar4 = (this->fields).cubeModelWrapper;
                    if (pEVar4 == (EditableCubeModelWrapper *)0x0) goto code_?;
                    pMVar5 = (pEVar4->fields).cubeModelBase;
                    IStackX_8.y = (int16_t)iVar3;
                    IStackX_8.x = (int16_t)iVar2;
                    if (pMVar5 == (MVCubeModelInstance *)0x0) goto code_?;
                    IStackX_18.z = (int16_t)iVar10;
                    IStackX_18._0_4_ = IStackX_8._0_4_;
                    MVCubeModelBase::MVCubeModelBase_RemoveCube
                              ((MVCubeModelBase *)pMVar5,&IStackX_18,(MethodInfo *)0x0);
                    iVar10 = iVar10 + 1;
                  } while (iVar10 < 2);
                  iVar3 = iVar3 + 1;
                } while (iVar3 < 2);
                iVar2 = iVar2 + 1;
              } while (iVar2 < 2);
              pEVar4 = (this->fields).cubeModelWrapper;
              if (pEVar4 != (EditableCubeModelWrapper *)0x0) {
                pMVar5 = (pEVar4->fields).cubeModelBase;
                uVar11._0_2_ = (this->fields).zeroPos.x;
                uVar11._2_2_ = (this->fields).zeroPos.y;
                iVar12 = (this->fields).zeroPos.z;
                if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
                  FUN_?();
                }
                corners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                                    ((MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
                  FUN_?();
                }
                pBVar7 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                          CubeDataPacker_CornersToByteArray(corners,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                  FUN_?();
                }
                faceMaterials = Cube::Cube_CreateMaterialArray(material,(MethodInfo *)0x0);
                pCVar6 = (Cube *)FUN_?(TypeInfo__Cube);
                Cube::Cube__ctor(pCVar6,pBVar7,faceMaterials,(MethodInfo *)0x0);
                if (pMVar5 != (MVCubeModelInstance *)0x0) {
                  IStackX_8._0_4_ = uVar11;
                  IStackX_8.z = iVar12;
                  MVCubeModelBase::MVCubeModelBase_AddCube
                            ((MVCubeModelBase *)pMVar5,&IStackX_8,(CubeBase *)pCVar6,
                             (MethodInfo *)0x0);
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_Enter
               (CEEditCubeTutorial *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_EditCubeChange>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CEEditCubeTutorial__OnEditCubeChange_int__EditCubeChange_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CEEditCubeTutorial__SetFirstTimeEventsHappened_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CEEditCubeTutorial___Enter_b__23_0_UnityEngine__EventSystems__IHandleCubeEditTutorial__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CubeModelTool);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVBuildModeAvatarLocal_EditMode__ESEditCubeTutorialData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditableCubeModelWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleCubeEditTutorial>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleCubeEditTutorial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleCubeEditTutorial>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ESEditCubeTutorial_must_not_be_e);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).exiting = 0;
  (this->fields).hasExited = 0;
  if (e == (EditorStateMachine *)0x0) goto code_?;
  pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_ESEditCubeTutorial_must_not_be_e,(MethodInfo *)0x0);
    FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
    return;
  }
  pDVar2 = CEEditCubeTutorial_GetFirstTimeEventCheck(this,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).firstTimeEventChangeCheck = pDVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).firstTimeEventChangeCheck >> 0xc);
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
  }
  pMVar8 = (MVCubeModelInstance *)
            EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  targetCubeModel = (MVCubeModelInstance *)0x0;
  pMVar9 = targetCubeModel;
  if (pMVar8 != (MVCubeModelInstance *)0x0) {
    bVar10 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((pMVar8->klass->_1).naturalAligment < bVar10) ||
       (bVar3 = true,
       (MVCubeModelInstance__Class *)(pMVar8->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
       TypeInfo__MVCubeModelInstance)) {
      bVar3 = false;
    }
    pMVar9 = (MVCubeModelInstance *)0x0;
    if (bVar3) {
      pMVar9 = pMVar8;
    }
  }
  bVar3 = iRam_? != 0;
  (this->fields).selectedInstance = pMVar9;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).selectedInstance >> 0xc);
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
  }
  pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    iVar11 = -1;
  }
  else {
    bVar10 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar10) ||
       ((MVCubeModelBase__Class *)(pMVar1->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
        TypeInfo__MVCubeModelBase)) {
      FUN_?(pMVar1);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar11 = (pMVar1->fields)._.id;
  }
  (this->fields).targetCubeModelId = iVar11;
  bVar3 = iRam_? != 0;
  (this->fields).CMSM = (e->fields).cubeModelingStateMachine;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).CMSM >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pAVar13 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
  pDVar14 = (Delegate *)FUN_?(TypeInfo__System__Action<int,_EditCubeChange>);
  FUN_?(pDVar14,this);
  pDVar14 = mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar13,pDVar14,(MethodInfo *)0x0);
  pAVar15 = TypeInfo__System__Action<int,_EditCubeChange>;
  if (pDVar14 == (Delegate *)0x0) {
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = (Action_2_Int32_EditCubeChange_ *)0x0
    ;
  }
  else {
    pAVar13 = (Action_2_Int32_EditCubeChange_ *)
              FUN_?(pDVar14,TypeInfo__System__Action<int,_EditCubeChange>);
    if (pAVar13 == (Action_2_Int32_EditCubeChange_ *)0x0) {
      FUN_?(pDVar14,pAVar15);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar13;
    pAVar15 = TypeInfo__System__Action<int,_EditCubeChange>;
    lVar5 = FUN_?(pDVar14,TypeInfo__System__Action<int,_EditCubeChange>);
    if (lVar5 == 0) {
      FUN_?(pDVar14,pAVar15);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&TypeInfo__CubeModelTool->static_fields->OnEditCubeChange >> 0xc);
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
  }
  this_01 = (UnityAction_2_System_Object_System_Int32_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Int32]::
  UnityAction_2_System_Object_System_Int32___ctor
            (this_01,(Object *)this,
             MethodInfo__CEEditCubeTutorial__SetFirstTimeEventsHappened_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
             ,(MethodInfo *)0x0);
  FirstTimeEventManager::FirstTimeEventManager_SubscribeToFirstTimeState
            ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
              *)this_01,(MethodInfo *)0x0);
  if ((this->fields).bordersExpanded == 0) {
    pMVar9 = (this->fields).selectedInstance;
    this_02 = (EditableCubeModelWrapper *)FUN_?(TypeInfo__EditableCubeModelWrapper);
    bVar3 = iRam_? != 0;
    IStackX_8.x = 1;
    IStackX_8.y = 1;
    (this_02->fields).cubeModelBase = pMVar9;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&this_02->fields >> 0xc);
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
    }
    if (pMVar9 == (MVCubeModelInstance *)0x0) goto code_?;
    piVar16 = &(pMVar9->fields)._._.interactionFlags;
    *piVar16 = *piVar16 | 0x10;
    IStackX_8.x = 1;
    IStackX_8.y = 1;
    uStackX_10 = 0xffffffff;
    aIStack_17[0].x = -1;
    aIStack_17[0].y = -1;
    IStackX_8.z = 1;
    aIStack_17[0].z = -1;
    EditableCubeModelWrapper::EditableCubeModelWrapper_SetConstraints
              (this_02,aIStack_17,&IStackX_8,0x1b,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).cubeModelWrapper = this_02;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).cubeModelWrapper >> 0xc);
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
    }
  }
  DrawPlane::DrawPlane_HideDrawPlane((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar18 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar18 == (MVGameControllerBase *)0x0) ||
      (pMVar19 = (pMVar18->fields).game, pMVar19 == (MVNetworkGame *)0x0)) ||
     (pGVar20 = (pMVar19->fields).GameEventManager, pGVar20 == (GameEventManager *)0x0))
  goto code_?;
  pGVar21 = (pGVar20->fields).AvatarCommandsBuildMode;
  iVar11 = (this->fields)._.stateType;
  pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) goto code_?;
  iVar22 = (pMVar1->fields)._.id;
  lVar5 = FUN_?(TypeInfo__MVBuildModeAvatarLocal_EditMode__ESEditCubeTutorialData);
  *(int32_t *)(lVar5 + 0x10) = iVar22;
  if (pGVar21 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0) goto code_?;
  if ((pGVar21->fields).OnEnterBuildStateEvent != (Action_2_EditorEvent_Object_ *)0x0) {
    pAVar23 = (pGVar21->fields).OnEnterBuildStateEvent;
    (*(pAVar23->fields)._._.invoke_impl)((pAVar23->fields)._._.method_code,iVar11,lVar5);
  }
  root = (e->fields).gameObject;
  this_03 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleCubeEditTutorial>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_03,(Object *)this,
             MethodInfo__CEEditCubeTutorial___Enter_b__23_0_UnityEngine__EventSystems__IHandleCubeEditTutorial__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,this_03,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleCubeEditTutorial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleCubeEditTutorial>_
            );
  bVar3 = iRam_? != 0;
  (this->fields)._.tintedWo = (WorldObjectClientRef *)0x0;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._.tintedWo >> 0xc);
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
  }
  pCVar24 = (this->fields).constraintVisualizer;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pCVar24 == (ConstraintVisualizer *)0x0) {
code_?:
    CEEditCubeTutorial_CreateConstraint(this,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar24->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).targetCubeModelId != -1) &&
     (pMVar25 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
     pMVar25 != (MVWorldObjectClientManager *)0x0)) {
    pMVar8 = (MVCubeModelInstance *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar25,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    pMVar9 = targetCubeModel;
    if (pMVar8 != (MVCubeModelInstance *)0x0) {
      bVar10 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
      if (((pMVar8->klass->_1).naturalAligment < bVar10) ||
         (pMVar9 = pMVar8,
         (MVCubeModelBase__Class *)(pMVar8->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
         TypeInfo__MVCubeModelBase)) {
        FUN_?(pMVar8,TypeInfo__MVCubeModelBase);
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    if (pMVar9 != (MVCubeModelInstance *)0x0) {
      (*(pMVar9->klass->vtable).RemoveSelectionBox.methodPtr)();
      bVar26 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(e,(MethodInfo *)0x0);
      if (bVar26 == 0) {
        pMVar25 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        pSVar27 = (e->fields).selectionController;
        if (pSVar27 == (SelectionController *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Collections__Generic__Stack<int>__Peek__);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((((pSVar27->fields).parentGroups == (Stack_1_System_Int32_ *)0x0) ||
            (iVar11 = FUN_?(), pMVar25 == (MVWorldObjectClientManager *)0x0)) ||
           (pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                (pMVar25,iVar11,(MethodInfo *)0x0),
           pMVar1 == (MVWorldObjectClient *)0x0)) goto code_?;
        pTVar28 = (pMVar1->fields).transform;
        if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
          FUN_?();
        }
        SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar28,0,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        FUN_?();
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (((this->fields).targetCubeModelId != -1) &&
         (pMVar25 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0),
         pMVar25 != (MVWorldObjectClientManager *)0x0)) {
        pMVar8 = (MVCubeModelInstance *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar25,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
        pMVar9 = targetCubeModel;
        if (pMVar8 != (MVCubeModelInstance *)0x0) {
          bVar10 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
          if (((pMVar8->klass->_1).naturalAligment < bVar10) ||
             (pMVar9 = pMVar8,
             (MVCubeModelBase__Class *)(pMVar8->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] !=
             TypeInfo__MVCubeModelBase)) {
            FUN_?(pMVar8);
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        if (pMVar9 != (MVCubeModelInstance *)0x0) {
          pTVar28 = (pMVar9->fields)._._.transform;
          if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
            FUN_?();
          }
          SharedCubeFunctions::SharedCubeFunctions_SetLayerRecursively(pTVar28,1,(MethodInfo *)0x0);
          this_00 = (this->fields).CMSM;
          if (cRam_? == '\0') {
            FUN_?();
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((this->fields).targetCubeModelId != -1) {
            pMVar25 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (pMVar25 == (MVWorldObjectClientManager *)0x0) goto code_?;
            pMVar9 = (MVCubeModelInstance *)
                      MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                (pMVar25,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
            if (pMVar9 != (MVCubeModelInstance *)0x0) {
              bVar10 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
              if (((pMVar9->klass->_1).naturalAligment < bVar10) ||
                 (targetCubeModel = pMVar9,
                 (MVCubeModelBase__Class *)(pMVar9->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1]
                 != TypeInfo__MVCubeModelBase)) {
                FUN_?(pMVar9);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
            }
          }
          if (this_00 != (CubeModelingStateMachine *)0x0) {
            CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                      (this_00,(MVCubeModelBase *)targetCubeModel,(this->fields).constraint,
                       (MethodInfo *)0x0);
            pMVar29 = (e->fields).weCamera;
            if ((pMVar29 != (MainCameraManager *)0x0) &&
               (pCVar30 = (pMVar29->fields).mainCamera, pCVar30 != (Camera *)0x0)) {
              iVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                                 (pCVar30,(MethodInfo *)0x0);
              (this->fields).mainCameraDefaultMask = iVar11;
              pMVar29 = (e->fields).weCamera;
              if ((pMVar29 != (MainCameraManager *)0x0) &&
                 (pCVar30 = (pMVar29->fields).mainCamera, pCVar30 != (Camera *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                          (pCVar30,0,(MethodInfo *)0x0);
                pMVar29 = (e->fields).weCamera;
                if (pMVar29 != (MainCameraManager *)0x0) {
                  MainCameraManager::MainCameraManager_set_BlueModeEnabled
                            (pMVar29,1,(MethodInfo *)0x0);
                  CEEditCubeTutorial_SetupBlinker(this,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_Execute
               (CEEditCubeTutorial *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Hiding_cursor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).exiting == 0) {
    pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
    bVar2 = pMVar1 == (MVCubeModelBase *)0x0;
  }
  else {
    bVar2 = true;
  }
  (this->fields).exiting = bVar2;
  if (bVar2 == false) {
    if ((this->fields).hasExited != 0) {
      return;
    }
    pCVar3 = (this->fields).resettingBookkeeping;
    if (pCVar3 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
      if ((((pCVar3->fields).doReset != 0) || ((this->fields).disableCubeModeling != 0)) &&
         (bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_get_visible
                            ((MethodInfo *)0x0), bVar4 != 0)) {
        pCVar3 = (this->fields).resettingBookkeeping;
        if (pCVar3 == (CEEditCubeTutorial_ResettingBookkeeping *)0x0) goto code_?;
        if ((pCVar3->fields).doReset != 0) {
          (pCVar3->fields).doReset = 0;
          (pCVar3->fields).isResetting = 1;
          iVar5 = FUN_?();
          (pCVar3->fields).resettingBeginTime = iVar5;
        }
        pCVar6 = (this->fields).CMSM;
        if (pCVar6 == (CubeModelingStateMachine *)0x0) goto code_?;
        CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                  (pCVar6,0,(MethodInfo *)0x0);
        (this->fields).disableCubeModeling = 0;
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Hiding_cursor,(MethodInfo *)0x0);
      }
      pCVar3 = (this->fields).resettingBookkeeping;
      if (pCVar3 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
        if ((pCVar3->fields).isResetting == 0) {
          if ((this->fields).enableCubemodeling == 0) {
            UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                      (1,(MethodInfo *)0x0);
            return;
          }
          if ((e != (EditorStateMachine *)0x0) &&
             (pCVar6 = (e->fields).cubeModelingStateMachine,
             pCVar6 != (CubeModelingStateMachine *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pCVar6->klass->vtable).Update.methodPtr)
                      (pCVar6,(pCVar6->klass->vtable).Update.method);
            return;
          }
        }
        else {
          bVar4 = CEEditCubeTutorial_DoReset(this,(MethodInfo *)0x0);
          if (bVar4 == 0) {
            return;
          }
          pCVar3 = (this->fields).resettingBookkeeping;
          if (pCVar3 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
            (pCVar3->fields).isResetting = 0;
            return;
          }
        }
      }
    }
  }
  else {
    auStackX_8[0] = 0x39;
    value = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_8);
    if (e != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
      (this->fields).hasExited = 1;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_Exit
               (CEEditCubeTutorial *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int,_EditCubeChange>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CEEditCubeTutorial__OnEditCubeChange_int__EditCubeChange_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CEEditCubeTutorial__SetFirstTimeEventsHappened_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CubeModelTool);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__CEEditCubeTutorial____c__DisplayClass28_0___Exit_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CEEditCubeTutorial____c__DisplayClass28_0);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__CEEditCubeTutorial____c__DisplayClass28_0);
  if ((((esm != (EditorStateMachine *)0x0) &&
       (pMVar1 = (esm->fields).weCamera, pMVar1 != (MainCameraManager *)0x0)) &&
      (this_00 = (pMVar1->fields).mainCamera, this_00 != (Camera *)0x0)) &&
     (UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                (this_00,(this->fields).mainCameraDefaultMask,(MethodInfo *)0x0),
     object != (Object *)0x0)) {
    bVar2 = iRam_? != 0;
    object[1].klass = (Object__Class *)::StringLiteral__;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((this->fields).targetCubeModelId == -1) {
      MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    }
    else {
      this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_03 != (MVWorldObjectClientManager *)0x0) {
        pMVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_03,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
        if (pMVar7 != (MVWorldObjectClient *)0x0) {
          bVar8 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
          if (((pMVar7->klass->_1).naturalAligment < bVar8) ||
             ((MVCubeModelBase__Class *)(pMVar7->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
              TypeInfo__MVCubeModelBase)) {
            FUN_?(pMVar7);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar7 != (MVWorldObjectClient *)0x0) {
          cVar10 = (*(pMVar7->klass->vtable).Delete.methodPtr)(pMVar7);
          if (cVar10 == '\0') {
            pGVar11 = (esm->fields).gameObject;
            this_04 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_04,object,
                       MethodInfo__CEEditCubeTutorial____c__DisplayClass28_0___Exit_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar11,(BaseEventData *)0x0,this_04,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                      );
          }
          this_01 = (this->fields).constraintVisualizer;
          if (this_01 != (ConstraintVisualizer *)0x0) {
            pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_01,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                      ((Object_1 *)pGVar11,0.0,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar12 != (MVGameControllerBase *)0x0) &&
                (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
               ((pGVar14 = (pMVar13->fields).GameEventManager, pGVar14 != (GameEventManager *)0x0 &&
                (pGVar15 = (pGVar14->fields).AvatarCommandsBuildMode,
                pGVar15 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)))) {
              if ((pGVar15->fields).OnExitBuildStateEvent != (Action_2_EditorEvent_Object_ *)0x0) {
                pAVar16 = (pGVar15->fields).OnExitBuildStateEvent;
                (*(pAVar16->fields)._._.invoke_impl)
                          ((pAVar16->fields)._._.method_code,(this->fields)._.stateType,0);
              }
              pCVar17 = (esm->fields).cubeModelingStateMachine;
              if (pCVar17 != (CubeModelingStateMachine *)0x0) {
                CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors
                          (pCVar17,(MethodInfo *)0x0);
                pCVar17 = (esm->fields).cubeModelingStateMachine;
                if (pCVar17 != (CubeModelingStateMachine *)0x0) {
                  CubeModelingStateMachine::CubeModelingStateMachine_EndEdit
                            (pCVar17,(MethodInfo *)0x0);
                  (this->fields).targetCubeModelId = -1;
                  bVar2 = iRam_? != 0;
                  (this->fields).selectedInstance = (MVCubeModelInstance *)0x0;
                  if (bVar2) {
                    uVar3 = (uint)((ulonglong)&(this->fields).selectedInstance >> 0xc);
                    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                    do {
                      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                      LOCK();
                      bVar2 = uVar5 == *puVar6;
                      if (bVar2) {
                        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar2);
                  }
                  this_02 = (esm->fields).selectionController;
                  if (this_02 != (SelectionController *)0x0) {
                    SelectionController::SelectionController_DeSelectAll(this_02,(MethodInfo *)0x0);
                    this_05 = (UnityAction_2_System_Object_System_Int32_ *)
                              FUN_?(
                                           TypeInfo__System__Action<MV::WorldObject::MetaData::FirstTimeState,_MV::WorldObject::MetaData::FirstTimeEvent>
                                           );
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                    Object,System::Int32]::UnityAction_2_System_Object_System_Int32___ctor
                              (this_05,(Object *)this,
                               MethodInfo__CEEditCubeTutorial__SetFirstTimeEventsHappened_MV__WorldObject__MetaData__FirstTimeState__MV__WorldObject__MetaData__FirstTimeEvent_
                               ,(MethodInfo *)0x0);
                    FirstTimeEventManager::FirstTimeEventManager_UnSubscribeToFirstTimeState
                              ((Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                                *)this_05,(MethodInfo *)0x0);
                    pAVar18 = TypeInfo__CubeModelTool->static_fields->OnEditCubeChange;
                    pDVar19 = (Delegate *)
                              FUN_?(TypeInfo__System__Action<int,_EditCubeChange>);
                    FUN_?(pDVar19,this);
                    pDVar19 = mscorlib.dll::System::Delegate::Delegate_Remove
                                        ((Delegate *)pAVar18,pDVar19,(MethodInfo *)0x0);
                    pAVar20 = TypeInfo__System__Action<int,_EditCubeChange>;
                    if (pDVar19 == (Delegate *)0x0) {
                      TypeInfo__CubeModelTool->static_fields->OnEditCubeChange =
                           (Action_2_Int32_EditCubeChange_ *)0x0;
                    }
                    else {
                      pAVar18 = (Action_2_Int32_EditCubeChange_ *)
                                FUN_?(pDVar19,TypeInfo__System__Action<int,_EditCubeChange>)
                      ;
                      if (pAVar18 == (Action_2_Int32_EditCubeChange_ *)0x0) {
                        FUN_?(pDVar19,pAVar20);
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      TypeInfo__CubeModelTool->static_fields->OnEditCubeChange = pAVar18;
                      pAVar20 = TypeInfo__System__Action<int,_EditCubeChange>;
                      lVar21 = FUN_?(pDVar19,TypeInfo__System__Action<int,_EditCubeChange>);
                      if (lVar21 == 0) {
                        FUN_?(pDVar19,pAVar20);
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                    }
                    if (iRam_? != 0) {
                      uVar3 = (uint)((ulonglong)
                                      &TypeInfo__CubeModelTool->static_fields->OnEditCubeChange >>
                                     0xc);
                      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                      do {
                        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                        LOCK();
                        bVar2 = uVar5 == *puVar6;
                        if (bVar2) {
                          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar2);
                    }
                    iVar22 = iRam_?;
                    (this->fields).blinker = (FirstTimeCubeModelBlinker *)0x0;
                    if (iVar22 != 0) {
                      uVar3 = (uint)((ulonglong)&(this->fields).blinker >> 0xc);
                      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
                      do {
                        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
                        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
                        LOCK();
                        bVar2 = uVar5 == *puVar6;
                        if (bVar2) {
                          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar2);
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
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Dictionary`2[EditCubeChange,System.Boolean] GetFirstTimeEventCheck() */

Dictionary_2_EditCubeChange_System_Boolean_ *
Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_GetFirstTimeEventCheck
          (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimeEventManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
  if ((pFVar1 != (FirstTimeState *)0x0) &&
     (pBVar2 = (pFVar1->fields).bitArray, pBVar2 != (BitArray *)0x0)) {
    if ((pBVar2->fields).m_length < 0x7b) {
      bVar3 = 0;
    }
    else {
      bVar3 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                        (pBVar2,0x7a,(MethodInfo *)0x0);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__FirstTimeEventManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pFVar1 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
    if ((pFVar1 != (FirstTimeState *)0x0) &&
       (pBVar2 = (pFVar1->fields).bitArray, pBVar2 != (BitArray *)0x0)) {
      if ((pBVar2->fields).m_length < 0x7a) {
        bVar4 = 0;
      }
      else {
        bVar4 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                          (pBVar2,0x79,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__FirstTimeEventManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pFVar1 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
      if ((pFVar1 != (FirstTimeState *)0x0) &&
         (pBVar2 = (pFVar1->fields).bitArray, pBVar2 != (BitArray *)0x0)) {
        if ((pBVar2->fields).m_length < 0x7e) {
          bVar5 = 0;
        }
        else {
          bVar5 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                            (pBVar2,0x7d,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__FirstTimeEventManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pFVar1 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
        if ((pFVar1 != (FirstTimeState *)0x0) &&
           (pBVar2 = (pFVar1->fields).bitArray, pBVar2 != (BitArray *)0x0)) {
          if ((pBVar2->fields).m_length < 0x79) {
            bVar6 = 0;
          }
          else {
            bVar6 = mscorlib.dll::System::Collections::BitArray::BitArray_Get
                              (pBVar2,0x78,(MethodInfo *)0x0);
          }
          pDVar7 = (Dictionary_2_EditCubeChange_System_Boolean_ *)
                   FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>
                                );
          FUN_?(pDVar7);
          if (pDVar7 != (Dictionary_2_EditCubeChange_System_Boolean_ *)0x0) {
            IVar8 = CONCAT31((int3)((uint)in_R9D >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Boolean]::Dictionary_2_System_Int32Enum_System_Boolean__TryInsert
                      ((Dictionary_2_System_Int32Enum_System_Boolean_ *)pDVar7,3,bVar3 ^ 1,IVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
                       ->klass->rgctx_data[0x22].method);
            IVar8 = CONCAT31((int3)(IVar8 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Boolean]::Dictionary_2_System_Int32Enum_System_Boolean__TryInsert
                      ((Dictionary_2_System_Int32Enum_System_Boolean_ *)pDVar7,2,bVar4 ^ 1,IVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
                       ->klass->rgctx_data[0x22].method);
            IVar8 = CONCAT31((int3)(IVar8 >> 8),2);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Boolean]::Dictionary_2_System_Int32Enum_System_Boolean__TryInsert
                      ((Dictionary_2_System_Int32Enum_System_Boolean_ *)pDVar7,1,bVar5 ^ 1,IVar8,
                       MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
                       ->klass->rgctx_data[0x22].method);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Boolean]::Dictionary_2_System_Int32Enum_System_Boolean__TryInsert
                      ((Dictionary_2_System_Int32Enum_System_Boolean_ *)pDVar7,5,bVar6 ^ 1,
                       CONCAT31((int3)(IVar8 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Add_EditCubeChange__bool_
                       ->klass->rgctx_data[0x22].method);
            return pDVar7;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pDVar7 = (Dictionary_2_EditCubeChange_System_Boolean_ *)(*pcVar9)();
  return pDVar7;
}


/* Void HandleCubeModelingEnabling(FirstTimeEvent) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_HandleCubeModelingEnabling
               (CEEditCubeTutorial *this,FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CEEditCubeTutorial);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CEEditCubeTutorial->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CEEditCubeTutorial);
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
    if (*(int *)&(TypeInfo__CEEditCubeTutorial->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CEEditCubeTutorial);
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
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnEditCubeChange(Int32, EditCubeChange) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_OnEditCubeChange
               (CEEditCubeTutorial *this,int32_t cubeCount,EditCubeChange__Enum editCubeChange,
               MethodInfo *method)

{
  if ((this->fields).bordersExpanded != 0) {
    return;
  }
  pCVar1 = (this->fields).resettingBookkeeping;
  if (pCVar1 != (CEEditCubeTutorial_ResettingBookkeeping *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,400,0);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_InitializeResetting);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_InitializeResetting,(MethodInfo *)0x0);
    (pCVar1->fields).doReset = 1;
    (pCVar1->fields).isResetting = 0;
    if ((pCVar1->fields).resettingDelay < 400) {
      (pCVar1->fields).resettingDelay = 400;
    }
    return;
  }
  FUN_?(0,CONCAT44(in_register_00000014,cubeCount));
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetFirstTimeEventsHappened(FirstTimeState, FirstTimeEvent) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_SetFirstTimeEventsHappened
               (CEEditCubeTutorial *this,FirstTimeState *firstTimeState,
               FirstTimeEvent__Enum firstTimeEvent,MethodInfo *method)

{
  this_08._4_4_ = 0;
  this_08.key = firstTimeEvent;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CEEditCubeTutorial);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__get_Item_EditCubeChange_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditableCubeModelWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EditCubeChange,_bool>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EditCubeChange,_bool>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EditCubeChange,_bool>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<EditCubeChange,_bool>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<EditCubeChange,_bool>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CEEditCubeTutorial);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CEEditCubeTutorial->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CEEditCubeTutorial);
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
      (this->fields).disableCubeModeling = 0;
      (this->fields).enableCubemodeling = 1;
      this_00 = (this->fields).CMSM;
      if (this_00 == (CubeModelingStateMachine *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                (this_00,1,(MethodInfo *)0x0);
    }
    if (*(int *)&(TypeInfo__CEEditCubeTutorial->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CEEditCubeTutorial);
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
      if (*(int *)&(TypeInfo__CEEditCubeTutorial->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__CEEditCubeTutorial);
      }
      pHVar1 = (HashSet_1_System_Int32Enum_ *)
               TypeInfo__CEEditCubeTutorial->static_fields->successEvents;
      if (pHVar1 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar2 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          (pHVar1,firstTimeEvent,
                           MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Contains_MV__WorldObject__MetaData__FirstTimeEvent_
                          );
        if (bVar2 != 0) {
          this_01 = (this->fields).blinker;
          if (this_01 == (FirstTimeCubeModelBlinker *)0x0) goto code_?;
          BlinkerBase::BlinkerBase_StartBlinking
                    ((BlinkerBase *)this_01,BlinkType__Enum_OnBoardingCubeModelSuccess,
                     TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
        }
        pDVar3 = (this->fields).firstTimeEventChangeCheck;
        pDVar4 = CEEditCubeTutorial_GetFirstTimeEventCheck(this,(MethodInfo *)0x0);
        (this->fields).firstTimeEventChangeCheck = pDVar4;
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&(this->fields).firstTimeEventChangeCheck >> 0xc);
          uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
          do {
            uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
            puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        bVar9 = true;
        this_08.key = 0;
        this_08.value = 0;
        this_08._5_3_ = 0;
        if (pDVar3 != (Dictionary_2_EditCubeChange_System_Boolean_ *)0x0) {
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)&uStack_10 >> 0xc);
            uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
            do {
              uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
              puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar7 == *puVar8;
              if (bVar11) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar11);
          }
          pDStack_12 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Byte_ *)
                       (ulonglong)(uint)(pDVar3->fields)._version;
          uStack_13 = 2;
          uStack_14 = 0;
          DStack_15._8_8_ = pDStack_12;
          DStack_15._current.key = 0;
          DStack_15._current.value = 0;
          DStack_15._current._5_3_ = 0;
          DStack_15._getEnumeratorRetType = 2;
          DStack_15._28_4_ = 0;
          uStack_10 = 0;
          pDStack_12 = &DStack_15;
          pMVar16 = unaff_R13;
          DStack_15._dictionary = (Dictionary_2_System_Int32Enum_System_Byte_ *)pDVar3;
          while (bVar2 = mscorlib.dll::System::Collections::Generic::
                         Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Byte]::
                         Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Byte__MoveNext
                                   (&DStack_15,
                                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<EditCubeChange,_bool>__MoveNext__
                                   ), this_08 = DStack_15._current,
                unaff_R13 = 
                MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__get_Item_EditCubeChange_
                , bVar2 != 0) {
            aKStack_17[0] = DStack_15._current;
            this_02 = (Dictionary_2_System_Int32Enum_System_Single_ *)
                      (this->fields).firstTimeEventChangeCheck;
            if (this_02 == (Dictionary_2_System_Int32Enum_System_Single_ *)0x0)
            goto code_?;
            uVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                     Int32Enum,System::Single]::
                     Dictionary_2_System_Int32Enum_System_Single__FindEntry
                               (this_02,DStack_15._current.key,
                                MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__get_Item_EditCubeChange_
                                ->klass->rgctx_data[0x21].method);
            if ((int)uVar5 < 0) goto code_?;
            pDVar18 = (this_02->fields)._entries;
            if (pDVar18 == (Dictionary_2_TKey_TValue_Entry_System_Int32Enum_System_Single___Array *)
                          0x0) goto code_?;
            if ((uint)pDVar18->max_length <= uVar5) goto code_?;
            if (*(uint8_t *)&pDVar18->vector[(int)uVar5].value != aKStack_17[0].value) {
              this_03 = (this->fields).resettingBookkeeping;
              if (this_03 == (CEEditCubeTutorial_ResettingBookkeeping *)0x0)
              goto code_?;
              CEEditCubeTutorial+ResettingBookkeeping::
              CEEditCubeTutorial_ResettingBookkeeping_InitializeResetting
                        (this_03,2000,(MethodInfo *)0x0);
            }
            pDVar3 = (this->fields).firstTimeEventChangeCheck;
            if (pDVar3 == (Dictionary_2_EditCubeChange_System_Boolean_ *)0x0)
            goto code_?;
            cVar19 = FUN_?(pDVar3,(ulonglong)this_08 & 0xffffffff);
            pMVar16 = unaff_R13;
            if (cVar19 != '\0') {
              bVar9 = false;
            }
          }
          if (bVar9) {
            if ((this->fields).bordersExpanded == 0) {
              (this->fields).bordersExpanded = 1;
              this_08 = (KeyValuePair_2_System_Int32Enum_System_Byte_)
                        (this->fields).selectedInstance;
              this_06 = (EditableCubeModelWrapper *)
                        FUN_?(TypeInfo__EditableCubeModelWrapper);
              aIStack_20[0].x = 0xf;
              aIStack_20[0].y = 0xf;
              (this_06->fields).cubeModelBase = (MVCubeModelInstance *)this_08;
              if (iRam_? != 0) {
                uVar5 = (uint)((ulonglong)&this_06->fields >> 0xc);
                uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                do {
                  uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                  puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                  LOCK();
                  bVar9 = uVar7 == *puVar8;
                  if (bVar9) {
                    *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar9);
              }
              unaff_R13 = pMVar16;
              if (this_08 != (KeyValuePair_2_System_Int32Enum_System_Byte_)0x0) {
                *(ulonglong *)((longlong)this_08 + 0x118) =
                     *(ulonglong *)((longlong)this_08 + 0x118) | 0x10;
                aIStack_20[0].x = 0xf;
                aIStack_20[0].y = 0xf;
                aIStack_20[0].z = 0xf;
                aKStack_17[0].key = -0xe000f;
                aKStack_17[0].value = 0xf1;
                aKStack_17[0]._5_1_ = 0xff;
                EditableCubeModelWrapper::EditableCubeModelWrapper_SetConstraints
                          (this_06,(IntVector *)aKStack_17,aIStack_20,1,(MethodInfo *)0x0);
                (this->fields).cubeModelWrapper = this_06;
                if (iRam_? != 0) {
                  uVar5 = (uint)((ulonglong)&(this->fields).cubeModelWrapper >> 0xc);
                  uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                  do {
                    uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                    puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                    LOCK();
                    bVar9 = uVar7 == *puVar8;
                    if (bVar9) {
                      *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                    }
                    UNLOCK();
                  } while (!bVar9);
                }
                CEEditCubeTutorial_SetFocus(this,(this->fields).multiCubeDistance,(MethodInfo *)0x0)
                ;
                pMVar21 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (pMVar21 != (MainCameraManager *)0x0) {
                  this_08 = (KeyValuePair_2_System_Int32Enum_System_Byte_)
                            (pMVar21->fields).transitionCamera;
                  pMVar22 = (pMVar21->fields).cameraController;
                  if ((((pMVar22 != (MVCameraController *)0x0) &&
                       (this_04 = (pMVar22->fields).cameraStack,
                       this_04 != (MVCameraController_CameraStack *)0x0)) &&
                      (this_07 = MVCameraController+CameraStack::
                                 MVCameraController_CameraStack_get_CurCamera
                                           (this_04,(MethodInfo *)0x0),
                      this_07 != (MVCameraBase *)0x0)) &&
                     (targetCameraTransform =
                           UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)this_07,(MethodInfo *)0x0),
                     this_08 != (KeyValuePair_2_System_Int32Enum_System_Byte_)0x0)) {
                    TransitionCamera::TransitionCamera_InitTransition
                              ((TransitionCamera *)this_08,targetCameraTransform,_UNK_?,0,
                               (MethodInfo *)0x0);
                    this_08 = (KeyValuePair_2_System_Int32Enum_System_Byte_)
                              (this->fields).constraintVisualizer;
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Object);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Object);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (this_08 != (KeyValuePair_2_System_Int32Enum_System_Byte_)0x0) {
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      if ((Object_1__Fields)
                          *(Component__Fields *)
                           &(((MVCubeModelInstance__Fields *)((longlong)this_08 + 0x10))->_)._._ !=
                          (Object_1__Fields)0x0) {
                        this_05 = (this->fields).constraintVisualizer;
                        if (this_05 == (ConstraintVisualizer *)0x0) goto code_?;
                        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this_05,(MethodInfo *)0x0);
                        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Object);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                                  ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
                      }
                    }
                    CEEditCubeTutorial_CreateConstraint(this,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              goto code_?;
            }
          }
          else if ((this->fields).bordersExpanded == 0) {
            CEEditCubeTutorial_SetFocus(this,(this->fields).oneCubeDistance,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
code_?:
  aIStack_20[0]._0_4_ = this_08.key;
  uVar23 = func_?(unaff_R13->klass->rgctx_data,0xe);
  key = (Object *)func_?(uVar23);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException(key,(MethodInfo *)0x0);
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* Void SetFocus(Single) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_SetFocus
               (CEEditCubeTutorial *this,float distance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__JetPackCamera);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
  if ((pMVar1 != (MVCubeModelBase *)0x0) &&
     (pTVar2 = (pMVar1->fields)._.transform, pTVar2 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    VStack_3.x = 0.0;
    VStack_3.y = 0.0;
    VStack_3.z = 0.0;
    pvVar4 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar4);
    pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
    if ((pMVar1 != (MVCubeModelBase *)0x0) &&
       (pTVar2 = (pMVar1->fields)._.transform, pTVar2 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_7 = 0;
      uStack_8 = 0;
      if ((pTVar2->fields)._._.m_CachedPtr == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)();
      VStack_9.x = (this->fields).focusOffset.x;
      VStack_9.y = (this->fields).focusOffset.y;
      fVar10 = uStack_7._4_4_ + uStack_7._4_4_;
      fVar11 = (float)uStack_8 + (float)uStack_8;
      fVar12 = (float)uStack_7 * ((float)uStack_7 + (float)uStack_7);
      fVar13 = uStack_8._4_4_ * ((float)uStack_7 + (float)uStack_7);
      fVar14 = (this->fields).focusOffset.z;
      fVar15 = ((_UNK_? - ((float)uStack_8 * fVar11 + uStack_7._4_4_ * fVar10)) *
                VStack_9.x + ((float)uStack_7 * fVar10 - uStack_8._4_4_ * fVar11) * VStack_9.y +
               (uStack_8._4_4_ * fVar10 + (float)uStack_7 * fVar11) * fVar14) * distance +
               VStack_3.x;
      fVar16 = ((_UNK_? - ((float)uStack_8 * fVar11 + fVar12)) * VStack_9.y +
                (uStack_8._4_4_ * fVar11 + (float)uStack_7 * fVar10) * VStack_9.x +
               (uStack_7._4_4_ * fVar11 - fVar13) * fVar14) * distance + VStack_3.y;
      fVar14 = (((float)uStack_7 * fVar11 - uStack_8._4_4_ * fVar10) * VStack_9.x +
                (fVar13 + uStack_7._4_4_ * fVar11) * VStack_9.y +
               (_UNK_? - (uStack_7._4_4_ * fVar10 + fVar12)) * fVar14) * distance +
               VStack_3.z;
      pMVar17 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (((pMVar17 != (MainCameraManager *)0x0) &&
          (pMVar18 = (pMVar17->fields).cameraController, pMVar18 != (MVCameraController *)0x0)) &&
         (this_00 = (pMVar18->fields).cameraStack, this_00 != (MVCameraController_CameraStack *)0x0))
      {
        this_01 = (JetPackCamera *)
                  MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                            (this_00,(MethodInfo *)0x0);
        pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
        if ((pMVar1 != (MVCubeModelBase *)0x0) &&
           (puVar19 = (undefined8 *)
                     (*(pMVar1->klass->vtable).get_WorldPivot.methodPtr)
                               (&uStack_7,pMVar1,(pMVar1->klass->vtable).get_WorldPivot.method),
           this_01 != (JetPackCamera *)0x0)) {
          bVar20 = (TypeInfo__JetPackCamera->_1).naturalAligment;
          if ((bVar20 <= (this_01->klass->_1).naturalAligment) &&
             ((this_01->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1] ==
              (Il2CppClass *)TypeInfo__JetPackCamera)) {
            VStack_9.z = *(float *)(puVar19 + 1);
            VStack_9._0_8_ = *puVar19;
            bVar20 = (TypeInfo__JetPackCamera->_1).naturalAligment;
            VStack_3.y = fVar16;
            VStack_3.x = fVar15;
            VStack_3.z = fVar14;
            if ((bVar20 <= (this_01->klass->_1).naturalAligment) &&
               ((this_01->klass->_1).typeHierarchy[(ulonglong)bVar20 - 1] ==
                (Il2CppClass *)TypeInfo__JetPackCamera)) {
              JetPackCamera::JetPackCamera_FocusOnPointFromAvatarPosition
                        (this_01,&VStack_9,&VStack_3,(MethodInfo *)0x0);
              return;
            }
            FUN_?(this_01,TypeInfo__JetPackCamera);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FUN_?(this_01,TypeInfo__JetPackCamera);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupBlinker() */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_SetupBlinker
               (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  FirstTimeCubeModelBlinker_MethodInfo__UnityEngine__GameObject__AddComponent<FirstTimeCubeModelBlinker>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
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
    bVar3 = iRam_? != 0;
    (this->fields).blinker = pFVar2;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).blinker >> 0xc);
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
    pFVar2 = (this->fields).blinker;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar8 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar8 != (PrefabPool *)0x0) {
      source = (pPVar8->fields).blinkerDefaultMaterial;
      this_02 = (Material *)FUN_?(TypeInfo__UnityEngine__Material);
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
                (this_02,source,(MethodInfo *)0x0);
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar9 != (MainCameraManager *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_01 = (pMVar9->fields).secondaryCamera;
        if (this_01 != (Transform *)0x0) {
          targetCamera = (Camera *)
                         UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_GetComponent_1
                                   ((Component *)this_01,
                                    UnityEngine__Camera_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Camera>__
                                   );
          pMVar1 = CEEditCubeTutorial_get_TargetCubeModel(this,(MethodInfo *)0x0);
          if (pFVar2 != (FirstTimeCubeModelBlinker *)0x0) {
            FirstTimeCubeModelBlinker::FirstTimeCubeModelBlinker_Initialize
                      (pFVar2,this_02,targetCamera,pMVar1,(MethodInfo *)0x0);
            pFVar2 = (this->fields).blinker;
            if (pFVar2 != (FirstTimeCubeModelBlinker *)0x0) {
              (pFVar2->fields)._.visible = 1;
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void <Enter>b__23_0(IHandleCubeEditTutorial, BaseEventData) */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial__Enter_b__23_0
               (CEEditCubeTutorial *this,IHandleCubeEditTutorial *handler,BaseEventData *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__CEEditCubeTutorial__OnClosed__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IHandleCubeEditTutorial);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__CEEditCubeTutorial__OnClosed__,(MethodInfo *)0x0);
  if (handler == (IHandleCubeEditTutorial *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar2 = handler->klass;
  uVar3 = 0;
  uVar4._0_1_ = (pIVar2->_1).rank;
  uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
  pNVar5 = this_00;
  if (uVar4 != 0) {
    pNVar5 = (NavMesh_OnNavMeshPreUpdate *)pIVar2->interfaceOffsets;
    do {
      if ((&pNVar5->klass)[(ulonglong)uVar3 * 2] ==
          (NavMesh_OnNavMeshPreUpdate__Class *)
          TypeInfo__UnityEngine__EventSystems__IHandleCubeEditTutorial) {
        pIVar6 = &pIVar2->vtable + *(int *)(&pNVar5->monitor + (ulonglong)uVar3 * 2);
        goto code_?;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  pIVar6 = (IHandleCubeEditTutorial__VTable *)
           FUN_?(handler,TypeInfo__UnityEngine__EventSystems__IHandleCubeEditTutorial,0,
                         pNVar5,unaff_RDI);
code_?:
  UNRECOVERED_JUMPTABLE = (pIVar6->PushCubeEditCubeTutorialTools).methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (handler,this_00,(pIVar6->PushCubeEditCubeTutorialTools).method,UNRECOVERED_JUMPTABLE);
  return;
}


/* CEEditCubeTutorial() */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CEEditCubeTutorial);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__HashSet__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_System_Int32Enum_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
  HashSet_1_System_Int32Enum___ctor
            (pHVar1,
             MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__HashSet__
            );
  if (pHVar1 != (HashSet_1_System_Int32Enum_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum__AddIfNotPresent
              (pHVar1,0x7a,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
               ->klass->rgctx_data[0x15].method);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum__AddIfNotPresent
              (pHVar1,0x79,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
               ->klass->rgctx_data[0x15].method);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum__AddIfNotPresent
              (pHVar1,0x7d,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
               ->klass->rgctx_data[0x15].method);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum__AddIfNotPresent
              (pHVar1,0x78,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
               ->klass->rgctx_data[0x15].method);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum__AddIfNotPresent
              (pHVar1,0x8d,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
               ->klass->rgctx_data[0x15].method);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum__AddIfNotPresent
              (pHVar1,0x8e,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
               ->klass->rgctx_data[0x15].method);
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum__AddIfNotPresent
              (pHVar1,0x8f,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
               ->klass->rgctx_data[0x15].method);
    TypeInfo__CEEditCubeTutorial->static_fields->successEvents =
         (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)pHVar1;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)TypeInfo__CEEditCubeTutorial->static_fields >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pHVar1 = (HashSet_1_System_Int32Enum_ *)
             FUN_?(
                          TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>
                          );
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
    HashSet_1_System_Int32Enum___ctor
              (pHVar1,
               MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__HashSet__
              );
    if (pHVar1 != (HashSet_1_System_Int32Enum_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
      HashSet_1_System_Int32Enum__AddIfNotPresent
                (pHVar1,0x8d,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                 ->klass->rgctx_data[0x15].method);
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
      HashSet_1_System_Int32Enum__AddIfNotPresent
                (pHVar1,0x8e,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                 ->klass->rgctx_data[0x15].method);
      TypeInfo__CEEditCubeTutorial->static_fields->disableCubeModelingEvents =
           (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)pHVar1;
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)
                       &TypeInfo__CEEditCubeTutorial->static_fields->disableCubeModelingEvents >>
                      0xc);
        lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
        do {
          uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
          puVar5 = (ulonglong *)(lVar3 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      pHVar1 = (HashSet_1_System_Int32Enum_ *)
               FUN_?(
                            TypeInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>
                            );
      System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
      HashSet_1_System_Int32Enum___ctor
                (pHVar1,
                 MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__HashSet__
                );
      if (pHVar1 != (HashSet_1_System_Int32Enum_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
        HashSet_1_System_Int32Enum__AddIfNotPresent
                  (pHVar1,0x7c,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                   ->klass->rgctx_data[0x15].method);
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
        HashSet_1_System_Int32Enum__AddIfNotPresent
                  (pHVar1,0x77,
                   MethodInfo__System__Collections__Generic__HashSet<MV::WorldObject::MetaData::FirstTimeEvent>__Add_MV__WorldObject__MetaData__FirstTimeEvent_
                   ->klass->rgctx_data[0x15].method);
        TypeInfo__CEEditCubeTutorial->static_fields->enableCubeModelingEvents =
             (HashSet_1_MV_WorldObject_MetaData_FirstTimeEvent_ *)pHVar1;
        if (iRam_? != 0) {
          uVar2 = (uint)((ulonglong)
                         &TypeInfo__CEEditCubeTutorial->static_fields->enableCubeModelingEvents >>
                        0xc);
          uVar4 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar7 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar4 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar7 == *puVar5;
            if (bVar6) {
              *puVar5 = uVar7 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* CEEditCubeTutorial() */

void Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial__ctor
               (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CEEditCubeTutorial__ResettingBookkeeping);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).targetCubeModelId = -1;
  (this->fields).oneCubeDistance = 4.0;
  (this->fields).multiCubeDistance = 16.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3 = (pVVar2->rightVector).x;
  uVar4 = (pVVar2->rightVector).y;
  fVar5 = (pVVar2->rightVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar6 = (pVVar2->upVector).x;
  uVar7 = (pVVar2->upVector).y;
  fVar8 = (pVVar2->upVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar9 = (pVVar2->backVector).x;
  uVar10 = (pVVar2->backVector).y;
  fVar11 = (pVVar2->backVector).z;
  fVar12 = (float)FUN_?();
  if (_UNK_? < fVar12) {
    fVar5 = (fVar11 + fVar5 + fVar8) / fVar12;
    uVar13 = CONCAT44(((float)uVar10 + (float)uVar4 + (float)uVar7) / fVar12,
                      ((float)uVar9 + (float)uVar3 + (float)uVar6) / fVar12);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar13._0_4_ = (pVVar2->zeroVector).x;
    uVar13._4_4_ = (pVVar2->zeroVector).y;
    fVar5 = (pVVar2->zeroVector).z;
  }
  (this->fields).focusOffset.x = (float)(int)uVar13;
  (this->fields).focusOffset.y = (float)(int)((ulonglong)uVar13 >> 0x20);
  (this->fields).zeroPos.x = 0;
  (this->fields).zeroPos.y = 0;
  (this->fields).focusOffset.z = fVar5;
  (this->fields).zeroPos.z = 0;
  pDVar14 = (Dictionary_2_EditCubeChange_System_Boolean_ *)
            FUN_?(TypeInfo__System__Collections__Generic__Dictionary<EditCubeChange,_bool>);
  FUN_?(pDVar14);
  bVar1 = iRam_? != 0;
  (this->fields).firstTimeEventChangeCheck = pDVar14;
  if (bVar1) {
    uVar15 = (uint)((ulonglong)&(this->fields).firstTimeEventChangeCheck >> 0xc);
    uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
    do {
      uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
      puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar17 == *puVar18;
      if (bVar1) {
        *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pCVar19 = (CEEditCubeTutorial_ResettingBookkeeping *)
            FUN_?(TypeInfo__CEEditCubeTutorial__ResettingBookkeeping);
  bVar1 = iRam_? != 0;
  (this->fields).resettingBookkeeping = pCVar19;
  if (bVar1) {
    uVar15 = (uint)((ulonglong)&(this->fields).resettingBookkeeping >> 0xc);
    uVar16 = (ulonglong)((uVar15 & 0x1fffff) >> 6);
    do {
      uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
      puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar17 == *puVar18;
      if (bVar1) {
        *puVar18 = uVar17 | 1L << (uVar15 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).enableCubemodeling = 1;
  pWVar20 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                      ((MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._.tintedWo = pWVar20;
  if (bVar1) {
    uVar15 = (uint)((ulonglong)&(this->fields)._.tintedWo >> 0xc);
    lVar21 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
    do {
      uVar16 = *(ulonglong *)(lVar21 + 0xADDR);
      puVar18 = (ulonglong *)(lVar21 + 0xADDR);
      LOCK();
      bVar1 = uVar16 == *puVar18;
      if (bVar1) {
        *puVar18 = uVar16 | 1L << (uVar15 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = (Type *)FUN_?(&(this->klass->_0).byval_arg);
  if (this_00 == (LoggerManager *)0x0) {
    FUN_?();
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  pIVar23 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._.logger = pIVar23;
  if (bVar1) {
    uVar15 = (uint)((ulonglong)&(this->fields)._.logger >> 0xc);
    lVar21 = (ulonglong)((uVar15 & 0x1fffff) >> 6) * 8;
    do {
      uVar16 = *(ulonglong *)(lVar21 + 0xADDR);
      puVar18 = (ulonglong *)(lVar21 + 0xADDR);
      LOCK();
      bVar1 = uVar16 == *puVar18;
      if (bVar1) {
        *puVar18 = uVar16 | 1L << (uVar15 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* MVCubeModelBase get_TargetCubeModel() */

MVCubeModelBase *
Assembly-CSharp.dll::CEEditCubeTutorial::CEEditCubeTutorial_get_TargetCubeModel
          (CEEditCubeTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).targetCubeModelId != -1) {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClientManager *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      pMVar2 = (MVCubeModelBase *)(*pcVar1)();
      return pMVar2;
    }
    pMVar2 = (MVCubeModelBase *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_00,(this->fields).targetCubeModelId,(MethodInfo *)0x0);
    if (pMVar2 != (MVCubeModelBase *)0x0) {
      bVar3 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
      if ((bVar3 <= (pMVar2->klass->_1).naturalAligment) &&
         ((MVCubeModelBase__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar3 - 1] ==
          TypeInfo__MVCubeModelBase)) {
        return pMVar2;
      }
      FUN_?(pMVar2,TypeInfo__MVCubeModelBase);
      pcVar1 = (code *)swi(3);
      pMVar2 = (MVCubeModelBase *)(*pcVar1)();
      return pMVar2;
    }
  }
  return (MVCubeModelBase *)0x0;
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

