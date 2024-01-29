
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
  func_?(auStack_1,0,0x2c);
  func_?(auStack_1 + 0x3c,0,0x48);
  bVar2 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    ((VoxelHit *)(auStack_1 + 0x3c),(HashSet_1_System_Int32_ *)0x0,-0x40005,
                     (MethodInfo *)0x0);
  if (bVar2 != 0) {
    pMVar3 = (this->fields).terrain;
    if (pMVar3 == (MVCubeModelPrototypeTerrain *)0x0) goto code_?;
    if ((iStack_4 == (pMVar3->fields)._._._.id) || (iStack_4 == -1)) {
      bVar2 = 0;
    }
  }
  bVar5 = ESStateBase::ESStateBase_SelectionIsAllowedByLogicEnabled(iStack_4,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    hit.point.y = (float)uStack_6;
    hit.point.x = (float)pMStack_7;
    hit.point.z = (float)uStack_8;
    hit.normal.x = (float)uStack_9;
    hit.normal.y = (float)uStack_10;
    hit.normal.z = (float)uStack_11;
    hit.cubePos.x = (undefined2)uStack_12;
    hit.cubePos.y = uStack_12._2_2_;
    hit._28_4_ = uStack_13;
    hit.face = uStack_14;
    hit._36_4_ = iStack_4;
    hit.woId = uStack_15;
    hit.cube = (Cube *)uStack_16;
    hit.distance = (float)uStack_17;
    hit.collider = (Collider *)uStack_18;
    hit.transform = (Transform *)uStack_19;
    hit._60_4_ = (float)uStack_20;
    hit.interactionFlags._0_4_ = (float)((ulonglong)uStack_20 >> 0x20);
    hit.interactionFlags._4_4_ = 0;
    in_stack_21 = pMStack_7;
    ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
              ((ESStateBase *)this,e,bVar5 & bVar2,hit,in_stack_22);
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
  bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_PointerSelect,KeyState__Enum_Down,(MethodInfo *)0x0);
  if (bVar2 == 0) {
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
    bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                      (KogamaControls__Enum_PointerSelectAlt,KeyState__Enum_Down,(MethodInfo *)0x0);
    if (bVar2 != 0) goto code_?;
  }
  else {
code_?:
    if (e == (EditorStateMachine *)0x0) goto code_?;
    this_02 = EditorStateMachine::EditorStateMachine_Select(e,0,-5,(MethodInfo *)0x0);
    if (((bVar5 != 0) && (this_02 != (WorldObjectClientRef *)0x0)) &&
       (pOVar23 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)this_02,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           ), pOVar23 != (Object *)0x0)) goto code_?;
  }
  targetHit.point.y = (float)uStack_6;
  targetHit.point.x = (float)pMStack_7;
  targetHit.point.z = (float)uStack_8;
  targetHit.normal.x = (float)uStack_9;
  targetHit.normal.y = (float)uStack_10;
  targetHit.normal.z = (float)uStack_11;
  targetHit.cubePos.x = (undefined2)uStack_12;
  targetHit.cubePos.y = uStack_12._2_2_;
  targetHit._28_4_ = uStack_13;
  targetHit.face = uStack_14;
  targetHit._36_4_ = iStack_4;
  targetHit.woId = uStack_15;
  targetHit.cube = (Cube *)uStack_16;
  targetHit.distance = (float)uStack_17;
  targetHit.collider = (Collider *)uStack_18;
  targetHit.transform = (Transform *)uStack_19;
  targetHit._60_4_ = (int)uStack_20;
  targetHit.interactionFlags._0_4_ = (int)((ulonglong)uStack_20 >> 0x20);
  targetHit.interactionFlags._4_4_ = 0;
  bVar2 = ESTerrainEdit_ResettingTerrain(this,targetHit,in_stack_21);
  if (bVar2 != 0) {
    return;
  }
  if ((e != (EditorStateMachine *)0x0) &&
     (pCVar24 = (e->fields).cubeModelingStateMachine, pCVar24 != (CubeModelingStateMachine *)0x0)) {
    (*(code *)(pCVar24->klass->vtable).Update.method)();
    if (iStack_4 == 0) {
      bVar25 = false;
    }
    else {
      pMVar3 = (this->fields).terrain;
      if (pMVar3 == (MVCubeModelPrototypeTerrain *)0x0) goto code_?;
      bVar25 = iStack_4 != (pMVar3->fields)._._._.id;
    }
    if ((bVar25 & bVar5) != 0) {
      pCVar24 = (e->fields).cubeModelingStateMachine;
      if (pCVar24 == (CubeModelingStateMachine *)0x0) goto code_?;
      CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
                (pCVar24,0,(MethodInfo *)0x0);
    }
    pMVar26 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar26 != (MainCameraManager *)0x0) {
      if ((pMVar26->fields).isLogicRendered == 0) {
        return;
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                        (KogamaControls__Enum_PointerSelectAlt,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
      func_?();
      e = _UNK_?;
      bVar2 = EditModeObjectPicker::EditModeObjectPicker_Pick
                        ((VoxelHit *)&stack0xffffff18,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                         (MethodInfo *)0x0);
      if (bVar2 != 0) {
        e = pEStack_27;
      }
      pMVar26 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar26 != (MainCameraManager *)0x0) {
        this_00 = (pMVar26->fields).mainCamera;
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar28 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                           (&RStack_29.m_Direction,(MethodInfo *)0x0);
        if (this_00 != (Camera *)0x0) {
          pRVar30 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                             (&RStack_29,this_00,*pVVar28,(MethodInfo *)0x0);
          auStack_1._44_4_ = (pRVar30->m_Origin).x;
          auStack_1._48_4_ = (pRVar30->m_Origin).y;
          auStack_1._52_4_ = (pRVar30->m_Origin).z;
          auStack_1._56_4_ = (pRVar30->m_Direction).x;
          RStack_29.m_Direction.y = (pRVar30->m_Direction).y;
          RStack_29.m_Direction.z = (pRVar30->m_Direction).z;
          iVar31 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Logic,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Physics->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Physics);
          }
          ray.m_Origin.y = (float)auStack_1._48_4_;
          ray.m_Origin.x = (float)auStack_1._44_4_;
          ray.m_Origin.z = (float)auStack_1._52_4_;
          ray.m_Direction.x = (float)auStack_1._56_4_;
          ray.m_Direction.y = RStack_29.m_Direction.y;
          ray.m_Direction.z = RStack_29.m_Direction.z;
          UnityEngine.PhysicsModule.dll::UnityEngine::Physics::Physics_Raycast_13
                    (ray,(RaycastHit *)auStack_1,INFINITY,1 << ((byte)iVar31 & 0x1f),
                     (MethodInfo *)0x0);
          pCVar32 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                              ((RaycastHit *)auStack_1,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)pCVar32,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            return;
          }
          pCVar32 = UnityEngine.PhysicsModule.dll::UnityEngine::RaycastHit::RaycastHit_get_collider
                              ((RaycastHit *)auStack_1,(MethodInfo *)0x0);
          if ((pCVar32 != (Collider *)0x0) &&
             (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pCVar32,(MethodInfo *)0x0),
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
            bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              (x,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar2 == 0) {
              return;
            }
            fVar33 = UnityEngine.InputLegacyModule.dll::UnityEngine::Touch::Touch_get_deltaTime
                               ((Touch *)auStack_1,(MethodInfo *)0x0);
            RStack_29.m_Direction.z = fVar33;
            if ((float)e <= fVar33) {
              return;
            }
code_?:
            pOVar23 = (Object *)func_?();
            FSMEntity::FSMEntity_set_Event((FSMEntity *)this_01,pOVar23,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar34 = (code *)swi(3);
  (*pcVar34)();
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

