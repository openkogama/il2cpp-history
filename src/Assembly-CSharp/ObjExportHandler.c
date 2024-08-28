
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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (pSVar2 = (pMVar1->fields).spawnRoleDataMediator, pSVar2 != (SpawnRoleDataMediator *)0x0)) {
      id = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
           SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__op_Implicit
                     ((SpawnRoleVariable_1_System_Object_ *)(pSVar2->fields).woId,
                      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                     );
      if (this_00 != (MVWorldObjectClientManager *)0x0) {
        pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,(int32_t)id,(MethodInfo *)0x0);
        if ((pMVar3 != (MVWorldObject *)0x0) &&
           (this = pMVar3[1].fields.inputLinkRefs, this != (List_1_MV_WorldObject_Link_ *)0x0)) {
          IVar4.m_value =
               (int32_t)
               UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
          ;
          pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                   GameObject_GetComponentsInChildren
                             ((GameObject *)this,
                              UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                             );
          while (pOVar5 != (Object__Array *)0x0) {
            if ((int)pOVar5->max_length <= IVar4.m_value) {
              pSVar6 = (String__Array *)func_?();
              if (pSVar6 != (String__Array *)0x0) {
                if (pSVar6->max_length == 0) goto code_?;
                pSVar6->vector[0] = StringLiteral_Exported__;
                func_?();
                pSVar7 = mscorlib.dll::System::Int32::Int32_ToString
                                   ((Int32 *)&stack0xffffffe4,(MethodInfo *)0x0);
                if (pSVar6->max_length < 2) goto code_?;
                pSVar6->vector[1] = pSVar7;
                func_?();
                if (pSVar6->max_length < 3) goto code_?;
                pSVar6->vector[2] = StringLiteral__files_successfully_to_;
                puVar8 = &UNK_?;
                func_?();
                if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Application::
                         Application_get_dataPath((MethodInfo *)0x0);
                if (pSVar6->max_length < 4) goto code_?;
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
                  *unaff_FS_OFFSET = puVar8;
                  return;
                }
                goto code_?;
              }
              break;
            }
            if ((MethodInfo *)pOVar5->max_length <= (uint)IVar4.m_value) {
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
              break;
            }
            mf = (MeshFilter *)pOVar5->vector[IVar4.m_value];
            pSVar6 = (String__Array *)func_?();
            if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                               ((MethodInfo *)0x0);
            if (pSVar6 == (String__Array *)0x0) break;
            if (pSVar6->max_length == 0) goto code_?;
            pSVar6->vector[0] = pSVar7;
            func_?();
            if (pSVar6->max_length < 2) goto code_?;
            pSVar6->vector[1] = ::StringLiteral_____;
            IVar4.m_value = (int32_t)&UNK_?;
            func_?();
            if ((undefined *)pOVar5->max_length <= (uint)IVar4.m_value) goto code_?;
            if ((Component *)pOVar5->vector[IVar4.m_value] == (Component *)0x0) break;
            pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pOVar5->vector[IVar4.m_value],(MethodInfo *)0x0);
            if (pGVar9 == (GameObject *)0x0) break;
            IVar4.m_value = (int32_t)&UNK_?;
            pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                               ((Object_1 *)pGVar9,(MethodInfo *)0x0);
            if (pSVar6->max_length < 3) goto code_?;
            pSVar6->vector[2] = pSVar7;
            func_?();
            pSVar7 = mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&stack0xffffffe8,(MethodInfo *)0x0);
            if (pSVar6->max_length < 4) goto code_?;
            pSVar6->vector[3] = pSVar7;
            func_?();
            if (pSVar6->max_length < 5) goto code_?;
            pSVar6->vector[4] = StringLiteral__obj;
            func_?();
            pSVar7 = mscorlib.dll::System::String::String_Concat_6(pSVar6,(MethodInfo *)0x0);
            ObjExporterScript::ObjExporterScript_MeshToFile(mf,pSVar7,0,(MethodInfo *)0x0);
            if ((undefined *)pOVar5->max_length <= (uint)IVar4.m_value) goto code_?;
            if ((Component *)pOVar5->vector[IVar4.m_value] == (Component *)0x0) break;
            pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pOVar5->vector[IVar4.m_value],(MethodInfo *)0x0);
            if (pGVar9 == (GameObject *)0x0) break;
            IVar4.m_value = (int32_t)&UNK_?;
            pSVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                               ((Object_1 *)pGVar9,(MethodInfo *)0x0);
            pSVar7 = mscorlib.dll::System::String::String_Concat_3
                               (StringLiteral_Adding_obj_file__,pSVar7,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                      ((Object *)pSVar7,(MethodInfo *)0x0);
            IVar4.m_value = IVar4.m_value + 1;
          }
        }
      }
    }
  }
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
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
    iVar2 = func_?(2,TypeInfo__IPlayModeUI,pIVar1);
    if (iVar2 != 0) {
      func_?(1,TypeInfo__IGUICrossHair,iVar2,1);
      this = TypeInfo__ObjExportHandler->static_fields->ignoreIds;
      this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_00 != (MVNetworkGame *)0x0) {
        pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
        if ((pMVar3 != (MVLocalPlayer *)0x0) &&
           (pSVar4 = (pMVar3->fields).spawnRoleDataMediator, pSVar4 != (SpawnRoleDataMediator *)0x0)
           ) {
          item = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes
                 ::SpawnRoleVariable`1[System::Object]::
                 SpawnRoleVariable_1_System_Object__op_Implicit
                           ((SpawnRoleVariable_1_System_Object_ *)(pSVar4->fields).woId,
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
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar6 = MVInputWrapper::MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
  if (bVar6 == 0) {
    if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                     ((MethodInfo *)0x0);
    if (this == (EventSystem *)0x0) {
code_?:
      func_?();
      func_?();
      pcVar7 = (code *)swi(3);
      bVar6 = (*pcVar7)();
      return bVar6;
    }
    bVar6 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_IsPointerOverGameObject(this,(MethodInfo *)0x0);
    if (bVar6 == 0) {
      MVar8 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
      if (MVar8 == MVJoinState__Enum_Playing) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar9 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                  DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                            (&VStack_10,(DefaultEventSystem_Input *)0x0,in_stack_11);
        fStack_12 = pVVar9->x;
        pVVar9 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                  DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                            (&VStack_10,(DefaultEventSystem_Input *)0x0,in_stack_11);
        VStack_10.y = pVVar9->y;
        VStack_10.x = fStack_12;
        VStack_10.z = 0.0;
        if (this_00 != (Camera *)0x0) {
          pos.y = VStack_10.y;
          pos.x = fStack_12;
          pos.z = 0.0;
          pRVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                              ((Ray *)&stack0xffffff10,this_00,pos,(MethodInfo *)0x0);
          fStack_14 = (pRVar13->m_Origin).x;
          pTStack_15 = (Transform *)(pRVar13->m_Origin).y;
          fStack_16 = (pRVar13->m_Origin).z;
          fStack_17 = (pRVar13->m_Direction).x;
          uStack_18._0_4_ = (pRVar13->m_Direction).y;
          uStack_18._4_4_ = (pRVar13->m_Direction).z;
          fStack_12 = _UNK_?;
          this_01 = CollisionDetection::CollisionDetection_MVHitAll
                              (*pRVar13,INFINITY,ignoreWoIds,layerMask,(MethodInfo *)0x0);
          if (this_01 != (List_1_VoxelHit_ *)0x0) {
            if ((this_01->fields)._size == 0) goto code_?;
            bStack_19 = 0;
            pLVar20 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                      List_1_VoxelHit__GetEnumerator
                                ((List_1_T_Enumerator_VoxelHit_ *)&stack0xfffffeb8,this_01,
                                 MethodInfo__System__Collections__Generic__List<VoxelHit>__GetEnumerator__
                                );
            uStack_21 = 0;
            LStack_22._list = pLVar20->_list;
            LStack_22._index = pLVar20->_index;
            LStack_22._version = pLVar20->_version;
            LStack_22._12_4_ = *(undefined4 *)&pLVar20->field_0xc;
            LStack_22._current.point.x = (pLVar20->_current).point.x;
            LStack_22._current.point.y = (pLVar20->_current).point.y;
            LStack_22._current.point.z = (pLVar20->_current).point.z;
            LStack_22._current.normal.x = (pLVar20->_current).normal.x;
            LStack_22._current.normal.y = (pLVar20->_current).normal.y;
            LStack_22._current.normal.z = (pLVar20->_current).normal.z;
            LStack_22._current.cubePos.x = (pLVar20->_current).cubePos.x;
            LStack_22._current.cubePos.y = (pLVar20->_current).cubePos.y;
            LStack_22._current._28_4_ = *(undefined4 *)&(pLVar20->_current).cubePos.z;
            LStack_22._current.face = (pLVar20->_current).face;
            LStack_22._current.isCubeHit = (pLVar20->_current).isCubeHit;
            LStack_22._current._37_3_ = *(undefined3 *)&(pLVar20->_current).field_0x25;
            LStack_22._current.woId = (pLVar20->_current).woId;
            LStack_22._current.cube = (pLVar20->_current).cube;
            LStack_22._current.distance = (pLVar20->_current).distance;
            LStack_22._current.collider = (pLVar20->_current).collider;
            LStack_22._current.transform = (pLVar20->_current).transform;
            LStack_22._current._60_4_ = *(undefined4 *)&(pLVar20->_current).field_0x3c;
            LStack_22._current.interactionFlags = (pLVar20->_current).interactionFlags;
            uStack_1 = 1;
            pLStack_23 = &LStack_22;
            while( true ) {
              bVar6 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[VoxelHit]::
                      List_1_T_Enumerator_VoxelHit__MoveNext
                                (&LStack_22,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__MoveNext__
                                );
              uVar24 = LStack_22._current._28_4_;
              uVar25 = LStack_22._current.cubePos._0_4_;
              fVar26 = LStack_22._current.normal.z;
              fVar27 = LStack_22._current.normal.y;
              if (bVar6 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                          ((Object *)&LStack_22,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__Dispose__
                           ,in_stack_28);
                *unaff_FS_OFFSET = uStack_3;
                return bStack_19;
              }
              pMStack_29 = (MethodInfo *)LStack_22._current.point.x;
              fStack_30 = LStack_22._current.point.y;
              fStack_31 = LStack_22._current.point.z;
              fStack_32 = LStack_22._current.normal.x;
              VStack_10.y = (float)LStack_22._current.interactionFlags;
              VStack_10.z = (float)((ulonglong)LStack_22._current.interactionFlags >> 0x20);
              if (LStack_22._current.transform == (Transform *)0x0) break;
              in_stack_28 =
                   (MethodInfo *)
                   UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)LStack_22._current.transform,(MethodInfo *)0x0);
              if (in_stack_28 == (MethodInfo *)0x0) break;
              bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                      GameObject_get_activeInHierarchy
                                ((GameObject *)in_stack_28,(MethodInfo *)0x0);
              fVar33 = fStack_31;
              if (bVar6 != 0) {
                fVar34 = fStack_16;
                in_stack_28 = pMStack_29;
                fVar35 = fStack_30;
                pTVar36 = pTStack_15;
                fVar37 = (float10)func_?();
                uVar38 = LStack_22._current.cubePos._0_4_;
                fStack_39 = (float)fVar37;
                if (fStack_39 < fStack_12) {
                  (hit->point).x = (float)pMStack_29;
                  (hit->point).y = fStack_30;
                  (hit->point).z = fStack_31;
                  (hit->normal).x = fStack_32;
                  (hit->normal).y = fVar27;
                  (hit->normal).z = fVar26;
                  LStack_22._current.cubePos.x = (int16_t)uVar25;
                  LStack_22._current.cubePos.y = SUB42(uVar25,2);
                  (hit->cubePos).x = LStack_22._current.cubePos.x;
                  (hit->cubePos).y = LStack_22._current.cubePos.y;
                  *(undefined4 *)&(hit->cubePos).z = uVar24;
                  hit->face = (int32_t)in_stack_28;
                  *(float *)&hit->isCubeHit = fVar35;
                  hit->woId = (int32_t)fVar33;
                  hit->cube = (Cube *)0x0;
                  hit->distance = (float)&hit->cube;
                  hit->collider = (Collider *)0x0;
                  hit->transform = pTVar36;
                  *(float *)&hit->field_0x3c = fVar34;
                  hit->interactionFlags = CONCAT44(VStack_10.z,VStack_10.y);
                  LStack_22._current.cubePos._0_4_ = uVar38;
                  fStack_12 = fStack_39;
                  func_?();
                  bStack_19 = 1;
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
  puStack_4 = &stack0xffffff7c;
  puVar5 = &stack0xffffff7c;
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
  func_?(&puStack_6,0,0x48);
  BStack_7.m_value = 0;
  IStack_8.m_value = 0;
  IStack_9.m_value = 0;
  if ((TypeInfo__ObjExportHandler->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__ObjExportHandler);
  }
  if ((TypeInfo__ObjExportHandler->static_fields->picking != 0) &&
     (bVar10 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyDown
                        (KeyCode__Enum_Mouse0,(MethodInfo *)0x0), bVar10 != 0)) {
    uStack_1 = 0;
    if ((TypeInfo__ObjExportHandler->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__ObjExportHandler->static_fields->picking = 0;
    BStack_7.m_value =
         ObjExportHandler_Pick
                   ((VoxelHit *)&puStack_6,TypeInfo__ObjExportHandler->static_fields->ignoreIds,
                    -0x40005,(MethodInfo *)0x0);
    if ((BStack_7.m_value != 0) && (in_stack_11 == -1)) {
      BStack_7.m_value = 0;
    }
    if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pSVar12 = mscorlib.dll::System::Boolean::Boolean_ToString(&BStack_7,(MethodInfo *)0x0);
    pSVar12 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_WoPickSuccess__,pSVar12,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar12,(MethodInfo *)0x0);
    if (BStack_7.m_value != 0) {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((this_01 != (MVWorldObjectClientManager *)0x0) &&
          (pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (this_01,0,(MethodInfo *)0x0), pMVar13 != (MVWorldObject *)0x0)) &&
         (this_00 = pMVar13[1].fields.inputLinkRefs, this_00 != (List_1_MV_WorldObject_Link_ *)0x0))
      {
        pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren
                           ((GameObject *)this_00,
                            UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                           );
        while (pOVar14 != (Object__Array *)0x0) {
          if ((int)pOVar14->max_length <= IStack_8.m_value) {
            pSVar15 = (String__Array *)func_?();
            if (pSVar15 != (String__Array *)0x0) {
              if (pSVar15->max_length == 0) goto code_?;
              pSVar15->vector[0] = StringLiteral_Exported__;
              func_?();
              IStack_9.m_value = pOVar14->max_length;
              pSVar12 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_9,(MethodInfo *)0x0);
              if (pSVar15->max_length < 2) goto code_?;
              pSVar15->vector[1] = pSVar12;
              func_?();
              if (pSVar15->max_length < 3) goto code_?;
              pSVar15->vector[2] = StringLiteral__files_successfully_to_;
              func_?();
              if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pSVar12 = UnityEngine.CoreModule.dll::UnityEngine::Application::
                       Application_get_dataPath((MethodInfo *)0x0);
              if (pSVar15->max_length < 4) goto code_?;
              pSVar15->vector[3] = pSVar12;
              func_?();
              if (pSVar15->max_length < 5) goto code_?;
              pSVar15->vector[4] = StringLiteral___kogama_data_folder__;
              func_?();
              pSVar12 = mscorlib.dll::System::String::String_Concat_6(pSVar15,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar12,(MethodInfo *)0x0);
              goto code_?;
            }
            break;
          }
          if (pOVar14->max_length <= (uint)IStack_8.m_value) {
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
            break;
          }
          mf = (MeshFilter *)pOVar14->vector[IStack_8.m_value];
          pSVar15 = (String__Array *)func_?();
          if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pSVar12 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                             ((MethodInfo *)0x0);
          if (pSVar15 == (String__Array *)0x0) break;
          if (pSVar15->max_length == 0) goto code_?;
          pSVar15->vector[0] = pSVar12;
          func_?();
          if (pSVar15->max_length < 2) goto code_?;
          pSVar15->vector[1] = ::StringLiteral_____;
          func_?();
          if (pOVar14->max_length <= (uint)IStack_8.m_value) goto code_?;
          if (((Component *)pOVar14->vector[IStack_8.m_value] == (Component *)0x0) ||
             (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pOVar14->vector[IStack_8.m_value],(MethodInfo *)0x0),
             pGVar16 == (GameObject *)0x0)) break;
          pSVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                             ((Object_1 *)pGVar16,(MethodInfo *)0x0);
          if (pSVar15->max_length < 3) goto code_?;
          pSVar15->vector[2] = pSVar12;
          func_?();
          pSVar12 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
          if (pSVar15->max_length < 4) goto code_?;
          pSVar15->vector[3] = pSVar12;
          func_?();
          if (pSVar15->max_length < 5) goto code_?;
          pSVar15->vector[4] = StringLiteral__obj;
          func_?();
          pSVar12 = mscorlib.dll::System::String::String_Concat_6(pSVar15,(MethodInfo *)0x0);
          ObjExporterScript::ObjExporterScript_MeshToFile(mf,pSVar12,0,(MethodInfo *)0x0);
          if (pOVar14->max_length <= (uint)IStack_8.m_value) goto code_?;
          if (((Component *)pOVar14->vector[IStack_8.m_value] == (Component *)0x0) ||
             (pGVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)pOVar14->vector[IStack_8.m_value],(MethodInfo *)0x0),
             pGVar16 == (GameObject *)0x0)) break;
          pSVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                             ((Object_1 *)pGVar16,(MethodInfo *)0x0);
          pSVar12 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_Adding_obj_file__,pSVar12,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar12,(MethodInfo *)0x0);
          IStack_8.m_value = IStack_8.m_value + 1;
        }
      }
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
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
  }
code_?:
  *unaff_FS_OFFSET = uStack_3;
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

