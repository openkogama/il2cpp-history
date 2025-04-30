
/* IEnumerator AnimationCoroutine(Single, Single) */

IEnumerator *
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_AnimationCoroutine
          (MVDoor *this,float from,float to,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)from;
  value[3].klass = (Object__Class *)to;
  return (IEnumerator *)value;
}


/* IEnumerator BeginOpenCoroutine() */

IEnumerator *
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_BeginOpenCoroutine
          (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___BeginOpenCoroutine_d__62);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WorldObjectTypes__MVDoor__MVDoor___BeginOpenCoroutine_d__62;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Boolean CheckIfOpen() */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_CheckIfOpen
               (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
  }
  key = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->IsOpen;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pOVar1 = Extensions::Extensions_GetObscuredType(hashtable,key,(MethodInfo *)0x0);
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  if (pOVar1 == (Object *)0x0) {
    func_?();
    pOVar2 = extraout_ECX;
  }
  else {
    pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
    if ((pOVar1->klass->_0).element_class ==
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
      pOVar3 = (ObscuredBool *)func_?(pOVar1);
      bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
              ObscuredBool_op_Implicit_1(*pOVar3,(MethodInfo *)0x0);
      return bVar4;
    }
  }
  func_?(pOVar1,pOVar2);
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void CollisionCheck() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_CollisionCheck
               (MVDoor *this,MethodInfo *method)

