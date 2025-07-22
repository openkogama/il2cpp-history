
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::TouchEditModeController+<HandleCursorVisible>d__56::
     TouchEditModeController_HandleCursorVisible_d_56_MoveNext
               (TouchEditModeController_HandleCursorVisible_d_56 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_get_visible((MethodInfo *)0x0)
    ;
    if (bVar2 == 0) {
      UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0);
      (this->fields).__2__current = (Object *)0x0;
      func_?(&(this->fields).__2__current,0);
      (this->fields).__1__state = 1;
      return 1;
    }
  }
  else if (iVar1 == 1) {
    (this->fields).__1__state = -1;
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::TouchEditModeController+<HandleCursorVisible>d__56::
     TouchEditModeController_HandleCursorVisible_d_56_System_Collections_IEnumerator_Reset
               (TouchEditModeController_HandleCursorVisible_d_56 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__TouchEditModeController___HandleCursorVisible_d__56__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

