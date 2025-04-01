
/* Boolean DoAddLink() */

bool Assembly-CSharp.dll::ESAddLink::ESAddLink_DoAddLink(ESAddLink *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    bVar1 = MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_AddLink
                      (this_00,(this->fields).tempLink,(MethodInfo *)0x0);
    return bVar1 != 0;
  }
  uVar2 = func_?(&stack0xfffffff4);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddLink::ESAddLink_Enter
               (ESAddLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__MV__WorldObject__Link);
    func_?(&StringLiteral_state_started_with_multi_selecti);
    func_?(&StringLiteral_Should_not_happen___links_can_on);
    func_?(&StringLiteral_ESAddLink_enter);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_ESAddLink_enter,(MethodInfo *)0x0);
  if (esm != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if ((pPVar2 != (PrefabPool *)0x0) &&
       (pMVar3 = (pPVar2->fields).logicCubeConnectorRedMaterial, pMVar3 != (Material *)0x0)) {
      pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                          ((Color *)&stack0xffffffec,pMVar3,(MethodInfo *)0x0);
      fVar5 = pCVar4->g;
      fVar6 = pCVar4->b;
      fVar7 = pCVar4->a;
      (this->fields).originalRedConnectorColor.r = pCVar4->r;
      (this->fields).originalRedConnectorColor.g = fVar5;
      (this->fields).originalRedConnectorColor.b = fVar6;
      (this->fields).originalRedConnectorColor.a = fVar7;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
      if ((pPVar2 != (PrefabPool *)0x0) &&
         (pMVar3 = (pPVar2->fields).logicCubeConnectorBlueMaterial, pMVar3 != (Material *)0x0)) {
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
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_state_started_with_multi_selecti,(MethodInfo *)0x0);
          FSMEntity::FSMEntity_PopState((FSMEntity *)esm,(MethodInfo *)0x0);
          return;
        }
        pLVar8 = (Link *)func_?();
        MVWorldObject.dll::MV::WorldObject::Link::Link__ctor_1(pLVar8,(MethodInfo *)0x0);
        (this->fields).tempLink = pLVar8;
        func_?();
        iVar9 = (pMVar1->fields).selectedConnector;
        if (iVar9 == 1) {
          pLVar8 = (this->fields).tempLink;
          pMVar10 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                              (esm,(MethodInfo *)0x0);
          if ((pMVar10 == (MVWorldObjectClient *)0x0) || (pLVar8 == (Link *)0x0))
          goto code_?;
          (pLVar8->fields).inputWOID = (pMVar10->fields)._.id;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
          if (pPVar2 == (PrefabPool *)0x0) goto code_?;
          ppMVar11 = &(this->fields).materialToPulse;
          *ppMVar11 = (pPVar2->fields).logicCubeConnectorBlueMaterial;
          func_?(ppMVar11);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
          if (pPVar2 == (PrefabPool *)0x0) goto code_?;
          pMVar3 = (pPVar2->fields).logicCubeConnectorBlueMaterial;
        }
        else {
          if (iVar9 != 2) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_Should_not_happen___links_can_on,(MethodInfo *)0x0);
            FSMEntity::FSMEntity_PopState((FSMEntity *)esm,(MethodInfo *)0x0);
            return;
          }
          pLVar8 = (this->fields).tempLink;
          pMVar10 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                              (esm,(MethodInfo *)0x0);
          if ((pMVar10 == (MVWorldObjectClient *)0x0) || (pLVar8 == (Link *)0x0))
          goto code_?;
          (pLVar8->fields).outputWOID = (pMVar10->fields)._.id;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
          if (pPVar2 == (PrefabPool *)0x0) goto code_?;
          ppMVar11 = &(this->fields).materialToPulse;
          *ppMVar11 = (pPVar2->fields).logicCubeConnectorRedMaterial;
          func_?(ppMVar11);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
          if (pPVar2 == (PrefabPool *)0x0) goto code_?;
          pMVar3 = (pPVar2->fields).logicCubeConnectorRedMaterial;
        }
        if (pMVar3 != (Material *)0x0) {
          pCVar4 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_color
                              ((Color *)&stack0xffffffec,pMVar3,(MethodInfo *)0x0);
          fVar5 = pCVar4->g;
          fVar6 = pCVar4->b;
          fVar7 = pCVar4->a;
          (this->fields).endColor.r = pCVar4->r;
          (this->fields).endColor.g = fVar5;
          (this->fields).endColor.b = fVar6;
          (this->fields).endColor.a = fVar7;
          fVar5 = (this->fields).endColor.b;
          (this->fields).startColor.r = (this->fields).endColor.r;
          (this->fields).startColor.g = 0.6;
          (this->fields).startColor.b = fVar5;
          (this->fields).startColor.a = 1.0;
          pMVar12 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          if ((pMVar12 != (MainCameraManager *)0x0) &&
             (this_00 = (pMVar12->fields).lineDrawManager, this_00 != (LineDrawManager *)0x0)) {
            LineDrawManager::LineDrawManager_SetTempLink
                      (this_00,(this->fields).tempLink,(MethodInfo *)0x0);
            (*(code *)(pMVar1->klass->vtable).HighlightConnector.method)();
            this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (this_01 != (MVWorldObjectClientManager *)0x0) {
              pWVar13 = MVWorldObjectClientManager::
                        MVWorldObjectClientManager_GetWorldObjectClientRef
                                  (this_01,(pMVar1->fields)._.id,(MethodInfo *)0x0);
              ppWVar14 = &(this->fields).woRef;
              *ppWVar14 = pWVar13;
              func_?(ppWVar14);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddLink::ESAddLink_Execute
               (ESAddLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  this_00 = (this->fields).woRef;
  if (this_00 == (WorldObjectClientRef *)0x0) goto code_?;
  pOVar1 = WorldObjectClientRef`1[System::Object]::
            WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                      ((WorldObjectClientRef_1_System_Object_ *)this_00,
                       MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                      );
  if (pOVar1 == (Object *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__EditorEvent);
      cRam_? = '\x01';
    }
    if (esm != (EditorStateMachine *)0x0) {
      bVar2 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(esm,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        FSMEntity::FSMEntity_ClearStateStack((FSMEntity *)esm,(MethodInfo *)0x0);
        EditorStateMachine::EditorStateMachine_ExitGroupToRoot(esm,(MethodInfo *)0x0);
      }
      pOVar1 = (Object *)func_?();
      FSMEntity::FSMEntity_set_Event((FSMEntity *)esm,pOVar1,(MethodInfo *)0x0);
      return;
    }
    goto code_?;
  }
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar3 = (fVar3 - (this->fields).lastColorChangeTime) / (this->fields).FadeDuration;
  if (fVar3 < 0.0) {
    fVar4 = 0.0;
code_?:
    fVar3 = fVar4;
  }
  else {
    fVar4 = _UNK_?;
    if (_UNK_? < fVar3) goto code_?;
  }
  this_01 = (this->fields).materialToPulse;
  fVar4 = (this->fields).startColor.r;
  fVar5 = (this->fields).startColor.g;
  fVar6 = (this->fields).startColor.b;
  fVar7 = (this->fields).startColor.a;
  VStack_8.x = (this->fields).endColor.g;
  VStack_8.y = (this->fields).endColor.b;
  VStack_8.z = (this->fields).endColor.a;
  fVar9 = 0.0;
  if ((0.0 <= fVar3) && (fVar9 = _UNK_?, fVar3 <= _UNK_?)) {
    fVar9 = fVar3;
  }
  if (this_01 == (Material *)0x0) goto code_?;
  value.g = (VStack_8.x - fVar5) * fVar9 + fVar5;
  value.r = ((this->fields).endColor.r - fVar4) * fVar9 + fVar4;
  value.b = (VStack_8.y - fVar6) * fVar9 + fVar6;
  value.a = (VStack_8.z - fVar7) * fVar9 + fVar7;
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
            (this_01,value,(MethodInfo *)0x0);
  if (fVar3 == _UNK_?) {
    fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar3 = (this->fields).startColor.r;
    fVar4 = (this->fields).startColor.g;
    fVar5 = (this->fields).startColor.b;
    fVar6 = (this->fields).startColor.a;
    fVar7 = (this->fields).endColor.r;
    fVar9 = (this->fields).endColor.g;
    fVar11 = (this->fields).endColor.b;
    fVar12 = (this->fields).endColor.a;
    (this->fields).lastColorChangeTime = fVar10;
    (this->fields).startColor.r = fVar7;
    (this->fields).startColor.g = fVar9;
    (this->fields).startColor.b = fVar11;
    (this->fields).startColor.a = fVar12;
    (this->fields).endColor.r = fVar3;
    (this->fields).endColor.g = fVar4;
    (this->fields).endColor.b = fVar5;
    (this->fields).endColor.a = fVar6;
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar2 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                    (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  func_?();
  bVar2 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    ((VoxelHit *)&stack0xffffff94,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                     (MethodInfo *)0x0);
  if ((bVar2 == 0) || (pMStack_13 == (MethodInfo *)0xffffffff)) {
code_?:
    ESAddLink_LeaveAddLinkAndDeSelectAll(this,esm,(MethodInfo *)0x0);
    return;
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
  method_00 = pMStack_13;
  this_03 = (MVWorldObjectClient *)
            MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                      (this_02,(int32_t)pMStack_13,(MethodInfo *)0x0);
  if (this_03 == (MVWorldObjectClient *)0x0) goto code_?;
  if ((esm == (EditorStateMachine *)0x0) ||
     (pMVar14 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(esm,(MethodInfo *)0x0),
     pMVar14 == (MVWorldObjectClient *)0x0)) goto code_?;
  iVar15 = (pMVar14->fields).selectedConnector;
  cVar16 = func_?(0xf,this_03);
  if ((cVar16 == '\0') || (iVar15 != 2)) {
code_?:
    cVar16 = func_?(0xe,this_03);
    if ((cVar16 == '\0') || (iVar15 != 1)) goto code_?;
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    pVVar17 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
              DefaultEventSystem_Input_get_mousePosition
                        (&VStack_8,(DefaultEventSystem_Input *)0x0,method_00);
    bVar2 = MVWorldObjectClient::MVWorldObjectClient_IsPointOverOutputConnector
                      (this_03,*pVVar17,(MethodInfo *)0x0);
    if (bVar2 == 0) goto code_?;
    pLVar18 = (this->fields).tempLink;
    if (pLVar18 == (Link *)0x0) {
code_?:
      func_?();
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    (pLVar18->fields).outputWOID = (int32_t)pMStack_13;
  }
  else {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    pVVar17 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
              DefaultEventSystem_Input_get_mousePosition
                        (&VStack_8,(DefaultEventSystem_Input *)0x0,method_00);
    method_00 = (MethodInfo *)pVVar17->z;
    bVar2 = MVWorldObjectClient::MVWorldObjectClient_IsPointOverInputConnector
                      (this_03,*pVVar17,(MethodInfo *)0x0);
    if (bVar2 == 0) goto code_?;
    pLVar18 = (this->fields).tempLink;
    if (pLVar18 == (Link *)0x0) goto code_?;
    (pLVar18->fields).inputWOID = (int32_t)pMStack_13;
  }
  ESAddLink_DoAddLink(this,(MethodInfo *)0x0);
code_?:
  ESAddLink_LeaveAddLinkAndDeSelectAll(this,esm,(MethodInfo *)0x0);
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddLink::ESAddLink_Exit
               (ESAddLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).woRef;
  if (pWVar1 == (WorldObjectClientRef *)0x0) goto code_?;
  pOVar2 = WorldObjectClientRef`1[System::Object]::
           WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                     ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                      MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                     );
  if (pOVar2 != (Object *)0x0) {
    pWVar1 = (this->fields).woRef;
    if (pWVar1 == (WorldObjectClientRef *)0x0) goto code_?;
    pOVar2 = WorldObjectClientRef`1[System::Object]::
             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                       ((WorldObjectClientRef_1_System_Object_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pOVar2 == (Object *)0x0) goto code_?;
    (*(code *)pOVar2->klass[3]._0.events)(pOVar2);
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if ((pMVar3 != (MainCameraManager *)0x0) &&
     (this_00 = (pMVar3->fields).lineDrawManager, this_00 != (LineDrawManager *)0x0)) {
    LineDrawManager::LineDrawManager_SetTempLink(this_00,(Link *)0x0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
    if ((pPVar4 != (PrefabPool *)0x0) &&
       (pMVar5 = (pPVar4->fields).logicCubeConnectorRedMaterial, pMVar5 != (Material *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                (pMVar5,(this->fields).originalRedConnectorColor,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
      if ((pPVar4 != (PrefabPool *)0x0) &&
         (pMVar5 = (pPVar4->fields).logicCubeConnectorBlueMaterial, pMVar5 != (Material *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
                  (pMVar5,(this->fields).originalBlueConnectorColor,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void LeaveAddLink(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddLink::ESAddLink_LeaveAddLink
               (ESAddLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  this_00 = esm;
  if (esm != (EditorStateMachine *)0x0) {
    bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(esm,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      FSMEntity::FSMEntity_ClearStateStack((FSMEntity *)this_00,(MethodInfo *)0x0);
      EditorStateMachine::EditorStateMachine_ExitGroupToRoot(this_00,(MethodInfo *)0x0);
    }
    method = (MethodInfo *)&esm;
    esm = (EditorStateMachine *)TypeInfo__EditorEvent;
    value = (Object *)func_?();
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void LeaveAddLinkAndDeSelectAll(EditorStateMachine) */

void Assembly-CSharp.dll::ESAddLink::ESAddLink_LeaveAddLinkAndDeSelectAll
               (ESAddLink *this,EditorStateMachine *esm,MethodInfo *method)

{
  this_01 = esm;
  if ((esm != (EditorStateMachine *)0x0) &&
     (this_00 = (esm->fields).selectionController, this_00 != (SelectionController *)0x0)) {
    SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__EditorEvent);
      cRam_? = '\x01';
    }
    bVar1 = EditorStateMachine::EditorStateMachine_get_ParentGroupIsRoot(this_01,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      FSMEntity::FSMEntity_ClearStateStack((FSMEntity *)this_01,(MethodInfo *)0x0);
      EditorStateMachine::EditorStateMachine_ExitGroupToRoot(this_01,(MethodInfo *)0x0);
    }
    ppEStack2 = &esm;
    esm = (EditorStateMachine *)0x2f;
    pEStack3 = TypeInfo__EditorEvent;
    method = (MethodInfo *)&UNK_?;
    esm = (EditorStateMachine *)func_?();
    method = (MethodInfo *)0x0;
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_01,(Object *)esm,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PulseColor() */

void Assembly-CSharp.dll::ESAddLink::ESAddLink_PulseColor(ESAddLink *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar1 = (fVar1 - (this->fields).lastColorChangeTime) / (this->fields).FadeDuration;
  if (fVar1 < 0.0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = _UNK_?;
    if (fVar1 <= _UNK_?) goto code_?;
  }
  fVar1 = fVar2;
code_?:
  this_00 = (this->fields).materialToPulse;
  fVar2 = (this->fields).startColor.r;
  fVar3 = (this->fields).startColor.g;
  fVar4 = (this->fields).startColor.b;
  fVar5 = (this->fields).startColor.a;
  fVar6 = 0.0;
  if ((0.0 <= fVar1) && (fVar6 = _UNK_?, fVar1 <= _UNK_?)) {
    fVar6 = fVar1;
  }
  if (this_00 == (Material *)0x0) {
    func_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  value.g = ((this->fields).endColor.g - fVar3) * fVar6 + fVar3;
  value.r = ((this->fields).endColor.r - fVar2) * fVar6 + fVar2;
  value.b = ((this->fields).endColor.b - fVar4) * fVar6 + fVar4;
  value.a = ((this->fields).endColor.a - fVar5) * fVar6 + fVar5;
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
            (this_00,value,(MethodInfo *)0x0);
  if (fVar1 == _UNK_?) {
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar1 = (this->fields).startColor.r;
    fVar2 = (this->fields).startColor.g;
    fVar3 = (this->fields).startColor.b;
    fVar4 = (this->fields).startColor.a;
    fVar5 = (this->fields).endColor.r;
    fVar6 = (this->fields).endColor.g;
    fVar9 = (this->fields).endColor.b;
    fVar10 = (this->fields).endColor.a;
    (this->fields).lastColorChangeTime = fVar8;
    (this->fields).startColor.r = fVar5;
    (this->fields).startColor.g = fVar6;
    (this->fields).startColor.b = fVar9;
    (this->fields).startColor.a = fVar10;
    (this->fields).endColor.r = fVar1;
    (this->fields).endColor.g = fVar2;
    (this->fields).endColor.b = fVar3;
    (this->fields).endColor.a = fVar4;
  }
  return;
}


/* ESAddLink() */

void Assembly-CSharp.dll::ESAddLink::ESAddLink__ctor(ESAddLink *this,MethodInfo *method)

{
  (this->fields).FadeDuration = 0.7;
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  ppWVar2 = &(this->fields)._.tintedWo;
  *ppWVar2 = pWVar1;
  func_?(ppWVar2,&stack0xfffffffc,&UNK_?,ppWVar2,pWVar1);
  return;
}