{
  coroutine = (this->fields).collisionCheckRoutine;
  ppIVar1 = &(this->fields).collisionCheckRoutine;
  if (coroutine != (IEnumerator *)0x0) {
    Coroutines::Coroutines_Stop(coroutine,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___CollisionCheckCoroutine_d__57);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WorldObjectTypes__MVDoor__MVDoor___CollisionCheckCoroutine_d__57;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  *ppIVar1 = (IEnumerator *)value;
  func_?(ppIVar1,value);
  Coroutines::Coroutines_Start(*ppIVar1,(MethodInfo *)0x0);
  return;
}


/* IEnumerator CollisionCheckCoroutine() */

IEnumerator *
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_CollisionCheckCoroutine
          (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___CollisionCheckCoroutine_d__57);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WorldObjectTypes__MVDoor__MVDoor___CollisionCheckCoroutine_d__57;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* MVDoor+DoorConfiguration CreateDefaultDoorConfig(DoorType) */

MVDoor_DoorConfiguration *
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_CreateDefaultDoorConfig
          (MVDoor_DoorConfiguration *__return_storage_ptr__,DoorType__Enum doorType,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    func_?(&TypeInfo__MVWorldObjectDocumentationType);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->name = (String *)0x0;
  __return_storage_ptr__->beginOpen = 0;
  __return_storage_ptr__->playersCanOpen = 0;
  __return_storage_ptr__->reverseOpenDirection = 0;
  __return_storage_ptr__->field_0x7 = 0;
  __return_storage_ptr__->openValue = 0.0;
  __return_storage_ptr__->closeValue = 0.0;
  __return_storage_ptr__->toggleTime = 0.0;
  __return_storage_ptr__->docType = 0;
  __return_storage_ptr__->doorType = 0;
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
  }
  pSVar1 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->Name;
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
  }
  pSVar2 = (String *)
           Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                     (doorType,pSVar1,(MethodInfo *)0x0);
  pSVar1 = (String *)0x0;
  if (pSVar2 == (String *)0x0) {
    __return_storage_ptr__->name = (String *)0x0;
code_?:
    func_?(__return_storage_ptr__,pSVar1);
    pOVar3 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                       (doorType,TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                 ->static_fields->BeginOpen,(MethodInfo *)0x0);
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
      pbVar4 = (bool *)func_?();
      __return_storage_ptr__->beginOpen = *pbVar4;
      pOVar3 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                         (doorType,TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                   ->static_fields->PlayersCanOpen,(MethodInfo *)0x0);
      if (pOVar3 == (Object *)0x0) goto code_?;
      if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pbVar4 = (bool *)func_?();
        __return_storage_ptr__->playersCanOpen = *pbVar4;
        pOVar3 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                           (doorType,TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                     ->static_fields->ReverseOpenDirection,(MethodInfo *)0x0);
        if (pOVar3 == (Object *)0x0) goto code_?;
        if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
          pbVar4 = (bool *)func_?();
          __return_storage_ptr__->reverseOpenDirection = *pbVar4;
          pOVar3 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                             (doorType,TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                       ->static_fields->OpenValue,(MethodInfo *)0x0);
          if (pOVar3 == (Object *)0x0) goto code_?;
          if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
            pfVar5 = (float *)func_?();
            __return_storage_ptr__->openValue = *pfVar5;
            pOVar3 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                               (doorType,TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                         ->static_fields->CloseValue,(MethodInfo *)0x0);
            if (pOVar3 == (Object *)0x0) goto code_?;
            if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
              pfVar5 = (float *)func_?();
              __return_storage_ptr__->closeValue = *pfVar5;
              pOVar3 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                                 (doorType,TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                           ->static_fields->ToggleTime,(MethodInfo *)0x0);
              if (pOVar3 == (Object *)0x0) goto code_?;
              if ((pOVar3->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class)
              {
                pfVar5 = (float *)func_?();
                __return_storage_ptr__->toggleTime = *pfVar5;
                pOVar3 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                                   (doorType,TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                             ->static_fields->DocType,(MethodInfo *)0x0);
                if (pOVar3 == (Object *)0x0) goto code_?;
                if ((pOVar3->klass->_0).element_class ==
                    (TypeInfo__MVWorldObjectDocumentationType->_0).element_class) {
                  piVar6 = (int32_t *)func_?();
                  iVar7 = *piVar6;
                  __return_storage_ptr__->doorType = doorType;
                  __return_storage_ptr__->docType = iVar7;
                  return __return_storage_ptr__;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (pSVar2->klass == TypeInfo__System__String) {
      pSVar1 = pSVar2;
    }
    if (pSVar1 != (String *)0x0) {
      __return_storage_ptr__->name = pSVar1;
      pSVar1 = (String *)0x0;
      if (pSVar2->klass == TypeInfo__System__String) {
        pSVar1 = pSVar2;
      }
      if (pSVar1 != (String *)0x0) goto code_?;
    }
    func_?(pSVar2,TypeInfo__System__String);
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  pMVar9 = (MVDoor_DoorConfiguration *)(*pcVar8)();
  return pMVar9;
}


/* Void Destroy() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_Destroy
               (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CollisionCheck__);
    func_?(&
                    MethodInfo__WorldObjectTypes__MVDoor__MVDoor__OnEditModeChange_EditModeChangeArgs_
                   );
    cRam_? = '\x01';
  }
  if ((this->fields).useInteractor != (UseInteractor *)0x0) {
    MVDoor_DestroyUseInteractor(this,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
      (IEditModeUI *)0x0) {
code_?:
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (pGVar1 != (GameEventManager *)0x0) {
      this_00 = (pGVar1->fields).AvatarCommandsPlayMode;
      this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,(Object *)this,
                 MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CollisionCheck__,(MethodInfo *)0x0);
      if (this_00 != (GameEventManager_AvatarCommandsPlayModeManager *)0x0) {
        GameEventManager+AvatarCommandsPlayModeManager::
        GameEventManager_AvatarCommandsPlayModeManager_remove_OnEnterPlaymode
                  (this_00,(Action *)this_02,(MethodInfo *)0x0);
        MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar2 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
    if (pIVar2 != (IEditModeUI *)0x0) {
      pDVar3 = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar2);
      this_01 = (UnityAction_1_System_Int32Enum_ *)
                func_?(TypeInfo__System__Action<EditModeChangeArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_01,(Object *)this,
                 MethodInfo__WorldObjectTypes__MVDoor__MVDoor__OnEditModeChange_EditModeChangeArgs_,
                 (MethodInfo *)0x0);
      pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                         (pDVar3,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pDVar3 != (Delegate *)0x0) {
        iVar4 = func_?();
        if (iVar4 == 0) goto code_?;
      }
      func_?();
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DestroyUseInteractor() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_DestroyUseInteractor
               (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).doorObject;
  if (pMVar1 != (MVDoorObject *)0x0) {
    pTVar2 = (pMVar1->fields).triggerBoxEvents;
    ppUVar3 = &(this->fields).useInteractor;
    pUVar4 = *ppUVar3;
    pEVar5 = (EventHandler_1_Object_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
              (pEVar5,(Object *)pUVar4,
               MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pEVar5,(MethodInfo *)0x0);
      pMVar1 = (this->fields).doorObject;
      if (pMVar1 != (MVDoorObject *)0x0) {
        pTVar2 = (pMVar1->fields).triggerBoxEvents;
        pUVar4 = *ppUVar3;
        pEVar5 = (EventHandler_1_Object_ *)
                 func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (pEVar5,(Object *)pUVar4,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar2 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                    (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pEVar5,(MethodInfo *)0x0);
          if (*ppUVar3 != (UseInteractor *)0x0) {
            UseInteractor::UseInteractor_OnDestroy
                      (*ppUVar3,(this->fields)._._._.data,(MethodInfo *)0x0);
            *ppUVar3 = (UseInteractor *)0x0;
            func_?(ppUVar3,0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* ValueTuple`2[Single,Single] GetOpenCloseValues() */

ValueTuple_2_Single_Single_
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_GetOpenCloseValues
          (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__ValueTuple<float,_float>__ValueTuple_float__float_);
    cRam_? = '\x01';
  }
  item2 = (this->fields).doorConfig.closeValue;
  fVar1 = (this->fields).doorConfig.openValue - item2;
  if ((this->fields).doorConfig.reverseOpenDirection == 0) {
    fVar1 = fVar1 + item2;
  }
  else {
    fVar1 = item2 - fVar1;
  }
  VStack_2.Item1 = 0.0;
  VStack_2.Item2 = 0.0;
  mscorlib.dll::System::ValueTuple`2[Single,Single]::ValueTuple_2_Single_Single___ctor
            (&VStack_2,fVar1,item2,
             MethodInfo__System__ValueTuple<float,_float>__ValueTuple_float__float_);
  return VStack_2;
}


/* Void Initialize() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_Initialize
               (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    func_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__UnityEngine__BoxCollider);
    func_?(&TypeInfo__IEditModeUI);
    func_?(&MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CollisionCheck__);
    func_?(&
                    MethodInfo__WorldObjectTypes__MVDoor__MVDoor__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                   );
    func_?(&
                    MethodInfo__WorldObjectTypes__MVDoor__MVDoor__OnEditModeChange_EditModeChangeArgs_
                   );
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (pGVar1 == (GameEventManager *)0x0) {
code_?:
    func_?();
  }
  else {
    unaff_ESI = (BoxCollider__Class *)(pGVar1->fields).AvatarCommandsPlayMode;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CollisionCheck__
               ,(MethodInfo *)0x0);
    if (unaff_ESI == (BoxCollider__Class *)0x0) goto code_?;
    GameEventManager+AvatarCommandsPlayModeManager::
    GameEventManager_AvatarCommandsPlayModeManager_add_OnEnterPlaymode
              ((GameEventManager_AvatarCommandsPlayModeManager *)unaff_ESI,(Action *)this_01,
               (MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
code_?:
      MVar2 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar2 == MVGameMode__Enum_Edit) {
        pMVar3 = (this->fields).doorObject;
        if (((pMVar3 == (MVDoorObject *)0x0) ||
            (this_00 = (pMVar3->fields).useCollider, this_00 == (Collider *)0x0)) ||
           (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this_00,(MethodInfo *)0x0),
           pGVar4 == (GameObject *)0x0)) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar4,0,(MethodInfo *)0x0);
      }
      unaff_ESI = (BoxCollider__Class *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
      UnityAction_2_System_Int32_System_Int32___ctor
                ((UnityAction_2_System_Int32_System_Int32_ *)unaff_ESI,(Object *)this,
                 MethodInfo__WorldObjectTypes__MVDoor__MVDoor__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                 ,(MethodInfo *)0x0);
      pIVar5 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                          ((MVWorldObject *)this,0,
                           (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                           (Action_2_LogicInputState_LogicObjectManager_ *)unaff_ESI,
                           (MethodInfo *)0x0);
      ppIVar6 = &(this->fields)._InputSignalReceiver_k__BackingField;
      *ppIVar6 = pIVar5;
      func_?(ppIVar6);
      pMVar7 = MVDoor_ReadWorldObjectData
                          ((MVDoor_DoorConfiguration *)&stack0xffffffc0,this,(MethodInfo *)0x0);
      pMVar8 = &(this->fields).doorConfig;
      bVar9 = pMVar7->beginOpen;
      bVar10 = pMVar7->playersCanOpen;
      bVar11 = pMVar7->reverseOpenDirection;
      uVar12 = pMVar7->field_0x7;
      fVar13 = pMVar7->openValue;
      fVar14 = pMVar7->closeValue;
      fVar15 = pMVar7->toggleTime;
      iVar16 = pMVar7->docType;
      iVar17 = pMVar7->doorType;
      pMVar8->name = pMVar7->name;
      (this->fields).doorConfig.beginOpen = bVar9;
      (this->fields).doorConfig.playersCanOpen = bVar10;
      (this->fields).doorConfig.reverseOpenDirection = bVar11;
      (this->fields).doorConfig.field_0x7 = uVar12;
      (this->fields).doorConfig.openValue = fVar13;
      (this->fields).doorConfig.closeValue = fVar14;
      (this->fields).doorConfig.toggleTime = fVar15;
      (this->fields).doorConfig.docType = iVar16;
      (this->fields).doorConfig.doorType = iVar17;
      func_?(pMVar8,0);
      (this->fields).storedReverseOpenDirection = (this->fields).doorConfig.reverseOpenDirection;
      (this->fields).storedBeginOpen = (this->fields).doorConfig.beginOpen;
      bVar9 = (this->fields).doorConfig.beginOpen;
      (this->fields).localIsOpen = bVar9;
      if (bVar9 != 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___BeginOpenCoroutine_d__62);
          cRam_? = '\x01';
        }
        method_00 = TypeInfo__WorldObjectTypes__MVDoor__MVDoor___BeginOpenCoroutine_d__62;
        unaff_ESI = (BoxCollider__Class *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)unaff_ESI,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        pIVar18 = &(unaff_ESI->_0).byval_arg;
        ((GameEventManager_AvatarCommandsPlayModeManager__Fields *)&(unaff_ESI->_0).name)->
        OnKillSelf = (Action *)0x0;
        (pIVar18->data).typeHandle = (Il2CppMetadataTypeHandle)this;
        func_?(pIVar18,this);
        Coroutines::Coroutines_Start((IEnumerator *)unaff_ESI,(MethodInfo *)0x0);
      }
      if ((this->fields).doorConfig.doorType != 2) {
        return;
      }
      pGVar4 = (this->fields)._._.inputConnectorObject;
      if (pGVar4 != (GameObject *)0x0) {
        pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar4,(MethodInfo *)0x0);
        puStack_20 = (undefined *)0x0;
        if (pTVar19 != (Transform *)0x0) {
          pSVar21 = (String *)0x0;
          value_00.z = 0.503;
          value_00.x = 0.503;
          value_00.y = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar19,value_00,(MethodInfo *)0x0);
          pGVar4 = (this->fields)._._.inputConnectorObject;
          if (pGVar4 != (GameObject *)0x0) {
            unaff_ESI = (BoxCollider__Class *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar4,(MethodInfo *)0x0);
            euler.y = (float)pSVar21;
            euler.x = (float)pSVar21;
            euler.z = -1.5707964;
            pQVar22 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&puStack_20,euler,(MethodInfo *)0x0);
            if (unaff_ESI != (BoxCollider__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        ((Transform *)unaff_ESI,*pQVar22,(MethodInfo *)0x0);
              pBVar23 = TypeInfo__UnityEngine__BoxCollider;
              pMVar3 = (this->fields).doorObject;
              if ((pMVar3 != (MVDoorObject *)0x0) &&
                 (this_03 = (BoxCollider *)(pMVar3->fields).useCollider, unaff_ESI = pBVar23,
                 this_03 != (BoxCollider *)0x0)) {
                bVar24 = (TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment;
                if (((this_03->klass->_1).naturalAligment < bVar24) ||
                   ((this_03->klass->_1).typeHierarchy[bVar24 - 1] !=
                    (Il2CppClass *)TypeInfo__UnityEngine__BoxCollider)) goto code_?;
                UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_center
                          (this_03,(Vector3)ZEXT412(0x3f800000),(MethodInfo *)0x0);
                pBVar23 = TypeInfo__UnityEngine__BoxCollider;
                pMVar3 = (this->fields).doorObject;
                if ((pMVar3 != (MVDoorObject *)0x0) &&
                   (this_03 = (BoxCollider *)(pMVar3->fields).useCollider, unaff_ESI = pBVar23,
                   this_03 != (BoxCollider *)0x0)) {
                  bVar24 = (TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment;
                  if (((this_03->klass->_1).naturalAligment < bVar24) ||
                     ((this_03->klass->_1).typeHierarchy[bVar24 - 1] !=
                      (Il2CppClass *)TypeInfo__UnityEngine__BoxCollider)) goto code_?;
                  value.z = 7.0;
                  value.x = 7.0;
                  value.y = 6.0;
                  UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
                            (this_03,value,(MethodInfo *)0x0);
                  pMVar3 = (this->fields).doorObject;
                  if (((pMVar3 != (MVDoorObject *)0x0) &&
                      (pGVar4 = (pMVar3->fields).useInteractionRotator,
                      pGVar4 != (GameObject *)0x0)) &&
                     (pTVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform(pGVar4,(MethodInfo *)0x0),
                     pTVar19 != (Transform *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (pTVar19,(Vector3)ZEXT812(0xbf8000003f99999a),(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto code_?;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar25 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
    if (pIVar25 == (IEditModeUI *)0x0) goto code_?;
    a = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar25);
    this_02 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__System__Action<EditModeChangeArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_02,(Object *)this,
               MethodInfo__WorldObjectTypes__MVDoor__MVDoor__OnEditModeChange_EditModeChangeArgs_,
               (MethodInfo *)0x0);
    unaff_ESI = (BoxCollider__Class *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          (a,(Delegate *)this_02,(MethodInfo *)0x0);
    if ((unaff_ESI == (BoxCollider__Class *)0x0) || (iVar26 = func_?(), iVar26 != 0)) {
      puStack_20 = (undefined *)0x3;
      func_?();
      goto code_?;
    }
  }
  func_?();
  this_03 = extraout_EDX;
code_?:
  func_?(this_03,unaff_ESI);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void InputStateUpdateCallback(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_InputStateUpdateCallback
               (MVDoor *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if ((logicInputState == LogicInputState__Enum_FromColdToHot) ||
     (logicInputState == LogicInputState__Enum_FromHotToCold)) {
    bVar1 = (this->fields).doorConfig.beginOpen;
    if (logicInputState != LogicInputState__Enum_FromHotToCold) {
      bVar1 = bVar1 == 0;
    }
    value = bVar1 != 0;
    if (value != (bool)(this->fields).localIsOpen) {
      (this->fields).localIsOpen = value;
      VVar2 = MVDoor_GetOpenCloseValues(this,(MethodInfo *)0x0);
      from = VVar2.Item1;
      fStack_3 = VVar2.Item2;
      to = fStack_3;
      if ((this->fields).localIsOpen != 0) {
        to = from;
        from = fStack_3;
      }
      MVDoor_StartDoorAnimation(this,from,to,(MethodInfo *)0x0);
    }
    MVDoor_set_IsOpen(this,value,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean IntersectsWithDoor(Bounds) */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_IntersectsWithDoor
               (MVDoor *this,Bounds bound,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff3c;
  puVar5 = &stack0xffffff3c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  iStack_6 = 0;
  pMVar7 = (this->fields).doorModelInstance;
  if ((pMVar7 != (MVCubeModelInstance *)0x0) &&
     (pCVar8 = (pMVar7->fields)._.chunkInstances, pCVar8 != (ChunkInstances *)0x0)) {
    iStack_9 = func_?(0,TypeInfo__System__Collections__IEnumerable,pCVar8);
    piStack_10 = &iStack_9;
    piStack_11 = &iStack_6;
    uStack_12 = 0;
    uStack_1 = 1;
    while (iStack_9 != 0) {
      cVar13 = func_?(0,TypeInfo__System__Collections__IEnumerator,iStack_9);
      if (cVar13 == '\0') {
        uStack_1 = 0xffffffff;
        iStack_6 = func_?(iStack_9,TypeInfo__System__IDisposable);
        if (iStack_6 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iStack_6);
          *unaff_FS_OFFSET = uStack_3;
          return 0;
        }
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
      if (iStack_9 == 0) break;
      piVar14 = (int *)func_?(1,TypeInfo__System__Collections__IEnumerator,iStack_9);
      uVar15 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                        ,piVar14);
      if (piVar14 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar14 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) goto code_?;
      puVar16 = (undefined4 *)func_?(piVar14);
      uStack_17 = *puVar16;
      uStack_18 = puVar16[1];
      uStack_19 = puVar16[2];
      uStack_20 = puVar16[3];
      BStack_21.m_Extents._0_8_ = *(undefined8 *)(puVar16 + 8);
      BStack_21.m_Extents.z = (float)puVar16[10];
      if ((Collider *)puVar16[7] == (Collider *)0x0) break;
      pBVar22 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                          (&BStack_21,(Collider *)puVar16[7],(MethodInfo *)0x0);
      BStack_23.m_Extents.y = (pBVar22->m_Extents).y;
      BStack_23.m_Extents.z = (pBVar22->m_Extents).z;
      BStack_23.m_Center.x = (pBVar22->m_Center).x;
      BStack_23.m_Center.y = (pBVar22->m_Center).y;
      BStack_23.m_Center.z = (pBVar22->m_Center).z;
      BStack_23.m_Extents.x = (pBVar22->m_Extents).x;
      BStack_24.m_Center.x = bound.m_Center.x;
      BStack_24.m_Center.y = bound.m_Center.y;
      BStack_24.m_Center.z = bound.m_Center.z;
      BStack_24.m_Extents.x = bound.m_Extents.x;
      BStack_24.m_Extents._4_8_ = bound.m_Extents._4_8_;
      if ((bound.m_Center.x + bound.m_Extents.x < BStack_23.m_Center.x - BStack_23.m_Extents.x) ||
         (BStack_23.m_Extents.x + BStack_23.m_Center.x < bound.m_Center.x - bound.m_Extents.x)) {
code_?:
        bVar25 = false;
      }
      else {
        if ((bound.m_Center.y + bound.m_Extents.y < BStack_23.m_Center.y - BStack_23.m_Extents.y) ||
           (BStack_23.m_Extents.y + BStack_23.m_Center.y < bound.m_Center.y - bound.m_Extents.y))
        goto code_?;
        pVVar26 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                            (&VStack_27,&BStack_23,(MethodInfo *)0x0);
        fVar28 = pVVar26->z;
        pVVar26 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                            (&VStack_29,&BStack_24,(MethodInfo *)0x0);
        if (pVVar26->z < fVar28) goto code_?;
        VStack_30.z = (float)&UNK_?;
        pVVar26 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                            ((Vector3 *)&stack0xffffff54,&BStack_23,(MethodInfo *)0x0);
        fVar28 = pVVar26->z;
        VStack_30.z = (float)&UNK_?;
        pVVar26 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                            (&VStack_30,&BStack_24,(MethodInfo *)0x0);
        bVar25 = pVVar26->z <= fVar28;
      }
      if (bVar25) {
        uStack_1 = 0xffffffff;
        VStack_27.z = (float)&UNK_?;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
    }
  }
  uVar15 = func_?();
code_?:
  func_?(uVar15);
  pcVar31 = (code *)swi(3);
  bVar32 = (*pcVar31)();
  return bVar32;
}


/* Boolean OnClickHandler(EditorStateMachine, Collider) */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_OnClickHandler
               (MVDoor *this,EditorStateMachine *esm,Collider *collider,MethodInfo *method)

{
  if (esm != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_SelectWO
              (esm,(this->fields)._._._.id,0,0,(MethodInfo *)0x0);
    bVar1 = MVWorldObjectClient::MVWorldObjectClient_OnClickHandler
                      ((MVWorldObjectClient *)this,esm,collider,(MethodInfo *)0x0);
    return bVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_OnDataUpdate
               (MVDoor *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  pMVar1 = MVDoor_ReadWorldObjectData
                      ((MVDoor_DoorConfiguration *)&pSStack_2,this,(MethodInfo *)0x0);
  pMVar3 = &(this->fields).doorConfig;
  bVar4 = pMVar1->beginOpen;
  bVar5 = pMVar1->playersCanOpen;
  bVar6 = pMVar1->reverseOpenDirection;
  uVar7 = pMVar1->field_0x7;
  fVar8 = pMVar1->openValue;
  fVar9 = pMVar1->closeValue;
  fVar10 = pMVar1->toggleTime;
  iVar11 = pMVar1->docType;
  iVar12 = pMVar1->doorType;
  pMVar3->name = pMVar1->name;
  (this->fields).doorConfig.beginOpen = bVar4;
  (this->fields).doorConfig.playersCanOpen = bVar5;
  (this->fields).doorConfig.reverseOpenDirection = bVar6;
  (this->fields).doorConfig.field_0x7 = uVar7;
  (this->fields).doorConfig.openValue = fVar8;
  (this->fields).doorConfig.closeValue = fVar9;
  (this->fields).doorConfig.toggleTime = fVar10;
  (this->fields).doorConfig.docType = iVar11;
  (this->fields).doorConfig.doorType = iVar12;
  func_?(pMVar3,0);
  MVDoor_UpdateUseInteractor(this,(MethodInfo *)0x0);
  bVar4 = (this->fields).doorConfig.beginOpen;
  if (((this->fields).storedBeginOpen != bVar4) &&
     (ppIVar13 = &(this->fields).serverResponseTimeoutRoutine,
     (this->fields).serverResponseTimeoutRoutine == (IEnumerator *)0x0)) {
    (this->fields).storedBeginOpen = bVar4;
    pIVar14 = MVDoor_ServerResponseTimeoutRoutine(this,(MethodInfo *)0x0);
    *ppIVar13 = pIVar14;
    func_?();
    Coroutines::Coroutines_Start(*ppIVar13,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LogicActivateRequest
              (this_01,(this->fields)._._._.id,(this->fields).storedBeginOpen,(MethodInfo *)0x0);
    MVDoor_ToggleDoor(this,(this->fields).storedBeginOpen,(MethodInfo *)0x0);
  }
  bVar4 = (this->fields).doorConfig.reverseOpenDirection;
  if (((this->fields).storedReverseOpenDirection != bVar4) &&
     ((this->fields).storedReverseOpenDirection = bVar4, (this->fields).localIsOpen != 0)) {
    this_00 = (this->fields).doorObject;
    if (this_00 == (MVDoorObject *)0x0) {
code_?:
      func_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    fVar8 = MVDoorObject::MVDoorObject_GetCurrentValue
                       (this_00,(this->fields).doorConfig.doorType,(MethodInfo *)0x0);
    VVar16 = MVDoor_GetOpenCloseValues(this,(MethodInfo *)0x0);
    MVDoor_StartDoorAnimation(this,fVar8,VVar16.Item1,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnEditModeChange(EditModeChangeArgs) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_OnEditModeChange
               (MVDoor *this,EditModeChangeArgs arg,MethodInfo *method)

{
  pMVar1 = (this->fields).doorObject;
  if ((pMVar1 != (MVDoorObject *)0x0) &&
     (this_00 = (pMVar1->fields).useCollider, this_00 != (Collider *)0x0)) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff8);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnIsFiringChanged(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_OnIsFiringChanged
               (MVDoor *this,bool isFiring,MethodInfo *method)

{
  coroutine = (this->fields).serverResponseTimeoutRoutine;
  ppIVar1 = &(this->fields).serverResponseTimeoutRoutine;
  if (coroutine != (IEnumerator *)0x0) {
    Coroutines::Coroutines_Stop(coroutine,(MethodInfo *)0x0);
    *ppIVar1 = (IEnumerator *)0x0;
    func_?(ppIVar1,0);
  }
  MVDoor_set_IsOpen(this,isFiring,(MethodInfo *)0x0);
  if (isFiring != (this->fields).localIsOpen) {
    (this->fields).localIsOpen = isFiring;
    VVar2 = MVDoor_GetOpenCloseValues(this,(MethodInfo *)0x0);
    from = VVar2.Item1;
    to = VVar2.Item2;
    if ((this->fields).localIsOpen != 0) {
      to = from;
      from = VVar2.Item2;
    }
    MVDoor_StartDoorAnimation(this,from,to,(MethodInfo *)0x0);
  }
  return;
}


/* MVDoor+DoorConfiguration ReadWorldObjectData() */

MVDoor_DoorConfiguration *
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_ReadWorldObjectData
          (MVDoor_DoorConfiguration *__return_storage_ptr__,MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    func_?(&TypeInfo__System__String);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->name = (String *)0x0;
  __return_storage_ptr__->beginOpen = 0;
  __return_storage_ptr__->playersCanOpen = 0;
  __return_storage_ptr__->reverseOpenDirection = 0;
  __return_storage_ptr__->field_0x7 = 0;
  __return_storage_ptr__->openValue = 0.0;
  __return_storage_ptr__->closeValue = 0.0;
  pDStack_1 = (DoorData_Keys__Class *)0x0;
  __return_storage_ptr__->toggleTime = 0.0;
  __return_storage_ptr__->docType = 0;
  __return_storage_ptr__->doorType = 0;
  pDStack_2 = (DoorData_Keys__Class *)0x0;
  pDStack_3 = (DoorData_Keys__Class *)0x0;
  pDStack_4 = (DoorData_Keys__Class *)0x0;
  pMVar5 = MVDoor_CreateDefaultDoorConfig
                      ((MVDoor_DoorConfiguration *)auStack_6,(this->fields).doorConfig.doorType,
                       (MethodInfo *)0x0);
  bVar7 = pMVar5->beginOpen;
  bVar8 = pMVar5->playersCanOpen;
  bVar9 = pMVar5->reverseOpenDirection;
  uVar10 = pMVar5->field_0x7;
  fVar11 = pMVar5->openValue;
  fVar12 = pMVar5->closeValue;
  fVar13 = pMVar5->toggleTime;
  iVar14 = pMVar5->docType;
  iVar15 = pMVar5->doorType;
  __return_storage_ptr__->name = pMVar5->name;
  __return_storage_ptr__->beginOpen = bVar7;
  __return_storage_ptr__->playersCanOpen = bVar8;
  __return_storage_ptr__->reverseOpenDirection = bVar9;
  __return_storage_ptr__->field_0x7 = uVar10;
  __return_storage_ptr__->openValue = fVar11;
  __return_storage_ptr__->closeValue = fVar12;
  __return_storage_ptr__->toggleTime = fVar13;
  __return_storage_ptr__->docType = iVar14;
  __return_storage_ptr__->doorType = iVar15;
  pDVar16 = (this->fields)._._._.data;
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
  }
  if (pDVar16 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__TryGetValue
                       (pDVar16,(Object *)
                               TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->
                               static_fields->Name,(Object **)&pDStack_1,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                       );
    if ((bVar7 != 0) && (pDStack_1 != (DoorData_Keys__Class *)0x0)) {
      pDVar17 = (DoorData_Keys__Class *)0x0;
      if ((String__Class *)(pDStack_1->_0).image == TypeInfo__System__String) {
        pDVar17 = pDStack_1;
      }
      if (pDVar17 != (DoorData_Keys__Class *)0x0) {
        pDStack_18 = (DoorData_Keys__Class *)__return_storage_ptr__;
        __return_storage_ptr__->name = (String *)pDVar17;
        auStack_6._4_4_ = &UNK_?;
        pBStack_19 = (Boolean__Class *)pDVar17;
        func_?();
      }
    }
    pDVar16 = (this->fields)._._._.data;
    if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    }
    if (pDVar16 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                         (pDVar16,(Object *)
                                 TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                 ->static_fields->BeginOpen,(Object **)&pDStack_2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                         );
      if ((bVar7 != 0) && (pDStack_2 != (DoorData_Keys__Class *)0x0)) {
        pBVar20 = (Boolean__Class *)(pDStack_2->_0).image;
        pDVar17 = (DoorData_Keys__Class *)0x0;
        if (pBVar20 == TypeInfo__System__Boolean) {
          pDVar17 = pDStack_2;
        }
        if (pDVar17 != (DoorData_Keys__Class *)0x0) {
          pDStack_18 = pDStack_2;
          pBStack_19 = TypeInfo__System__Boolean;
          if ((pBVar20->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
          goto code_?;
          pBStack_19 = (Boolean__Class *)pDStack_2;
          pbVar21 = (bool *)func_?();
          __return_storage_ptr__->beginOpen = *pbVar21;
        }
      }
      pDVar16 = (this->fields)._._._.data;
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
          cctor_finished_or_no_cctor == 0) {
        pBStack_19 = (Boolean__Class *)
                     TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys;
        func_?();
      }
      if (pDVar16 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                           (pDVar16,(Object *)
                                   TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                   ->static_fields->PlayersCanOpen,(Object **)&pDStack_3,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                           );
        if ((bVar7 != 0) && (pDStack_3 != (DoorData_Keys__Class *)0x0)) {
          pBVar20 = (Boolean__Class *)(pDStack_3->_0).image;
          pDVar17 = (DoorData_Keys__Class *)0x0;
          if (pBVar20 == TypeInfo__System__Boolean) {
            pDVar17 = pDStack_3;
          }
          if (pDVar17 != (DoorData_Keys__Class *)0x0) {
            pDStack_18 = pDStack_3;
            pBStack_19 = TypeInfo__System__Boolean;
            if ((pBVar20->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
            goto code_?;
            pBStack_19 = (Boolean__Class *)pDStack_3;
            pbVar21 = (bool *)func_?();
            __return_storage_ptr__->playersCanOpen = *pbVar21;
          }
        }
        pDVar16 = (this->fields)._._._.data;
        if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
        }
        if (pDVar16 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          bVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                   Object]::Dictionary_2_System_Object_System_Object__TryGetValue
                             (pDVar16,(Object *)
                                     TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys
                                     ->static_fields->ReverseOpenDirection,(Object **)&pDStack_4,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                             );
          if ((bVar7 == 0) || (pDStack_4 == (DoorData_Keys__Class *)0x0)) {
            return __return_storage_ptr__;
          }
          pBVar20 = (Boolean__Class *)(pDStack_4->_0).image;
          pDVar17 = (DoorData_Keys__Class *)0x0;
          if (pBVar20 == TypeInfo__System__Boolean) {
            pDVar17 = pDStack_4;
          }
          if (pDVar17 == (DoorData_Keys__Class *)0x0) {
            return __return_storage_ptr__;
          }
          pDStack_18 = pDStack_4;
          pBStack_19 = TypeInfo__System__Boolean;
          if ((pBVar20->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
            pBStack_19 = (Boolean__Class *)pDStack_4;
            pbVar21 = (bool *)func_?();
            __return_storage_ptr__->reverseOpenDirection = *pbVar21;
            return __return_storage_ptr__;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
  pDStack_18 = extraout_ECX;
  pBStack_19 = extraout_EDX;
code_?:
  auStack_6._4_4_ = &UNK_?;
  func_?();
  pcVar22 = (code *)swi(3);
  pMVar5 = (MVDoor_DoorConfiguration *)(*pcVar22)();
  return pMVar5;
}


/* Void Reset() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_Reset
               (MVDoor *this,MethodInfo *method)

{
  value = (this->fields).doorConfig.beginOpen;
  if (value != (this->fields).localIsOpen) {
    (this->fields).localIsOpen = value;
    VVar1 = MVDoor_GetOpenCloseValues(this,(MethodInfo *)0x0);
    fStack_2 = VVar1.Item1;
    to = VVar1.Item2;
    if ((this->fields).localIsOpen != 0) {
      to = fStack_2;
      fStack_2 = VVar1.Item2;
    }
    MVDoor_StartDoorAnimation(this,fStack_2,to,(MethodInfo *)0x0);
  }
  MVDoor_set_IsOpen(this,value,(MethodInfo *)0x0);
  coroutine = (this->fields).serverResponseTimeoutRoutine;
  (this->fields).localIsOpen = value;
  if (coroutine != (IEnumerator *)0x0) {
    Coroutines::Coroutines_Stop(coroutine,(MethodInfo *)0x0);
    (this->fields).serverResponseTimeoutRoutine = (IEnumerator *)0x0;
    func_?();
  }
  return;
}


/* IEnumerator ServerResponseTimeoutRoutine() */

IEnumerator *
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_ServerResponseTimeoutRoutine
          (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___ServerResponseTimeoutRoutine_d__67
                   );
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WorldObjectTypes__MVDoor__MVDoor___ServerResponseTimeoutRoutine_d__67;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void StartDoorAnimation(Single, Single) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_StartDoorAnimation
               (MVDoor *this,float from,float to,MethodInfo *method)

{
  coroutine = (this->fields).doorAnimationRoutine;
  ppIVar1 = &(this->fields).doorAnimationRoutine;
  if (coroutine != (IEnumerator *)0x0) {
    Coroutines::Coroutines_Stop(coroutine,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)from;
  value[3].klass = (Object__Class *)to;
  *ppIVar1 = (IEnumerator *)value;
  func_?(ppIVar1,value);
  Coroutines::Coroutines_Start(*ppIVar1,(MethodInfo *)0x0);
  this_00 = (this->fields).doorObject;
  if (this_00 != (MVDoorObject *)0x0) {
    MVDoorObject::MVDoorObject_playOpenDoorSound
              (this_00,(this->fields).doorConfig.doorType,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ToggleDoor(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_ToggleDoor
               (MVDoor *this,bool state,MethodInfo *method)

{
  if (state != (this->fields).localIsOpen) {
    (this->fields).localIsOpen = state;
    VVar1 = MVDoor_GetOpenCloseValues(this,(MethodInfo *)0x0);
    from = VVar1.Item1;
    fStack_2 = VVar1.Item2;
    to = fStack_2;
    if ((this->fields).localIsOpen != 0) {
      to = from;
      from = fStack_2;
    }
    MVDoor_StartDoorAnimation(this,from,to,(MethodInfo *)0x0);
  }
  return;
}


/* Void ToggleDoorColliders(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_ToggleDoorColliders
               (MVDoor *this,bool val,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__IEnumerable);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>__get_Value__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                   );
    cRam_? = '\x01';
  }
  pMVar4 = (this->fields).doorModelInstance;
  if ((pMVar4 != (MVCubeModelInstance *)0x0) &&
     (pCVar5 = (pMVar4->fields)._.chunkInstances, pCVar5 != (ChunkInstances *)0x0)) {
    piVar6 = (int *)func_?(0,TypeInfo__System__Collections__IEnumerable,pCVar5);
    uStack_1 = 1;
    while (piVar6 != (int *)0x0) {
      cVar7 = func_?(0,TypeInfo__System__Collections__IEnumerator,piVar6);
      if (cVar7 == '\0') {
        uStack_1 = 0xffffffff;
        iVar8 = func_?(piVar6,TypeInfo__System__IDisposable);
        if (iVar8 != 0) {
          func_?(0,TypeInfo__System__IDisposable,iVar8);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (piVar6 == (int *)0x0) break;
      uVar9 = 0;
      uVar10 = *(ushort *)(*piVar6 + 0xb6);
      if (uVar10 != 0) {
        do {
          if (*(IEnumerator__Class **)(*(int *)(*piVar6 + 0x58) + (uint)uVar9 * 8) ==
              TypeInfo__System__Collections__IEnumerator) {
            puVar11 = (undefined4 *)
                     (*piVar6 +
                     (*(int *)(*(int *)(*piVar6 + 0x58) + 4 + (uint)uVar9 * 8) + 0x19) * 8);
            goto code_?;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar10);
      }
      puVar11 = (undefined4 *)func_?(piVar6,TypeInfo__System__Collections__IEnumerator,1);
code_?:
      piVar12 = (int *)(*(code *)*puVar11)(piVar6,puVar11[1]);
      uVar13 = CONCAT44(TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
                        ,piVar12);
      if (piVar12 == (int *)0x0) break;
      if (*(Il2CppClass **)(*piVar12 + 0x20) !=
          (
          TypeInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_ChunkInstances::ChunkInstanceVariables>
          ->_0).element_class) goto code_?;
      iVar8 = func_?(piVar12);
      if (*(Collider **)(iVar8 + 0x1c) == (Collider *)0x0) break;
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (*(Collider **)(iVar8 + 0x1c),val,(MethodInfo *)0x0);
    }
  }
  uVar13 = func_?();
code_?:
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void UpdateBeginOpen() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_UpdateBeginOpen
               (MVDoor *this,MethodInfo *method)

{
  bVar1 = (this->fields).doorConfig.beginOpen;
  if (((this->fields).storedBeginOpen != bVar1) &&
     (ppIVar2 = &(this->fields).serverResponseTimeoutRoutine,
     (this->fields).serverResponseTimeoutRoutine == (IEnumerator *)0x0)) {
    (this->fields).storedBeginOpen = bVar1;
    pIVar3 = MVDoor_ServerResponseTimeoutRoutine(this,(MethodInfo *)0x0);
    *ppIVar2 = pIVar3;
    func_?(ppIVar2,pIVar3);
    Coroutines::Coroutines_Start(*ppIVar2,(MethodInfo *)0x0);
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LogicActivateRequest
              (this_00,(this->fields)._._._.id,(this->fields).storedBeginOpen,(MethodInfo *)0x0);
    MVDoor_ToggleDoor(this,(this->fields).storedBeginOpen,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateReverseOpen() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_UpdateReverseOpen
               (MVDoor *this,MethodInfo *method)

{
  bVar1 = (this->fields).doorConfig.reverseOpenDirection;
  if (((this->fields).storedReverseOpenDirection != bVar1) &&
     ((this->fields).storedReverseOpenDirection = bVar1, (this->fields).localIsOpen != 0)) {
    this_00 = (this->fields).doorObject;
    if (this_00 == (MVDoorObject *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    from = MVDoorObject::MVDoorObject_GetCurrentValue
                     (this_00,(this->fields).doorConfig.doorType,(MethodInfo *)0x0);
    VVar3 = MVDoor_GetOpenCloseValues(this,(MethodInfo *)0x0);
    MVDoor_StartDoorAnimation(this,from,VVar3.Item1,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateUseInteractor() */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_UpdateUseInteractor
               (MVDoor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__System__Func<int,_bool>);
    func_?(&TypeInfo__GameCoinLogic);
    func_?(&TypeInfo__GameRankRequirement);
    func_?(&TypeInfo__LevelBasedUseRequirement);
    func_?(&MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CheckIfOpen__);
    func_?(&MethodInfo__WorldObjectTypes__MVDoor__MVDoor__Use_int_);
    func_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement);
    func_?(&TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedCheckNoCost);
    func_?(&TypeInfo__StarRequirement);
    func_?(&TypeInfo__UseInteractor);
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).useInteractor;
  ppUVar2 = &(this->fields).useInteractor;
  bVar3 = (this->fields).doorConfig.playersCanOpen;
  if (((bVar3 & pUVar1 == (UseInteractor *)0x0) != 0) &&
     (wo = (this->fields)._DoorBlueprint_k__BackingField, wo != (MVDoorBlueprint *)0x0)) {
    pMVar4 = (this->fields).doorObject;
    if (pMVar4 != (MVDoorObject *)0x0) {
      pGVar5 = (pMVar4->fields).useInteractionRotator;
      triggerCollider = (pMVar4->fields).useCollider;
      this_00 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (this_00,(Object *)this,MethodInfo__WorldObjectTypes__MVDoor__MVDoor__Use_int_,
                 (MethodInfo *)0x0);
      pUVar1 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar1,(MVWorldObjectClient *)wo,pGVar5,0,triggerCollider,
                 (Func_2_Int32_Boolean_ *)this_00,(Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,
                 2.5,0,(MethodInfo *)0x0);
      *ppUVar2 = pUVar1;
      func_?(ppUVar2,pUVar1);
      pMVar4 = (this->fields).doorObject;
      if (pMVar4 != (MVDoorObject *)0x0) {
        pTVar6 = (pMVar4->fields).triggerBoxEvents;
        pUVar1 = (this->fields).useInteractor;
        pEVar7 = (EventHandler_1_Object_ *)
                 func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (pEVar7,(Object *)pUVar1,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar6 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                    (pTVar6,(EventHandler_1_TriggerEventArgs_ *)pEVar7,(MethodInfo *)0x0);
          pMVar4 = (this->fields).doorObject;
          if (pMVar4 != (MVDoorObject *)0x0) {
            pTVar6 = (pMVar4->fields).triggerBoxEvents;
            pUVar1 = (this->fields).useInteractor;
            pEVar7 = (EventHandler_1_Object_ *)
                     func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      (pEVar7,(Object *)pUVar1,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar6 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                        (pTVar6,(EventHandler_1_TriggerEventArgs_ *)pEVar7,(MethodInfo *)0x0);
              pMVar4 = (this->fields).doorObject;
              if (pMVar4 != (MVDoorObject *)0x0) {
                pGVar5 = (pMVar4->fields).useInteractionRotator;
                this_01 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
                GameCoinLogic::GameCoinLogic__ctor(this_01,pGVar5,1,(MethodInfo *)0x0);
                pUVar1 = (this->fields).useInteractor;
                if (pUVar1 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            (pUVar1,(UseRequirement *)this_01,(MethodInfo *)0x0);
                  pMVar4 = (this->fields).doorObject;
                  if (pMVar4 != (MVDoorObject *)0x0) {
                    pGVar5 = (pMVar4->fields).useInteractionRotator;
                    this_02 = (LevelBasedUseRequirement *)
                              func_?(TypeInfo__LevelBasedUseRequirement);
                    LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                              (this_02,pGVar5,1,(MethodInfo *)0x0);
                    pUVar1 = (this->fields).useInteractor;
                    if (pUVar1 != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                (pUVar1,(UseRequirement *)this_02,(MethodInfo *)0x0);
                      pMVar4 = (this->fields).doorObject;
                      if (pMVar4 != (MVDoorObject *)0x0) {
                        pGVar5 = (pMVar4->fields).useInteractionRotator;
                        this_03 = (StarRequirement *)func_?(TypeInfo__StarRequirement);
                        StarRequirement::StarRequirement__ctor(this_03,pGVar5,1,(MethodInfo *)0x0);
                        pUVar1 = (this->fields).useInteractor;
                        if (pUVar1 != (UseInteractor *)0x0) {
                          UseInteractor::UseInteractor_AddRequirement
                                    (pUVar1,(UseRequirement *)this_03,(MethodInfo *)0x0);
                          pMVar4 = (this->fields).doorObject;
                          if (pMVar4 != (MVDoorObject *)0x0) {
                            pGVar5 = (pMVar4->fields).useInteractionRotator;
                            this_04 = (GameRankRequirement *)
                                      func_?(TypeInfo__GameRankRequirement);
                            GameRankRequirement::GameRankRequirement__ctor
                                      (this_04,pGVar5,(MVWorldObjectClient *)this,1,
                                       (MethodInfo *)0x0);
                            pUVar1 = (this->fields).useInteractor;
                            if (pUVar1 != (UseInteractor *)0x0) {
                              UseInteractor::UseInteractor_AddRequirement
                                        (pUVar1,(UseRequirement *)this_04,(MethodInfo *)0x0);
                              pMVar4 = (this->fields).doorObject;
                              if (pMVar4 != (MVDoorObject *)0x0) {
                                pGVar5 = (pMVar4->fields).useInteractionRotator;
                                action = (RewardedCheckNoCost *)
                                         func_?(
                                                  TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedCheckNoCost
                                                  );
                                mscorlib.dll::System::Func`1[System::Threading::Tasks::
                                VoidTaskResult]::Func_1_System_Threading_Tasks_VoidTaskResult___ctor
                                          ((Func_1_System_Threading_Tasks_VoidTaskResult_ *)action,
                                           (Object *)this,
                                           MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CheckIfOpen__
                                           ,(MethodInfo *)0x0);
                                this_05 = (RewardedAdRequirement *)
                                          func_?(
                                                  TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement
                                                  );
                                auVar8._4_8_ = 0;
                                auVar8._0_4_ = _UNK_?;
                                WorldObjectInteractionSystem::UseSystem::RewardedAdRequirement::
                                RewardedAdRequirement__ctor_3
                                          (this_05,pGVar5,action,(Vector3)(auVar8 << 0x20),
                                           (MethodInfo *)0x0);
                                if (*ppUVar2 != (UseInteractor *)0x0) {
                                  UseInteractor::UseInteractor_AddRequirement
                                            (*ppUVar2,(UseRequirement *)this_05,(MethodInfo *)0x0);
                                  if (*ppUVar2 != (UseInteractor *)0x0) {
                                    UseInteractor::UseInteractor_UpdateData
                                              (*ppUVar2,(this->fields).useInteractorData,
                                               (MethodInfo *)0x0);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
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
  if (bVar3 == 0) {
    if (pUVar1 != (UseInteractor *)0x0) {
      MVDoor_DestroyUseInteractor(this,(MethodInfo *)0x0);
    }
  }
  else if (pUVar1 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData
              (pUVar1,(this->fields).useInteractorData,(MethodInfo *)0x0);
    return;
  }
  return;
}


/* Boolean Use(Int32) */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_Use
               (MVDoor *this,int32_t userWoID,MethodInfo *method)

{
  ppIVar1 = &(this->fields).serverResponseTimeoutRoutine;
  if ((this->fields).serverResponseTimeoutRoutine == (IEnumerator *)0x0) {
    pIVar2 = MVDoor_ServerResponseTimeoutRoutine(this,(MethodInfo *)0x0);
    *ppIVar1 = pIVar2;
    func_?(ppIVar1,pIVar2);
    Coroutines::Coroutines_Start(*ppIVar1,(MethodInfo *)0x0);
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LogicActivateRequest
              (this_00,(this->fields)._._._.id,(this->fields).localIsOpen == 0,(MethodInfo *)0x0);
    bVar4 = (this->fields).localIsOpen;
    if ((bVar4 == 0) != (bool)bVar4) {
      (this->fields).localIsOpen = bVar4 == 0;
      VVar5 = MVDoor_GetOpenCloseValues(this,(MethodInfo *)0x0);
      from = VVar5.Item1;
      to = VVar5.Item2;
      if ((this->fields).localIsOpen != 0) {
        to = from;
        from = VVar5.Item2;
      }
      MVDoor_StartDoorAnimation(this,from,to,(MethodInfo *)0x0);
    }
  }
  return 1;
}


/* MVDoor(Dictionary`2[System.Object,System.Object], Dictionary`2[System.Int32,MVWorldObjectClient])
    */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor__ctor
               (MVDoor *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
    func_?(&
                    Assets__Scripts__WorldObjectTypes__MVDoor__DoorType_MethodInfo__Extensions__GetValueOrDefault<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject);
    func_?(&TypeInfo__MVWorldObjectDocumentationType);
    func_?(&TypeInfo__MV__WorldObject__WorldObjectDataParameters);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 == (PrefabPool *)0x0) goto code_?;
  MVLogicObject::MVLogicObject__ctor
            ((MVLogicObject *)this,data,(pPVar1->fields).doorPrefab,worldObjects,(MethodInfo *)0x0);
  piVar2 = &(this->fields)._._.previewLayerMask;
  *piVar2 = *piVar2 | 0x800;
  piVar3 = &(this->fields)._._.interactionFlags;
  *(uint *)piVar3 = (uint)*piVar3 | 0x10000;
  hashtable.m_Index = (int32_t)(this->fields)._._.component;
  *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
       *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
  if ((MVDoorObject *)hashtable.m_Index == (MVDoorObject *)0x0) {
    (this->fields).doorObject = (MVDoorObject *)0x0;
code_?:
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)&(this->fields).doorObject;
    func_?(unaff_EDI);
    if (*(MVDoorObject **)unaff_EDI == (MVDoorObject *)0x0) {
code_?:
      uVar4 = func_?();
    }
    else {
      pDVar5 = (Dictionary_2_System_Object_System_Object___Class *)
                &((*(MVDoorObject **)unaff_EDI)->fields).doorLogic;
      *(MVDoor **)pDVar5 = this;
      func_?(pDVar5,this);
      pMVar6 = &(this->fields).doorConfig;
      pMVar6->name = (String *)0x0;
      (this->fields).doorConfig.beginOpen = 0;
      (this->fields).doorConfig.playersCanOpen = 0;
      (this->fields).doorConfig.reverseOpenDirection = 0;
      (this->fields).doorConfig.field_0x7 = 0;
      (this->fields).doorConfig.openValue = 0.0;
      (this->fields).doorConfig.closeValue = 0.0;
      (this->fields).doorConfig.toggleTime = 0.0;
      (this->fields).doorConfig.docType = 0;
      (this->fields).doorConfig.doorType = 0;
      func_?(pMVar6,0);
      pOVar7 = (Object *)
               func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffffb
                              );
      if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
      hashtable = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                             pOVar7,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            );
      if (hashtable.m_Index == 0) {
        hashtable.m_Index = 0;
      }
      else {
        bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        unaff_EDI = 
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
        if ((*(byte *)(*(int *)hashtable.m_Index + 0xb8) < bVar8) ||
           (*(Dictionary_2_System_Object_System_Object___Class **)
             (*(int *)(*(int *)hashtable.m_Index + 100) + -4 + (uint)bVar8 * 4) !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
        goto code_?;
      }
      unaff_EDI = pDVar5;
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
        unaff_EDI = pDVar5;
      }
      pSVar9 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
               DoorType;
      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Extensions);
      }
      doorType = Extensions::Extensions_GetValueOrDefault_2
                           ((Dictionary_2_System_Object_System_Object_ *)hashtable.m_Index,pSVar9,0,
                            Assets__Scripts__WorldObjectTypes__MVDoor__DoorType_MethodInfo__Extensions__GetValueOrDefault<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType_
                           );
      (this->fields).doorConfig.doorType = doorType;
      pSVar9 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
               DocType;
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
      }
      pOVar7 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                         (doorType,pSVar9,(MethodInfo *)0x0);
      uVar4 = CONCAT44(TypeInfo__MVWorldObjectDocumentationType,pOVar7);
      if (pOVar7 == (Object *)0x0) goto code_?;
      if ((pOVar7->klass->_0).element_class ==
          (TypeInfo__MVWorldObjectDocumentationType->_0).element_class) {
        piVar2 = (int32_t *)func_?(pOVar7);
        (this->fields).doorConfig.docType = *piVar2;
        return;
      }
    }
    func_?(uVar4);
    hashtable.m_Index = (int32_t)extraout_EDX;
  }
  else {
    bVar8 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject->_1).naturalAligment;
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)
                TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject;
    if ((bVar8 <= (((ObjectPrefab__Class *)((MVDoorObject *)hashtable.m_Index)->klass)->_1).
                  naturalAligment) &&
       ((((ObjectPrefab__Class *)((MVDoorObject *)hashtable.m_Index)->klass)->_1).typeHierarchy
        [bVar8 - 1] == (Il2CppClass *)TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject)) {
      (this->fields).doorObject = (MVDoorObject *)hashtable.m_Index;
      bVar8 = (TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)((MVDoorObject *)hashtable.m_Index)->klass)->_1).naturalAligment
           < bVar8) ||
         ((((ObjectPrefab__Class *)((MVDoorObject *)hashtable.m_Index)->klass)->_1).typeHierarchy
          [bVar8 - 1] != (Il2CppClass *)TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject))
      goto code_?;
      goto code_?;
    }
  }
