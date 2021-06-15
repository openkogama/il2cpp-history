
/* Void ExportSelfAvatar() */

void Assembly-CSharp.dll::ObjExportHandler::ObjExportHandler_ExportSelfAvatar(MethodInfo *method)

{
  puStack_1 = (undefined *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &puStack_1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_00 != (MVNetworkGame *)0x0) &&
      (this_01 = (PrefabPool *)
                 MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      this_01 != (PrefabPool *)0x0)) &&
     (this_02 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                PrefabPool::PrefabPool_get_MVBatteryPrefab(this_01,(MethodInfo *)0x0),
     this_02 != (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0)) {
    s = (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)
        System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]
        ::
        Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                  (this_02,(MethodInfo *)0x0);
    id = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
         SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
         SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                   (s,
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                   );
    if ((this != (MVWorldObjectClientManager *)0x0) &&
       (this_03 = (DayNightCycle *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (this,id,(MethodInfo *)0x0), this_03 != (DayNightCycle *)0x0)) {
      this_04 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_03,(MethodInfo *)0x0);
      if (this_04 != (CelestialParam *)0x0) {
        pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_29
                           ((GameObject *)this_04,
                            UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                           );
        uVar3 = 0;
        pUVar4 = pUVar2;
        while (pUVar2 != (UseInteratorVisualization__Array *)0x0) {
          if ((int)pUVar2->max_length <= (int)uVar3) {
            pOVar5 = (Object__Array *)func_?();
            if (pOVar5 != (Object__Array *)0x0) {
              if ((StringLiteral_Exported__ != (String *)0x0) &&
                 (iVar6 = func_?(), iVar6 == 0)) goto code_?;
              if (pOVar5->max_length == 0) goto code_?;
              pOVar5->vector[0] = (Object *)StringLiteral_Exported__;
              pOVar7 = (Object *)func_?();
              if ((pOVar7 != (Object *)0x0) && (iVar6 = func_?(), iVar6 == 0))
              goto code_?;
              if (pOVar5->max_length < 2) goto code_?;
              pOVar5->vector[1] = pOVar7;
              if ((StringLiteral__files_successfully_to_ != (String *)0x0) &&
                 (iVar6 = func_?(), iVar6 == 0)) goto code_?;
              if (pOVar5->max_length < 3) goto code_?;
              pOVar5->vector[2] = (Object *)StringLiteral__files_successfully_to_;
              pSVar8 = UnityEngine.CoreModule.dll::UnityEngine::Application::
                       Application_get_dataPath((MethodInfo *)0x0);
              if ((pSVar8 != (String *)0x0) && (iVar6 = func_?(), iVar6 == 0))
              goto code_?;
              if (pOVar5->max_length < 4) goto code_?;
              pOVar5->vector[3] = (Object *)pSVar8;
              if ((StringLiteral___kogama_data_folder__ != (String *)0x0) &&
                 (iVar6 = func_?(), iVar6 == 0)) goto code_?;
              if (4 < pOVar5->max_length) {
                pOVar5->vector[4] = (Object *)StringLiteral___kogama_data_folder__;
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?();
                }
                pSVar8 = mscorlib.dll::System::String::String_Concat_5(pOVar5,(MethodInfo *)0x0);
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                          ((Object *)pSVar8,(MethodInfo *)0x0);
                *unaff_FS_OFFSET = puStack_1;
                return;
              }
              goto code_?;
            }
            break;
          }
          if (pUVar2->max_length <= uVar3) {
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
code_?:
            func_?();
            func_?();
            break;
          }
          ppUVar9 = pUVar2->vector + uVar3;
          mf = *ppUVar9;
          pOVar5 = (Object__Array *)func_?();
          method_00 = (Il2CppClass *)&UNK_?;
          pSVar8 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                             ((MethodInfo *)0x0);
          if (pOVar5 == (Object__Array *)0x0) break;
          pUVar2 = pUVar4;
          if (pSVar8 != (String *)0x0) {
            method_00 = (Il2CppClass *)&UNK_?;
            iVar6 = func_?();
            pUVar2 = pUVar4;
            if (iVar6 == 0) goto code_?;
          }
          if (pOVar5->max_length == 0) goto code_?;
          pOVar5->vector[0] = (Object *)pSVar8;
          if (StringLiteral_____ != (String *)0x0) {
            method_00 = (pOVar5->klass->_0).element_class;
            iVar6 = func_?();
            if (iVar6 != 0) goto code_?;
            goto code_?;
          }
code_?:
          if (pOVar5->max_length < 2) goto code_?;
          pOVar5->vector[1] = (Object *)StringLiteral_____;
          if (pUVar2->max_length <= uVar3) goto code_?;
          if ((*ppUVar9 == (UseInteratorVisualization *)0x0) ||
             (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)*ppUVar9,(MethodInfo *)method_00),
             pGVar10 == (GameObject *)0x0)) break;
          method_01 = (MethodInfo *)&UNK_?;
          pSVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                             ((Object_1 *)pGVar10,(MethodInfo *)0x0);
          if ((pSVar8 != (String *)0x0) && (iVar6 = func_?(), iVar6 == 0))
          goto code_?;
          if (pOVar5->max_length < 3) goto code_?;
          pOVar5->vector[2] = (Object *)pSVar8;
          pOVar7 = (Object *)func_?();
          if ((pOVar7 != (Object *)0x0) && (iVar6 = func_?(), iVar6 == 0))
          goto code_?;
          if (pOVar5->max_length < 4) goto code_?;
          pOVar5->vector[3] = pOVar7;
          if ((StringLiteral__obj != (String *)0x0) && (iVar6 = func_?(), iVar6 == 0))
          goto code_?;
          if (pOVar5->max_length < 5) goto code_?;
          pOVar5->vector[4] = (Object *)StringLiteral__obj;
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar8 = mscorlib.dll::System::String::String_Concat_5(pOVar5,(MethodInfo *)0x0);
          ObjExporterScript::ObjExporterScript_MeshToFile
                    ((MeshFilter *)mf,pSVar8,0,(MethodInfo *)0x0);
          pUVar4 = pUVar2;
          this_05 = (Component_1 *)func_?();
          if ((this_05 == (Component_1 *)0x0) ||
             (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject(this_05,method_01), pGVar10 == (GameObject *)0x0))
          break;
          pSVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                             ((Object_1 *)pGVar10,(MethodInfo *)0x0);
          pSVar8 = mscorlib.dll::System::String::String_Concat_2
                             (StringLiteral_Adding_obj_file__,pSVar8,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)pSVar8,(MethodInfo *)0x0);
          uVar3 = uVar3 + 1;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void InitializePicking() */

