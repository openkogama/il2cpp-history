
/* Void EnterBuildStateEvent(EditorEvent, Object) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_EnterBuildStateEvent
               (GameEventManager_AvatarCommandsBuildModeManager *this,EditorEvent__Enum editorEvent,
               Object *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_2_Int32_Object_ *)(this->fields).OnEnterBuildStateEvent;
  if (this_00 != (Action_2_Int32_Object_ *)0x0) {
    System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
              (this_00,editorEvent,eventData,
               MethodInfo__System__Action<EditorEvent,_System::Object>__Invoke_EditorEvent__System__Object_
              );
  }
  return;
}


/* Void ExitBuildStateEvent(EditorEvent, Object) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_ExitBuildStateEvent
               (GameEventManager_AvatarCommandsBuildModeManager *this,EditorEvent__Enum editorEvent,
               Object *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_2_Int32_Object_ *)(this->fields).OnExitBuildStateEvent;
  if (this_00 != (Action_2_Int32_Object_ *)0x0) {
    System.Core.dll::System::Action`2[Int32,Object]::Action_2_Int32_Object__Invoke
              (this_00,editorEvent,eventData,
               MethodInfo__System__Action<EditorEvent,_System::Object>__Invoke_EditorEvent__System__Object_
              );
  }
  return;
}


/* Void SetSpawn(Vector3, Quaternion) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_SetSpawn
               (GameEventManager_AvatarCommandsBuildModeManager *this,Vector3 position,
               Quaternion rotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).OnSetSpawn;
  if (this_00 != (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)0x0) {
    System.Core.dll::System::Action`2[UnityEngine::Vector3,UnityEngine::Quaternion]::
    Action_2_UnityEngine_Vector3_UnityEngine_Quaternion__Invoke
              (this_00,position,rotation,
               MethodInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>__Invoke_UnityEngine__Vector3__UnityEngine__Quaternion_
              );
  }
  return;
}


/* GameEventManager+AvatarCommandsBuildModeManager() */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager__ctor
               (GameEventManager_AvatarCommandsBuildModeManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__GameEventManager_AvatarCommandsBuildModeManager__LaserCommandsManager;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  (this->fields).LaserCommands =
       (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)this_00;
  return;
}


/* Void add_OnEnterBuildStateEvent(Action`2[EditorEvent,Object]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_add_OnEnterBuildStateEvent
               (GameEventManager_AvatarCommandsBuildModeManager *this,
               Action_2_EditorEvent_Object_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  a = (this->fields).OnEnterBuildStateEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action_2_EditorEvent_Object___Class *)pDVar1->klass ==
          TypeInfo__System__Action<EditorEvent,_System::Object>) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action<EditorEvent,_System::Object>);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pAVar4 = (Action_2_EditorEvent_Object_ *)func_?(&this->fields,pDVar2,a);
    bVar5 = pAVar4 == a;
    a = pAVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void add_OnExitBuildStateEvent(Action`2[EditorEvent,Object]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_add_OnExitBuildStateEvent
               (GameEventManager_AvatarCommandsBuildModeManager *this,
               Action_2_EditorEvent_Object_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnExitBuildStateEvent;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_2_EditorEvent_Object___Class *)pDVar2->klass ==
          TypeInfo__System__Action<EditorEvent,_System::Object>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<EditorEvent,_System::Object>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_2_EditorEvent_Object_ *)func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnSetSpawn(Action`2[UnityEngine.Vector3,UnityEngine.Quaternion]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_add_OnSetSpawn
               (GameEventManager_AvatarCommandsBuildModeManager *this,
               Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSetSpawn;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_2_UnityEngine_Vector3_UnityEngine_Quaternion___Class *)pDVar2->klass ==
          TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)
             func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void add_OnSetToEditMode(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_add_OnSetToEditMode
               (GameEventManager_AvatarCommandsBuildModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSetToEditMode;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action *)func_?(ppAVar1,pDVar3,a);
    bVar6 = pAVar5 == a;
    a = pAVar5;
    if (bVar6) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = (this->fields).OnEnterBuildStateEvent;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((Action_2_EditorEvent_Object___Class *)pDVar1->klass ==
          TypeInfo__System__Action<EditorEvent,_System::Object>) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__System__Action<EditorEvent,_System::Object>);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pAVar4 = (Action_2_EditorEvent_Object_ *)func_?(&this->fields,pDVar2,source);
    bVar5 = pAVar4 == source;
    source = pAVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_OnExitBuildStateEvent(Action`2[EditorEvent,Object]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_remove_OnExitBuildStateEvent
               (GameEventManager_AvatarCommandsBuildModeManager *this,
               Action_2_EditorEvent_Object_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnExitBuildStateEvent;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_2_EditorEvent_Object___Class *)pDVar2->klass ==
          TypeInfo__System__Action<EditorEvent,_System::Object>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action<EditorEvent,_System::Object>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_2_EditorEvent_Object_ *)func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnSetSpawn(Action`2[UnityEngine.Vector3,UnityEngine.Quaternion]) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_remove_OnSetSpawn
               (GameEventManager_AvatarCommandsBuildModeManager *this,
               Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSetSpawn;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action_2_UnityEngine_Vector3_UnityEngine_Quaternion___Class *)pDVar2->klass ==
          TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,
                        TypeInfo__System__Action<UnityEngine::Vector3,_UnityEngine::Quaternion>);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action_2_UnityEngine_Vector3_UnityEngine_Quaternion_ *)
             func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void remove_OnSetToEditMode(Action) */

void Assembly-CSharp.dll::GameEventManager+AvatarCommandsBuildModeManager::
     GameEventManager_AvatarCommandsBuildModeManager_remove_OnSetToEditMode
               (GameEventManager_AvatarCommandsBuildModeManager *this,Action *value,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnSetToEditMode;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((Action__Class *)pDVar2->klass == TypeInfo__System__Action) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__System__Action);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pAVar5 = (Action *)func_?(ppAVar1,pDVar3,source);
    bVar6 = pAVar5 == source;
    source = pAVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}

