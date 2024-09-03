
/* Void EnterBuildStateEvent(EditorEvent, Object) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_EnterBuildStateEvent
               (GameEventManager_AvatarCommandsBuildModeManager *this,EditorEvent__Enum editorEvent,
               Object *eventData,MethodInfo *method)

{
  if ((this->fields).OnEnterBuildStateEvent != (Action_2_EditorEvent_Object_ *)0x0) {
    pAVar1 = (this->fields).OnEnterBuildStateEvent;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,editorEvent,eventData,(pAVar1->fields)._._.method);
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
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,editorEvent,eventData,(pAVar1->fields)._._.method);
  }
  return;
}


/* Void SetSpawn(Vector3, Quaternion) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_SetSpawn
               (GameEventManager_AvatarCommandsBuildModeManager *this,Vector3 position,
               Quaternion rotation,MethodInfo *method)

{
  if ((this->fields).OnSetSpawn != (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)0x0) {
    pAVar1 = (this->fields).OnSetSpawn;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,position._0_8_,position.z,rotation.x,rotation.y,
               rotation.z,rotation.w,(pAVar1->fields)._._.method);
  }
  return;
}


/* GameEventManager+AvatarCommandsBuildModeManager() */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager__ctor
               (GameEventManager_AvatarCommandsBuildModeManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GameEventManager_AvatarCommandsBuildModeManager__LaserCommandsManager
                   );
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__GameEventManager_AvatarCommandsBuildModeManager__LaserCommandsManager;
  value = (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
  method_00 = (MethodInfo *)&(this->fields).LaserCommands;
  (this->fields).LaserCommands = value;
  func_?(method_00,value);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Void add_OnEnterBuildStateEvent(Action`2[EditorEvent,Object]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_add_OnEnterBuildStateEvent
               (GameEventManager_AvatarCommandsBuildModeManager *this,
               Action_2_EditorEvent_Object_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditorEvent,_System::Object>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnEnterBuildStateEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<EditorEvent,_System::Object>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<EditorEvent,_System::Object>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_2_EditorEvent_Object_ *)func_?(&this->fields,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
  return;
}


/* Void add_OnExitBuildStateEvent(Action`2[EditorEvent,Object]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_add_OnExitBuildStateEvent
               (GameEventManager_AvatarCommandsBuildModeManager *this,
               Action_2_EditorEvent_Object_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditorEvent,_System::Object>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnExitBuildStateEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<EditorEvent,_System::Object>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<EditorEvent,_System::Object>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_2_EditorEvent_Object_ *)
             func_?(&(this->fields).OnExitBuildStateEvent,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
  return;
}


/* Void add_OnSetSpawn(Action`2[UnityEngine.Vector3,UnityEngine.Quaternion]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_add_OnSetSpawn
               (GameEventManager_AvatarCommandsBuildModeManager *this,
               Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>);
    cRam_? = '\x01';
  }
  a = (this->fields).OnSetSpawn;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,
                              TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>
                             );
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)
             func_?(&(this->fields).OnSetSpawn,iVar3,a);
    bVar6 = pAVar5 != a;
    a = pAVar5;
  } while (bVar6);
  return;
}


/* Void add_OnSetToEditMode(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_add_OnSetToEditMode
               (GameEventManager_AvatarCommandsBuildModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  a = (this->fields).OnSetToEditMode;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar1->klass == TypeInfo__System__Action) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pAVar4 = (Action *)func_?(&(this->fields).OnSetToEditMode,pDVar2,a);
    bVar5 = pAVar4 == a;
    a = pAVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_OnEnterBuildStateEvent(Action`2[EditorEvent,Object]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_remove_OnEnterBuildStateEvent
               (GameEventManager_AvatarCommandsBuildModeManager *this,
               Action_2_EditorEvent_Object_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditorEvent,_System::Object>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnEnterBuildStateEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<EditorEvent,_System::Object>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<EditorEvent,_System::Object>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_2_EditorEvent_Object_ *)func_?(&this->fields,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}


/* Void remove_OnExitBuildStateEvent(Action`2[EditorEvent,Object]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_remove_OnExitBuildStateEvent
               (GameEventManager_AvatarCommandsBuildModeManager *this,
               Action_2_EditorEvent_Object_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<EditorEvent,_System::Object>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnExitBuildStateEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<EditorEvent,_System::Object>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,TypeInfo__System__Action<EditorEvent,_System::Object>);
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_2_EditorEvent_Object_ *)
             func_?(&(this->fields).OnExitBuildStateEvent,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}


/* Void remove_OnSetSpawn(Action`2[UnityEngine.Vector3,UnityEngine.Quaternion]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_remove_OnSetSpawn
               (GameEventManager_AvatarCommandsBuildModeManager *this,
               Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>);
    cRam_? = '\x01';
  }
  source = (this->fields).OnSetSpawn;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar2 = TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>;
    iVar3 = 0;
    if (pDVar1 != (Delegate *)0x0) {
      iVar3 = func_?(pDVar1,
                              TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>
                             );
      if (iVar3 == 0) {
        func_?(pDVar1,pAVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)
             func_?(&(this->fields).OnSetSpawn,iVar3,source);
    bVar6 = pAVar5 != source;
    source = pAVar5;
  } while (bVar6);
  return;
}


/* Void remove_OnSetToEditMode(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_remove_OnSetToEditMode
               (GameEventManager_AvatarCommandsBuildModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    cRam_? = '\x01';
  }
  source = (this->fields).OnSetToEditMode;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar1->klass == TypeInfo__System__Action) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pAVar4 = (Action *)func_?(&(this->fields).OnSetToEditMode,pDVar2,source);
    bVar5 = pAVar4 == source;
    source = pAVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}

