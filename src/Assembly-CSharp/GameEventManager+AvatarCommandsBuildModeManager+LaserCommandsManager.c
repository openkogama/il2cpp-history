
/* Void ActivateLaserForDuration(Single) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               float duration,MethodInfo *method)

{
  pAVar1 = (this->fields).OnActivateLaserForDuration;
  if (pAVar1 != (Action_1_Single_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,duration,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void ChangeState(LaserPointerState) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               LaserPointerState__Enum newState,MethodInfo *method)

{
  pAVar1 = (this->fields).OnChangeState;
  if (pAVar1 != (Action_1_LaserPointerState_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,newState,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void SetCurrentCubeMaterial(Byte) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetCurrentCubeMaterial
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               uint8_t cubeMaterial,MethodInfo *method)

{
  pAVar1 = (this->fields).OnCubeMaterialChanged;
  if (pAVar1 != (Action_1_Byte__1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,cubeMaterial,(pAVar1->fields)._._.method);
    return;
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,isActive,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void UpdatePosition(Vector3) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Vector3 *to,MethodInfo *method)

{
  pAVar1 = (this->fields).OnUpdatePosition;
  if (pAVar1 != (Action_1_UnityEngine_Vector3_ *)0x0) {
    fStack_2 = to->z;
    uStack_3._0_4_ = to->x;
    uStack_3._4_4_ = to->y;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,&uStack_3,(pAVar1->fields)._._.method);
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
    FUN_?(&TypeInfo__System__Action<float>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnActivateLaserForDuration;
  a = (this->fields).OnActivateLaserForDuration;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<float>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_Single_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_Single_ *)FUN_?(pDVar2,TypeInfo__System__Action<float>);
      if (pAVar4 == (Action_1_Single_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
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
    FUN_?(&TypeInfo__System__Action<LaserPointerState>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnChangeState;
  a = (this->fields).OnChangeState;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<LaserPointerState>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_LaserPointerState_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_LaserPointerState_ *)
               FUN_?(pDVar2,TypeInfo__System__Action<LaserPointerState>);
      if (pAVar4 == (Action_1_LaserPointerState_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
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
    FUN_?(&TypeInfo__System__Action<unsigned_char>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnCubeMaterialChanged;
  a = (this->fields).OnCubeMaterialChanged;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<unsigned_char>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_Byte__1 *)0x0;
    }
    else {
      pAVar4 = (Action_1_Byte__1 *)FUN_?(pDVar2,TypeInfo__System__Action<unsigned_char>);
      if (pAVar4 == (Action_1_Byte__1 *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
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
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = &this->fields;
  a = (this->fields).OnLaserActiveChanged;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<bool>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_Boolean_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_Boolean_ *)FUN_?(pDVar2,TypeInfo__System__Action<bool>);
      if (pAVar4 == (Action_1_Boolean_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = pGVar1->OnLaserActiveChanged;
    bVar7 = a == pAVar6;
    if (bVar7) {
      pGVar1->OnLaserActiveChanged = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)pGVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
  } while (bVar7);
  return;
}


/* Void add_OnUpdatePosition(Action`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_add_OnUpdatePosition
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_UnityEngine_Vector3_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnUpdatePosition;
  a = (this->fields).OnUpdatePosition;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<UnityEngine::Vector3>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_UnityEngine_Vector3_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_UnityEngine_Vector3_ *)
               FUN_?(pDVar2,TypeInfo__System__Action<UnityEngine::Vector3>);
      if (pAVar4 == (Action_1_UnityEngine_Vector3_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
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
    FUN_?(&TypeInfo__System__Action<float>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnActivateLaserForDuration;
  source = (this->fields).OnActivateLaserForDuration;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<float>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_Single_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_Single_ *)FUN_?(pDVar2,TypeInfo__System__Action<float>);
      if (pAVar4 == (Action_1_Single_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
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
    FUN_?(&TypeInfo__System__Action<LaserPointerState>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnChangeState;
  source = (this->fields).OnChangeState;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<LaserPointerState>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_LaserPointerState_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_LaserPointerState_ *)
               FUN_?(pDVar2,TypeInfo__System__Action<LaserPointerState>);
      if (pAVar4 == (Action_1_LaserPointerState_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
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
    FUN_?(&TypeInfo__System__Action<unsigned_char>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnCubeMaterialChanged;
  source = (this->fields).OnCubeMaterialChanged;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<unsigned_char>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_Byte__1 *)0x0;
    }
    else {
      pAVar4 = (Action_1_Byte__1 *)FUN_?(pDVar2,TypeInfo__System__Action<unsigned_char>);
      if (pAVar4 == (Action_1_Byte__1 *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
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
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = &this->fields;
  source = (this->fields).OnLaserActiveChanged;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<bool>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_Boolean_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_Boolean_ *)FUN_?(pDVar2,TypeInfo__System__Action<bool>);
      if (pAVar4 == (Action_1_Boolean_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = pGVar1->OnLaserActiveChanged;
    bVar7 = source == pAVar6;
    if (bVar7) {
      pGVar1->OnLaserActiveChanged = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)pGVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}


/* Void remove_OnUpdatePosition(Action`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
     GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_remove_OnUpdatePosition
               (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *this,
               Action_1_UnityEngine_Vector3_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnUpdatePosition;
  source = (this->fields).OnUpdatePosition;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<UnityEngine::Vector3>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_UnityEngine_Vector3_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_UnityEngine_Vector3_ *)
               FUN_?(pDVar2,TypeInfo__System__Action<UnityEngine::Vector3>);
      if (pAVar4 == (Action_1_UnityEngine_Vector3_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}

