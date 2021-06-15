
/* Void ActivateLaserForDuration(Single) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)
            (this->fields).OnActivateLaserForDuration;
  if (this_00 != (SpawnRoleVariable_1_T_SubDelegate_System_Single_ *)0x0) {
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Single]::
    SpawnRoleVariable_1_T_SubDelegate_System_Single__Invoke
              (this_00,duration,MethodInfo__System__Action<float>__Invoke_float_);
  }
  return;
}


/* Void ChangeState(LaserPointerState) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               LaserPointerState__Enum newState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).OnChangeState;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,newState,
               MethodInfo__System__Action<LaserPointerState>__Invoke_LaserPointerState_);
  }
  return;
}


/* Void SetCurrentCubeMaterial(Byte) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetCurrentCubeMaterial
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               uint8_t cubeMaterial,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).OnCubeMaterialChanged;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,_cubeMaterial,
               MethodInfo__System__Action<unsigned_char>__Invoke_unsigned_char_);
  }
  return;
}


/* Void SetLaserActiveState(Boolean) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               bool isActive,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields).OnLaserActiveChanged;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,_isActive,MethodInfo__System__Action<bool>__Invoke_bool_);
  }
  return;
}


/* Void UpdatePosition(Vector3) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Vector3 to,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)
            (this->fields).OnUpdatePosition;
  if (this_00 != (Action_1_UnityEngine_UnitySynchronizationContext_WorkRequest_ *)0x0) {
    mscorlib.dll::System::Action`1[UnityEngine::UnitySynchronizationContext+WorkRequest]::
    Action_1_UnityEngine_UnitySynchronizationContext_WorkRequest__Invoke
              (this_00,(UnitySynchronizationContext_WorkRequest)to,
               MethodInfo__System__Action<UnityEngine::Vector3>__Invoke_UnityEngine__Vector3_);
  }
  return;
}


/* Void add_OnActivateLaserForDuration(Action`1[Single]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnActivateLaserForDuration
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_Single_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnActivateLaserForDuration;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_Single___Class *)pDVar2->klass == TypeInfo__System__Action<float>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<float>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Single_ *)func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnChangeState(Action`1[LaserPointerState]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnChangeState
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_LaserPointerState_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnChangeState;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_LaserPointerState___Class *)pDVar2->klass ==
          TypeInfo__System__Action<LaserPointerState>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<LaserPointerState>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_LaserPointerState_ *)func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnCubeMaterialChanged(Action`1[Byte]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnCubeMaterialChanged
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_Byte__1 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnCubeMaterialChanged;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_Byte__1__Class *)pDVar2->klass == TypeInfo__System__Action<unsigned_char>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<unsigned_char>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Byte__1 *)func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnLaserActiveChanged(Action`1[Boolean]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnLaserActiveChanged
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_Boolean_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  a = (this->fields).OnLaserActiveChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action_1_Boolean___Class *)pDVar1->klass == TypeInfo__System__Action<bool>) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action<bool>);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pAVar4 = (Action_1_Boolean_ *)func_?(&this->fields,pDVar2,a);
    bVar5 = pAVar4 == a;
    a = pAVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void add_OnUpdatePosition(Action`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnUpdatePosition
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_UnityEngine_Vector3_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnUpdatePosition;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_UnityEngine_Vector3___Class *)pDVar2->klass ==
          TypeInfo__System__Action<UnityEngine::Vector3>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<UnityEngine::Vector3>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_UnityEngine_Vector3_ *)func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnActivateLaserForDuration(Action`1[Single]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_remove_OnActivateLaserForDuration
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_Single_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnActivateLaserForDuration;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_Single___Class *)pDVar2->klass == TypeInfo__System__Action<float>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<float>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Single_ *)func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnChangeState(Action`1[LaserPointerState]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_remove_OnChangeState
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_LaserPointerState_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnChangeState;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_LaserPointerState___Class *)pDVar2->klass ==
          TypeInfo__System__Action<LaserPointerState>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<LaserPointerState>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_LaserPointerState_ *)func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnCubeMaterialChanged(Action`1[Byte]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_remove_OnCubeMaterialChanged
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_Byte__1 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnCubeMaterialChanged;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_Byte__1__Class *)pDVar2->klass == TypeInfo__System__Action<unsigned_char>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<unsigned_char>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Byte__1 *)func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnLaserActiveChanged(Action`1[Boolean]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_remove_OnLaserActiveChanged
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_Boolean_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = (this->fields).OnLaserActiveChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action_1_Boolean___Class *)pDVar1->klass == TypeInfo__System__Action<bool>) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action<bool>);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pAVar4 = (Action_1_Boolean_ *)func_?(&this->fields,pDVar2,source);
    bVar5 = pAVar4 == source;
    source = pAVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_OnUpdatePosition(Action`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_remove_OnUpdatePosition
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_UnityEngine_Vector3_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnUpdatePosition;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_1_UnityEngine_Vector3___Class *)pDVar2->klass ==
          TypeInfo__System__Action<UnityEngine::Vector3>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<UnityEngine::Vector3>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_UnityEngine_Vector3_ *)func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

