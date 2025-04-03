
/* Void FixedUpdate(IInputToPlayerMovement) */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_FixedUpdate
               (MVAvatarLocal_AvatarLocalModes *this,IInputToPlayerMovement *movementMap,
               MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMStack_2 = (this->fields).currentMode;
  if (pMStack_2 != (MVAvatarLocal_AvatarMode *)0x0) {
    pIStack_1 = (pMStack_2->klass->vtable).__unknown_2.methodPtr;
    pIStack_3 = movementMap;
    (*(code *)(pMStack_2->klass->vtable).__unknown_1.method)();
    return;
  }
  uVar4 = func_?(&pMStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* AvatarRuntimeState GetStartState() */

AvatarRuntimeState__Enum
Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_GetStartState
          (MVAvatarLocal_AvatarLocalModes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
      (IPlayModeUI *)0x0) {
    puStack_1 = (undefined *)0x3;
    pMVar2 = (MVNetworkGameStateListener *)func_?();
    if ((char)pMVar2 == '\0') {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 == (MVNetworkGame *)0x0) ||
         (pMVar2 = (pMVar3->fields)._NetworkGameStateListener_k__BackingField,
         pMVar2 == (MVNetworkGameStateListener *)0x0)) goto code_?;
      if ((pMVar2->fields).currentGameState != 2) {
        return CONCAT31((int3)((uint)pMVar2 >> 8),1);
      }
    }
    return (uint)pMVar2 & 0xffffff00;
  }
code_?:
  uVar4 = func_?(&puStack_1);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  AVar6 = (*pcVar5)();
  return AVar6;
}


/* Boolean HasDied() */

bool Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_HasDied
               (MVAvatarLocal_AvatarLocalModes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal__DeadMode);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarModes;
  if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
    unaff_ESI = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
                Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                          ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,4,
                           MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                          );
    if (unaff_ESI != (Object *)0x0) {
      pOVar1 = unaff_ESI->klass;
      bVar2 = (TypeInfo__MVAvatarLocal__DeadMode->_1).naturalAligment;
      if ((bVar2 <= (pOVar1->_1).naturalAligment) &&
         ((pOVar1->_1).typeHierarchy[bVar2 - 1] == (Il2CppClass *)TypeInfo__MVAvatarLocal__DeadMode)
         ) {
        bVar2 = (TypeInfo__MVAvatarLocal__DeadMode->_1).naturalAligment;
        pMVar3 = TypeInfo__MVAvatarLocal__DeadMode;
        if (((pOVar1->_1).naturalAligment < bVar2) ||
           ((pOVar1->_1).typeHierarchy[bVar2 - 1] !=
            (Il2CppClass *)TypeInfo__MVAvatarLocal__DeadMode)) goto code_?;
        if ((float)unaff_ESI[2].klass != _UNK_?) {
          return 1;
        }
      }
    }
    return 0;
  }
  func_?();
  pMVar3 = extraout_EDX;