void Assembly-CSharp.dll::ObjExportHandler::ObjExportHandler_InitializePicking(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__ObjExportHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__ObjExportHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__ObjExportHandler);
  }
  TypeInfo__ObjExportHandler->static_fields->picking = 1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
  if (pIVar1 != (IPlayModeUI *)0x0) {
    piVar2 = (int *)func_?(2,TypeInfo__IPlayModeUI,pIVar1);
    if (piVar2 != (int *)0x0) {
      uVar3 = 0;
      uVar4 = *(ushort *)(*piVar2 + 0xb6);
      if (uVar4 != 0) {
        iVar5 = *(int *)(*piVar2 + 0x58);
        do {
          if (*(IGUICrossHair__Class **)(iVar5 + (uint)uVar3 * 8) == TypeInfo__IGUICrossHair) {
            puVar6 = (undefined4 *)(*piVar2 + (*(int *)(iVar5 + 4 + (uint)uVar3 * 8) + 0x19) * 8);
            goto code_?;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar4);
      }
      puVar6 = (undefined4 *)func_?(piVar2,TypeInfo__IGUICrossHair);
code_?:
      (*(code *)*puVar6)(piVar2,1);
      this = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
             TypeInfo__ObjExportHandler->static_fields->ignoreIds;
      this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_00 != (MVNetworkGame *)0x0) {
        this_01 = (PrefabPool *)
                  MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
        if (this_01 != (PrefabPool *)0x0) {
          this_02 = (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                    PrefabPool::PrefabPool_get_MVBatteryPrefab(this_01,(MethodInfo *)0x0);
          if (this_02 != (Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)0x0) {
            s = (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)
                System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System
                ::Int32]::
                Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                          (this_02,(MethodInfo *)0x0);
            item = (UnityWebRequest *)
                   Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                   SpawnRoleVariableTypes::SpawnRoleVariable`1[MV::Common::SpawnRoleModeType]::
                   SpawnRoleVariable_1_MV_Common_SpawnRoleModeType__op_Implicit
                             (s,
                              MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                             );
            if (this != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
              System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
              UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                        (this,item,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_)
              ;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean MVObjectIsType(Transform, Type, Int32 ByRef) */

bool Assembly-CSharp.dll::ObjExportHandler::ObjExportHandler_MVObjectIsType
               (Transform *t,Type *type,int32_t *woId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((t != (Transform *)0x0) &&
      (this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)t,(MethodInfo *)0x0), this != (GameObject *)0x0)) &&
     (goId = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_GetInstanceID
                       ((Object_1 *)this,(MethodInfo *)0x0),
     pMVar1 != (MVWorldObjectClientManager *)0x0)) {
    this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectByGoId
                        (pMVar1,goId,(MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClient *)0x0) {
      pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0)
      ;
      *woId = (int32_t)pIVar2;
      if (type == (Type *)0x0) {
        return 1;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
      bVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_IsType
                        (pMVar1,*woId,WorldObjectType__Enum_CubeModelPrototypeTerrain,
                         (MethodInfo *)0x0);
      if (bVar3 != 0) {
        return 0;
      }
      mscorlib.dll::System::Object::Object_GetType((Object *)&UNK_?,(MethodInfo *)0x0);
      cVar4 = (*(code *)(type->klass->vtable).IsAssignableFrom.method)();
      if (cVar4 != '\0') {
        return 1;
      }
    }
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (t,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pTVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      *woId = -1;
      return 0;
    }
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (t,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__ObjExportHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__ObjExportHandler->_1).cctor_started == 0)) {
      func_?();
    }
    bVar3 = ObjExportHandler_MVObjectIsType(pTVar5,type,woId,(MethodInfo *)0x0);
    return bVar3;
  }
code_?:
  func_?(0);
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
  puStack_4 = &stack0xfffffe9c;
  puVar5 = &stack0xfffffe9c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  fStack_8 = 0.0;
  fStack_9 = 0.0;
  uStack_10 = 0;
  func_?(&pLStack_11,0,0x58);
  func_?();
  puStack_12 = (undefined4 *)&stack0xfffffe9c;
  puStack_4 = &stack0xfffffe9c;
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_12 = (undefined4 *)&stack0xfffffe9c, puStack_4 = &stack0xfffffe9c,
     (TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    puStack_12 = (undefined4 *)&stack0xfffffe9c;
    puStack_4 = &stack0xfffffe9c;
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar13 = MVInputWrapper::MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
  if (bVar13 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__EventSystem->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_started == 0)) {
      func_?();
    }
    this = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                     ((MethodInfo *)0x0);
    if (this == (EventSystem *)0x0) goto code_?;
    bVar13 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_IsPointerOverGameObject(this,(MethodInfo *)0x0);
    if (bVar13 == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      MVar14 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
      if (MVar14 == MVJoinState__Enum_Playing) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar15 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                 StandaloneInput_MousePosition(&VStack_16,(StandaloneInput *)0x0,in_stack_17);
        uStack_18._0_4_ = (Il2CppMethodPointer)pVVar15->x;
        uStack_18._4_4_ = pVVar15->y;
        fStack_19 = pVVar15->z;
        pVVar15 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                 StandaloneInput_MousePosition(&VStack_20,(StandaloneInput *)0x0,in_stack_17);
        uVar21 = pVVar15->x;
        uVar22 = pVVar15->y;
        VStack_16.z = pVVar15->z;
        MStack_23.invoker_method = (InvokerMethod)0x0;
        uStack_24 = 0;
        uStack_25 = 0;
        fStack_26 = 0.0;
        MStack_23.virtualMethodPointer = (Il2CppMethodPointer)uVar22;
        MStack_23.methodPointer = (Il2CppMethodPointer)uStack_18;
        VStack_16.x = (float)uVar21;
        VStack_16.y = (float)uVar22;
        func_?();
        if (this_00 == (Camera *)0x0) {
code_?:
          func_?();
          pcVar27 = (code *)swi(3);
          bVar13 = (*pcVar27)();
          return bVar13;
        }
        pos.y = (float)uStack_25;
        pos.x = (float)uStack_24;
        pos.z = fStack_26;
        pRVar28 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                            (&RStack_29,this_00,pos,in_stack_30);
        fStack_6 = (pRVar28->m_Origin).x;
        fStack_7 = (pRVar28->m_Origin).y;
        fStack_8 = (pRVar28->m_Origin).z;
        fStack_9 = (pRVar28->m_Direction).x;
        uStack_10._0_4_ = (pRVar28->m_Direction).y;
        uStack_10._4_4_ = (pRVar28->m_Direction).z;
        fStack_31 = _UNK_?;
        method_00 = (MethodInfo *)
                    CollisionDetection::CollisionDetection_MVHitAll
                              (*pRVar28,INFINITY,ignoreWoIds,layerMask,(MethodInfo *)0x0);
        if (method_00 == (MethodInfo *)0x0) goto code_?;
        pOVar32 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)method_00,
                             MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
        if (pOVar32 != (Object *)0x0) {
          bStack_33 = 0;
          pLVar34 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
                    List_1_UnityEngine_UIVertex__GetEnumerator
                              ((List_1_T_Enumerator_UnityEngine_UIVertex_ *)&stack0xfffffea8,
                               (List_1_UnityEngine_UIVertex_ *)method_00,
                               MethodInfo__System__Collections__Generic__List<VoxelHit>__GetEnumerator__
                              );
          pLStack_11 = pLVar34->l;
          iStack_35 = pLVar34->next;
          iStack_36 = pLVar34->ver;
          fStack_37 = (pLVar34->current).position.x;
          fStack_38 = (pLVar34->current).position.y;
          fStack_39 = (pLVar34->current).position.z;
          fStack_40 = (pLVar34->current).normal.x;
          fStack_41 = (pLVar34->current).normal.y;
          fStack_42 = (pLVar34->current).normal.z;
          fStack_43 = (pLVar34->current).tangent.x;
          fStack_44 = (pLVar34->current).tangent.y;
          fStack_45 = (pLVar34->current).tangent.z;
          fStack_46 = (pLVar34->current).tangent.w;
          iStack_47 = (pLVar34->current).color.rgba;
          uStack_48._0_1_ = (pLVar34->current).color.r;
          uStack_48._1_1_ = (pLVar34->current).color.g;
          uStack_48._2_1_ = (pLVar34->current).color.b;
          uStack_48._3_1_ = (pLVar34->current).color.a;
          fStack_49 = (pLVar34->current).uv0.x;
          fStack_50 = (pLVar34->current).uv0.y;
          fStack_51 = (pLVar34->current).uv1.x;
          fStack_52 = (pLVar34->current).uv1.y;
          fStack_53 = (pLVar34->current).uv2.x;
          uStack_54 = *(undefined8 *)&(pLVar34->current).uv2.y;
          uStack_1 = 0;
          while (cVar55 = func_?(), cVar55 != '\0') {
            method_01 = &MStack_23;
            pfVar56 = (float *)func_?();
            fStack_57 = *pfVar56;
            uStack_18 = *(undefined8 *)(pfVar56 + 1);
            fStack_19 = pfVar56[3];
            fStack_58 = pfVar56[4];
            fStack_59 = pfVar56[5];
            fStack_60 = pfVar56[6];
            fStack_61 = pfVar56[7];
            uStack_25 = (undefined4)*(undefined8 *)(pfVar56 + 0x10);
            fStack_26 = (float)((ulonglong)*(undefined8 *)(pfVar56 + 0x10) >> 0x20);
            fStack_62 = pfVar56[8];
            fStack_63 = pfVar56[9];
            fStack_64 = pfVar56[10];
            pCStack_65 = (Cube *)pfVar56[0xb];
            RStack_29.m_Origin.z = pfVar56[0xc];
            RStack_29.m_Direction.x = pfVar56[0xd];
            RStack_29.m_Direction.y = pfVar56[0xe];
            RStack_29.m_Direction.z = pfVar56[0xf];
            if (((Transform *)RStack_29.m_Direction.y == (Transform *)0x0) ||
               (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_gameObject
                                    ((Component_1 *)RStack_29.m_Direction.y,method_00),
               this_01 == (GameObject *)0x0)) goto code_?;
            method_00 = (MethodInfo *)&UNK_?;
            bVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_get_activeInHierarchy(this_01,method_01);
            if (bVar13 != 0) {
              puVar66 = (undefined8 *)func_?();
              fVar67 = *(float *)(puVar66 + 1);
              VStack_16.y = (float)*puVar66;
              VStack_16.z = (float)((ulonglong)*puVar66 >> 0x20);
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector3);
              }
              a.y = VStack_16.z;
              a.x = VStack_16.y;
              a.z = fVar67;
              b.y = (float)(Il2CppMethodPointer)uStack_18;
              b.x = fStack_57;
              b.z = uStack_18._4_4_;
              VStack_16.z = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Distance
                                      (a,b,(MethodInfo *)0x0);
              if (VStack_16.z < fStack_31) {
                bStack_33 = 1;
                (hit->point).x = fStack_57;
                (hit->point).y = (float)(Il2CppMethodPointer)uStack_18;
                (hit->point).z = uStack_18._4_4_;
                (hit->normal).x = fStack_19;
                (hit->normal).y = fStack_58;
                (hit->normal).z = fStack_59;
                *(float *)&hit->cubePos = fStack_60;
                *(float *)&(hit->cubePos).z = fStack_61;
                hit->face = (int32_t)fStack_62;
                *(float *)&hit->isCubeHit = fStack_63;
                hit->woId = (int32_t)fStack_64;
                hit->cube = pCStack_65;
                hit->distance = RStack_29.m_Origin.z;
                hit->collider = (Collider *)RStack_29.m_Direction.x;
                hit->transform = (Transform *)RStack_29.m_Direction.y;
                *(float *)&hit->field_0x3c = RStack_29.m_Direction.z;
                hit->interactionFlags = CONCAT44(fStack_26,uStack_25);
                fStack_31 = VStack_16.z;
              }
            }
          }
          *puStack_12 = 0x111;
          uStack_1 = 0xffffffff;
          func_?();
          goto code_?;
        }
      }
    }
  }
  bStack_33 = 0;
code_?:
  *unaff_FS_OFFSET = uStack_3;
  return bStack_33;
}


/* Void Update() */

void Assembly-CSharp.dll::ObjExportHandler::ObjExportHandler_Update
               (ObjExportHandler *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?();
  if ((((uint)(TypeInfo__ObjExportHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__ObjExportHandler->_1).cctor_started == 0)) {
    func_?(TypeInfo__ObjExportHandler);
  }
  if ((TypeInfo__ObjExportHandler->static_fields->picking != 0) &&
     (bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_GetKeyDown
                        (KeyCode__Enum_Mouse0,(MethodInfo *)0x0), bVar4 != 0)) {
    uStack_1 = 0;
    if ((((uint)(TypeInfo__ObjExportHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__ObjExportHandler->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__ObjExportHandler->static_fields->picking = 0;
    func_?(&stack0xffffff8c);
    bVar4 = ObjExportHandler_Pick
                      ((VoxelHit *)&stack0xffffff8c,
                       TypeInfo__ObjExportHandler->static_fields->ignoreIds,-0x40005,
                       (MethodInfo *)0x0);
    if ((bVar4 != 0) && (in_stack_5 == -1)) {
      bVar4 = 0;
    }
    method_00 = (MethodInfo *)func_?();
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    method_01 = (MethodInfo *)&UNK_?;
    pSVar6 = mscorlib.dll::System::String::String_Concat
                       ((Object *)StringLiteral_WoPickSuccess__,(Object *)method_00,
                        (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar6,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((this_00 != (MVWorldObjectClientManager *)0x0) &&
          (this_01 = (DayNightCycle *)
                     MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (this_00,in_stack_5,(MethodInfo *)0x0),
          this_01 != (DayNightCycle *)0x0)) &&
         (this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0),
         this_02 != (CelestialParam *)0x0)) {
        pUVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_29
                           ((GameObject *)this_02,
                            UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                           );
        iVar8 = 0;
        while (pUVar7 != (UseInteratorVisualization__Array *)0x0) {
          if ((int)pUVar7->max_length <= iVar8) {
            pOVar9 = (Object__Array *)func_?();
            if (pOVar9 != (Object__Array *)0x0) {
              func_?();
              func_?();
              func_?();
              func_?();
              func_?();
              func_?();
              func_?();
              UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                        ((MethodInfo *)0x0);
              func_?();
              func_?();
              func_?();
              func_?();
              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                func_?();
              }
              pSVar6 = mscorlib.dll::System::String::String_Concat_5(pOVar9,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                func_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                        ((Object *)pSVar6,(MethodInfo *)0x0);
              goto code_?;
            }
            break;
          }
          mf = (MeshFilter *)func_?();
          pOVar9 = (Object__Array *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                    ((MethodInfo *)0x0);
          if (pOVar9 == (Object__Array *)0x0) break;
          func_?();
          func_?();
          func_?();
          method_02 = (MethodInfo *)StringLiteral_____;
          func_?();
          pCVar10 = (Component_1 *)func_?();
          if ((pCVar10 == (Component_1 *)0x0) ||
             (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject(pCVar10,method_02), pGVar11 == (GameObject *)0x0))
          break;
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                    ((Object_1 *)pGVar11,(MethodInfo *)0x0);
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar6 = mscorlib.dll::System::String::String_Concat_5(pOVar9,(MethodInfo *)0x0);
          ObjExporterScript::ObjExporterScript_MeshToFile(mf,pSVar6,0,(MethodInfo *)0x0);
          pCVar10 = (Component_1 *)func_?();
          if ((pCVar10 == (Component_1 *)0x0) ||
             (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject(pCVar10,method_01), pGVar11 == (GameObject *)0x0))
          break;
          method_01 = (MethodInfo *)&UNK_?;
          pSVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                             ((Object_1 *)pGVar11,method_00);
          method_00 = (MethodInfo *)StringLiteral_Adding_obj_file__;
          pSVar6 = mscorlib.dll::System::String::String_Concat_2
                             (StringLiteral_Adding_obj_file__,pSVar6,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)pSVar6,(MethodInfo *)0x0);
          iVar8 = iVar8 + 1;
        }
      }
      func_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__ObjExportHandler->static_fields->picking = 0;
  this = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  TypeInfo__ObjExportHandler->static_fields->ignoreIds = (HashSet_1_System_Int32_ *)this;
  return;
}

