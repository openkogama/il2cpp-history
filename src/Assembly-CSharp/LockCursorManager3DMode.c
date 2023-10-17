
/* Void LockCursor() */

void Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_LockCursor
               (LockCursorManager3DMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Really_trying_to_lock_cursor);
    cRam_? = '\x01';
  }
  CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState((MethodInfo *)0x0);
  if (CVar1 != CursorLockMode__Enum_Locked) {
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_lockState
              (CursorLockMode__Enum_Locked,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(0,(MethodInfo *)0x0);
    pAVar2 = (this->fields)._OnCursorLockChanged_k__BackingField;
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState((MethodInfo *)0x0);
    if (pAVar2 == (Action_1_Boolean_ *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puStack4 = (pAVar2->fields)._._.method;
    (*(pAVar2->fields)._._.invoke_impl)();
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
    func_?(&StringLiteral_Really_trying_to_unlock_cursor);
    cRam_? = '\x01';
  }
  CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState((MethodInfo *)0x0);
  if (CVar1 == CursorLockMode__Enum_Locked) {
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_lockState
              (CursorLockMode__Enum_None,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(1,(MethodInfo *)0x0);
    pAVar2 = (this->fields)._OnCursorLockChanged_k__BackingField;
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState((MethodInfo *)0x0);
    if (pAVar2 == (Action_1_Boolean_ *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puStack4 = (pAVar2->fields)._._.method;
    (*(pAVar2->fields)._._.invoke_impl)();
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
  CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState((MethodInfo *)0x0);
  if (CVar1 == CursorLockMode__Enum_Locked) {
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_lockState
              (CursorLockMode__Enum_None,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(1,(MethodInfo *)0x0);
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
    func_?(&StringLiteral_Cursor_locked__);
    cRam_? = '\x01';
  }
  str1 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                   ((Boolean *)&value,(IFormatProvider *)0x0,unaff_EBP);
  mscorlib.dll::System::String::String_Concat_3
            (StringLiteral_Cursor_locked__,str1,(MethodInfo *)0x0);
  if (value == 0) {
    method = (MethodInfo *)0x0;
    _value = this;
    LockCursorManager3DMode_UnlockCursor(this,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      method = (MethodInfo *)&StringLiteral_Really_trying_to_lock_cursor;
      _value = (LockCursorManager3DMode *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    method = (MethodInfo *)0x0;
    _value = (LockCursorManager3DMode *)&UNK_?;
    CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState((MethodInfo *)0x0)
    ;
    if (CVar1 != CursorLockMode__Enum_Locked) {
      method = (MethodInfo *)0x0;
      _value = (LockCursorManager3DMode *)0x1;
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_lockState
                (CursorLockMode__Enum_Locked,(MethodInfo *)0x0);
      method = (MethodInfo *)0x0;
      _value = (LockCursorManager3DMode *)0x0;
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(0,(MethodInfo *)0x0);
      iVar2 = _UNK_?;
      method = (MethodInfo *)0x0;
      _value = (LockCursorManager3DMode *)&UNK_?;
      CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState
                        ((MethodInfo *)0x0);
      if (iVar2 != 0) {
        puStack3 = *(undefined **)(iVar2 + 0x14);
        uStack4 = (uint)(CVar1 == CursorLockMode__Enum_Locked);
        uStack5 = *(undefined4 *)(iVar2 + 0x20);
        (**(code **)(iVar2 + 0xc))();
        return;
      }
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
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
    CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState((MethodInfo *)0x0)
    ;
    if (CVar1 == CursorLockMode__Enum_Locked) {
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_lockState
                (CursorLockMode__Enum_None,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(1,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(&StringLiteral_Really_trying_to_lock_cursor2);
      cRam_? = '\x01';
    }
    CVar1 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_lockState((MethodInfo *)0x0)
    ;
    if (CVar1 != CursorLockMode__Enum_Locked) {
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_lockState
                (CursorLockMode__Enum_Locked,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(0,(MethodInfo *)0x0);
    }
  }
  return;
}

