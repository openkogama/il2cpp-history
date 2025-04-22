
/* ShortcutManager+ShortcutKey(KogamaControls, KeyState, UnityAction) */

void Assembly-CSharp.dll::ShortcutManager+ShortcutKey::ShortcutManager_ShortcutKey__ctor
               (ShortcutManager_ShortcutKey *this,KogamaControls__Enum kogamaControl,
               KeyState__Enum keyState,UnityAction *callback,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).kogamaControl = kogamaControl;
  (this->fields).keyState = keyState;
  (this->fields).callback = callback;
  func_?(&(this->fields).callback,callback);
  return;
}

