
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_Enter
               (ESTerrainEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                   );
    cRam_? = '\x01';
  }
  MVMaterialRepository::MVMaterialRepository_set_AllowDestructibleMaterialSelection
            (1,(MethodInfo *)0x0);
  if (e != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      this_00 = (e->fields).selectionController;
      if (this_00 == (SelectionController *)0x0) goto code_?;
      SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = (MVCubeModelPrototypeTerrain *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (this_02,
                          MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                         );
      (this->fields).terrain = pMVar2;
      func_?(&(this->fields).terrain,pMVar2);
      this_01 = (e->fields).cubeModelingStateMachine;
      if (this_01 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                  (this_01,(MVCubeModelBase *)(this->fields).terrain,(IModelingConstraint *)0x0,
                   (MethodInfo *)0x0);
        pWVar3 = MVWorldObjectClientManager::
                 MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
        (this->fields)._.tintedWo = pWVar3;
        func_?(&(this->fields)._.tintedWo,pWVar3);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_Execute
               (ESTerrainEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  this_02 = e;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&
                    LinkObjectBase_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<LinkObjectBase>__
                   );
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  func_?(&RStack_1,0,0x2c);
  func_?(&VStack_2,0,0x48);
  bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    (&VStack_2,(HashSet_1_System_Int32_ *)0x0,-0x40005,(MethodInfo *)0x0);
  if (bVar3 == 0) {
code_?:
    bVar4 = ESStateBase::ESStateBase_SelectionIsAllowedByLogicEnabled
                      (VStack_2.woId,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
      hit.point.y = VStack_2.point.z;
      hit.point.x = VStack_2.point.y;
      hit.point.z = VStack_2.normal.x;
      hit.normal.x = VStack_2.normal.y;
      hit.normal.y = VStack_2.normal.z;
      hit.normal.z = (float)VStack_2.cubePos._0_4_;
      hit.cubePos.x = VStack_2.cubePos.z;
      hit.cubePos.y = VStack_2._30_2_;
      hit._28_4_ = VStack_2.face;
      hit.face = VStack_2._36_4_;
      hit._36_4_ = VStack_2.woId;
      hit.woId = (int32_t)VStack_2.cube;
      hit.cube = (Cube *)VStack_2.distance;
      hit.distance = (float)VStack_2.collider;
      hit.collider = (Collider *)VStack_2.transform;
      hit.transform = (Transform *)VStack_2._60_4_;
      hit._60_4_ = (float)VStack_2.interactionFlags;
      hit.interactionFlags._0_4_ = (float)((ulonglong)VStack_2.interactionFlags >> 0x20);
      hit.interactionFlags._4_4_ = 0;
      ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
                ((ESStateBase *)this,e,bVar4 & bVar3,hit,in_stack_5);
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                      (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                        (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
      if (bVar3 != 0) goto code_?;
    }
    else {
code_?:
      if ((e == (EditorStateMachine *)0x0) ||
         (this_00 = (e->fields).selectionController, this_00 == (SelectionController *)0x0))
      goto code_?;
      func_?();
      bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                        (&VStack_6,(HashSet_1_System_Int32_ *)0x0,-5,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        this_03 = (WorldObjectClientRef *)0x0;
      }
      else {
        uVar7 = (undefined4)((ulonglong)VStack_6.interactionFlags >> 0x20);
        hit_00.point.y = VStack_6.point.z;
        hit_00.point.x = VStack_6.point.y;
        hit_00.point.z = VStack_6.normal.x;
        hit_00.normal.x = VStack_6.normal.y;
        hit_00.normal.y = VStack_6.normal.z;
        hit_00.normal.z = (float)VStack_6.cubePos._0_4_;
        hit_00.cubePos.x = VStack_6.cubePos.z;
        hit_00.cubePos.y = VStack_6._30_2_;
        hit_00._28_4_ = VStack_6.face;
        hit_00.face = VStack_6._36_4_;
        hit_00._36_4_ = VStack_6.woId;
        hit_00.woId = (int32_t)VStack_6.cube;
        hit_00.cube = (Cube *)VStack_6.distance;
        hit_00.distance = (float)VStack_6.collider;
        hit_00.collider = (Collider *)VStack_6.transform;
        hit_00.transform = (Transform *)VStack_6._60_4_;
        hit_00._60_4_ = (float)VStack_6.interactionFlags;
        hit_00.interactionFlags._0_2_ = (int16_t)uVar7;
        hit_00.interactionFlags._2_2_ = SUB42(uVar7,2);
        hit_00.interactionFlags._4_4_ = 0;
        this_03 = SelectionController::SelectionController_Select_1
                            (this_00,hit_00,1,0,in_stack_8);
      }
      if (((bVar4 != 0) && (this_03 != (WorldObjectClientRef *)0x0)) &&
         (pOVar9 = WorldObjectClientRef`1[System::Object]::
                   WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                             ((WorldObjectClientRef_1_System_Object_ *)this_03,
                              MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                             ), pOVar9 != (Object *)0x0)) goto code_?;
    }
    targetHit.point.y = VStack_2.point.z;
    targetHit.point.x = VStack_2.point.y;
    targetHit.point.z = VStack_2.normal.x;
    targetHit.normal.x = VStack_2.normal.y;
    targetHit.normal.y = VStack_2.normal.z;
    targetHit.normal.z = (float)VStack_2.cubePos._0_4_;
    targetHit.cubePos.x = VStack_2.cubePos.z;
    targetHit.cubePos.y = VStack_2._30_2_;
    targetHit._28_4_ = VStack_2.face;
    targetHit.face = VStack_2._36_4_;
    targetHit._36_4_ = VStack_2.woId;
    targetHit.woId = (int32_t)VStack_2.cube;
    targetHit.cube = (Cube *)VStack_2.distance;
    targetHit.distance = (float)VStack_2.collider;
    targetHit.collider = (Collider *)VStack_2.transform;
    targetHit.transform = (Transform *)VStack_2._60_4_;
    targetHit._60_1_ = (bool)(int)VStack_2.interactionFlags;
    targetHit._61_3_ = SUB43((int)VStack_2.interactionFlags,1);
    targetHit.interactionFlags._0_4_ = (int32_t)((ulonglong)VStack_2.interactionFlags >> 0x20);
    targetHit.interactionFlags._4_4_ = 0;
    bVar3 = ESTerrainEdit_ResettingTerrain(this,targetHit,(MethodInfo *)in_stack_10);
    if (bVar3 != 0) {
      return;
    }
    if ((e != (EditorStateMachine *)0x0) &&
       (pCVar11 = (e->fields).cubeModelingStateMachine, pCVar11 != (CubeModelingStateMachine *)0x0)) {
      VStack_6.transform = (Transform *)(pCVar11->klass->vtable).Update.method;
      VStack_6.distance = (float)&UNK_?;
      VStack_6.collider = (Collider *)pCVar11;
      (*(pCVar11->klass->vtable).Update.methodPtr)();
      if (VStack_2.woId == 0) {
        bVar12 = false;
      }
      else {
        pMVar13 = (this->fields).terrain;
        if (pMVar13 == (MVCubeModelPrototypeTerrain *)0x0) goto code_?;
        bVar12 = VStack_2.woId != (pMVar13->fields)._._._.id;
      }
      if ((bVar12 & bVar4) == 0) {
code_?:
        pMVar14 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar14 != (MainCameraManager *)0x0) {
          if ((pMVar14->fields).isLogicRendered == 0) {
            return;
          }
          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                            (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            return;
          }
          func_?();
          e = _UNK_?;
          bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                            ((VoxelHit *)&stack0xfffffed0,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                             (MethodInfo *)0x0);
          if (bVar3 != 0) {
            e = in_stack_10;
          }
          pMVar14 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                             ((MethodInfo *)0x0);
          if (pMVar14 != (MainCameraManager *)0x0) {
            this_01 = (pMVar14->fields).mainCamera;
            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pVVar15 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                      StandaloneInput_MousePosition
                                (&RStack_16.m_Direction,(StandaloneInput *)0x0,in_stack_17);
            if (this_01 != (Camera *)0x0) {
              pRVar18 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                                  (&RStack_16,this_01,*pVVar15,(MethodInfo *)0x0);
              fStack_19 = (pRVar18->m_Origin).x;
              fStack_20 = (pRVar18->m_Origin).y;
              fStack_21 = (pRVar18->m_Origin).z;
              fStack_22 = (pRVar18->m_Direction).x;
              RStack_16.m_Direction.y = (pRVar18->m_Direction).y;
              RStack_16.m_Direction.z = (pRVar18->m_Direction).z;
              iVar23 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Logic,(MethodInfo *)0x0)
              ;
              ray.m_Origin.y = fStack_20;
              ray.m_Origin.x = fStack_19;
              ray.m_Origin.z = fStack_21;
              ray.m_Direction.x = fStack_22;
              ray.m_Direction.y = RStack_16.m_Direction.y;
              ray.m_Direction.z = RStack_16.m_Direction.z;
              UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_13
                        (ray,&RStack_1,INFINITY,1 << ((byte)iVar23 & 0x1f),(MethodInfo *)0x0);
              pCVar24 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::
                        RaycastHit_get_collider(&RStack_1,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)pCVar24,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar3 == 0) {
                return;
              }
              pCVar24 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::
                        RaycastHit_get_collider(&RStack_1,(MethodInfo *)0x0);
              if ((pCVar24 != (Collider *)0x0) &&
                 (source = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pCVar24,(MethodInfo *)0x0),
                 source != (GameObject *)0x0)) {
                x = (Object_1 *)
                    Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                              ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                               LinkObjectBase_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<LinkObjectBase>__
                              );
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                  (x,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar3 == 0) {
                  return;
                }
                fVar25 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::
                         RaycastHit_get_distance(&RStack_1,(MethodInfo *)0x0);
                RStack_16.m_Direction.z = fVar25;
                if ((float)e <= fVar25) {
                  return;
                }
code_?:
                pOVar9 = (Object *)func_?();
                FSMEntity::FSMEntity_set_Event((FSMEntity *)this_02,pOVar9,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      else {
        pCVar11 = (e->fields).cubeModelingStateMachine;
        if (pCVar11 != (CubeModelingStateMachine *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pIVar26 = (pCVar11->fields)._.currentState;
          if (pIVar26 != (IState *)0x0) {
            pIVar27 = pIVar26->klass;
            if (((pIVar27->_1).typeHierarchyDepth < (TypeInfo__CubeModelTool->_1).typeHierarchyDepth)
               || ((pIVar27->_1).typeHierarchy[(TypeInfo__CubeModelTool->_1).typeHierarchyDepth - 1]
                   != (Il2CppClass *)TypeInfo__CubeModelTool)) goto code_?;
            (*(code *)pIVar27[1]._0.declaringType)();
            goto code_?;
          }
        }
      }
    }
  }
  else {
    pMVar13 = (this->fields).terrain;
    if (pMVar13 != (MVCubeModelPrototypeTerrain *)0x0) {
      if ((VStack_2.woId == (pMVar13->fields)._._._.id) || (VStack_2.woId == -1)) {
        bVar3 = 0;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_Exit
               (ESTerrainEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    cRam_? = '\x01';
  }
  MVMaterialRepository::MVMaterialRepository_set_AllowDestructibleMaterialSelection
            (0,(MethodInfo *)0x0);
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar1 != (GameEventManager *)0x0) &&
      (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
      pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     (this_00 = (pGVar2->fields).LaserCommands,
     this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
              (this_00,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
    if (((e != (EditorStateMachine *)0x0) &&
        (pSVar3 = (e->fields).selectionController, pSVar3 != (SelectionController *)0x0)) &&
       (pHVar4 = (pSVar3->fields).selectedIDs, pHVar4 != (HashSet_1_System_Int32_ *)0x0)) {
      if ((pHVar4->fields)._count == 0) {
        ESStateBase::ESStateBase_DeTintCurrent(unaff_ESI,(MethodInfo *)0x0);
      }
      pCVar5 = (e->fields).cubeModelingStateMachine;
      if (pCVar5 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors(pCVar5,(MethodInfo *)0x0);
        pCVar5 = (e->fields).cubeModelingStateMachine;
        if ((pCVar5 != (CubeModelingStateMachine *)0x0) &&
           (this_01 = (pCVar5->fields)._TargetCubeModel_k__BackingField,
           this_01 != (MVCubeModelBase *)0x0)) {
          MVCubeModelBase::MVCubeModelBase_set_BeingEdited(this_01,0,(MethodInfo *)0x0);
          (pCVar5->fields)._TargetCubeModel_k__BackingField = (MVCubeModelBase *)0x0;
          func_?();
          unaff_ESI[1].klass = (ESStateBase__Class *)0x0;
          func_?();
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean ResettingTerrain(VoxelHit) */

bool Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_ResettingTerrain
               (ESTerrainEdit *this,VoxelHit targetHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&
                    MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                   );
    func_?(&
                    MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                    (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                      (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 0;
    }
  }
  if (targetHit._36_4_ == -1) {
    return 0;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
    pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar2,targetHit._36_4_,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObject *)0x0) {
      return 0;
    }
    if (((pMVar3->fields).type != 0x20) && ((pMVar3->fields).type != 8)) {
      return 0;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
      this_01 = (MVCubeModelPrototypeTerrain *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                          (pMVar2,
                           MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                          );
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar2 != (MVWorldObjectClientManager *)0x0) &&
         (this_02 = (MVCubeModelFineGrainedTerrain *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                              (pMVar2,
                               MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                              ), this_01 != (MVCubeModelPrototypeTerrain *)0x0)) {
        bVar1 = MVCubeModelPrototypeTerrain::MVCubeModelPrototypeTerrain_get_RequiresResetToEdit
                          (this_01,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          if (this_02 == (MVCubeModelFineGrainedTerrain *)0x0) goto code_?;
          bVar1 = MVCubeModelFineGrainedTerrain::
                  MVCubeModelFineGrainedTerrain_get_RequiresResetToEdit(this_02,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            return 0;
          }
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar4 != (MVNetworkGame *)0x0) &&
            (pWVar5 = (pMVar4->fields).worldNetwork, pWVar5 != (WorldNetwork *)0x0)) &&
           (this_00 = (RuntimeEventManager *)(pWVar5->fields)._.runtimeEventManagerNetwork,
           this_00 != (RuntimeEventManager *)0x0)) {
          RuntimeEventManager::RuntimeEventManager_ResetTerrain(this_00,(MethodInfo *)0x0);
          this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
            MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestResetTerrain
                      (this_03,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar1 = (*pcVar6)();
  return bVar1;
}

