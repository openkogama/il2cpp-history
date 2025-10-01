
/* Void ExportSelfAvatar() */

void Assembly-CSharp.dll::ObjExportHandler::ObjExportHandler_ExportSelfAvatar(MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                   );
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_Adding_obj_file__);
    func_?(&StringLiteral___kogama_data_folder__);
    func_?(&StringLiteral__obj);
    func_?(&StringLiteral_Exported__);
    func_?(&StringLiteral__files_successfully_to_);
    func_?(&::StringLiteral_____);
    cRam_? = '\x01';
  }
  IStack_1.m_value = 0;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((this_01 == (MVNetworkGame *)0x0) ||
       (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
       pMVar2 == (MVLocalPlayer *)0x0)) ||
      (pSVar3 = (pMVar2->fields).spawnRoleDataMediator, pSVar3 == (SpawnRoleDataMediator *)0x0)) ||
     (((id = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
             SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__op_Implicit
                       ((SpawnRoleVariable_1_System_Object_ *)(pSVar3->fields).woId,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                       ), this_00 == (MVWorldObjectClientManager *)0x0 ||
       (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,(int32_t)id,(MethodInfo *)0x0), pMVar4 == (MVWorldObject *)0x0))
      || (this = pMVar4[1].fields.inputLinkRefs, this == (List_1_MV_WorldObject_Link_ *)0x0)))) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    IStack_1.m_value = (int32_t)&UNK_?;
    pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       ((GameObject *)this,
                        UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                       );
    if (pOVar5 == (Object__Array *)0x0) goto code_?;
    for (; IStack_1.m_value < (int)pOVar5->max_length; IStack_1.m_value = IStack_1.m_value + 1) {
      if ((undefined *)pOVar5->max_length <= (uint)IStack_1.m_value) {
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
        goto code_?;
      }
      mf = (MeshFilter *)pOVar5->vector[IStack_1.m_value];
      pSVar6 = (String__Array *)func_?();
      if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                         ((MethodInfo *)0x0);
      if (pSVar6 == (String__Array *)0x0) goto code_?;
      if (pSVar6->max_length == 0) goto code_?;
      pSVar6->vector[0] = pSVar7;
      func_?();
      if (pSVar6->max_length < 2) goto code_?;
      pSVar6->vector[1] = ::StringLiteral_____;
      func_?();
      if ((undefined *)pOVar5->max_length <= (uint)IStack_1.m_value) goto code_?;
      ppOVar8 = pOVar5->vector + IStack_1.m_value;
      if ((Component *)*ppOVar8 == (Component *)0x0) goto code_?;
      IStack_1.m_value = (int32_t)&UNK_?;
      pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)*ppOVar8,(MethodInfo *)0x0);
      if (pGVar9 == (GameObject *)0x0) goto code_?;
      pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)pGVar9,(MethodInfo *)0x0);
      if (pSVar6->max_length < 3) goto code_?;
      pSVar6->vector[2] = pSVar7;
      func_?();
      pSVar7 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
      if (pSVar6->max_length < 4) goto code_?;
      pSVar6->vector[3] = pSVar7;
      func_?();
      if (pSVar6->max_length < 5) goto code_?;
      pSVar6->vector[4] = StringLiteral__obj;
      func_?();
      pSVar7 = mscorlib.dll::System::String::String_Concat_6(pSVar6,(MethodInfo *)0x0);
      ObjExporterScript::ObjExporterScript_MeshToFile(mf,pSVar7,0,(MethodInfo *)0x0);
      if ((undefined *)pOVar5->max_length <= (uint)IStack_1.m_value) goto code_?;
      ppOVar8 = pOVar5->vector + IStack_1.m_value;
      if ((Component *)*ppOVar8 == (Component *)0x0) goto code_?;
      IStack_1.m_value = (int32_t)&UNK_?;
      pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)*ppOVar8,(MethodInfo *)0x0);
      if (pGVar9 == (GameObject *)0x0) goto code_?;
      pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)pGVar9,(MethodInfo *)0x0);
      pSVar7 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Adding_obj_file__,pSVar7,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar7,(MethodInfo *)0x0);
    }
    pSVar6 = (String__Array *)func_?();
    if (pSVar6 == (String__Array *)0x0) goto code_?;
    if (pSVar6->max_length == 0) goto code_?;
    pSVar6->vector[0] = StringLiteral_Exported__;
    func_?();
    puVar10 = &UNK_?;
    pSVar7 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&stack0xffffffe4,(MethodInfo *)0x0);
    if (pSVar6->max_length < 2) goto code_?;
    pSVar6->vector[1] = pSVar7;
    func_?();
    if (pSVar6->max_length < 3) goto code_?;
    pSVar6->vector[2] = StringLiteral__files_successfully_to_;
    func_?();
    if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                       ((MethodInfo *)0x0);
    if (3 < pSVar6->max_length) {
      pSVar6->vector[3] = pSVar7;
      func_?();
      if (4 < pSVar6->max_length) {
        pSVar6->vector[4] = StringLiteral___kogama_data_folder__;
        func_?();
        pSVar7 = mscorlib.dll::System::String::String_Concat_6(pSVar6,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar7,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = puVar10;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void InitializePicking() */

void Assembly-CSharp.dll::ObjExportHandler::ObjExportHandler_InitializePicking(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&TypeInfo__IGUICrossHair);
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&TypeInfo__ObjExportHandler);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__ObjExportHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ObjExportHandler);
  }
  TypeInfo__ObjExportHandler->static_fields->picking = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar1 != (IPlayModeUI *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType == (Il2CppClass *)TypeInfo__IPlayModeUI) {
          ppMVar5 = &(&(pIVar1->klass->vtable).GetCrossHair)
                     [pIVar1->klass->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar5 = (MethodInfo **)func_?(pIVar1,TypeInfo__IPlayModeUI,2);
code_?:
    iVar6 = (*(code *)*ppMVar5)(pIVar1,ppMVar5[1]);
    if (iVar6 != 0) {
      func_?(1,TypeInfo__IGUICrossHair,iVar6,1);
      this = TypeInfo__ObjExportHandler->static_fields->ignoreIds;
      this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_00 != (MVNetworkGame *)0x0) {
        pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
        if ((pMVar7 != (MVLocalPlayer *)0x0) &&
           (pSVar8 = (pMVar7->fields).spawnRoleDataMediator, pSVar8 != (SpawnRoleDataMediator *)0x0)
           ) {
          item = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                 ::SpawnRoleVariable`1[System::Object]::
                 SpawnRoleVariable_1_System_Object__op_Implicit
                           ((SpawnRoleVariable_1_System_Object_ *)(pSVar8->fields).woId,
                            MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                           );
          if (this != (HashSet_1_System_Int32_ *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
            HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
                      (this,(int32_t)item,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean MVObjectIsType(Transform, Type, Int32 ByRef) */

bool Assembly-CSharp.dll::ObjExportHandler::ObjExportHandler_MVObjectIsType
               (Transform *t,Type *type,int32_t *woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ObjExportHandler);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((t != (Transform *)0x0) &&
      (this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)t,(MethodInfo *)0x0), this != (GameObject *)0x0)) &&
     (goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                       ((Object_1 *)this,(MethodInfo *)0x0),
     pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                        (pMVar1,goId,(MethodInfo *)0x0);
    if (this_00 == (MVWorldObjectClient *)0x0) {
code_?:
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (t,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        *woId = -1;
        return 0;
      }
      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                         (t,(MethodInfo *)0x0);
      if ((TypeInfo__ObjExportHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = ObjExportHandler_MVObjectIsType(pTVar2,type,woId,(MethodInfo *)0x0);
      return bVar3;
    }
    *woId = (this_00->fields)._.id;
    if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
            UnsafeUtility_EnumEquals((Int32Enum__Enum)type,0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return 1;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      bVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                        (pMVar1,*woId,WorldObjectType__Enum_CubeModelPrototypeTerrain,
                         (MethodInfo *)0x0);
      if (bVar3 != 0) {
        return 0;
      }
      pTVar4 = mscorlib.dll::System::Object::Object_GetType((Object *)this_00,(MethodInfo *)0x0);
      if (type != (Type *)0x0) {
        cVar5 = (*(code *)(type->klass->vtable).IsAssignableFrom.method)
                          (type,pTVar4,(type->klass->vtable).GetType.methodPtr);
        if (cVar5 != '\0') {
          return 1;
        }
        goto code_?;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* Boolean Pick(VoxelHit ByRef, HashSet`1[System.Int32], Int32) */

bool Assembly-CSharp.dll::ObjExportHandler::ObjExportHandler_Pick
               (VoxelHit *hit,HashSet_1_System_Int32_ *ignoreWoIds,int32_t layerMask,
               MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffeac;
  puVar5 = &stack0xfffffeac;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__get_Current__
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(&LStack_6,0,0x58);
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar7 = MVInputWrapper::MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
  if (bVar7 == 0) {
    if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                     ((MethodInfo *)0x0);
    if (this == (EventSystem *)0x0) {
code_?:
      func_?();
      func_?();
      pcVar8 = (code *)swi(3);
      bVar7 = (*pcVar8)();
      return bVar7;
    }
    bVar7 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_IsPointerOverGameObject(this,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      MVar9 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
      if (MVar9 == MVJoinState__Enum_Playing) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar10 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                  DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                            (&VStack_11,(DefaultEventSystem_Input *)0x0,in_stack_12);
        fStack_13 = pVVar10->x;
        pVVar10 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                  DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                            (&VStack_11,(DefaultEventSystem_Input *)0x0,in_stack_12);
        VStack_11.y = pVVar10->y;
        VStack_11.x = fStack_13;
        VStack_11.z = 0.0;
        if (this_00 != (Camera *)0x0) {
          pos.y = VStack_11.y;
          pos.x = fStack_13;
          pos.z = 0.0;
          pRVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                              ((Ray *)&stack0xffffff10,this_00,pos,(MethodInfo *)0x0);
          fStack_15 = 0.0;
          fStack_13 = _UNK_?;
          fStack_16 = (pRVar14->m_Origin).x;
          pTStack_17 = (Transform *)(pRVar14->m_Origin).y;
          fStack_18 = (pRVar14->m_Origin).z;
          fStack_19 = (pRVar14->m_Direction).x;
          uStack_20._0_4_ = (pRVar14->m_Direction).y;
          uStack_20._4_4_ = (pRVar14->m_Direction).z;
          this_01 = CollisionDetection::CollisionDetection_MVHitAll
                              (*pRVar14,INFINITY,ignoreWoIds,layerMask,(MethodInfo *)0x0);
          if (this_01 != (List_1_VoxelHit_ *)0x0) {
            if ((this_01->fields)._size == 0) goto code_?;
            bStack_21 = 0;
            pLVar22 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                      List_1_VoxelHit__GetEnumerator
                                ((List_1_T_Enumerator_VoxelHit_ *)&stack0xfffffeb8,this_01,
                                 MethodInfo__System__Collections__Generic__List<VoxelHit>__GetEnumerator__
                                );
            uStack_23 = 0;
            LStack_6._list = pLVar22->_list;
            LStack_6._index = pLVar22->_index;
            LStack_6._version = pLVar22->_version;
            LStack_6._12_4_ = *(undefined4 *)&pLVar22->field_0xc;
            LStack_6._current.point.x = (pLVar22->_current).point.x;
            LStack_6._current.point.y = (pLVar22->_current).point.y;
            LStack_6._current.point.z = (pLVar22->_current).point.z;
            LStack_6._current.normal.x = (pLVar22->_current).normal.x;
            LStack_6._current.normal.y = (pLVar22->_current).normal.y;
            LStack_6._current.normal.z = (pLVar22->_current).normal.z;
            LStack_6._current.cubePos.x = (pLVar22->_current).cubePos.x;
            LStack_6._current.cubePos.y = (pLVar22->_current).cubePos.y;
            LStack_6._current._28_4_ = *(undefined4 *)&(pLVar22->_current).cubePos.z;
            LStack_6._current.face = (pLVar22->_current).face;
            LStack_6._current.isCubeHit = (pLVar22->_current).isCubeHit;
            LStack_6._current._37_3_ = *(undefined3 *)&(pLVar22->_current).field_0x25;
            LStack_6._current.woId = (pLVar22->_current).woId;
            LStack_6._current.cube = (pLVar22->_current).cube;
            LStack_6._current.distance = (pLVar22->_current).distance;
            LStack_6._current.collider = (pLVar22->_current).collider;
            LStack_6._current.transform = (pLVar22->_current).transform;
            LStack_6._current._60_4_ = *(undefined4 *)&(pLVar22->_current).field_0x3c;
            LStack_6._current.interactionFlags = (pLVar22->_current).interactionFlags;
            uStack_1 = 1;
            pLStack_24 = &LStack_6;
            while( true ) {
              bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[VoxelHit]::
                      List_1_T_Enumerator_VoxelHit__MoveNext
                                (&LStack_6,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__MoveNext__
                                );
              uVar25 = LStack_6._current._28_4_;
              uVar26 = LStack_6._current.cubePos._0_4_;
              fVar27 = LStack_6._current.normal.z;
              fVar28 = LStack_6._current.normal.y;
              if (bVar7 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                          ((Object *)&LStack_6,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__Dispose__
                           ,in_stack_29);
                *unaff_FS_OFFSET = uStack_3;
                return bStack_21;
              }
              pMStack_30 = (MethodInfo *)LStack_6._current.point.x;
              fStack_31 = LStack_6._current.point.y;
              fStack_32 = LStack_6._current.point.z;
              fStack_33 = LStack_6._current.normal.x;
              VStack_11.y = (float)LStack_6._current.interactionFlags;
              VStack_11.z = (float)((ulonglong)LStack_6._current.interactionFlags >> 0x20);
              if (LStack_6._current.transform == (Transform *)0x0) break;
              in_stack_29 =
                   (MethodInfo *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)LStack_6._current.transform,(MethodInfo *)0x0);
              if (in_stack_29 == (MethodInfo *)0x0) break;
              bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_get_activeInHierarchy
                                ((GameObject *)in_stack_29,(MethodInfo *)0x0);
              fVar34 = fStack_32;
              if (bVar7 != 0) {
                fVar35 = fStack_18;
                in_stack_29 = pMStack_30;
                fVar36 = fStack_31;
                pTVar37 = pTStack_17;
                fVar38 = (float10)func_?();
                uVar39 = LStack_6._current.cubePos._0_4_;
                fStack_15 = (float)fVar38;
                if (fStack_15 < fStack_13) {
                  (hit->point).x = (float)pMStack_30;
                  (hit->point).y = fStack_31;
                  (hit->point).z = fStack_32;
                  (hit->normal).x = fStack_33;
                  (hit->normal).y = fVar28;
                  (hit->normal).z = fVar27;
                  LStack_6._current.cubePos.x = (int16_t)uVar26;
                  LStack_6._current.cubePos.y = SUB42(uVar26,2);
                  (hit->cubePos).x = LStack_6._current.cubePos.x;
                  (hit->cubePos).y = LStack_6._current.cubePos.y;
                  *(undefined4 *)&(hit->cubePos).z = uVar25;
                  hit->face = (int32_t)in_stack_29;
                  *(float *)&hit->isCubeHit = fVar36;
                  hit->woId = (int32_t)fVar34;
                  hit->cube = (Cube *)0x0;
                  hit->distance = (float)&hit->cube;
                  hit->collider = (Collider *)0x0;
                  hit->transform = pTVar37;
                  *(float *)&hit->field_0x3c = fVar35;
                  hit->interactionFlags = CONCAT44(VStack_11.z,VStack_11.y);
                  LStack_6._current.cubePos._0_4_ = uVar39;
                  fStack_13 = fStack_15;
                  func_?();
                  bStack_21 = 1;
                }
              }
            }
          }
        }
        goto code_?;
      }
    }
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return 0;
}


/* Void Update() */

void Assembly-CSharp.dll::ObjExportHandler::ObjExportHandler_Update
               (ObjExportHandler *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff38;
  puVar5 = &stack0xffffff38;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                   );
    func_?(&TypeInfo__ObjExportHandler);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_WoPickSuccess__);
    func_?(&StringLiteral_Adding_obj_file__);
    func_?(&StringLiteral___kogama_data_folder__);
    func_?(&StringLiteral__obj);
    func_?(&StringLiteral_Exported__);
    func_?(&StringLiteral__files_successfully_to_);
    func_?(&::StringLiteral_____);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(&stack0xffffff8c,0,0x48);
  BStack_6.m_value = 0;
  IStack_7.m_value = 0;
  IStack_8.m_value = 0;
  if ((TypeInfo__ObjExportHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ObjExportHandler);
  }
  if ((TypeInfo__ObjExportHandler->static_fields->picking == 0) ||
     (bVar9 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyDown
                        (KeyCode__Enum_Mouse0,(MethodInfo *)0x0), bVar9 == 0)) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
  uStack_1 = 0;
  if ((TypeInfo__ObjExportHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__ObjExportHandler->static_fields->picking = 0;
  BStack_6.m_value =
       ObjExportHandler_Pick
                 ((VoxelHit *)&stack0xffffff8c,TypeInfo__ObjExportHandler->static_fields->ignoreIds,
                  -0x40005,(MethodInfo *)0x0);
  if ((BStack_6.m_value != 0) && (iStack_10 == -1)) {
    BStack_6.m_value = 0;
  }
  if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar11 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_6,(MethodInfo *)0x0);
  pSVar11 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_WoPickSuccess__,pSVar11,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar11,(MethodInfo *)0x0);
  if (BStack_6.m_value == 0) goto code_?;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((((this_01 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar12 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_01,0,(MethodInfo *)0x0), pMVar12 == (MVWorldObject *)0x0)) ||
      (this_00 = pMVar12[1].fields.inputLinkRefs, this_00 == (List_1_MV_WorldObject_Link_ *)0x0)) ||
     (pOVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren
                         ((GameObject *)this_00,
                          UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                         ), pOVar13 == (Object__Array *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
code_?:
    func_?();
  }
  else {
    for (; IStack_7.m_value < (int)pOVar13->max_length; IStack_7.m_value = IStack_7.m_value + 1) {
      if (pOVar13->max_length <= (uint)IStack_7.m_value) {
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
        goto code_?;
      }
      mf = (MeshFilter *)pOVar13->vector[IStack_7.m_value];
      pSVar14 = (String__Array *)func_?();
      if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pSVar11 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                         ((MethodInfo *)0x0);
      if (pSVar14 == (String__Array *)0x0) goto code_?;
      if (pSVar14->max_length == 0) goto code_?;
      pSVar14->vector[0] = pSVar11;
      func_?();
      if (pSVar14->max_length < 2) goto code_?;
      pSVar14->vector[1] = ::StringLiteral_____;
      func_?();
      if (pOVar13->max_length <= (uint)IStack_7.m_value) goto code_?;
      if (((Component *)pOVar13->vector[IStack_7.m_value] == (Component *)0x0) ||
         (pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pOVar13->vector[IStack_7.m_value],(MethodInfo *)0x0),
         pGVar15 == (GameObject *)0x0)) goto code_?;
      pSVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)pGVar15,(MethodInfo *)0x0);
      if (pSVar14->max_length < 3) goto code_?;
      pSVar14->vector[2] = pSVar11;
      func_?();
      pSVar11 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_7,(MethodInfo *)0x0);
      if (pSVar14->max_length < 4) goto code_?;
      pSVar14->vector[3] = pSVar11;
      func_?();
      if (pSVar14->max_length < 5) goto code_?;
      pSVar14->vector[4] = StringLiteral__obj;
      func_?();
      pSVar11 = mscorlib.dll::System::String::String_Concat_6(pSVar14,(MethodInfo *)0x0);
      ObjExporterScript::ObjExporterScript_MeshToFile(mf,pSVar11,0,(MethodInfo *)0x0);
      if (pOVar13->max_length <= (uint)IStack_7.m_value) goto code_?;
      if (((Component *)pOVar13->vector[IStack_7.m_value] == (Component *)0x0) ||
         (pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pOVar13->vector[IStack_7.m_value],(MethodInfo *)0x0),
         pGVar15 == (GameObject *)0x0)) goto code_?;
      pSVar11 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)pGVar15,(MethodInfo *)0x0);
      pSVar11 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Adding_obj_file__,pSVar11,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar11,(MethodInfo *)0x0);
    }
    pSVar14 = (String__Array *)func_?();
    if (pSVar14 == (String__Array *)0x0) goto code_?;
    if (pSVar14->max_length == 0) goto code_?;
    pSVar14->vector[0] = StringLiteral_Exported__;
    func_?();
    IStack_8.m_value = pOVar13->max_length;
    pSVar11 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
    if (pSVar14->max_length < 2) goto code_?;
    pSVar14->vector[1] = pSVar11;
    func_?();
    if (pSVar14->max_length < 3) goto code_?;
    pSVar14->vector[2] = StringLiteral__files_successfully_to_;
    func_?();
    if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar11 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                       ((MethodInfo *)0x0);
    if (3 < pSVar14->max_length) {
      pSVar14->vector[3] = pSVar11;
      func_?();
      if (4 < pSVar14->max_length) {
        pSVar14->vector[4] = StringLiteral___kogama_data_folder__;
        func_?();
        pSVar11 = mscorlib.dll::System::String::String_Concat_6(pSVar14,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar11,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* ObjExportHandler() */

void Assembly-CSharp.dll::ObjExportHandler::ObjExportHandler__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__ObjExportHandler);
    cRam_? = '\x01';
  }
  TypeInfo__ObjExportHandler->static_fields->picking = 0;
  this = (HashSet_1_System_Int32_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  TypeInfo__ObjExportHandler->static_fields->ignoreIds = this;
  func_?(&TypeInfo__ObjExportHandler->static_fields->ignoreIds,this);
  return;
}