code_?:
  func_?(hashtable.m_Index,unaff_EDI);
  hashtable.m_Index = (int32_t)extraout_EDX_00;
code_?:
  func_?(hashtable.m_Index);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* MVDoor+DoorConfiguration get_DoorConfig() */

MVDoor_DoorConfiguration *
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_get_DoorConfig
          (MVDoor_DoorConfiguration *__return_storage_ptr__,MVDoor *this,MethodInfo *method)

{
  bVar1 = (this->fields).doorConfig.beginOpen;
  bVar2 = (this->fields).doorConfig.playersCanOpen;
  bVar3 = (this->fields).doorConfig.reverseOpenDirection;
  uVar4 = (this->fields).doorConfig.field_0x7;
  fVar5 = (this->fields).doorConfig.openValue;
  fVar6 = (this->fields).doorConfig.closeValue;
  __return_storage_ptr__->name = (this->fields).doorConfig.name;
  __return_storage_ptr__->beginOpen = bVar1;
  __return_storage_ptr__->playersCanOpen = bVar2;
  __return_storage_ptr__->reverseOpenDirection = bVar3;
  __return_storage_ptr__->field_0x7 = uVar4;
  __return_storage_ptr__->openValue = fVar5;
  __return_storage_ptr__->closeValue = fVar6;
  iVar7 = (this->fields).doorConfig.docType;
  iVar8 = (this->fields).doorConfig.doorType;
  __return_storage_ptr__->toggleTime = (this->fields).doorConfig.toggleTime;
  __return_storage_ptr__->docType = iVar7;
  __return_storage_ptr__->doorType = iVar8;
  return __return_storage_ptr__;
}


