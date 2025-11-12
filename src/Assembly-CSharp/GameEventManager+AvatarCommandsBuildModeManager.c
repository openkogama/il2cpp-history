
/* Void EnterBuildStateEvent(EditorEvent, Object) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_EnterBuildStateEvent
               (GameEventManager_AvatarCommandsBuildModeManager *this,EditorEvent__Enum editorEvent,
               Object *eventData,MethodInfo *method)

{
  if ((this->fields).OnEnterBuildStateEvent != (Action_2_EditorEvent_Object_ *)0x0) {
    pAVar1 = (this->fields).OnEnterBuildStateEvent;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,editorEvent,eventData,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void ExitBuildStateEvent(EditorEvent, Object) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_ExitBuildStateEvent
               (GameEventManager_AvatarCommandsBuildModeManager *this,EditorEvent__Enum editorEvent,
               Object *eventData,MethodInfo *method)

{
  if ((this->fields).OnExitBuildStateEvent != (Action_2_EditorEvent_Object_ *)0x0) {
    pAVar1 = (this->fields).OnExitBuildStateEvent;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,editorEvent,eventData,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void SetSpawn(Vector3, Quaternion) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_SetSpawn
               (GameEventManager_AvatarCommandsBuildModeManager *this,Vector3 *position,
               Quaternion *rotation,MethodInfo *method)

{
  if ((this->fields).OnSetSpawn != (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)0x0) {
    pAVar1 = (this->fields).OnSetSpawn;
    fStack_2 = position->z;
    fStack_3 = rotation->x;
    fStack_4 = rotation->y;
    fStack_5 = rotation->z;
    fStack_6 = rotation->w;
    uStack_7._0_4_ = position->x;
    uStack_7._4_4_ = position->y;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,&uStack_7,&fStack_3,(pAVar1->fields)._._.method);
  }
  return;
}


/* GameEventManager+AvatarCommandsBuildModeManager() */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager__ctor
               (GameEventManager_AvatarCommandsBuildModeManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameEventManager_AvatarCommandsBuildModeManager__LaserCommandsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
           FUN_?(
                        TypeInfo__GameEventManager_AvatarCommandsBuildModeManager__LaserCommandsManager
                        );
  bVar2 = iRam_? != 0;
  (this->fields).LaserCommands = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).LaserCommands >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void add_OnEnterBuildStateEvent(Action`2[EditorEvent,Object]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_add_OnEnterBuildStateEvent
               (GameEventManager_AvatarCommandsBuildModeManager *this,
               Action_2_EditorEvent_Object_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditorEvent,_System::Object>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = &this->fields;
  a = (this->fields).OnEnterBuildStateEvent;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<EditorEvent,_System::Object>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_2_EditorEvent_Object_ *)0x0;
    }
    else {
      pAVar4 = (Action_2_EditorEvent_Object_ *)
               FUN_?(pDVar2,TypeInfo__System__Action<EditorEvent,_System::Object>);
      if (pAVar4 == (Action_2_EditorEvent_Object_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = pGVar1->OnEnterBuildStateEvent;
    bVar7 = a == pAVar6;
    if (bVar7) {
      pGVar1->OnEnterBuildStateEvent = pAVar4;
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


/* Void add_OnExitBuildStateEvent(Action`2[EditorEvent,Object]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_add_OnExitBuildStateEvent
               (GameEventManager_AvatarCommandsBuildModeManager *this,
               Action_2_EditorEvent_Object_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditorEvent,_System::Object>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnExitBuildStateEvent;
  a = (this->fields).OnExitBuildStateEvent;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<EditorEvent,_System::Object>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_2_EditorEvent_Object_ *)0x0;
    }
    else {
      pAVar4 = (Action_2_EditorEvent_Object_ *)
               FUN_?(pDVar2,TypeInfo__System__Action<EditorEvent,_System::Object>);
      if (pAVar4 == (Action_2_EditorEvent_Object_ *)0x0) {
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


/* Void add_OnSetSpawn(Action`2[UnityEngine.Vector3,UnityEngine.Quaternion]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_add_OnSetSpawn
               (GameEventManager_AvatarCommandsBuildModeManager *this,
               Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSetSpawn;
  a = (this->fields).OnSetSpawn;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)0x0;
    }
    else {
      pAVar4 = (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)
               FUN_?(pDVar2,
                             TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>
                            );
      if (pAVar4 == (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)0x0) {
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


/* Void add_OnSetToEditMode(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_add_OnSetToEditMode
               (GameEventManager_AvatarCommandsBuildModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSetToEditMode;
  a = (this->fields).OnSetToEditMode;
  do {
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = (Action *)0x0;
    if (pAVar2 != (Action *)0x0) {
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar2;
      }
      if (pAVar3 == (Action *)0x0) {
        FUN_?(pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pAVar2 = *ppAVar1;
    bVar5 = a == pAVar2;
    if (bVar5) {
      *ppAVar1 = pAVar3;
      pAVar2 = a;
    }
    UNLOCK();
    pAVar3 = a;
    if (!bVar5) {
      pAVar3 = pAVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pAVar3 != a;
    a = pAVar3;
  } while (bVar5);
  return;
}


/* Void remove_OnEnterBuildStateEvent(Action`2[EditorEvent,Object]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_remove_OnEnterBuildStateEvent
               (GameEventManager_AvatarCommandsBuildModeManager *this,
               Action_2_EditorEvent_Object_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditorEvent,_System::Object>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = &this->fields;
  source = (this->fields).OnEnterBuildStateEvent;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<EditorEvent,_System::Object>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_2_EditorEvent_Object_ *)0x0;
    }
    else {
      pAVar4 = (Action_2_EditorEvent_Object_ *)
               FUN_?(pDVar2,TypeInfo__System__Action<EditorEvent,_System::Object>);
      if (pAVar4 == (Action_2_EditorEvent_Object_ *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = pGVar1->OnEnterBuildStateEvent;
    bVar7 = source == pAVar6;
    if (bVar7) {
      pGVar1->OnEnterBuildStateEvent = pAVar4;
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


/* Void remove_OnExitBuildStateEvent(Action`2[EditorEvent,Object]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_remove_OnExitBuildStateEvent
               (GameEventManager_AvatarCommandsBuildModeManager *this,
               Action_2_EditorEvent_Object_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditorEvent,_System::Object>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnExitBuildStateEvent;
  source = (this->fields).OnExitBuildStateEvent;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<EditorEvent,_System::Object>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_2_EditorEvent_Object_ *)0x0;
    }
    else {
      pAVar4 = (Action_2_EditorEvent_Object_ *)
               FUN_?(pDVar2,TypeInfo__System__Action<EditorEvent,_System::Object>);
      if (pAVar4 == (Action_2_EditorEvent_Object_ *)0x0) {
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


/* Void remove_OnSetSpawn(Action`2[UnityEngine.Vector3,UnityEngine.Quaternion]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_remove_OnSetSpawn
               (GameEventManager_AvatarCommandsBuildModeManager *this,
               Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSetSpawn;
  source = (this->fields).OnSetSpawn;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)0x0;
    }
    else {
      pAVar4 = (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)
               FUN_?(pDVar2,
                             TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>
                            );
      if (pAVar4 == (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)0x0) {
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


/* Void remove_OnSetToEditMode(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_remove_OnSetToEditMode
               (GameEventManager_AvatarCommandsBuildModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSetToEditMode;
  source = (this->fields).OnSetToEditMode;
  do {
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = (Action *)0x0;
    if (pAVar2 != (Action *)0x0) {
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar2;
      }
      if (pAVar3 == (Action *)0x0) {
        FUN_?(pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    pAVar2 = *ppAVar1;
    bVar5 = source == pAVar2;
    if (bVar5) {
      *ppAVar1 = pAVar3;
      pAVar2 = source;
    }
    UNLOCK();
    pAVar3 = source;
    if (!bVar5) {
      pAVar3 = pAVar2;
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    bVar5 = pAVar3 != source;
    source = pAVar3;
  } while (bVar5);
  return;
}

