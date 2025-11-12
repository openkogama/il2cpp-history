
/* Void <ReCreate>b__2(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PlayerListsLayout+<>c__DisplayClass9_0::
     PlayerListsLayout_c_DisplayClass9_0__ReCreate_b__2
               (PlayerListsLayout_c_DisplayClass9_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).newPlayerLists;
  if (this_00 != (PlayerListsLayout *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (((this->fields).__4__this != (PlayerListsLayout *)0x0) && (x != (IUIStack *)0x0)) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

