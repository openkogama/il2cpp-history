
/* Void LockCursor() */

void Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_LockCursor
               (LockCursorManager3DMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&StringLiteral_Really_trying_to_lock_cursor);
    cRam_? = '\x01';
  }
  CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_get_lockState((MethodInfo *)0x0)
  ;
  if (CVar1 != CursorLockMode__Enum_Locked) {
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_lockState
              (CursorLockMode__Enum_Locked,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
        (IPlayModeUI *)0x0) {
      func_?();
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    func_?();
  }
  return;
}


/* Void LockCursorWithoutCallback() */

void Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_LockCursorWithoutCallback
               (LockCursorManager3DMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Really_trying_to_lock_cursor2);
    cRam_? = '\x01';
  }
  CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_get_lockState((MethodInfo *)0x0)
  ;
  if (CVar1 != CursorLockMode__Enum_Locked) {
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_lockState
              (CursorLockMode__Enum_Locked,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(0,(MethodInfo *)0x0);
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
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&StringLiteral_Really_trying_to_unlock_cursor);
    cRam_? = '\x01';
  }
  CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_get_lockState((MethodInfo *)0x0)
  ;
  if (CVar1 == CursorLockMode__Enum_Locked) {
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_lockState
              (CursorLockMode__Enum_None,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
        (IPlayModeUI *)0x0) {
      func_?();
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    func_?();
  }
  return;
}


/* Void UnlockCursorWithoutCallback() */

void Assembly-CSharp.dll::LockCursorManager3DMode::
     LockCursorManager3DMode_UnlockCursorWithoutCallback
               (LockCursorManager3DMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Really_trying_to_unlock_cursor2);
    cRam_? = '\x01';
  }
  CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_get_lockState((MethodInfo *)0x0)
  ;
  if (CVar1 == CursorLockMode__Enum_Locked) {
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_lockState
              (CursorLockMode__Enum_None,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean get_CursorLock() */

bool Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_get_CursorLock
               (LockCursorManager3DMode *this,MethodInfo *method)

{
  CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_get_lockState((MethodInfo *)0x0)
  ;
  return CVar1 == CursorLockMode__Enum_Locked;
}


/* Void set_CursorLock(Boolean) */

void Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_set_CursorLock
               (LockCursorManager3DMode *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&StringLiteral_Cursor_locked__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Boolean);
  }
  str1 = mscorlib.dll::System::Boolean::Boolean_ToString((Boolean *)&value,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_3
            (StringLiteral_Cursor_locked__,str1,(MethodInfo *)0x0);
  if (value == 0) {
    method = (MethodInfo *)0x0;
    _value = (String **)this;
    LockCursorManager3DMode_UnlockCursor(this,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      method = (MethodInfo *)&TypeInfo__IPlayModeUI;
      _value = (String **)&UNK_?;
      func_?();
      _value = &StringLiteral_Really_trying_to_lock_cursor;
      func_?();
      cRam_? = '\x01';
    }
    method = (MethodInfo *)0x0;
    _value = (String **)&UNK_?;
    CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_get_lockState
                      ((MethodInfo *)0x0);
    if (CVar1 != CursorLockMode__Enum_Locked) {
      method = (MethodInfo *)0x1;
      _value = (String **)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_lockState
                (CursorLockMode__Enum_Locked,(MethodInfo *)0x0);
      method = (MethodInfo *)0x0;
      _value = (String **)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        ppMStack2 = &TypeInfo__MVGameControllerBase;
        in_stack_3 = (IPlayModeUI *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pIVar4 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      if (pIVar4 != (IPlayModeUI *)0x0) {
        ppMStack2 = (MVGameControllerBase__Class **)0x0;
        pIStack5 = TypeInfo__IPlayModeUI;
        puStack6 = (undefined1 *)0x8;
        in_stack_3 = pIVar4;
        func_?();
        return;
      }
      puStack6 = (undefined1 *)&stack0x00000018;
      ppMStack2 = (MVGameControllerBase__Class **)&stack0xfffffffc;
      puStack6 = (undefined1 *)func_?();
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
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
  if (value == 0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral_Really_trying_to_unlock_cursor2);
      cRam_? = '\x01';
    }
    CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_get_lockState
                      ((MethodInfo *)0x0);
    if (CVar1 == CursorLockMode__Enum_Locked) {
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_lockState
                (CursorLockMode__Enum_None,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&StringLiteral_Really_trying_to_lock_cursor2);
      cRam_? = '\x01';
    }
    CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_get_lockState
                      ((MethodInfo *)0x0);
    if (CVar1 != CursorLockMode__Enum_Locked) {
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_lockState
                (CursorLockMode__Enum_Locked,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(0,(MethodInfo *)0x0);
    }
  }
  return;
}