code_?:
  func_?(unaff_ESI,pMVar3);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void SetMode(AvatarRuntimeState) */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes_SetMode
               (MVAvatarLocal_AvatarLocalModes *this,AvatarRuntimeState__Enum mode,
               MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                   );
    cRam_? = '\x01';
  }
  pMVar2 = (this->fields).currentMode;
  ppMVar3 = &(this->fields).currentMode;
  this = (MVAvatarLocal_AvatarLocalModes *)(uint)(this->fields).currentState;
  if (pMVar2 != (MVAvatarLocal_AvatarMode *)0x0) {
    (*(code *)(pMVar2->klass->vtable).__unknown.method)
              (pMVar2,mode,(pMVar2->klass->vtable).__unknown_1.methodPtr);
    this_00 = (pMVar1->fields).avatarModes;
    if (this_00 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
      pMVar2 = (MVAvatarLocal_AvatarMode *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)this_00,mode,
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                         );
      *ppMVar3 = pMVar2;
      func_?(ppMVar3,pMVar2);
      pMVar2 = *ppMVar3;
      (pMVar1->fields).currentState = (uint8_t)mode;
      if (pMVar2 != (MVAvatarLocal_AvatarMode *)0x0) {
        (*(code *)(pMVar2->klass->vtable).Activate.method)(pMVar2,this,pMVar2->klass[1]._0.image);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetToStartMode() */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::
     MVAvatarLocal_AvatarLocalModes_SetToStartMode
               (MVAvatarLocal_AvatarLocalModes *this,MethodInfo *method)

{
  AVar1 = MVAvatarLocal_AvatarLocalModes_GetStartState(this,(MethodInfo *)0x0);
  uStack_2 = CONCAT31((int3)((uint)in_ECX >> 8),(char)AVar1);
  MVAvatarLocal_AvatarLocalModes_SetMode(this,uStack_2,(MethodInfo *)0x0);
  return;
}


/* MVAvatarLocal+AvatarLocalModes(MVAvatarLocal) */

void Assembly-CSharp.dll::MVAvatarLocal+AvatarLocalModes::MVAvatarLocal_AvatarLocalModes__ctor
               (MVAvatarLocal_AvatarLocalModes *this,MVAvatarLocal *avatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVAvatarLocal__DeadMode);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>
                   );
    func_?(&TypeInfo__MVAvatarLocal__GhostMode);
    func_?(&TypeInfo__MVAvatarLocal__LobbyMode);
    func_?(&TypeInfo__MVAvatarLocal__ReviveMode);
    func_?(&TypeInfo__MVAvatarLocal__ReviveWaitMode);
    func_?(&TypeInfo__MVAvatarLocal__TimeAttackFlagDebriefingMode);
    func_?(&TypeInfo__MVAvatarLocal__WaitMode);
    func_?(&TypeInfo__MVAvatarLocal__WalkMode);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,MV::WorldObject::
  RuntimeEvents::ExplosionEvent+ExplosionValues]::
  Dictionary_2_System_ByteEnum_MV_WorldObject_RuntimeEvents_ExplosionEvent_ExplosionValues___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Dictionary__
            );
  pMVar1 = &this->fields;
  pMVar1->avatarModes = (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)this_00;
  method_04 = (MethodInfo *)pMVar1;
  func_?(pMVar1,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_04);
  pDVar2 = pMVar1->avatarModes;
  this_01 = (MVAvatarLocal_WalkMode *)func_?(TypeInfo__MVAvatarLocal__WalkMode);
  MVAvatarLocal+WalkMode::MVAvatarLocal_WalkMode__ctor(this_01,avatar,(MethodInfo *)0x0);
  if (pDVar2 == (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0)
  goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__Add
            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,1,(Object *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
            );
  pDVar2 = pMVar1->avatarModes;
  this_02 = (MVAvatarLocal_DeadMode *)func_?();
  MVAvatarLocal+DeadMode::MVAvatarLocal_DeadMode__ctor(this_02,avatar,(MethodInfo *)0x0);
  if (pDVar2 == (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0)
  goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__Add
            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,4,(Object *)this_02,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
            );
  pDVar2 = pMVar1->avatarModes;
  pOVar3 = (Object *)func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pOVar3[2].monitor = (MonitorData *)0x41200000;
  value = (Object *)func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar4 = TypeInfo__UnityEngine__Quaternion->static_fields;
  pMVar5 = (MonitorData *)(pQVar4->identityQuaternion).y;
  pOVar6 = (Object__Class *)(pQVar4->identityQuaternion).z;
  pMVar7 = (MonitorData *)(pQVar4->identityQuaternion).w;
  value[1].klass = (Object__Class *)(pQVar4->identityQuaternion).x;
  value[1].monitor = pMVar5;
  value[2].klass = pOVar6;
  value[2].monitor = pMVar7;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,in_stack_8);
  pOVar3[3].monitor = (MonitorData *)value;
  func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar3,ExceptionArgument__Enum_obj,(MethodInfo *)&pOVar3[3].monitor);
  pOVar3[1].klass = (Object__Class *)avatar;
  func_?();
  pOVar3[1].monitor = (MonitorData *)0x2;
  if (pDVar2 == (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0)
  goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__Add
            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,10,pOVar3,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
            );
  method_02 = TypeInfo__MVAvatarLocal__ReviveWaitMode;
  pDVar2 = pMVar1->avatarModes;
  pOVar3 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_02);
  pOVar3[1].klass = (Object__Class *)avatar;
  func_?(pOVar3 + 1);
  pOVar3[1].monitor = (MonitorData *)0x4;
  if (pDVar2 == (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0)
  goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__Add
            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,0xb,pOVar3,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
            );
  method_01 = TypeInfo__MVAvatarLocal__LobbyMode;
  pDVar2 = pMVar1->avatarModes;
  pOVar3 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  pOVar3[1].klass = (Object__Class *)avatar;
  func_?(pOVar3 + 1);
  pOVar3[1].monitor = (MonitorData *)0x4;
  if (pDVar2 == (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0)
  goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__Add
            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,0,pOVar3,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
            );
  pDVar2 = pMVar1->avatarModes;
  pOVar3 = (Object *)func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar4 = TypeInfo__UnityEngine__Quaternion->static_fields;
  pOVar6 = (Object__Class *)(pQVar4->identityQuaternion).y;
  pMVar5 = (MonitorData *)(pQVar4->identityQuaternion).z;
  pOVar9 = (Object__Class *)(pQVar4->identityQuaternion).w;
  pOVar3[3].monitor = (MonitorData *)(pQVar4->identityQuaternion).x;
  pOVar3[4].klass = pOVar6;
  pOVar3[4].monitor = pMVar5;
  pOVar3[5].klass = pOVar9;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar3,ExceptionArgument__Enum_obj,in_stack_8);
  pOVar3[1].klass = (Object__Class *)avatar;
  func_?();
  pOVar3[1].monitor = (MonitorData *)0x1;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  MVar10 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar10 == MVGameMode__Enum_CharacterEditor) {
code_?:
    pOVar6 = (Object__Class *)func_?();
    AvatarInputController::AvatarInputController__ctor
              ((AvatarInputController *)pOVar6,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0)
    goto code_?;
    pOVar6 = (Object__Class *)func_?();
    AvatarInputControllerTouch::AvatarInputControllerTouch__ctor
              ((AvatarInputControllerTouch *)pOVar6,(MethodInfo *)0x0);
  }
  pOVar3[2].klass = pOVar6;
  func_?();
  if (pDVar2 == (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0)
  goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__Add
            ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,7,pOVar3,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
            );
  method_03 = TypeInfo__MVAvatarLocal__WaitMode;
  pOVar3 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_03);
  pOVar3[1].klass = (Object__Class *)avatar;
  this_05 = (Dictionary_2_System_ByteEnum_System_Object_ *)&UNK_?;
  func_?(pOVar3 + 1);
  pOVar3[1].monitor = (MonitorData *)0x4;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  MVar10 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar10 == MVGameMode__Enum_CharacterEditor) {
code_?:
    pOVar6 = (Object__Class *)func_?();
    AvatarInputController::AvatarInputController__ctor
              ((AvatarInputController *)pOVar6,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0)
    goto code_?;
    pOVar6 = (Object__Class *)func_?();
    AvatarInputControllerTouch::AvatarInputControllerTouch__ctor
              ((AvatarInputControllerTouch *)pOVar6,(MethodInfo *)0x0);
  }
  pOVar3[2].klass = pOVar6;
  func_?();
  if (this_05 == (Dictionary_2_System_ByteEnum_System_Object_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
  Dictionary_2_System_ByteEnum_System_Object__Add
            (this_05,8,pOVar3,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
            );
  method_00 = TypeInfo__MVAvatarLocal__GhostMode;
  pDVar2 = pMVar1->avatarModes;
  pOVar3 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar3,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  pOVar3[1].klass = (Object__Class *)avatar;
  func_?(pOVar3 + 1);
  pOVar3[1].monitor = (MonitorData *)0x4;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  MVar10 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar10 == MVGameMode__Enum_CharacterEditor) {
code_?:
    this_04 = (AvatarInputController *)func_?();
    AvatarInputController::AvatarInputController__ctor(this_04,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0)
    goto code_?;
    this_03 = (AvatarInputControllerTouch *)func_?();
    AvatarInputControllerTouch::AvatarInputControllerTouch__ctor(this_03,(MethodInfo *)0x0);
  }
  if (pDVar2 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::Object]::
    Dictionary_2_System_ByteEnum_System_Object__Add
              ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,9,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__Add_AvatarRuntimeState__MVAvatarLocal__AvatarMode_
              );
    key = MVAvatarLocal_AvatarLocalModes_GetStartState
                    ((MVAvatarLocal_AvatarLocalModes *)method_00,(MethodInfo *)0x0);
    pDVar2 = pMVar1->avatarModes;
    *(char *)&(method_00->_0).byval_arg.data = (char)key;
    if (pDVar2 != (Dictionary_2_AvatarRuntimeState_MVAvatarLocal_AvatarMode_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::ByteEnum,System::
               Object]::Dictionary_2_System_ByteEnum_System_Object__get_Item
                         ((Dictionary_2_System_ByteEnum_System_Object_ *)pDVar2,key,
                          MethodInfo__System__Collections__Generic__Dictionary<AvatarRuntimeState,_MVAvatarLocal::AvatarMode>__get_Item_AvatarRuntimeState_
                         );
      (method_00->_0).namespaze = (char *)pOVar3;
      func_?();
      return;
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

