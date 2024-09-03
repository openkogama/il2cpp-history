
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
      EditorStateMachine::EditorStateMachine_DeSelectAll(e,(MethodInfo *)0x0);
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = (MVCubeModelPrototypeTerrain *)
               MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject
                         (this_01,
                          MVCubeModelPrototypeTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelPrototypeTerrain>__
                         );
      (this->fields).terrain = pMVar2;
      func_?(&(this->fields).terrain,pMVar2);
      this_00 = (e->fields).cubeModelingStateMachine;
      if (this_00 != (CubeModelingStateMachine *)0x0) {
        CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
                  (this_00,(MVCubeModelBase *)(this->fields).terrain,(IModelingConstraint *)0x0,
                   (MethodInfo *)0x0);
        pWVar3 = MVWorldObjectClientManager::
                 MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
        (this->fields)._.tintedWo = pWVar3;
        func_?(&(this->fields)._.tintedWo,pWVar3);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESTerrainEdit::ESTerrainEdit_Execute
               (ESTerrainEdit *this,EditorStateMachine *e,MethodInfo *method)

{
  this_01 = e;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&
                    LinkObjectBase_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<LinkObjectBase>__
                   );
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__Physics);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  func_?(&SStack_1,0,0x2c);
  func_?(&VStack_2,0,0x48);
  bVar3 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    (&VStack_2,(HashSet_1_System_Int32_ *)0x0,-0x40005,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pMVar4 = (this->fields).terrain;
    if (pMVar4 == (MVCubeModelPrototypeTerrain *)0x0) goto code_?;
    if ((VStack_2.woId == (pMVar4->fields)._._._.id) || (VStack_2.woId == -1)) {
      bVar3 = 0;
    }
  }
  bVar5 = ESStateBase::ESStateBase_SelectionIsAllowedByLogicEnabled
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
    in_stack_6 = (MethodInfo *)VStack_2.point.y;
    ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
              ((ESStateBase *)this,e,bVar5 & bVar3,hit,in_stack_7);
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_PointerSelect,KeyState__Enum_Down,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_PointerSelectAlt,KeyState__Enum_Down,(MethodInfo *)0x0);
    if (bVar3 != 0) goto code_?;
  }
  else {
code_?:
    if (e == (EditorStateMachine *)0x0) goto code_?;
    this_02 = EditorStateMachine::EditorStateMachine_Select(e,0,-5,(MethodInfo *)0x0);
    if (((bVar5 != 0) && (this_02 != (WorldObjectClientRef *)0x0)) &&
       (pOVar8 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)this_02,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           ), pOVar8 != (Object *)0x0)) goto code_?;
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
  targetHit._60_4_ = (int)VStack_2.interactionFlags;
  targetHit.interactionFlags._0_4_ = (int)((ulonglong)VStack_2.interactionFlags >> 0x20);
  targetHit.interactionFlags._4_4_ = 0;
  bVar3 = ESTerrainEdit_ResettingTerrain(this,targetHit,in_stack_6);
  if (bVar3 != 0) {
    return;
  }
  if ((e != (EditorStateMachine *)0x0) &&
     (pCVar9 = (e->fields).cubeModelingStateMachine, pCVar9 != (CubeModelingStateMachine *)0x0)) {
    (*(code *)(pCVar9->klass->vtable).Update.method)();
    if (VStack_2.woId == 0) {
      bVar10 = false;
    }
    else {
      pMVar4 = (this->fields).terrain;
      if (pMVar4 == (MVCubeModelPrototypeTerrain *)0x0) goto code_?;
      bVar10 = VStack_2.woId != (pMVar4->fields)._._._.id;
    }
    if ((bVar10 & bVar5) != 0) {
      pCVar9 = (e->fields).cubeModelingStateMachine;
      if (pCVar9 == (CubeModelingStateMachine *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                (pCVar9,0,(MethodInfo *)0x0);
    }
    pMVar11 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar11 != (MainCameraManager *)0x0) {
      if ((pMVar11->fields).isLogicRendered == 0) {
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
                        ((VoxelHit *)&stack0xffffff18,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                         (MethodInfo *)0x0);
      if (bVar3 != 0) {
        e = pEStack_12;
      }
      pMVar11 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar11 != (MainCameraManager *)0x0) {
        this_00 = (pMVar11->fields).mainCamera;
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar13 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                           (&RStack_14.m_Direction,(MethodInfo *)0x0);
        if (this_00 != (Camera *)0x0) {
          pRVar15 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                             (&RStack_14,this_00,*pVVar13,(MethodInfo *)0x0);
          SStack_1.fields._numChildren = (int32_t)(pRVar15->m_Origin).x;
          fStack_16 = (pRVar15->m_Origin).y;
          fStack_17 = (pRVar15->m_Origin).z;
          fStack_18 = (pRVar15->m_Direction).x;
          RStack_14.m_Direction.y = (pRVar15->m_Direction).y;
          RStack_14.m_Direction.z = (pRVar15->m_Direction).z;
          iVar19 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Logic,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Physics);
          }
          ray.m_Origin.y = fStack_16;
          ray.m_Origin.x = (float)SStack_1.fields._numChildren;
          ray.m_Origin.z = fStack_17;
          ray.m_Direction.x = fStack_18;
          ray.m_Direction.y = RStack_14.m_Direction.y;
          ray.m_Direction.z = RStack_14.m_Direction.z;
          UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_13
                    (ray,(RaycastHit *)&SStack_1,INFINITY,1 << ((byte)iVar19 & 0x1f),
                     (MethodInfo *)0x0);
          pCVar20 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                              ((RaycastHit *)&SStack_1,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pCVar20,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            return;
          }
          pCVar20 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                              ((RaycastHit *)&SStack_1,(MethodInfo *)0x0);
          if ((pCVar20 != (Collider *)0x0) &&
             (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pCVar20,(MethodInfo *)0x0),
             this_03 != (GameObject *)0x0)) {
            x = (Object_1 *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_GetComponentInChildren_1
                          (this_03,
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
            fVar21 = RTG::SphereTreeNode`1[System::Object]::
                     SphereTreeNode_1_System_Object__get_Radius(&SStack_1,(MethodInfo *)0x0);
            RStack_14.m_Direction.z = fVar21;
            if ((float)e <= fVar21) {
              return;
            }
code_?:
            pOVar8 = (Object *)func_?();
            FSMEntity::FSMEntity_set_Event((FSMEntity *)this_01,pOVar8,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
     (this_00 = (RTFocusCamera *)(pGVar2->fields).LaserCommands, this_00 != (RTFocusCamera *)0x0)) {
    RTG::RTFocusCamera::RTFocusCamera_OnPrjSwitchTransitionBegin
              (this_00,CameraPrjSwitchTransition_Type__Enum_None,(MethodInfo *)0x0);
    if (e != (EditorStateMachine *)0x0) {
      iVar3 = MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                        ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
      if (iVar3 != 0) {
        if (*(int *)(iVar3 + 0x10) == 0) {
          ESStateBase::ESStateBase_DeTintCurrent((ESStateBase *)e,(MethodInfo *)0x0);
        }
        pCVar4 = (e->fields).cubeModelingStateMachine;
        if (pCVar4 != (CubeModelingStateMachine *)0x0) {
          CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors(pCVar4,(MethodInfo *)0x0)
          ;
          pCVar4 = (e->fields).cubeModelingStateMachine;
          if (pCVar4 != (CubeModelingStateMachine *)0x0) {
            CubeModelingStateMachine::CubeModelingStateMachine_EndEdit(pCVar4,(MethodInfo *)0x0);
            (e->fields)._.curEvent = (Object *)0x0;
            func_?();
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_PointerSelect,KeyState__Enum_Up,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_PointerSelect,KeyState__Enum_Down,(MethodInfo *)0x0);
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
      in_stack_4 = &UNK_?;
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
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar5 != (MVNetworkGame *)0x0) &&
            (pWVar6 = (pMVar5->fields).worldNetwork, pWVar6 != (WorldNetwork *)0x0)) &&
           (this_00 = (RuntimeEventManager *)(pWVar6->fields)._.runtimeEventManagerNetwork,
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
  pcVar7 = (code *)swi(3);
  bVar1 = (*pcVar7)();
  return bVar1;
}

