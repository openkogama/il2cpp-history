
/* Void SetScale(Vector3) */

void Assembly-CSharp.dll::TriggerCubePrefab::TriggerCubePrefab_SetScale
               (TriggerCubePrefab *this,Vector3 scale,MethodInfo *method)

{
  this_00 = (this->fields).triggerBoxEvents;
  if (this_00 != (TriggerBoxEvents *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_01,scale,(MethodInfo *)0x0);
      return;
    }
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