/* Vector3 get_InputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_get_InputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVDoor *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.125;
  __return_storage_ptr__->y = -0.0625;
  __return_storage_ptr__->z = -1.439;
  return __return_storage_ptr__;
}


/* Quaternion get_InputConnectorRotation() */

Quaternion *
Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_get_InputConnectorRotation
          (Quaternion *__return_storage_ptr__,MVDoor *this,MethodInfo *method)

{
  QStack_1.w = 0.0;
  auVar2._4_8_ = 0;
  auVar2._0_4_ = _UNK_?;
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     (&QStack_1,(Vector3)(auVar2 << 0x20),(MethodInfo *)0x0);
  fVar4 = pQVar3->y;
  fVar5 = pQVar3->z;
  fVar6 = pQVar3->w;
  __return_storage_ptr__->x = pQVar3->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar5;
  __return_storage_ptr__->w = fVar6;
  return __return_storage_ptr__;
}


/* Void set_DoorBlueprint(MVDoorBlueprint) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_set_DoorBlueprint
               (MVDoor *this,MVDoorBlueprint *value,MethodInfo *method)

{
  ppMVar1 = &(this->fields)._DoorBlueprint_k__BackingField;
  *ppMVar1 = value;
  func_?(ppMVar1,value);
  return;
}


/* Void set_InputSignalReceiver(IInputSignalReceiver) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_set_InputSignalReceiver
               (MVDoor *this,IInputSignalReceiver *value,MethodInfo *method)

{
  ppIVar1 = &(this->fields)._InputSignalReceiver_k__BackingField;
  *ppIVar1 = value;
  func_?(ppIVar1,value);
  return;
}


/* Void set_IsOpen(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_set_IsOpen
               (MVDoor *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredBool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(code *)(this->klass->vtable).get_RunTimeData.method)
                        (this,(this->klass->vtable).set_RunTimeData.methodPtr);
  if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
  }
  key = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->IsOpen;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
           ObscuredBool_op_Implicit(&OStack_2,value,(MethodInfo *)0x0);
  uStack_3._0_1_ = pOVar1->currentCryptoKey;
  uStack_3._1_3_ = *(undefined3 *)&pOVar1->field_0x1;
  uStack_3._4_4_ = pOVar1->hiddenValue;
  uVar4 = pOVar1->fakeValue;
  uVar5 = pOVar1->fakeValueChanged;
  uVar6 = pOVar1->inited;
  uVar7 = pOVar1->field_0xb;
  value_00._11_1_ = uVar7;
  value_00.inited = uVar6;
  value_00.fakeValueChanged = uVar5;
  value_00.fakeValue = uVar4;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  value_00.currentCryptoKey = (undefined1)uStack_3;
  value_00._1_3_ = uStack_3._1_3_;
  value_00.hiddenValue = uStack_3._4_4_;
  Extensions::Extensions_SetObscuredType
            (hashtable,key,value_00,
             void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredBool>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool_
            );
  return;
}

