
/* Void ActivateLaserForDuration(Single) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               float duration,MethodInfo *method)

{
  pAVar1 = (this->fields).OnActivateLaserForDuration;
  if (pAVar1 != (Action_1_Single_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,duration,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void SetLaserActiveState(Boolean) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               bool isActive,MethodInfo *method)

{
  pAVar1 = (this->fields).OnLaserActiveChanged;
  if (pAVar1 != (Action_1_Boolean_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,_isActive,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void UpdatePosition(Vector3) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Vector3 to,MethodInfo *method)

{
  pAVar1 = (this->fields).OnUpdatePosition;
  if (pAVar1 != (Action_1_UnityEngine_Vector3_ *)0x0) {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,to._0_8_,to.z,(pAVar1->fields)._._.method);
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
    func_?(&TypeInfo__System__Action<float>);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnActivateLaserForDuration;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<float>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__Action<float>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_Single_ *)func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
  return;
}


/* Void add_OnChangeState(Action`1[LaserPointerState]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnChangeState
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_LaserPointerState_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<LaserPointerState>);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnChangeState;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<LaserPointerState>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__Action<LaserPointerState>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_LaserPointerState_ *)func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
  return;
}


/* Void add_OnCubeMaterialChanged(Action`1[Byte]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnCubeMaterialChanged
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_Byte__1 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<unsigned_char>);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnCubeMaterialChanged;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<unsigned_char>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__Action<unsigned_char>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_Byte__1 *)func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
  return;
}


/* Void add_OnLaserActiveChanged(Action`1[Boolean]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnLaserActiveChanged
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_Boolean_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnLaserActiveChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<bool>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<bool>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Boolean_ *)func_?(&this->fields,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
  return;
}


/* Void add_OnUpdatePosition(Action`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnUpdatePosition
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_UnityEngine_Vector3_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnUpdatePosition;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<UnityEngine::Vector3>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__Action<UnityEngine::Vector3>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_UnityEngine_Vector3_ *)func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
  return;
}


/* Void remove_OnActivateLaserForDuration(Action`1[Single]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_remove_OnActivateLaserForDuration
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_Single_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<float>);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnActivateLaserForDuration;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<float>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__Action<float>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_Single_ *)func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
  return;
}


/* Void remove_OnChangeState(Action`1[LaserPointerState]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_remove_OnChangeState
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_LaserPointerState_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<LaserPointerState>);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnChangeState;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<LaserPointerState>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__Action<LaserPointerState>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_LaserPointerState_ *)func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
  return;
}


/* Void remove_OnCubeMaterialChanged(Action`1[Byte]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_remove_OnCubeMaterialChanged
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_Byte__1 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<unsigned_char>);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnCubeMaterialChanged;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<unsigned_char>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__Action<unsigned_char>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_Byte__1 *)func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
  return;
}


/* Void remove_OnLaserActiveChanged(Action`1[Boolean]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_remove_OnLaserActiveChanged
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_Boolean_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnLaserActiveChanged;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<bool>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<bool>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_1_Boolean_ *)func_?(&this->fields,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}


/* Void remove_OnUpdatePosition(Action`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_remove_OnUpdatePosition
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_UnityEngine_Vector3_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnUpdatePosition;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<UnityEngine::Vector3>;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,TypeInfo__System__Action<UnityEngine::Vector3>);
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_UnityEngine_Vector3_ *)func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
  return;
}

