
/* Void LockCursor() */

void Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_LockCursor
               (LockCursorManager3DMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState((MethodInfo *)0x0);
  if (CVar1 != CursorLockMode__Enum_Locked) {
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_lockState
              (CursorLockMode__Enum_Locked,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(0,(MethodInfo *)0x0);
    this_00 = (Action_1_UIPushOption_ *)(this->fields)._OnCursorLockChanged_k__BackingField;
    CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState((MethodInfo *)0x0)
    ;
    if (this_00 == (Action_1_UIPushOption_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,(uint)(CVar1 == CursorLockMode__Enum_Locked),
               MethodInfo__System__Action<bool>__Invoke_bool_);
  }
  return;
}


/* Void LockCursorWithoutCallback() */

void Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_LockCursorWithoutCallback
               (LockCursorManager3DMode *this,MethodInfo *method)

{
  CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState((MethodInfo *)0x0);
  if (CVar1 != CursorLockMode__Enum_Locked) {
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_lockState
              (CursorLockMode__Enum_Locked,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(0,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnApplicationFocus(Boolean) */

void Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_OnApplicationFocus
               (LockCursorManager3DMode *this,bool focus,MethodInfo *method)

{
  if (focus == 0) {
    LockCursorManager3DMode_UnlockCursor(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void UnlockCursor() */

void Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_UnlockCursor
               (LockCursorManager3DMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState((MethodInfo *)0x0);
  if (CVar1 == CursorLockMode__Enum_Locked) {
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_lockState
              (CursorLockMode__Enum_None,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(1,(MethodInfo *)0x0);
    this_00 = (Action_1_UIPushOption_ *)(this->fields)._OnCursorLockChanged_k__BackingField;
    CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState((MethodInfo *)0x0)
    ;
    if (this_00 == (Action_1_UIPushOption_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,(uint)(CVar1 == CursorLockMode__Enum_Locked),
               MethodInfo__System__Action<bool>__Invoke_bool_);
  }
  return;
}


/* Void UnlockCursorWithoutCallback() */

void Assembly-CSharp.dll::LockCursorManager3DMode::
     LockCursorManager3DMode_UnlockCursorWithoutCallback
               (LockCursorManager3DMode *this,MethodInfo *method)

{
  CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState((MethodInfo *)0x0);
  if (CVar1 == CursorLockMode__Enum_Locked) {
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_lockState
              (CursorLockMode__Enum_None,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(1,(MethodInfo *)0x0);
  }
  return;
}


/* LockCursorManager3DMode() */

void Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode__ctor
               (LockCursorManager3DMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_CursorLock() */

bool Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_get_CursorLock
               (LockCursorManager3DMode *this,MethodInfo *method)

{
  CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState((MethodInfo *)0x0);
  return CVar1 == CursorLockMode__Enum_Locked;
}


/* Void set_CursorLock(Boolean) */

void Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_set_CursorLock
               (LockCursorManager3DMode *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  arg1 = (Object *)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_Cursor_locked__,arg1,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0);
  if (value == 0) {
    LockCursorManager3DMode_UnlockCursor((LockCursorManager3DMode *)0x0,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState((MethodInfo *)0x0)
    ;
    if (CVar1 != CursorLockMode__Enum_Locked) {
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_lockState
                (CursorLockMode__Enum_Locked,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(0,(MethodInfo *)0x0);
      this_00 = pARam0000000c;
      CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState
                        ((MethodInfo *)0x0);
      if (this_00 != (Action_1_UIPushOption_ *)0x0) {
        mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
                  (this_00,(uint)(CVar1 == CursorLockMode__Enum_Locked),
                   MethodInfo__System__Action<bool>__Invoke_bool_);
        return;
      }
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void set_CursorLockWithoutCallback(Boolean) */

void Assembly-CSharp.dll::LockCursorManager3DMode::
     LockCursorManager3DMode_set_CursorLockWithoutCallback
               (LockCursorManager3DMode *this,bool value,MethodInfo *method)

{
  CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState((MethodInfo *)0x0);
  if (value == 0) {
    if (CVar1 == CursorLockMode__Enum_Locked) {
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_lockState
                (CursorLockMode__Enum_None,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(1,(MethodInfo *)0x0);
      return;
    }
  }
  else if (CVar1 != CursorLockMode__Enum_Locked) {
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_lockState
              (CursorLockMode__Enum_Locked,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(0,(MethodInfo *)0x0);
  }
  return;
}


/* Void set_OnCursorLockChanged(Action`1[Boolean]) */

void Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
               (LockCursorManager3DMode *this,Action_1_Boolean_ *value,MethodInfo *method)

{
  (this->fields)._OnCursorLockChanged_k__BackingField = value;
  return;
}

