
/* Single <SortByDistance>b__0(UseInteractor) */

float Assembly-CSharp.dll::UseInteractorHandler+<>c__DisplayClass14_0::
      UseInteractorHandler_c_DisplayClass14_0__SortByDistance_b__0
                (UseInteractorHandler_c_DisplayClass14_0 *this,UseInteractor *a,MethodInfo *method)

{
  if ((a != (UseInteractor *)0x0) &&
     (this_00 = (a->fields).triggerCollider, this_00 != (Collider *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                ((Vector3 *)&stack0xffffffe4,this_01,(MethodInfo *)0x0);
      fVar1 = (float10)func_?();
      return (float)fVar1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  fVar1 = (float10)(*pcVar2)();
  return (float)fVar1;
}

