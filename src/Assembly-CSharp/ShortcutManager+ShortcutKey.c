
/* ShortcutManager+ShortcutKey(KogamaControls, KeyState, UnityAction) */

void Assembly-CSharp.dll::ShortcutManager+ShortcutKey::ShortcutManager_ShortcutKey__ctor
               (ShortcutManager_ShortcutKey *this,KogamaControls__Enum kogamaControl,
               KeyState__Enum keyState,UnityAction *callback,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).kogamaControl = kogamaControl;
  (this->fields).keyState = keyState;
  (this->fields).callback = callback;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).callback >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

