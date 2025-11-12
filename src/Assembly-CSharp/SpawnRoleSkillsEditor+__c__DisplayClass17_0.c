
/* Void <OnAddDefenceSkillPressed>b__0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::SpawnRoleSkillsEditor+<>c__DisplayClass17_0::
     SpawnRoleSkillsEditor_c_DisplayClass17_0__OnAddDefenceSkillPressed_b__0
               (SpawnRoleSkillsEditor_c_DisplayClass17_0 *this,IUIStack *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).skillSelectionMenu;
  if (this_00 != (SpawnRoleSkillSelectionMenu *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

