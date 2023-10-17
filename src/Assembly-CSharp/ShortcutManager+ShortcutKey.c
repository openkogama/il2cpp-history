
/* Boolean Equals(ShortcutManager+ShortcutKey) */

bool Assembly-CSharp.dll::ShortcutManager+ShortcutKey::ShortcutManager_ShortcutKey_Equals
               (ShortcutManager_ShortcutKey *this,ShortcutManager_ShortcutKey *other,
               MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if (other != (ShortcutManager_ShortcutKey *)0x0) {
    return (other->fields).kogamaControl == (this->fields).kogamaControl;
  }
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* ShortcutManager+ShortcutKey(KogamaControls, KeyState, UnityAction) */

void Assembly-CSharp.dll::ShortcutManager+ShortcutKey::ShortcutManager_ShortcutKey__ctor
               (ShortcutManager_ShortcutKey *this,KogamaControls__Enum kogamaControl,
               KeyState__Enum keyState,UnityAction *callback,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).kogamaControl = kogamaControl;
  (this->fields).keyState = keyState;
  (this->fields).callback = callback;
  func_?(&(this->fields).callback,callback);
  return;
}

