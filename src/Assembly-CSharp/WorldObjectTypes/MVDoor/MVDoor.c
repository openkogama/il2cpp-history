
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
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
  if ((this->fields).collisionCheckRoutine != (IEnumerator *)0x0) {
    Coroutines::Coroutines_Stop((this->fields).collisionCheckRoutine,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___CollisionCheckCoroutine_d__57);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WorldObjectTypes__MVDoor__MVDoor___CollisionCheckCoroutine_d__57;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  (this->fields).collisionCheckRoutine = (IEnumerator *)value;
  func_?(&(this->fields).collisionCheckRoutine,value);
  Coroutines::Coroutines_Start((this->fields).collisionCheckRoutine,(MethodInfo *)0x0);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
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
    pUVar3 = (this->fields).useInteractor;
    pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
             func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar4,(Object *)pUVar3,
               MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
      pMVar1 = (this->fields).doorObject;
      if (pMVar1 != (MVDoorObject *)0x0) {
        pTVar2 = (pMVar1->fields).triggerBoxEvents;
        pUVar3 = (this->fields).useInteractor;
        pUVar4 = (UnityAction_2_System_Object_System_Object_ *)
                 func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar4,(Object *)pUVar3,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar2 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                    (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar4,(MethodInfo *)0x0);
          pUVar3 = (this->fields).useInteractor;
          if (pUVar3 != (UseInteractor *)0x0) {
            UseInteractor::UseInteractor_OnDestroy
                      (pUVar3,(this->fields)._._._.data,(MethodInfo *)0x0);
            (this->fields).useInteractor = (UseInteractor *)0x0;
            func_?(&(this->fields).useInteractor,0);
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
    unaff_ESI = (UnityAction_2_System_Int32_System_Int32_ *)(pGVar1->fields).AvatarCommandsPlayMode
    ;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CollisionCheck__
               ,(MethodInfo *)0x0);
    if (unaff_ESI == (UnityAction_2_System_Int32_System_Int32_ *)0x0) goto code_?;
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
      unaff_ESI = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
      UnityAction_2_System_Int32_System_Int32___ctor
                (unaff_ESI,(Object *)this,
                 MethodInfo__WorldObjectTypes__MVDoor__MVDoor__InputStateUpdateCallback_LogicInputState__LogicObjectManager_
                 ,(MethodInfo *)0x0);
      pIVar5 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                          ((MVWorldObject *)this,0,
                           (Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                           (Action_2_LogicInputState_LogicObjectManager_ *)unaff_ESI,
                           (MethodInfo *)0x0);
      (this->fields)._InputSignalReceiver_k__BackingField = pIVar5;
      func_?(&(this->fields)._InputSignalReceiver_k__BackingField);
      pMVar6 = MVDoor_ReadWorldObjectData
                          ((MVDoor_DoorConfiguration *)&stack0xffffffb0,this,(MethodInfo *)0x0);
      bVar7 = pMVar6->beginOpen;
      bVar8 = pMVar6->playersCanOpen;
      bVar9 = pMVar6->reverseOpenDirection;
      uVar10 = pMVar6->field_0x7;
      fVar11 = pMVar6->openValue;
      fVar12 = pMVar6->closeValue;
      fVar13 = pMVar6->toggleTime;
      iVar14 = pMVar6->docType;
      iVar15 = pMVar6->doorType;
      (this->fields).doorConfig.name = pMVar6->name;
      (this->fields).doorConfig.beginOpen = bVar7;
      (this->fields).doorConfig.playersCanOpen = bVar8;
      (this->fields).doorConfig.reverseOpenDirection = bVar9;
      (this->fields).doorConfig.field_0x7 = uVar10;
      (this->fields).doorConfig.openValue = fVar11;
      (this->fields).doorConfig.closeValue = fVar12;
      (this->fields).doorConfig.toggleTime = fVar13;
      (this->fields).doorConfig.docType = iVar14;
      (this->fields).doorConfig.doorType = iVar15;
      func_?(&(this->fields).doorConfig,0);
      (this->fields).storedReverseOpenDirection = (this->fields).doorConfig.reverseOpenDirection;
      (this->fields).storedBeginOpen = (this->fields).doorConfig.beginOpen;
      bVar7 = (this->fields).doorConfig.beginOpen;
      (this->fields).localIsOpen = bVar7;
      if (bVar7 != 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___BeginOpenCoroutine_d__62);
          cRam_? = '\x01';
        }
        method_00 = TypeInfo__WorldObjectTypes__MVDoor__MVDoor___BeginOpenCoroutine_d__62;
        unaff_ESI = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)unaff_ESI,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        (unaff_ESI->fields)._._.method_ptr = (Action *)0x0;
        (unaff_ESI->fields)._._.m_target = (Object *)this;
        func_?(&(unaff_ESI->fields)._._.m_target,this);
        Coroutines::Coroutines_Start((IEnumerator *)unaff_ESI,(MethodInfo *)0x0);
      }
      if ((this->fields).doorConfig.doorType != 2) {
        return;
      }
      pGVar4 = (this->fields)._._.inputConnectorObject;
      if (pGVar4 != (GameObject *)0x0) {
        pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar4,(MethodInfo *)0x0);
        puStack_17 = (undefined *)0x0;
        if (pTVar16 != (Transform *)0x0) {
          pSVar18 = (String *)0x0;
          value_00.z = 0.503;
          value_00.x = 0.503;
          value_00.y = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar16,value_00,(MethodInfo *)0x0);
          pGVar4 = (this->fields)._._.inputConnectorObject;
          if (pGVar4 != (GameObject *)0x0) {
            pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar4,(MethodInfo *)0x0);
            euler.y = (float)pSVar18;
            euler.x = (float)pSVar18;
            euler.z = -1.5707964;
            pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                      Quaternion_Internal_FromEulerRad
                                ((Quaternion *)&puStack_17,euler,(MethodInfo *)0x0);
            unaff_ESI = (UnityAction_2_System_Int32_System_Int32_ *)0x0;
            if (pTVar16 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                        (pTVar16,*pQVar19,(MethodInfo *)0x0);
              pMVar3 = (this->fields).doorObject;
              unaff_ESI = (UnityAction_2_System_Int32_System_Int32_ *)0x0;
              if ((pMVar3 != (MVDoorObject *)0x0) &&
                 (unaff_ESI = (UnityAction_2_System_Int32_System_Int32_ *)
                              (pMVar3->fields).useCollider,
                 unaff_ESI != (UnityAction_2_System_Int32_System_Int32_ *)0x0)) {
                pBVar20 = TypeInfo__UnityEngine__BoxCollider;
                if (((unaff_ESI->klass->_1).naturalAligment <
                     (TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment) ||
                   ((unaff_ESI->klass->_1).typeHierarchy
                    [(TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment - 1] !=
                    (Il2CppClass *)TypeInfo__UnityEngine__BoxCollider)) goto code_?;
                UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_center
                          ((BoxCollider *)unaff_ESI,(Vector3)ZEXT812(0x3f800000),(MethodInfo *)0x0);
                pMVar3 = (this->fields).doorObject;
                unaff_ESI = (UnityAction_2_System_Int32_System_Int32_ *)0x0;
                if ((pMVar3 != (MVDoorObject *)0x0) &&
                   (unaff_ESI = (UnityAction_2_System_Int32_System_Int32_ *)
                                (pMVar3->fields).useCollider,
                   unaff_ESI != (UnityAction_2_System_Int32_System_Int32_ *)0x0)) {
                  pBVar20 = TypeInfo__UnityEngine__BoxCollider;
                  if (((unaff_ESI->klass->_1).naturalAligment <
                       (TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment) ||
                     ((unaff_ESI->klass->_1).typeHierarchy
                      [(TypeInfo__UnityEngine__BoxCollider->_1).naturalAligment - 1] !=
                      (Il2CppClass *)TypeInfo__UnityEngine__BoxCollider)) goto code_?;
                  value.z = 7.0;
                  value.x = 7.0;
                  value.y = 6.0;
                  UnityEngine.PhysicsModule.dll::UnityEngine::BoxCollider::BoxCollider_set_size
                            ((BoxCollider *)unaff_ESI,value,(MethodInfo *)0x0);
                  pMVar3 = (this->fields).doorObject;
                  if (((pMVar3 != (MVDoorObject *)0x0) &&
                      (pGVar4 = (pMVar3->fields).useInteractionRotator,
                      pGVar4 != (GameObject *)0x0)) &&
                     (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_get_transform(pGVar4,(MethodInfo *)0x0),
                     pTVar16 != (Transform *)0x0)) {
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                              (pTVar16,(Vector3)ZEXT812(0xbf8000003f99999a),(MethodInfo *)0x0);
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
    pIVar21 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
    if (pIVar21 == (IEditModeUI *)0x0) goto code_?;
    a = (Delegate *)func_?(2,TypeInfo__IEditModeUI,pIVar21);
    this_02 = (UnityAction_1_System_Int32Enum_ *)
              func_?(TypeInfo__System__Action<EditModeChangeArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_02,(Object *)this,
               MethodInfo__WorldObjectTypes__MVDoor__MVDoor__OnEditModeChange_EditModeChangeArgs_,
               (MethodInfo *)0x0);
    unaff_ESI = (UnityAction_2_System_Int32_System_Int32_ *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          (a,(Delegate *)this_02,(MethodInfo *)0x0);
    if ((unaff_ESI == (UnityAction_2_System_Int32_System_Int32_ *)0x0) ||
       (iVar22 = func_?(), iVar22 != 0)) {
      puStack_17 = (undefined *)0x3;
      func_?();
      goto code_?;
    }
  }
  func_?();
  pBVar20 = extraout_EDX;
code_?:
  func_?(unaff_ESI,pBVar20);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
  puStack_4 = &stack0xffffff54;
  puVar5 = &stack0xffffff54;
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
      BStack_21.m_Extents.z = (float)puVar16[10];
      BStack_21.m_Extents.x = (float)*(undefined8 *)(puVar16 + 8);
      BStack_21.m_Extents.y = (float)((ulonglong)*(undefined8 *)(puVar16 + 8) >> 0x20);
      if ((Collider *)puVar16[7] == (Collider *)0x0) break;
      pBVar22 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                          (&BStack_21,(Collider *)puVar16[7],(MethodInfo *)0x0);
      BStack_23.m_Extents.y = (pBVar22->m_Extents).y;
      BStack_23.m_Extents.z = (pBVar22->m_Extents).z;
      BStack_23.m_Center.x = (pBVar22->m_Center).x;
      BStack_23.m_Center.y = (pBVar22->m_Center).y;
      BStack_23.m_Center.z = (pBVar22->m_Center).z;
      BStack_23.m_Extents.x = (pBVar22->m_Extents).x;
      BStack_21.m_Center.x = bound.m_Center.x;
      BStack_21.m_Center.y = bound.m_Center.y;
      BStack_21.m_Center.z = bound.m_Center.z;
      BStack_21.m_Extents.x = bound.m_Extents.x;
      BStack_21.m_Extents.y = bound.m_Extents.y;
      BStack_21.m_Extents.z = bound.m_Extents.z;
      if ((bound.m_Center.x + bound.m_Extents.x < BStack_23.m_Center.x - BStack_23.m_Extents.x) ||
         (BStack_23.m_Extents.x + BStack_23.m_Center.x < bound.m_Center.x - bound.m_Extents.x)) {
code_?:
        bVar24 = false;
      }
      else {
        if ((bound.m_Center.y + bound.m_Extents.y < BStack_23.m_Center.y - BStack_23.m_Extents.y) ||
           (BStack_23.m_Extents.y + BStack_23.m_Center.y < bound.m_Center.y - bound.m_Extents.y))
        goto code_?;
        pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                            (&VStack_26,&BStack_23,(MethodInfo *)0x0);
        fVar27 = pVVar25->z;
        pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                            (&VStack_28,&BStack_21,(MethodInfo *)0x0);
        if (pVVar25->z < fVar27) goto code_?;
        VStack_29.z = (float)&UNK_?;
        pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_max
                            ((Vector3 *)&stack0xffffff6c,&BStack_23,(MethodInfo *)0x0);
        fVar27 = pVVar25->z;
        VStack_29.z = (float)&UNK_?;
        pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_get_min
                            (&VStack_29,&BStack_21,(MethodInfo *)0x0);
        bVar24 = pVVar25->z <= fVar27;
      }
      if (bVar24) {
        uStack_1 = 0xffffffff;
        VStack_26.z = (float)&UNK_?;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
    }
  }
  uVar15 = func_?();
code_?:
  func_?(uVar15);
  pcVar30 = (code *)swi(3);
  bVar31 = (*pcVar30)();
  return bVar31;
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  pMVar1 = MVDoor_ReadWorldObjectData
                      ((MVDoor_DoorConfiguration *)&stack0xffffffd8,this,(MethodInfo *)0x0);
  bVar2 = pMVar1->beginOpen;
  bVar3 = pMVar1->playersCanOpen;
  bVar4 = pMVar1->reverseOpenDirection;
  uVar5 = pMVar1->field_0x7;
  fVar6 = pMVar1->openValue;
  fVar7 = pMVar1->closeValue;
  fVar8 = pMVar1->toggleTime;
  iVar9 = pMVar1->docType;
  iVar10 = pMVar1->doorType;
  (this->fields).doorConfig.name = pMVar1->name;
  (this->fields).doorConfig.beginOpen = bVar2;
  (this->fields).doorConfig.playersCanOpen = bVar3;
  (this->fields).doorConfig.reverseOpenDirection = bVar4;
  (this->fields).doorConfig.field_0x7 = uVar5;
  (this->fields).doorConfig.openValue = fVar6;
  (this->fields).doorConfig.closeValue = fVar7;
  (this->fields).doorConfig.toggleTime = fVar8;
  (this->fields).doorConfig.docType = iVar9;
  (this->fields).doorConfig.doorType = iVar10;
  func_?(&(this->fields).doorConfig,0);
  MVDoor_UpdateUseInteractor(this,(MethodInfo *)0x0);
  if (((this->fields).storedBeginOpen != (this->fields).doorConfig.beginOpen) &&
     ((this->fields).serverResponseTimeoutRoutine == (IEnumerator *)0x0)) {
    (this->fields).storedBeginOpen = (this->fields).doorConfig.beginOpen;
    pIVar11 = MVDoor_ServerResponseTimeoutRoutine(this,(MethodInfo *)0x0);
    (this->fields).serverResponseTimeoutRoutine = pIVar11;
    func_?();
    Coroutines::Coroutines_Start((this->fields).serverResponseTimeoutRoutine,(MethodInfo *)0x0);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LogicActivateRequest
              (this_01,(this->fields)._._._.id,(this->fields).storedBeginOpen,(MethodInfo *)0x0);
    MVDoor_ToggleDoor(this,(this->fields).storedBeginOpen,(MethodInfo *)0x0);
  }
  if (((this->fields).storedReverseOpenDirection != (this->fields).doorConfig.reverseOpenDirection)
     && ((this->fields).storedReverseOpenDirection = (this->fields).doorConfig.reverseOpenDirection,
        (this->fields).localIsOpen != 0)) {
    this_00 = (this->fields).doorObject;
    if (this_00 == (MVDoorObject *)0x0) {
code_?:
      func_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    fVar6 = MVDoorObject::MVDoorObject_GetCurrentValue
                       (this_00,(this->fields).doorConfig.doorType,(MethodInfo *)0x0);
    VVar13 = MVDoor_GetOpenCloseValues(this,(MethodInfo *)0x0);
    MVDoor_StartDoorAnimation(this,fVar6,VVar13.Item1,(MethodInfo *)0x0);
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
  if ((this->fields).serverResponseTimeoutRoutine != (IEnumerator *)0x0) {
    Coroutines::Coroutines_Stop((this->fields).serverResponseTimeoutRoutine,(MethodInfo *)0x0);
    (this->fields).serverResponseTimeoutRoutine = (IEnumerator *)0x0;
    func_?(&(this->fields).serverResponseTimeoutRoutine,0);
  }
  MVDoor_set_IsOpen(this,isFiring,(MethodInfo *)0x0);
  if (isFiring != (this->fields).localIsOpen) {
    (this->fields).localIsOpen = isFiring;
    VVar1 = MVDoor_GetOpenCloseValues(this,(MethodInfo *)0x0);
    from = VVar1.Item1;
    to = VVar1.Item2;
    if ((this->fields).localIsOpen != 0) {
      to = from;
      from = VVar1.Item2;
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
        pDVar17 = (DoorData_Keys__Class *)0x0;
        if ((Boolean__Class *)(pDStack_2->_0).image == TypeInfo__System__Boolean) {
          pDVar17 = pDStack_2;
        }
        if (pDVar17 != (DoorData_Keys__Class *)0x0) {
          pDStack_18 = pDStack_2;
          pBStack_19 = TypeInfo__System__Boolean;
          if ((Il2CppClass *)((pDStack_2->_0).image)->codeGenModule !=
              (TypeInfo__System__Boolean->_0).element_class) goto code_?;
          pBStack_19 = (Boolean__Class *)pDStack_2;
          pbVar20 = (bool *)func_?();
          __return_storage_ptr__->beginOpen = *pbVar20;
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
          pDVar17 = (DoorData_Keys__Class *)0x0;
          if ((Boolean__Class *)(pDStack_3->_0).image == TypeInfo__System__Boolean) {
            pDVar17 = pDStack_3;
          }
          if (pDVar17 != (DoorData_Keys__Class *)0x0) {
            pDStack_18 = pDStack_3;
            pBStack_19 = TypeInfo__System__Boolean;
            if ((Il2CppClass *)((pDStack_3->_0).image)->codeGenModule !=
                (TypeInfo__System__Boolean->_0).element_class) goto code_?;
            pBStack_19 = (Boolean__Class *)pDStack_3;
            pbVar20 = (bool *)func_?();
            __return_storage_ptr__->playersCanOpen = *pbVar20;
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
          pDVar17 = (DoorData_Keys__Class *)0x0;
          if ((Boolean__Class *)(pDStack_4->_0).image == TypeInfo__System__Boolean) {
            pDVar17 = pDStack_4;
          }
          if (pDVar17 == (DoorData_Keys__Class *)0x0) {
            return __return_storage_ptr__;
          }
          pDStack_18 = pDStack_4;
          pBStack_19 = TypeInfo__System__Boolean;
          if ((Il2CppClass *)((pDStack_4->_0).image)->codeGenModule ==
              (TypeInfo__System__Boolean->_0).element_class) {
            pBStack_19 = (Boolean__Class *)pDStack_4;
            pbVar20 = (bool *)func_?();
            __return_storage_ptr__->reverseOpenDirection = *pbVar20;
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
  pcVar21 = (code *)swi(3);
  pMVar5 = (MVDoor_DoorConfiguration *)(*pcVar21)();
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
  (this->fields).localIsOpen = value;
  if ((this->fields).serverResponseTimeoutRoutine != (IEnumerator *)0x0) {
    Coroutines::Coroutines_Stop((this->fields).serverResponseTimeoutRoutine,(MethodInfo *)0x0);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void StartDoorAnimation(Single, Single) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_StartDoorAnimation
               (MVDoor *this,float from,float to,MethodInfo *method)

{
  if ((this->fields).doorAnimationRoutine != (IEnumerator *)0x0) {
    Coroutines::Coroutines_Stop((this->fields).doorAnimationRoutine,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__WorldObjectTypes__MVDoor__MVDoor___AnimationCoroutine_d__55;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)from;
  value[3].klass = (Object__Class *)to;
  (this->fields).doorAnimationRoutine = (IEnumerator *)value;
  func_?(&(this->fields).doorAnimationRoutine,value);
  Coroutines::Coroutines_Start((this->fields).doorAnimationRoutine,(MethodInfo *)0x0);
  this_00 = (this->fields).doorObject;
  if (this_00 != (MVDoorObject *)0x0) {
    MVDoorObject::MVDoorObject_playOpenDoorSound
              (this_00,(this->fields).doorConfig.doorType,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  if (((this->fields).storedBeginOpen != (this->fields).doorConfig.beginOpen) &&
     ((this->fields).serverResponseTimeoutRoutine == (IEnumerator *)0x0)) {
    (this->fields).storedBeginOpen = (this->fields).doorConfig.beginOpen;
    pIVar1 = MVDoor_ServerResponseTimeoutRoutine(this,(MethodInfo *)0x0);
    (this->fields).serverResponseTimeoutRoutine = pIVar1;
    func_?(&(this->fields).serverResponseTimeoutRoutine,pIVar1);
    Coroutines::Coroutines_Start((this->fields).serverResponseTimeoutRoutine,(MethodInfo *)0x0);
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
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
  if (((this->fields).storedReverseOpenDirection != (this->fields).doorConfig.reverseOpenDirection)
     && ((this->fields).storedReverseOpenDirection = (this->fields).doorConfig.reverseOpenDirection,
        (this->fields).localIsOpen != 0)) {
    this_00 = (this->fields).doorObject;
    if (this_00 == (MVDoorObject *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    from = MVDoorObject::MVDoorObject_GetCurrentValue
                     (this_00,(this->fields).doorConfig.doorType,(MethodInfo *)0x0);
    VVar2 = MVDoor_GetOpenCloseValues(this,(MethodInfo *)0x0);
    MVDoor_StartDoorAnimation(this,from,VVar2.Item1,(MethodInfo *)0x0);
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
  if ((((this->fields).doorConfig.playersCanOpen & pUVar1 == (UseInteractor *)0x0) != 0) &&
     ((this->fields)._DoorBlueprint_k__BackingField != (MVDoorBlueprint *)0x0)) {
    wo = (this->fields)._DoorBlueprint_k__BackingField;
    pMVar2 = (this->fields).doorObject;
    if (pMVar2 != (MVDoorObject *)0x0) {
      pGVar3 = (pMVar2->fields).useInteractionRotator;
      triggerCollider = (((this->fields).doorObject)->fields).useCollider;
      this_00 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (this_00,(Object *)this,MethodInfo__WorldObjectTypes__MVDoor__MVDoor__Use_int_,
                 (MethodInfo *)0x0);
      pUVar1 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar1,(MVWorldObjectClient *)wo,pGVar3,0,triggerCollider,
                 (Func_2_Int32_Boolean_ *)this_00,(Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,
                 2.5,0,(MethodInfo *)0x0);
      (this->fields).useInteractor = pUVar1;
      func_?(&(this->fields).useInteractor,pUVar1);
      pMVar2 = (this->fields).doorObject;
      if (pMVar2 != (MVDoorObject *)0x0) {
        pTVar4 = (pMVar2->fields).triggerBoxEvents;
        pUVar1 = (this->fields).useInteractor;
        pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar5,(Object *)pUVar1,
                   MethodInfo__UseInteractor__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar4 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                    (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
          pMVar2 = (this->fields).doorObject;
          if (pMVar2 != (MVDoorObject *)0x0) {
            pTVar4 = (pMVar2->fields).triggerBoxEvents;
            pUVar1 = (this->fields).useInteractor;
            pUVar5 = (UnityAction_2_System_Object_System_Object_ *)
                      func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar5,(Object *)pUVar1,
                       MethodInfo__UseInteractor__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar4 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                        (pTVar4,(EventHandler_1_TriggerEventArgs_ *)pUVar5,(MethodInfo *)0x0);
              pMVar2 = (this->fields).doorObject;
              if (pMVar2 != (MVDoorObject *)0x0) {
                pGVar3 = (pMVar2->fields).useInteractionRotator;
                this_01 = (GameCoinLogic *)func_?(TypeInfo__GameCoinLogic);
                GameCoinLogic::GameCoinLogic__ctor(this_01,pGVar3,1,(MethodInfo *)0x0);
                pUVar1 = (this->fields).useInteractor;
                if (pUVar1 != (UseInteractor *)0x0) {
                  UseInteractor::UseInteractor_AddRequirement
                            (pUVar1,(UseRequirement *)this_01,(MethodInfo *)0x0);
                  pMVar2 = (this->fields).doorObject;
                  if (pMVar2 != (MVDoorObject *)0x0) {
                    pGVar3 = (pMVar2->fields).useInteractionRotator;
                    this_02 = (LevelBasedUseRequirement *)
                              func_?(TypeInfo__LevelBasedUseRequirement);
                    LevelBasedUseRequirement::LevelBasedUseRequirement__ctor
                              (this_02,pGVar3,1,(MethodInfo *)0x0);
                    pUVar1 = (this->fields).useInteractor;
                    if (pUVar1 != (UseInteractor *)0x0) {
                      UseInteractor::UseInteractor_AddRequirement
                                (pUVar1,(UseRequirement *)this_02,(MethodInfo *)0x0);
                      pMVar2 = (this->fields).doorObject;
                      if (pMVar2 != (MVDoorObject *)0x0) {
                        pGVar3 = (pMVar2->fields).useInteractionRotator;
                        this_03 = (StarRequirement *)func_?(TypeInfo__StarRequirement);
                        StarRequirement::StarRequirement__ctor(this_03,pGVar3,1,(MethodInfo *)0x0);
                        pUVar1 = (this->fields).useInteractor;
                        if (pUVar1 != (UseInteractor *)0x0) {
                          UseInteractor::UseInteractor_AddRequirement
                                    (pUVar1,(UseRequirement *)this_03,(MethodInfo *)0x0);
                          pMVar2 = (this->fields).doorObject;
                          if (pMVar2 != (MVDoorObject *)0x0) {
                            pGVar3 = (pMVar2->fields).useInteractionRotator;
                            this_04 = (GameRankRequirement *)
                                      func_?(TypeInfo__GameRankRequirement);
                            GameRankRequirement::GameRankRequirement__ctor
                                      (this_04,pGVar3,(MVWorldObjectClient *)this,1,
                                       (MethodInfo *)0x0);
                            pUVar1 = (this->fields).useInteractor;
                            if (pUVar1 != (UseInteractor *)0x0) {
                              UseInteractor::UseInteractor_AddRequirement
                                        (pUVar1,(UseRequirement *)this_04,(MethodInfo *)0x0);
                              pMVar2 = (this->fields).doorObject;
                              if (pMVar2 != (MVDoorObject *)0x0) {
                                pUVar6 = (UseRequirement__Class *)
                                         (pMVar2->fields).useInteractionRotator;
                                iVar7 = func_?(
                                                  TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedCheckNoCost
                                                  );
                                pMVar8 = MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CheckIfOpen__
                                ;
                                *(Il2CppMethodPointer *)(iVar7 + 8) =
                                     MethodInfo__WorldObjectTypes__MVDoor__MVDoor__CheckIfOpen__->
                                     virtualMethodPointer;
                                *(MethodInfo **)(iVar7 + 0x14) = pMVar8;
                                *(MVDoor **)(iVar7 + 0x10) = this;
                                func_?(iVar7 + 0x10,this);
                                uVar9 = pMVar8->parameters_count;
                                *(int *)(iVar7 + 0x20) = iVar7;
                                cVar10 = func_?(pMVar8);
                                if ((cVar10 == '\0') || (uVar9 != 0)) {
                                  *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar7 + 0x10);
                                  puVar11 = *(undefined **)(iVar7 + 8);
                                }
                                else {
                                  puVar11 = &UNK_?;
                                }
                                *(undefined **)(iVar7 + 0xc) = puVar11;
                                *(undefined **)(iVar7 + 0x1c) = &UNK_?;
                                useRequirement =
                                     (UseRequirement *)
                                     func_?(
                                                  TypeInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement
                                                  );
                                if (cRam_? == '\0') {
                                  func_?(&
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                 );
                                  func_?(&
                                                  MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
                                                 );
                                  cRam_? = '\x01';
                                }
                                useRequirement[1].klass = (UseRequirement__Class *)0x0;
                                useRequirement[1].monitor = (MonitorData *)0x0;
                                *(undefined4 *)&useRequirement[1].fields = 0;
                                useRequirement[2].klass = (UseRequirement__Class *)0xffffffff;
                                UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                                UxmlObjectListAttributeDescription`1[System::Object]::
                                UxmlObjectListAttributeDescription_1_System_Object___ctor
                                          ((UxmlObjectListAttributeDescription_1_System_Object_ *)
                                           useRequirement,(MethodInfo *)0x0);
                                useRequirement[3].klass = pUVar6;
                                func_?(useRequirement + 3,pUVar6);
                                *(int *)&useRequirement[3].fields = iVar7;
                                func_?(&useRequirement[3].fields,iVar7);
                                *(bool *)&useRequirement[4].klass =
                                     *(int *)&useRequirement[3].fields != 0;
                                this_05 = MVGameControllerBase::
                                          MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                                    ((MethodInfo *)0x0);
                                this_06 = (Action_3_Int32_Int32_ByteEnum_ *)
                                          func_?(
                                                  TypeInfo__System__Action<int,_int,_MV::Common::PlayerKilledByType>
                                                  );
                                mscorlib.dll::System::Action`3[Int32,Int32,ByteEnum]::
                                Action_3_Int32_Int32_ByteEnum___ctor
                                          (this_06,(Object *)useRequirement,
                                           MethodInfo__WorldObjectInteractionSystem__UseSystem__RewardedAdRequirement__OnLocalPlayerKilled_int__int__MV__Common__PlayerKilledByType_
                                           ,(MethodInfo *)0x0);
                                if (this_05 != (SpawnRoleDataMediator *)0x0) {
                                  Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                                  Mediator::SpawnRoleDataMediator::
                                  SpawnRoleDataMediator_add_OnKilled
                                            (this_05,(
                                                  Action_3_Int32_Int32_MV_Common_PlayerKilledByType_
                                                  *)this_06,(MethodInfo *)0x0);
                                  uVar12 = useRequirement[1].klass;
                                  uVar13 = useRequirement[1].monitor;
                                  fVar14 = (float)uVar13 + _UNK_?;
                                  useRequirement[1].klass =
                                       (UseRequirement__Class *)((float)uVar12 + 0.0);
                                  useRequirement[1].monitor = (MonitorData *)fVar14;
                                  *(float *)&useRequirement[1].fields =
                                       *(float *)&useRequirement[1].fields + 0.0;
                                  pUVar1 = (this->fields).useInteractor;
                                  if (pUVar1 != (UseInteractor *)0x0) {
                                    UseInteractor::UseInteractor_AddRequirement
                                              (pUVar1,useRequirement,(MethodInfo *)0x0);
                                    pUVar1 = (this->fields).useInteractor;
                                    if (pUVar1 != (UseInteractor *)0x0) {
                                      UseInteractor::UseInteractor_UpdateData
                                                (pUVar1,(this->fields).useInteractorData,
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
    }
code_?:
    func_?();
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if ((this->fields).doorConfig.playersCanOpen != 0) {
    if (pUVar1 != (UseInteractor *)0x0) {
      if (pUVar1 != (UseInteractor *)0x0) {
        UseInteractor::UseInteractor_UpdateData
                  (pUVar1,(this->fields).useInteractorData,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if ((this->fields).doorConfig.playersCanOpen != 0) {
      return;
    }
  }
  if (pUVar1 != (UseInteractor *)0x0) {
    MVDoor_DestroyUseInteractor(this,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean Use(Int32) */

bool Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_Use
               (MVDoor *this,int32_t userWoID,MethodInfo *method)

{
  if ((this->fields).serverResponseTimeoutRoutine == (IEnumerator *)0x0) {
    pIVar1 = MVDoor_ServerResponseTimeoutRoutine(this,(MethodInfo *)0x0);
    (this->fields).serverResponseTimeoutRoutine = pIVar1;
    func_?(&(this->fields).serverResponseTimeoutRoutine,pIVar1);
    Coroutines::Coroutines_Start((this->fields).serverResponseTimeoutRoutine,(MethodInfo *)0x0);
    this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_00 == (MVNetworkGame_OperationRequests *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_LogicActivateRequest
              (this_00,(this->fields)._._._.id,(this->fields).localIsOpen == 0,(MethodInfo *)0x0);
    bVar4 = (this->fields).localIsOpen == 0;
    if (bVar4 != (bool)(this->fields).localIsOpen) {
      (this->fields).localIsOpen = bVar4;
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
  if (pPVar1 == (PrefabPool *)0x0) {
code_?:
    uVar2 = func_?();
code_?:
    func_?(uVar2);
    pDVar3 = extraout_EDX;
  }
  else {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).doorPrefab,worldObjects,(MethodInfo *)0x0
              );
    piVar4 = &(this->fields)._._.previewLayerMask;
    *piVar4 = *piVar4 | 0x800;
    piVar5 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar5 = (uint)*piVar5 | 0x10000;
    pMVar6 = (MVDoorObject *)(this->fields)._._.component;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) =
         *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    unaff_EDI.m_Index = (int32_t)TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject;
    if (pMVar6 == (MVDoorObject *)0x0) {
      (this->fields).doorObject = (MVDoorObject *)0x0;
    }
    else {
      if (((((ObjectPrefab__Class *)pMVar6->klass)->_1).naturalAligment <
           (TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)pMVar6->klass)->_1).typeHierarchy
          [(TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject)) goto code_?;
      (this->fields).doorObject = pMVar6;
      if (((((ObjectPrefab__Class *)pMVar6->klass)->_1).naturalAligment <
           (TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject->_1).naturalAligment) ||
         (unaff_EDI.m_Index = (int32_t)TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject,
         (((ObjectPrefab__Class *)pMVar6->klass)->_1).typeHierarchy
         [(TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject->_1).naturalAligment - 1] !=
         (Il2CppClass *)TypeInfo__WorldObjectTypes__MVDoor__MVDoorObject)) goto code_?;
    }
    func_?(&(this->fields).doorObject);
    pMVar6 = (this->fields).doorObject;
    if (pMVar6 == (MVDoorObject *)0x0) goto code_?;
    (pMVar6->fields).doorLogic = this;
    pMVar7 = (MVDoorObject__Class *)&(pMVar6->fields).doorLogic;
    func_?(pMVar7,this);
    (this->fields).doorConfig.name = (String *)0x0;
    (this->fields).doorConfig.beginOpen = 0;
    (this->fields).doorConfig.playersCanOpen = 0;
    (this->fields).doorConfig.reverseOpenDirection = 0;
    (this->fields).doorConfig.field_0x7 = 0;
    (this->fields).doorConfig.openValue = 0.0;
    (this->fields).doorConfig.closeValue = 0.0;
    (this->fields).doorConfig.toggleTime = 0.0;
    (this->fields).doorConfig.docType = 0;
    (this->fields).doorConfig.doorType = 0;
    func_?(&(this->fields).doorConfig,0);
    pOVar8 = (Object *)
             func_?(TypeInfo__MV__WorldObject__WorldObjectDataParameters,&stack0xfffffffb);
    if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    unaff_EDI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::TextureId]::
                Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                          ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,
                           pOVar8,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    if ((unaff_EDI.m_Index == 0) ||
       ((pDVar3 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        , (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment <= *(byte *)(*(int *)unaff_EDI.m_Index + 0xb8) &&
        (*(Dictionary_2_System_Object_System_Object___Class **)
          (*(int *)(*(int *)unaff_EDI.m_Index + 100) + -4 +
          (uint)(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment * 4) ==
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)))) {
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys);
      }
      pSVar9 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
               DoorType;
      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Extensions);
      }
      doorType = Extensions::Extensions_GetValueOrDefault_2
                           ((Dictionary_2_System_Object_System_Object_ *)unaff_EDI.m_Index,pSVar9,0,
                            Assets__Scripts__WorldObjectTypes__MVDoor__DoorType_MethodInfo__Extensions__GetValueOrDefault<Assets::Scripts::WorldObjectTypes::MVDoor::DoorType>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__Assets__Scripts__WorldObjectTypes__MVDoor__DoorType_
                           );
      (this->fields).doorConfig.doorType = doorType;
      pSVar9 = TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData__Keys->static_fields->
               DocType;
      unaff_EDI.m_Index = (int32_t)pMVar7;
      if ((TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Assets__Scripts__WorldObjectTypes__MVDoor__DoorData);
        unaff_EDI.m_Index = (int32_t)pMVar7;
      }
      pOVar8 = Assets::Scripts::WorldObjectTypes::MVDoor::DoorData::DoorData_DefaultValue
                         (doorType,pSVar9,(MethodInfo *)0x0);
      uVar2 = CONCAT44(TypeInfo__MVWorldObjectDocumentationType,pOVar8);
      if (pOVar8 == (Object *)0x0) goto code_?;
      if ((pOVar8->klass->_0).element_class ==
          (TypeInfo__MVWorldObjectDocumentationType->_0).element_class) {
        piVar4 = (int32_t *)func_?(pOVar8);
        (this->fields).doorConfig.docType = *piVar4;
        return;
      }
      goto code_?;
    }
  }
  func_?(unaff_EDI.m_Index,pDVar3);
  pMVar6 = extraout_EDX_00;
code_?:
  func_?(pMVar6);
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
  (this->fields)._DoorBlueprint_k__BackingField = value;
  func_?(&(this->fields)._DoorBlueprint_k__BackingField,value);
  return;
}


/* Void set_InputSignalReceiver(IInputSignalReceiver) */

void Assembly-CSharp.dll::WorldObjectTypes::MVDoor::MVDoor::MVDoor_set_InputSignalReceiver
               (MVDoor *this,IInputSignalReceiver *value,MethodInfo *method)

{
  (this->fields)._InputSignalReceiver_k__BackingField = value;
  func_?(&(this->fields)._InputSignalReceiver_k__BackingField,value);
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

