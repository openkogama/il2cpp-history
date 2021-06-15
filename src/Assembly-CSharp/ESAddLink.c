
/* Boolean DoAddLink() */

bool Assembly-CSharp.dll::ESAddLink::ESAddLink_DoAddLink(ESAddLink *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    bVar1 = MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddLink
                      (this_00,(this->fields).tempLink,(MethodInfo *)0x0);
    return bVar1 != 0;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddLink::ESAddLink_Enter
               (ESAddLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_ESAddLink_enter,(MethodInfo *)0x0);
  if (esm != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar2 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if ((pPVar2 != (PrefabPool *)0x0) &&
       (pMVar3 = PrefabPool::PrefabPool_get_LogicCubeConnectorRedMaterial(pPVar2,(MethodInfo *)0x0),
       pMVar3 != (Material *)0x0)) {
      pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                         ((Color *)&stack0xffffffec,pMVar3,(MethodInfo *)0x0);
      fVar5 = pCVar4->g;
      fVar6 = pCVar4->b;
      fVar7 = pCVar4->a;
      (this->fields).originalRedConnectorColor.r = pCVar4->r;
      (this->fields).originalRedConnectorColor.g = fVar5;
      (this->fields).originalRedConnectorColor.b = fVar6;
      (this->fields).originalRedConnectorColor.a = fVar7;
      pPVar2 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if ((pPVar2 != (PrefabPool *)0x0) &&
         (pMVar3 = PrefabPool::PrefabPool_get_LogicCubeConnectorBlueMaterial
                             (pPVar2,(MethodInfo *)0x0), pMVar3 != (Material *)0x0)) {
        pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                           ((Color *)&stack0xffffffec,pMVar3,(MethodInfo *)0x0);
        fVar5 = pCVar4->g;
        fVar6 = pCVar4->b;
        fVar7 = pCVar4->a;
        (this->fields).originalBlueConnectorColor.r = pCVar4->r;
        (this->fields).originalBlueConnectorColor.g = fVar5;
        (this->fields).originalBlueConnectorColor.b = fVar6;
        (this->fields).originalBlueConnectorColor.a = fVar7;
        if (pMVar1 == (MVWorldObjectClient *)0x0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                    ((Object *)StringLiteral_state_started_with_multi_selecti,(MethodInfo *)0x0);
          FSMEntity::FSMEntity_PopState((FSMEntity *)esm,(MethodInfo *)0x0);
          return;
        }
        pLVar8 = (Link_1 *)func_?();
        MVWorldObject.dll::MV::WorldObject::Link::Link_1__ctor_1(pLVar8,(MethodInfo *)0x0);
        (this->fields).tempLink = pLVar8;
        pTVar9 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                           ((CloudyThemeBase *)&UNK_?,(MethodInfo *)0x0);
        if (pTVar9 == (ThemeSkybox *)0x1) {
          pLVar8 = (this->fields).tempLink;
          pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                             (esm,(MethodInfo *)0x0);
          if ((pMVar1 == (MVWorldObjectClient *)0x0) ||
             (pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)pMVar1,(MethodInfo *)0x0),
             pLVar8 == (Link_1 *)0x0)) goto code_?;
          (pLVar8->fields).inputWOID = (int32_t)pIVar10;
          if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
            func_?();
          }
          pPVar2 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
          if (pPVar2 == (PrefabPool *)0x0) goto code_?;
          pMVar3 = PrefabPool::PrefabPool_get_LogicCubeConnectorBlueMaterial
                             (pPVar2,(MethodInfo *)0x0);
          (this->fields).materialToPulse = pMVar3;
          pPVar2 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
          if (pPVar2 == (PrefabPool *)0x0) goto code_?;
          pMVar3 = PrefabPool::PrefabPool_get_LogicCubeConnectorBlueMaterial
                             (pPVar2,(MethodInfo *)0x0);
        }
        else {
          pTVar9 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                             ((CloudyThemeBase *)&UNK_?,(MethodInfo *)0x0);
          if (pTVar9 != (ThemeSkybox *)0x2) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_Should_not_happen___links_can_on,(MethodInfo *)0x0);
            FSMEntity::FSMEntity_PopState((FSMEntity *)esm,(MethodInfo *)0x0);
            return;
          }
          pLVar8 = (this->fields).tempLink;
          pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                             (esm,(MethodInfo *)0x0);
          if ((pMVar1 == (MVWorldObjectClient *)0x0) ||
             (pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                       Collection_1_VoxelHit__get_Items
                                 ((Collection_1_VoxelHit_ *)pMVar1,(MethodInfo *)0x0),
             pLVar8 == (Link_1 *)0x0)) goto code_?;
          (pLVar8->fields).outputWOID = (int32_t)pIVar10;
          if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
            func_?();
          }
          pPVar2 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
          if (pPVar2 == (PrefabPool *)0x0) goto code_?;
          pMVar3 = PrefabPool::PrefabPool_get_LogicCubeConnectorRedMaterial
                             (pPVar2,(MethodInfo *)0x0);
          (this->fields).materialToPulse = pMVar3;
          pPVar2 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
          if (pPVar2 == (PrefabPool *)0x0) goto code_?;
          pMVar3 = PrefabPool::PrefabPool_get_LogicCubeConnectorRedMaterial
                             (pPVar2,(MethodInfo *)0x0);
        }
        if (pMVar3 != (Material *)0x0) {
          pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                             ((Color *)&stack0xffffffdc,pMVar3,(MethodInfo *)0x0);
          fVar5 = pCVar4->g;
          fVar6 = pCVar4->b;
          fVar7 = pCVar4->a;
          (this->fields).endColor.r = pCVar4->r;
          (this->fields).endColor.g = fVar5;
          (this->fields).endColor.b = fVar6;
          (this->fields).endColor.a = fVar7;
          fVar5 = 0.0;
          fVar6 = 0.0;
          fVar7 = 0.0;
          puVar11 = &UNK_?;
          func_?();
          (this->fields).startColor.r = fVar5;
          (this->fields).startColor.g = fVar6;
          (this->fields).startColor.b = fVar7;
          (this->fields).startColor.a = (float)puVar11;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if ((this_00 != (MainCameraManager *)0x0) &&
             (this_01 = (LineDrawManager *)
                        ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                        NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                  ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_00,
                                   (MethodInfo *)0x0), this_01 != (LineDrawManager *)0x0)) {
            LineDrawManager::LineDrawManager_SetTempLink
                      (this_01,(this->fields).tempLink,(MethodInfo *)0x0);
            (**(code **)(_UNK_? + 0x2c0))();
            this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            pIVar10 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items
                               ((Collection_1_VoxelHit_ *)&UNK_?,(MethodInfo *)0x0);
            if (this_02 != (MVWorldObjectClientManager *)0x0) {
              pWVar12 = MVWorldObjectClientManager::
                       MVWorldObjectClientManager_GetWorldObjectClientRef
                                 (this_02,(int32_t)pIVar10,(MethodInfo *)0x0);
              (this->fields).woRef = pWVar12;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddLink::ESAddLink_Execute
               (ESAddLink *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffffa4,0,0x48);
  this_00 = (this->fields).woRef;
  if (this_00 == (WorldObjectClientRef *)0x0) goto code_?;
  pMVar1 = WorldObjectClientRef`1[MVRoundCube]::
            WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                      ((WorldObjectClientRef_1_MVRoundCube_ *)this_00,
                       MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                      );
  if (pMVar1 == (MVRoundCube *)0x0) {
    ESAddLink_LeaveAddLink(this,e,(MethodInfo *)0x0);
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar3 = (this->fields).lastColorChangeTime;
  fVar4 = (this->fields).FadeDuration;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                     ((fVar2 - fVar3) / fVar4,(MethodInfo *)0x0);
  this_01 = (this->fields).materialToPulse;
  pCVar5 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                      ((Color *)&stack0xffffffec,(this->fields).startColor,(this->fields).endColor,
                       fVar3,(MethodInfo *)0x0);
  if (this_01 == (Material *)0x0) goto code_?;
  fVar4 = pCVar5->b;
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
            (this_01,*pCVar5,(MethodInfo *)0x0);
  if (fVar3 == _UNK_?) {
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar3 = (this->fields).startColor.r;
    fVar2 = (this->fields).startColor.g;
    fVar7 = (this->fields).startColor.b;
    fVar8 = (this->fields).startColor.a;
    fVar9 = (this->fields).endColor.r;
    fVar10 = (this->fields).endColor.g;
    fVar11 = (this->fields).endColor.b;
    fVar12 = (this->fields).endColor.a;
    (this->fields).lastColorChangeTime = fVar6;
    (this->fields).startColor.r = fVar9;
    (this->fields).startColor.g = fVar10;
    (this->fields).startColor.b = fVar11;
    (this->fields).startColor.a = fVar12;
    (this->fields).endColor.r = fVar3;
    (this->fields).endColor.g = fVar2;
    (this->fields).endColor.b = fVar7;
    (this->fields).endColor.a = fVar8;
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  bVar13 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                    (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar13 == 0) {
    return;
  }
  method_00 = (MethodInfo *)0x0;
  bVar13 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    ((VoxelHit *)&stack0xffffffa4,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                     (MethodInfo *)0x0);
  if ((bVar13 != 0) && (fVar4 != -NAN)) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_03 = (MVWorldObjectClient *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this_02,(int32_t)fVar4,(MethodInfo *)0x0);
    if (this_03 != (MVWorldObjectClient *)0x0) {
      cVar14 = func_?();
      if (cVar14 == '\0') {
code_?:
        cVar14 = func_?();
        if (cVar14 != '\0') {
          if ((e == (EditorStateMachine *)0x0) ||
             (pMVar15 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                  (e,(MethodInfo *)0x0), pMVar15 == (MVWorldObjectClient *)0x0))
          goto code_?;
          pTVar16 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                              ((CloudyThemeBase *)pMVar15,(MethodInfo *)0x0);
          if (pTVar16 == (ThemeSkybox *)0x1) {
            if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
              func_?();
            }
            pVVar17 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                      StandaloneInput_MousePosition
                                ((Vector3 *)&stack0xfffffff0,(StandaloneInput *)0x0,method_00);
            bVar13 = MVWorldObjectClient::MVWorldObjectClient_IsPointOverOutputConnector
                              (this_03,*pVVar17,(MethodInfo *)0x0);
            if (bVar13 != 0) {
              pLVar18 = (this->fields).tempLink;
              if (pLVar18 == (Link_1 *)0x0) goto code_?;
              (pLVar18->fields).outputWOID = (int32_t)fVar4;
              goto code_?;
            }
          }
        }
      }
      else {
        if ((e == (EditorStateMachine *)0x0) ||
           (pMVar15 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                (e,(MethodInfo *)0x0), pMVar15 == (MVWorldObjectClient *)0x0))
        goto code_?;
        pTVar16 = CloudyThemeBase::CloudyThemeBase_get_Skybox
                            ((CloudyThemeBase *)pMVar15,(MethodInfo *)0x0);
        if (pTVar16 != (ThemeSkybox *)0x2) goto code_?;
        if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar17 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
                  StandaloneInput_MousePosition
                            ((Vector3 *)&stack0xfffffff0,(StandaloneInput *)0x0,(MethodInfo *)0xf);
        bVar13 = MVWorldObjectClient::MVWorldObjectClient_IsPointOverInputConnector
                          (this_03,*pVVar17,(MethodInfo *)0x0);
        if (bVar13 == 0) goto code_?;
        pLVar18 = (this->fields).tempLink;
        if (pLVar18 == (Link_1 *)0x0) goto code_?;
        (pLVar18->fields).inputWOID = (int32_t)fVar4;
code_?:
        ESAddLink_DoAddLink(this,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  if (e != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_DeSelectAll(e,(MethodInfo *)0x0);
    ESAddLink_LeaveAddLink(this,e,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddLink::ESAddLink_Exit
               (ESAddLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).woRef;
  if (pWVar1 == (WorldObjectClientRef *)0x0) goto code_?;
  pMVar2 = WorldObjectClientRef`1[MVRoundCube]::
           WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                     ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar1,
                      MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                     );
  if (pMVar2 != (MVRoundCube *)0x0) {
    pWVar1 = (this->fields).woRef;
    if (pWVar1 == (WorldObjectClientRef *)0x0) goto code_?;
    pMVar2 = WorldObjectClientRef`1[MVRoundCube]::
             WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                       ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pMVar2 == (MVRoundCube *)0x0) goto code_?;
    (*(code *)(pMVar2->klass->vtable).HighlightConnector.method)(pMVar2);
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    this_01 = (LineDrawManager *)
              ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
              NamedThemeAttribute_1_UnityEngine_Color__get_Name
                        ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_00,(MethodInfo *)0x0);
    if (this_01 != (LineDrawManager *)0x0) {
      LineDrawManager::LineDrawManager_SetTempLink(this_01,(Link_1 *)0x0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
        func_?(TypeInfo__PrefabPool);
      }
      pPVar3 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
      if (pPVar3 != (PrefabPool *)0x0) {
        pMVar4 = PrefabPool::PrefabPool_get_LogicCubeConnectorRedMaterial(pPVar3,(MethodInfo *)0x0);
        if (pMVar4 != (Material *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                    (pMVar4,(this->fields).originalRedConnectorColor,(MethodInfo *)0x0);
          pPVar3 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
          if (pPVar3 != (PrefabPool *)0x0) {
            pMVar4 = PrefabPool::PrefabPool_get_LogicCubeConnectorBlueMaterial
                               (pPVar3,(MethodInfo *)0x0);
            if (pMVar4 != (Material *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                        (pMVar4,(this->fields).originalBlueConnectorColor,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void LeaveAddLink(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddLink::ESAddLink_LeaveAddLink
               (ESAddLink *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e != (EditorStateMachine *)0x0) {
    pIVar1 = (IList_1_VoxelHit_ *)
             EditorStateMachine::EditorStateMachine_get_ParentGroupID(e,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_00 != (MVWorldObjectClientManager *)0x0) {
      this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                          (this_00,(MethodInfo *)0x0);
      if (this_01 != (MVGroup *)0x0) {
        pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
        if (pIVar1 != pIVar2) {
          FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
          return;
        }
        value = (Object *)func_?();
        FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PulseColor() */

void Assembly-CSharp.dll::ESAddLink::ESAddLink_PulseColor(ESAddLink *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).lastColorChangeTime;
  fVar3 = (this->fields).FadeDuration;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp01
                     ((fVar1 - fVar2) / fVar3,(MethodInfo *)0x0);
  this_00 = (this->fields).materialToPulse;
  pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_Lerp
                     ((Color *)&stack0xffffffe8,(this->fields).startColor,(this->fields).endColor,
                      fVar2,(MethodInfo *)0x0);
  if (this_00 != (Material *)0x0) {
    fVar2 = pCVar4->r;
    fStack5 = pCVar4->b;
    puStack6 = (undefined *)pCVar4->a;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
              (this_00,*pCVar4,(MethodInfo *)0x0);
    if (fVar2 == _UNK_?) {
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      fVar2 = (this->fields).startColor.r;
      fVar3 = (this->fields).startColor.g;
      fVar1 = (this->fields).startColor.b;
      fVar8 = (this->fields).startColor.a;
      fVar9 = (this->fields).endColor.r;
      fVar10 = (this->fields).endColor.g;
      fVar11 = (this->fields).endColor.b;
      fVar12 = (this->fields).endColor.a;
      (this->fields).lastColorChangeTime = fVar7;
      (this->fields).startColor.r = fVar9;
      (this->fields).startColor.g = fVar10;
      (this->fields).startColor.b = fVar11;
      (this->fields).startColor.a = fVar12;
      (this->fields).endColor.r = fVar2;
      (this->fields).endColor.g = fVar3;
      (this->fields).endColor.b = fVar1;
      (this->fields).endColor.a = fVar8;
    }
    return;
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* ESAddLink() */

void Assembly-CSharp.dll::ESAddLink::ESAddLink__ctor(ESAddLink *this,MethodInfo *method)

{
  (this->fields).FadeDuration = 0.7;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  (this->fields)._.tintedWo = pWVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__LoggerManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LoggerManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LoggerManager);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (this_00 != (LoggerManager *)0x0) {
    pIVar2 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
    (this->fields)._.logger = pIVar2;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

