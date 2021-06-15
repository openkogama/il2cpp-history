
/* Void DeTintCurrent() */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_DeTintCurrent
               (ESStateBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).tintedWo;
  if (pWVar1 != (WorldObjectClientRef *)0x0) {
    pMVar2 = WorldObjectClientRef`1[MVRoundCube]::
             WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                       ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pMVar2 == (MVRoundCube *)0x0) {
      return;
    }
    pWVar1 = (this->fields).tintedWo;
    if ((pWVar1 != (WorldObjectClientRef *)0x0) &&
       (pMVar2 = WorldObjectClientRef`1[MVRoundCube]::
                 WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                           ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar1,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           ), pMVar2 != (MVRoundCube *)0x0)) {
      (*(code *)(pMVar2->klass->vtable).DeSelect.method)();
      pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                         ((MethodInfo *)0x0);
      (this->fields).tintedWo = pWVar1;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_Enter
               (ESStateBase *this,EditorStateMachine *esm,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).logger;
  this = (ESStateBase *)(this->fields).stateType;
  arg1 = (Object *)func_?(TypeInfo__EditorEvent,&this);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar2 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_Enter_,arg1,(MethodInfo *)0x0);
  if (pIVar1 == (ILogger_1 *)0x0) {
    func_?(0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = pIVar1->klass;
  uVar5 = 0;
  uVar6._0_1_ = (pIVar4->_1).rank;
  uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
  if (uVar6 != 0) {
    do {
      if (pIVar4->interfaceOffsets[uVar5].interfaceType == (Il2CppClass *)TypeInfo__ILogger) {
        ppMVar7 = &(&pIVar1->klass->vtable)[pIVar4->interfaceOffsets[uVar5].offset].Log.method;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  ppMVar7 = (MethodInfo **)func_?(pIVar1,TypeInfo__ILogger,0);
code_?:
  (*(code *)*ppMVar7)(pIVar1,pSVar2,ppMVar7[1]);
  return;
}


/* Void Enter(FSMEntity) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_Enter_1
               (ESStateBase *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e == (FSMEntity *)0x0) {
    pFVar1 = (FSMEntity *)0x0;
  }
  else {
    bVar2 = (TypeInfo__EditorStateMachine->_1).naturalAligment;
    if (((e->klass->_1).naturalAligment < bVar2) ||
       ((e->klass->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__EditorStateMachine)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pFVar1 = (FSMEntity *)0x0;
    if (bVar3) {
      pFVar1 = e;
    }
    if (pFVar1 == (FSMEntity *)0x0) {
      func_?(e,TypeInfo__EditorStateMachine);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*(code *)(this->klass->vtable).Enter_1.method)
            (this,pFVar1,(this->klass->vtable).Execute_1.methodPtr);
  return;
}


/* Void Execute(FSMEntity) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_Execute_1
               (ESStateBase *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e == (FSMEntity *)0x0) {
    pFVar1 = (FSMEntity *)0x0;
  }
  else {
    bVar2 = (TypeInfo__EditorStateMachine->_1).naturalAligment;
    if (((e->klass->_1).naturalAligment < bVar2) ||
       ((e->klass->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__EditorStateMachine)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pFVar1 = (FSMEntity *)0x0;
    if (bVar3) {
      pFVar1 = e;
    }
    if (pFVar1 == (FSMEntity *)0x0) {
      func_?(e,TypeInfo__EditorStateMachine);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*(code *)(this->klass->vtable).Execute_1.method)
            (this,pFVar1,(this->klass->vtable).Exit_1.methodPtr);
  return;
}


/* Void Exit(FSMEntity) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_Exit_1
               (ESStateBase *this,FSMEntity *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (e == (FSMEntity *)0x0) {
    pFVar1 = (FSMEntity *)0x0;
  }
  else {
    bVar2 = (TypeInfo__EditorStateMachine->_1).naturalAligment;
    if (((e->klass->_1).naturalAligment < bVar2) ||
       ((e->klass->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__EditorStateMachine)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pFVar1 = (FSMEntity *)0x0;
    if (bVar3) {
      pFVar1 = e;
    }
    if (pFVar1 == (FSMEntity *)0x0) {
      func_?(e,TypeInfo__EditorStateMachine);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*(code *)(this->klass->vtable).Exit_1.method)(this,pFVar1,this->klass[1]._0.image);
  return;
}


/* Boolean SelectionIsAllowedByLogicEnabled(Int32) */

bool Assembly-CSharp.dll::ESStateBase::ESStateBase_SelectionIsAllowedByLogicEnabled
               (int32_t woId,MethodInfo *method)

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
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    this = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                     (pMVar1,woId,(MethodInfo *)0x0);
    if ((this == (MVWorldObject *)0x0) ||
       (pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                 Serialization::JsonProperty]::
                 Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                           ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this,
                            (MethodInfo *)0x0), pOVar2 == (Object *)0xffffffff)) {
      return 0;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      this_00 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRoot
                          (pMVar1,woId,(MethodInfo *)0x0);
      this_01 = (MVBuildModeAvatarLocal_EditMode *)
                MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_01 != (MVBuildModeAvatarLocal_EditMode *)0x0) {
        bVar3 = MVBuildModeAvatarLocal+EditMode::
                MVBuildModeAvatarLocal_EditMode_get_MovementConstrained(this_01,(MethodInfo *)0x0);
        if ((bVar3 != 0) || (this_00 == (MVWorldObjectClient *)0x0)) {
          return 1;
        }
        iVar4 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Default,(MethodInfo *)0x0);
        pCVar5 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)this_00,(MethodInfo *)0x0);
        if (pCVar5 != (CelestialParam *)0x0) {
          iVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                            ((GameObject *)pCVar5,(MethodInfo *)0x0);
          if (iVar6 == iVar4) {
            return 1;
          }
          pCVar5 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                             ((DayNightCycle *)this_00,(MethodInfo *)0x0);
          if (pCVar5 != (CelestialParam *)0x0) {
            pUVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                     GameObject_GetComponentsInChildren_29
                               ((GameObject *)pCVar5,
                                UnityEngine__Transform__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::Transform>______
                               );
            iVar8 = 0;
            if (pUVar7 != (UseInteratorVisualization__Array *)0x0) {
              do {
                if ((int)pUVar7->max_length <= iVar8) {
                  return 0;
                }
                pCVar9 = (Component_1 *)func_?();
                if ((pCVar9 == (Component_1 *)0x0) ||
                   (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_gameObject(pCVar9,(MethodInfo *)0x0),
                   pGVar10 == (GameObject *)0x0)) break;
                iVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                                  (pGVar10,(MethodInfo *)0x0);
                if (iVar6 == iVar4) {
                  pCVar9 = (Component_1 *)func_?();
                  if ((pCVar9 == (Component_1 *)0x0) ||
                     (pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_gameObject(pCVar9,(MethodInfo *)0x0),
                     pGVar10 == (GameObject *)0x0)) break;
                  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_activeInHierarchy(pGVar10,(MethodInfo *)0x0);
                  if (bVar3 != 0) {
                    return 1;
                  }
                }
                iVar8 = iVar8 + 1;
              } while( true );
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar3 = (*pcVar11)();
  return bVar3;
}


/* Void TintObjectsOnMouseOver(EditorStateMachine) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_TintObjectsOnMouseOver
               (ESStateBase *this,EditorStateMachine *e,MethodInfo *method)

{
  func_?(&stack0xffffffb0,0,0x48);
  pickSuccess = EditModeObjectPicker::EditModeObjectPicker_Pick
                          ((VoxelHit *)&stack0xffffffb0,(HashSet_1_System_Int32_ *)0x0,-0x40005,
                           (MethodInfo *)0x0);
  hit.point.y = in_stack_1;
  hit.point.x = in_stack_2;
  hit.point.z = in_stack_3;
  hit.normal.x = (float)in_stack_4;
  hit.normal.y = fStack_5;
  hit.normal.z = (float)IStack_6._0_4_;
  hit.cubePos._0_4_ = stack0xffffffcc;
  hit._28_4_ = iStack_7;
  hit.face = uStack_8;
  hit._36_4_ = iStack_9;
  hit.woId = (int32_t)pCStack_10;
  hit.cube = (Cube *)fStack_11;
  hit.distance = (float)pCStack_12;
  hit.collider = (Collider *)pTStack_13;
  hit.transform = (Transform *)uStack_14;
  hit._60_4_ = (float)iStack_15;
  hit.interactionFlags._0_4_ = (float)((ulonglong)iStack_15 >> 0x20);
  hit.interactionFlags._4_4_ = 0;
  ESStateBase_TintObjectsOnMouseOver_1(this,e,pickSuccess,hit,in_stack_4);
  return;
}


/* Void TintObjectsOnMouseOver(EditorStateMachine, Boolean, VoxelHit) */

void Assembly-CSharp.dll::ESStateBase::ESStateBase_TintObjectsOnMouseOver_1
               (ESStateBase *this,EditorStateMachine *e,bool pickSuccess,VoxelHit hit,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = (WorldObjectClientRef *)0x0;
  id = (undefined *)0x0;
  pWVar2 = (this->fields).tintedWo;
  if (pWVar2 == (WorldObjectClientRef *)0x0) goto code_?;
  pMVar3 = WorldObjectClientRef`1[MVRoundCube]::
           WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                     ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar2,
                      MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                     );
  if (pMVar3 != (MVRoundCube *)0x0) {
    pWVar1 = (this->fields).tintedWo;
    if ((((pWVar1 == (WorldObjectClientRef *)0x0) ||
         (pMVar3 = WorldObjectClientRef`1[MVRoundCube]::
                   WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                             ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar1,
                              MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                             ), pMVar3 == (MVRoundCube *)0x0)) ||
        (pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items
                            ((Collection_1_VoxelHit_ *)pMVar3,(MethodInfo *)0x0),
        e == (EditorStateMachine *)0x0)) ||
       (pSVar5 = (e->fields).selectionController, pSVar5 == (SelectionController *)0x0))
    goto code_?;
    pWVar1 = (WorldObjectClientRef *)0x0;
    bVar6 = SelectionController::SelectionController_IsSelected
                      (pSVar5,(int32_t)pIVar4,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      pWVar7 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                         ((MethodInfo *)0x0);
      (this->fields).tintedWo = pWVar7;
    }
  }
  if (pickSuccess == 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar8 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar9 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar8,hit._36_4_,(MethodInfo *)0x0);
    if (pMVar9 != (MVWorldObject *)0x0) {
      (*pMVar9->klass[1].vtable.IsSingletonObject.methodPtr)();
    }
