
/* Void ExportSelfAvatar() */

void Assembly-CSharp.dll::ObjExportHandler::ObjExportHandler_ExportSelfAvatar(MethodInfo *method)

{
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
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
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((((this_00 == (MVNetworkGame *)0x0) ||
        (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
        pMVar2 == (MVLocalPlayer *)0x0)) ||
       (pSVar3 = (pMVar2->fields).spawnRoleDataMediator, pSVar3 == (SpawnRoleDataMediator *)0x0)) ||
      ((id = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
             SpawnRoleVariable`1[System::Object]::SpawnRoleVariable_1_System_Object__op_Implicit
                       ((SpawnRoleVariable_1_System_Object_ *)(pSVar3->fields).woId,
                        MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                       ), this == (MVWorldObjectClientManager *)0x0 ||
       (pMVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this,(int32_t)id,(MethodInfo *)0x0), pMVar4 == (MVWorldObject *)0x0))))
     || (IVar5.m_value = (int32_t)pMVar4[1].fields.inputLinkRefs,
        (List_1_MV_WorldObject_Link_ *)IVar5.m_value == (List_1_MV_WorldObject_Link_ *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
  }
  else {
    IStack_1.m_value = (int32_t)&UNK_?;
    pIVar6 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                       ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)IVar5.m_value,
                        UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                       );
    if (pIVar6 == (IEnumerable_1_System_Object_ *)0x0) goto code_?;
    for (; IVar5.m_value < (int)pIVar6[1].monitor; IVar5.m_value = IVar5.m_value + 1) {
      if ((List_1_MV_WorldObject_Link_ *)pIVar6[1].monitor <= (uint)IVar5.m_value) {
        func_?();
code_?:
        func_?();
        func_?();
code_?:
        func_?();
code_?:
        func_?();
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
        func_?();
code_?:
        func_?();
code_?:
        func_?();
        func_?();
code_?:
        func_?();
code_?:
        func_?();
        func_?();
code_?:
        func_?();
code_?:
        func_?();
        goto code_?;
      }
      mf = (&pIVar6[2].klass)[IVar5.m_value];
      pSVar7 = (String__Array *)func_?();
      pSVar8 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                         ((MethodInfo *)0x0);
      if (pSVar7 == (String__Array *)0x0) goto code_?;
      if ((pSVar8 != (String *)0x0) && (iVar9 = func_?(), iVar9 == 0))
      goto code_?;
      if (pSVar7->max_length == 0) goto code_?;
      pSVar7->vector[0] = pSVar8;
      func_?();
      if ((::StringLiteral_____ != (String *)0x0) && (iVar9 = func_?(), iVar9 == 0))
      goto code_?;
      if (pSVar7->max_length < 2) goto code_?;
      pSVar7->vector[1] = ::StringLiteral_____;
      func_?();
      if ((List_1_MV_WorldObject_Link_ *)pIVar6[1].monitor <= (uint)IVar5.m_value)
      goto code_?;
      IVar5.m_value = (int32_t)(&pIVar6[2].klass)[IVar5.m_value];
      if ((IEnumerable_1_System_Object___Class *)IVar5.m_value ==
          (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
      IStack_1.m_value = (int32_t)&UNK_?;
      pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)IVar5.m_value,(MethodInfo *)0x0);
      if (pGVar10 == (GameObject *)0x0) goto code_?;
      pSVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)pGVar10,(MethodInfo *)0x0);
      if ((pSVar8 != (String *)0x0) && (iVar9 = func_?(), iVar9 == 0))
      goto code_?;
      if (pSVar7->max_length < 3) goto code_?;
      pSVar7->vector[2] = pSVar8;
      func_?();
      pSVar8 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xffffffe8,(MethodInfo *)0x0);
      if ((pSVar8 != (String *)0x0) && (iVar9 = func_?(), iVar9 == 0))
      goto code_?;
      if (pSVar7->max_length < 4) goto code_?;
      pSVar7->vector[3] = pSVar8;
      func_?();
      if ((StringLiteral__obj != (String *)0x0) && (iVar9 = func_?(), iVar9 == 0))
      goto code_?;
      if (pSVar7->max_length < 5) goto code_?;
      pSVar7->vector[4] = StringLiteral__obj;
      func_?();
      pSVar8 = mscorlib.dll::System::String::String_Concat_6(pSVar7,(MethodInfo *)0x0);
      ObjExporterScript::ObjExporterScript_MeshToFile((MeshFilter *)mf,pSVar8,0,(MethodInfo *)0x0);
      if ((IEnumerable_1_System_Object___Class *)pIVar6[1].monitor <= (uint)IVar5.m_value)
      goto code_?;
      IVar5.m_value = (int32_t)(&pIVar6[2].klass)[IVar5.m_value];
      if ((IEnumerable_1_System_Object___Class *)IVar5.m_value ==
          (IEnumerable_1_System_Object___Class *)0x0) goto code_?;
      IStack_1.m_value = (int32_t)&UNK_?;
      pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)IVar5.m_value,(MethodInfo *)0x0);
      if (pGVar10 == (GameObject *)0x0) goto code_?;
      pSVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)pGVar10,(MethodInfo *)0x0);
      pSVar8 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Adding_obj_file__,pSVar8,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar8,(MethodInfo *)0x0);
    }
    pSVar7 = (String__Array *)func_?();
    if (pSVar7 == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_Exported__ != (String *)0x0) && (iVar9 = func_?(), iVar9 == 0))
    goto code_?;
    if (pSVar7->max_length == 0) goto code_?;
    pSVar7->vector[0] = StringLiteral_Exported__;
    func_?();
    IStack_1.m_value = (int32_t)pIVar6[1].monitor;
    this_01 = &IStack_1;
    pSVar8 = mscorlib.dll::System::Int32::Int32_ToString(this_01,(MethodInfo *)0x0);
    if ((pSVar8 != (String *)0x0) && (iVar9 = func_?(), iVar9 == 0)) goto code_?;
    if (pSVar7->max_length < 2) goto code_?;
    pSVar7->vector[1] = pSVar8;
    func_?();
    if ((StringLiteral__files_successfully_to_ != (String *)0x0) &&
       (iVar9 = func_?(), iVar9 == 0)) goto code_?;
    if (pSVar7->max_length < 3) goto code_?;
    pSVar7->vector[2] = StringLiteral__files_successfully_to_;
    func_?();
    pSVar8 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                       ((MethodInfo *)0x0);
    if ((pSVar8 != (String *)0x0) && (iVar9 = func_?(), iVar9 == 0)) goto code_?;
    if (pSVar7->max_length < 4) goto code_?;
    pSVar7->vector[3] = pSVar8;
    func_?();
    if ((StringLiteral___kogama_data_folder__ == (String *)0x0) ||
       (iVar9 = func_?(), iVar9 != 0)) {
      if (4 < pSVar7->max_length) {
        pSVar7->vector[4] = StringLiteral___kogama_data_folder__;
        func_?();
        pSVar8 = mscorlib.dll::System::String::String_Concat_6(pSVar7,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar8,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = this_01;
        return;
      }
      goto code_?;
    }
  }
  func_?();
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
    iVar2 = func_?(2,TypeInfo__IPlayModeUI,pIVar1);
    if (iVar2 != 0) {
      func_?(1,TypeInfo__IGUICrossHair,iVar2,1);
      this = (HashSet_1_System_Object_ *)TypeInfo__ObjExportHandler->static_fields->ignoreIds;
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
          if (this != (HashSet_1_System_Object_ *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
            HashSet_1_System_Object__Add
                      (this,item,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
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
    bVar3 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_AreSame_2
                      ((Object **)type,(Object **)0x0,(MethodInfo *)0x0);
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
        cVar5 = (*(type->klass->vtable).IsAssignableFrom.methodPtr)
                          (type,pTVar4,(type->klass->vtable).IsAssignableFrom.method);
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
  puStack_4 = &stack0xfffffea0;
  puVar5 = &stack0xfffffea0;
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
  KStack_6.key._options = 0;
  KStack_6.key._cultureKey = (String *)0x0;
  KStack_6.key._pattern = (String *)0x0;
  KStack_6.value = (Object *)0x0;
  uStack_7 = 0;
  func_?(&LStack_8,0,0x58);
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar9 = MVInputWrapper::MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
  if (bVar9 == 0) {
    if ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    this = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                     ((MethodInfo *)0x0);
    if (this == (EventSystem *)0x0) {
code_?:
      func_?();
      func_?();
      pcVar10 = (code *)swi(3);
      bVar9 = (*pcVar10)();
      return bVar9;
    }
    bVar9 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
             EventSystem_IsPointerOverGameObject(this,(MethodInfo *)0x0);
    if (bVar9 == 0) {
      MVar11 = MVGameControllerBase::MVGameControllerBase_get_JoinState((MethodInfo *)0x0);
      if (MVar11 == MVJoinState__Enum_Playing) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pVVar12 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                  StandaloneInput_MousePosition(&VStack_13,(StandaloneInput *)0x0,in_stack_14)
        ;
        fStack_15 = pVVar12->x;
        pVVar12 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                  StandaloneInput_MousePosition(&VStack_13,(StandaloneInput *)0x0,in_stack_14)
        ;
        VStack_13.y = pVVar12->y;
        VStack_13.x = fStack_15;
        VStack_13.z = 0.0;
        if (this_00 != (Camera *)0x0) {
          pos.y = VStack_13.y;
          pos.x = fStack_15;
          pos.z = 0.0;
          pRVar16 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                              ((Ray *)&stack0xffffff10,this_00,pos,(MethodInfo *)0x0);
          fStack_17 = 0.0;
          KStack_6.key._options = (int32_t)(pRVar16->m_Origin).x;
          KStack_6.key._cultureKey = (String *)(pRVar16->m_Origin).y;
          KStack_6.key._pattern = (String *)(pRVar16->m_Origin).z;
          KStack_6.value = (Object *)(pRVar16->m_Direction).x;
          uStack_7._0_4_ = (pRVar16->m_Direction).y;
          uStack_7._4_4_ = (pRVar16->m_Direction).z;
          fStack_15 = _UNK_?;
          this_01 = CollisionDetection::CollisionDetection_MVHitAll
                              (*pRVar16,INFINITY,ignoreWoIds,layerMask,(MethodInfo *)0x0);
          if (this_01 != (List_1_VoxelHit_ *)0x0) {
            if ((this_01->fields)._size == 0) goto code_?;
            bStack_18 = 0;
            pLVar19 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                      List_1_VoxelHit__GetEnumerator
                                ((List_1_T_Enumerator_VoxelHit_ *)&stack0xfffffeac,this_01,
                                 MethodInfo__System__Collections__Generic__List<VoxelHit>__GetEnumerator__
                                );
            uStack_20 = 0;
            LStack_8._list = pLVar19->_list;
            LStack_8._index = pLVar19->_index;
            LStack_8._version = pLVar19->_version;
            LStack_8._12_4_ = *(undefined4 *)&pLVar19->field_0xc;
            LStack_8._current.point.x = (pLVar19->_current).point.x;
            LStack_8._current.point.y = (pLVar19->_current).point.y;
            LStack_8._current.point.z = (pLVar19->_current).point.z;
            LStack_8._current.normal.x = (pLVar19->_current).normal.x;
            LStack_8._current.normal.y = (pLVar19->_current).normal.y;
            LStack_8._current.normal.z = (pLVar19->_current).normal.z;
            LStack_8._current.cubePos.x = (pLVar19->_current).cubePos.x;
            LStack_8._current.cubePos.y = (pLVar19->_current).cubePos.y;
            LStack_8._current._28_4_ = *(undefined4 *)&(pLVar19->_current).cubePos.z;
            LStack_8._current.face = (pLVar19->_current).face;
            LStack_8._current.isCubeHit = (pLVar19->_current).isCubeHit;
            LStack_8._current._37_3_ = *(undefined3 *)&(pLVar19->_current).field_0x25;
            LStack_8._current.woId = (pLVar19->_current).woId;
            LStack_8._current.cube = (pLVar19->_current).cube;
            LStack_8._current.distance = (pLVar19->_current).distance;
            LStack_8._current.collider = (pLVar19->_current).collider;
            LStack_8._current.transform = (pLVar19->_current).transform;
            LStack_8._current._60_4_ = *(undefined4 *)&(pLVar19->_current).field_0x3c;
            LStack_8._current.interactionFlags = (pLVar19->_current).interactionFlags;
            uStack_1 = 1;
            pLStack_21 = &LStack_8;
            while( true ) {
              method_00 = (MethodInfo *)in_stack_22;
              bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[VoxelHit]::
                       List_1_T_Enumerator_VoxelHit__MoveNext
                                 (&LStack_8,
                                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__MoveNext__
                                 );
              uVar23 = LStack_8._current._28_4_;
              uVar24 = LStack_8._current.cubePos._0_4_;
              fVar25 = LStack_8._current.normal.z;
              fVar26 = LStack_8._current.normal.y;
              if (bVar9 == 0) {
                uStack_1 = 0xffffffff;
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                          ((Object *)&LStack_8,
                           (ExceptionArgument__Enum)
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<VoxelHit>__Dispose__
                           ,method_00);
                *unaff_FS_OFFSET = uStack_3;
                return bStack_18;
              }
              fStack_27 = LStack_8._current.point.x;
              fStack_28 = LStack_8._current.point.y;
              fStack_29 = LStack_8._current.point.z;
              fStack_30 = LStack_8._current.normal.x;
              VStack_13.y = (float)LStack_8._current.interactionFlags;
              VStack_13.z = (float)((ulonglong)LStack_8._current.interactionFlags >> 0x20);
              if (LStack_8._current.transform == (Transform *)0x0) break;
              this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)LStack_8._current.transform,(MethodInfo *)0x0);
              if (this_02 == (GameObject *)0x0) break;
              in_stack_22 = ZEXT48(this_02);
              bVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_get_activeInHierarchy(this_02,(MethodInfo *)0x0);
              if (bVar9 != 0) {
                pRVar31 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                          RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                          KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                    ((Regex_CachedCodeEntryKey *)&stack0xffffff04,&KStack_6,
                                     (MethodInfo *)0x0);
                fVar32 = fStack_29;
                fVar33 = fStack_28;
                pSVar34 = pRVar31->_pattern;
                in_stack_22._0_4_ = pRVar31->_options;
                in_stack_22._4_4_ = pRVar31->_cultureKey;
                puVar35 = &UNK_?;
                fVar36 = fStack_27;
                fVar37 = (float10)func_?();
                uVar38 = LStack_8._current.cubePos._0_4_;
                fStack_17 = (float)fVar37;
                if (fStack_17 < fStack_15) {
                  (hit->point).x = fStack_27;
                  (hit->point).y = fStack_28;
                  (hit->point).z = fStack_29;
                  (hit->normal).x = fStack_30;
                  (hit->normal).y = fVar26;
                  (hit->normal).z = fVar25;
                  LStack_8._current.cubePos.x = (int16_t)uVar24;
                  LStack_8._current.cubePos.y = SUB42(uVar24,2);
                  (hit->cubePos).x = LStack_8._current.cubePos.x;
                  (hit->cubePos).y = LStack_8._current.cubePos.y;
                  *(undefined4 *)&(hit->cubePos).z = uVar23;
                  hit->face = (int32_t)fVar36;
                  *(float *)&hit->isCubeHit = fVar33;
                  hit->woId = (int32_t)fVar32;
                  hit->cube = (Cube *)0x0;
                  hit->distance = (float)puVar35;
                  hit->collider = (Collider *)in_stack_22;
                  hit->transform = (Transform *)(in_stack_22 >> 0x20);
                  *(String **)&hit->field_0x3c = pSVar34;
                  hit->interactionFlags = CONCAT44(VStack_13.z,VStack_13.y);
                  LStack_8._current.cubePos._0_4_ = uVar38;
                  fStack_15 = fStack_17;
                  func_?();
                  bStack_18 = 1;
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
  puStack_4 = &stack0xffffff80;
  puVar5 = &stack0xffffff80;
  if (cRam_? == '\0') {
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
  if ((TypeInfo__ObjExportHandler->static_fields->picking == 0) ||
     (bVar10 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_GetKeyDown
                        (KeyCode__Enum_Mouse0,(MethodInfo *)0x0), bVar10 == 0)) {
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
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
  pSVar12 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                     (&BStack_7,(IFormatProvider *)0x0,in_stack_13);
  pSVar12 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_WoPickSuccess__,pSVar12,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar12,(MethodInfo *)0x0);
  if (BStack_7.m_value == 0) goto code_?;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((((this_00 == (MVWorldObjectClientManager *)0x0) ||
       (pMVar14 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,0,(MethodInfo *)0x0), pMVar14 == (MVWorldObject *)0x0)) ||
      (source = pMVar14[1].fields.inputLinkRefs, source == (List_1_MV_WorldObject_Link_ *)0x0)) ||
     (pIVar15 = Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                         ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                          UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                         ), pIVar15 == (IEnumerable_1_System_Object_ *)0x0)) {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
code_?:
    func_?();
    func_?();
code_?:
    func_?();
  }
  else {
    for (; IStack_8.m_value < (int)pIVar15[1].monitor; IStack_8.m_value = IStack_8.m_value + 1) {
      if (pIVar15[1].monitor <= (uint)IStack_8.m_value) {
        func_?();
code_?:
        func_?();
        func_?();
code_?:
        func_?();
code_?:
        func_?();
        func_?();
code_?:
        func_?();
code_?:
        func_?();
code_?:
        func_?();
        func_?();
code_?:
        func_?();
code_?:
        func_?();
        func_?();
code_?:
        func_?();
code_?:
        func_?();
        func_?();
code_?:
        func_?();
code_?:
        func_?();
        goto code_?;
      }
      mf = (&pIVar15[2].klass)[IStack_8.m_value];
      pSVar16 = (String__Array *)func_?();
      pSVar12 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                         ((MethodInfo *)0x0);
      if (pSVar16 == (String__Array *)0x0) goto code_?;
      if ((pSVar12 != (String *)0x0) && (iVar17 = func_?(), iVar17 == 0))
      goto code_?;
      if (pSVar16->max_length == 0) goto code_?;
      pSVar16->vector[0] = pSVar12;
      func_?();
      if ((::StringLiteral_____ != (String *)0x0) && (iVar17 = func_?(), iVar17 == 0))
      goto code_?;
      if (pSVar16->max_length < 2) goto code_?;
      pSVar16->vector[1] = ::StringLiteral_____;
      func_?();
      if (pIVar15[1].monitor <= (uint)IStack_8.m_value) goto code_?;
      if (((&pIVar15[2].klass)[IStack_8.m_value] == (IEnumerable_1_System_Object___Class *)0x0) ||
         (pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)(&pIVar15[2].klass)[IStack_8.m_value],(MethodInfo *)0x0),
         pGVar18 == (GameObject *)0x0)) goto code_?;
      pSVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)pGVar18,(MethodInfo *)0x0);
      if ((pSVar12 != (String *)0x0) && (iVar17 = func_?(), iVar17 == 0))
      goto code_?;
      if (pSVar16->max_length < 3) goto code_?;
      pSVar16->vector[2] = pSVar12;
      func_?();
      pSVar12 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
      if ((pSVar12 != (String *)0x0) && (iVar17 = func_?(), iVar17 == 0))
      goto code_?;
      if (pSVar16->max_length < 4) goto code_?;
      pSVar16->vector[3] = pSVar12;
      func_?();
      if ((StringLiteral__obj != (String *)0x0) && (iVar17 = func_?(), iVar17 == 0))
      goto code_?;
      if (pSVar16->max_length < 5) goto code_?;
      pSVar16->vector[4] = StringLiteral__obj;
      func_?();
      pSVar12 = mscorlib.dll::System::String::String_Concat_6(pSVar16,(MethodInfo *)0x0);
      ObjExporterScript::ObjExporterScript_MeshToFile((MeshFilter *)mf,pSVar12,0,(MethodInfo *)0x0);
      if (pIVar15[1].monitor <= (uint)IStack_8.m_value) goto code_?;
      if (((&pIVar15[2].klass)[IStack_8.m_value] == (IEnumerable_1_System_Object___Class *)0x0) ||
         (pGVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)(&pIVar15[2].klass)[IStack_8.m_value],(MethodInfo *)0x0),
         pGVar18 == (GameObject *)0x0)) goto code_?;
      pSVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                         ((Object_1 *)pGVar18,(MethodInfo *)0x0);
      pSVar12 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_Adding_obj_file__,pSVar12,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar12,(MethodInfo *)0x0);
    }
    pSVar16 = (String__Array *)func_?();
    if (pSVar16 == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_Exported__ != (String *)0x0) && (iVar17 = func_?(), iVar17 == 0))
    goto code_?;
    if (pSVar16->max_length == 0) goto code_?;
    pSVar16->vector[0] = StringLiteral_Exported__;
    func_?();
    IStack_9.m_value = (int32_t)pIVar15[1].monitor;
    pSVar12 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_9,(MethodInfo *)0x0);
    if ((pSVar12 != (String *)0x0) && (iVar17 = func_?(), iVar17 == 0)) goto code_?;
    if (pSVar16->max_length < 2) goto code_?;
    pSVar16->vector[1] = pSVar12;
    func_?();
    if ((StringLiteral__files_successfully_to_ != (String *)0x0) &&
       (iVar17 = func_?(), iVar17 == 0)) goto code_?;
    if (pSVar16->max_length < 3) goto code_?;
    pSVar16->vector[2] = StringLiteral__files_successfully_to_;
    func_?();
    pSVar12 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_dataPath
                       ((MethodInfo *)0x0);
    if ((pSVar12 != (String *)0x0) && (iVar17 = func_?(), iVar17 == 0)) goto code_?;
    if (pSVar16->max_length < 4) goto code_?;
    pSVar16->vector[3] = pSVar12;
    func_?();
    if ((StringLiteral___kogama_data_folder__ == (String *)0x0) ||
       (iVar17 = func_?(), iVar17 != 0)) {
      if (4 < pSVar16->max_length) {
        pSVar16->vector[4] = StringLiteral___kogama_data_folder__;
        func_?();
        pSVar12 = mscorlib.dll::System::String::String_Concat_6(pSVar16,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar12,(MethodInfo *)0x0);
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
  func_?();
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
  this = (HashSet_1_UnityEngine_Vector3_ *)
         func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  if (this != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::
    HashSet_1_UnityEngine_Vector3___ctor
              (this,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    TypeInfo__ObjExportHandler->static_fields->ignoreIds = (HashSet_1_System_Int32_ *)this;
    func_?(&TypeInfo__ObjExportHandler->static_fields->ignoreIds,this);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

