
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
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_2,this_01,(MethodInfo *)0x0);
      VStack_2.x = pVVar1->x;
      VStack_2.y = pVVar1->y;
      VStack_2.z = pVVar1->z;
      uVar3 = (this->fields).triggingColliderPosition.x;
      uVar4 = (this->fields).triggingColliderPosition.y;
      fVar5 = VStack_2.x - (float)uVar3;
      fVar6 = VStack_2.y - (float)uVar4;
      fVar7 = VStack_2.z - (this->fields).triggingColliderPosition.z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      dVar8 = (double)(fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7);
      if (0.0 <= dVar8) {
        return (float)SQRT(dVar8);
      }
      func_?();
      return (float)dVar8;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  fVar10 = (float10)(*pcVar9)();
  return (float)fVar10;
}

