
/* ShortcutManager+ShortcutKey(KogamaControls, KeyState, UnityAction) */

void Assembly-CSharp.dll::ShortcutManager+ShortcutKey::ShortcutManager_ShortcutKey__ctor
               (ShortcutManager_ShortcutKey *this,KogamaControls__Enum kogamaControl,
               KeyState__Enum keyState,UnityAction *callback,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  ppUVar1 = &(this->fields).callback;
  (this->fields).kogamaControl = kogamaControl;
  (this->fields).keyState = keyState;
  *ppUVar1 = callback;
  func_?(ppUVar1,callback);
  return;
}

