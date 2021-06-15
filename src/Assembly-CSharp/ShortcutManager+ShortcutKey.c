
/* Boolean Equals(ShortcutManager+ShortcutKey) */

bool Assembly-CSharp.dll::ShortcutManager+ShortcutKey::ShortcutManager_ShortcutKey_Equals
               (ShortcutManager_ShortcutKey *this,ShortcutManager_ShortcutKey *other,
               MethodInfo *method)

{
  if (other != (ShortcutManager_ShortcutKey *)0x0) {
    return (other->fields).kogamaControl == (this->fields).kogamaControl;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
}


/* ShortcutManager+ShortcutKey(KogamaControls, KeyState, UnityAction) */

void Assembly-CSharp.dll::ShortcutManager+ShortcutKey::ShortcutManager_ShortcutKey__ctor
               (ShortcutManager_ShortcutKey *this,KogamaControls__Enum kogamaControl,
               KeyState__Enum keyState,UnityAction *callback,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).kogamaControl = kogamaControl;
  (this->fields).keyState = keyState;
  (this->fields).callback = callback;
  return;
}

