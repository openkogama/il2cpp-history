
/* Void Dispose() */

void Assembly-CSharp.dll::DesktopEditModeController+<HandleCursorVisible>c__Iterator0::
     DesktopEditModeController_HandleCursorVisible_c_Iterator0_Dispose
               (DesktopEditModeController_HandleCursorVisible_c_Iterator0 *this,MethodInfo *method)

{
  (this->fields)._disposing = 1;
  (this->fields)._PC = -1;
  return;
}


/* Boolean MoveNext() */

bool Assembly-CSharp.dll::DesktopEditModeController+<HandleCursorVisible>c__Iterator0::
     DesktopEditModeController_HandleCursorVisible_c_Iterator0_MoveNext
               (DesktopEditModeController_HandleCursorVisible_c_Iterator0 *this,MethodInfo *method)

{
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_get_visible((MethodInfo *)0x0);
    if (bVar2 == 0) {
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(1,(MethodInfo *)0x0);
      (this->fields)._current = (Object *)0x0;
      if ((this->fields)._disposing == 0) {
        (this->fields)._PC = 1;
      }
      return 1;
    }
  }
  else if (iVar1 != 1) {
    return 0;
  }
  (this->fields)._PC = -1;
  return 0;
}


/* Void Reset() */

void Assembly-CSharp.dll::DesktopEditModeController+<HandleCursorVisible>c__Iterator0::
     DesktopEditModeController_HandleCursorVisible_c_Iterator0_Reset
               (DesktopEditModeController_HandleCursorVisible_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