code_?:
    hit.point.y = 0.0;
code_?:
    ESStateBase_DeTintCurrent(this,(MethodInfo *)hit.point.y);
    return;
  }
  if ((hit._60_4_ & 1) == 0) goto code_?;
  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
            ((MethodInfo *)0x0);
  if ((hit._60_4_ & 8) == 0) {
    if ((e == (EditorStateMachine *)0x0) ||
       (pSVar5 = (e->fields).selectionController, pSVar5 == (SelectionController *)0x0))
    goto code_?;
    parentId = SelectionController::SelectionController_get_ParentGroupID(pSVar5,(MethodInfo *)0x0);
    id = (undefined *)MVGroup::MVGroup_GetParentBelow(parentId,hit._36_4_,(MethodInfo *)0x0);
    if (id == (undefined *)0xffffffff) {
      return;
    }
    pSVar5 = (e->fields).selectionController;
    if (pSVar5 == (SelectionController *)0x0) goto code_?;
    pMVar10 = (MethodInfo *)&UNK_?;
    bVar6 = SelectionController::SelectionController_IsSelected
                      (pSVar5,(int32_t)id,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      return;
    }
    pWVar1 = (WorldObjectClientRef *)0x0;
    pMVar8 = ESStateBase_get_WOCM(this,(MethodInfo *)0x0);
    if (pMVar8 == (MVWorldObjectClientManager *)0x0) goto code_?;
  }
  else {
    pMVar8 = ESStateBase_get_WOCM(this,(MethodInfo *)0x0);
    if (pMVar8 == (MVWorldObjectClientManager *)0x0) goto code_?;
    pMVar10 = (MethodInfo *)0x0;
    pWVar2 = (WorldObjectClientRef *)hit._36_4_;
  }
  pWVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                     (pMVar8,(int32_t)pWVar2,pMVar10);
  if (pWVar2 == (WorldObjectClientRef *)0x0) goto code_?;
  pMVar3 = WorldObjectClientRef`1[MVRoundCube]::
           WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                     ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar2,
                      MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                     );
  if (pMVar3 == (MVRoundCube *)0x0) {
    return;
  }
  pWVar7 = (this->fields).tintedWo;
  if (pWVar7 == (WorldObjectClientRef *)0x0) goto code_?;
  pMVar10 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
  pMVar3 = WorldObjectClientRef`1[MVRoundCube]::
           WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                     ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar7,
                      MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                     );
  if (pMVar3 != (MVRoundCube *)0x0) {
    pWVar1 = (this->fields).tintedWo;
    if (pWVar1 == (WorldObjectClientRef *)0x0) goto code_?;
    pMVar10 = (MethodInfo *)&UNK_?;
    pMVar3 = WorldObjectClientRef`1[MVRoundCube]::
             WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                       ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar1,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pMVar3 == (MVRoundCube *)0x0) goto code_?;
    pIVar4 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pMVar3,(MethodInfo *)0x0);
    id = &UNK_?;
    pMVar3 = WorldObjectClientRef`1[MVRoundCube]::
             WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                       ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar2,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pMVar3 == (MVRoundCube *)0x0) goto code_?;
    pIVar11 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pMVar3,(MethodInfo *)0x0);
    if (pIVar4 != pIVar11) goto code_?;
  }
  this_00 = (this->fields).tintedWo;
  if (this_00 != (WorldObjectClientRef *)0x0) {
    pMVar3 = WorldObjectClientRef`1[MVRoundCube]::
             WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                       ((WorldObjectClientRef_1_MVRoundCube_ *)this_00,
                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                       );
    if (pMVar3 != (MVRoundCube *)0x0) {
      return;
    }
    (this->fields).tintedWo = pWVar2;
    func_?(&stack0xffffffec,0,0x3f4ccccd,0,0x3f800000,0);
    pWVar2 = (this->fields).tintedWo;
    if ((pWVar2 != (WorldObjectClientRef *)0x0) &&
       (pMVar3 = WorldObjectClientRef`1[MVRoundCube]::
                 WorldObjectClientRef_1_MVRoundCube__get_WorldObjectClient
                           ((WorldObjectClientRef_1_MVRoundCube_ *)pWVar2,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           ), pMVar3 != (MVRoundCube *)0x0)) {
      func_?(0x43,pMVar3,pWVar7,pMVar10,pWVar1,id);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* ESStateBase() */

void Assembly-CSharp.dll::ESStateBase::ESStateBase__ctor(ESStateBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pWVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef
                     ((MethodInfo *)0x0);
  (this->fields).tintedWo = pWVar1;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if ((((uint)(TypeInfo__LoggerManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__LoggerManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__LoggerManager);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (this_00 != (LoggerManager *)0x0) {
    pIVar2 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
    (this->fields).logger = pIVar2;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVWorldObjectClientManager get_WOCM() */

MVWorldObjectClientManager *
Assembly-CSharp.dll::ESStateBase::ESStateBase_get_WOCM(ESStateBase *this,MethodInfo *method)

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
  return pMVar1;
}

