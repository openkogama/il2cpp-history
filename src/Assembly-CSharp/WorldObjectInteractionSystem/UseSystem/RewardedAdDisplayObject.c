
/* Void SetScale(Vector3) */

void Assembly-CSharp.dll::WorldObjectInteractionSystem::UseSystem::RewardedAdDisplayObject::
     RewardedAdDisplayObject_SetScale(RewardedAdDisplayObject *this,Vector3 size,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,size,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff8);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

