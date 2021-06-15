
/* Single <>m__0(UseInteractor) */

float Assembly-CSharp.dll::UseInteractorHandler+<SortByDistance>c__AnonStorey0::
      UseInteractorHandler_SortByDistance_c_AnonStorey0___m__0
                (UseInteractorHandler_SortByDistance_c_AnonStorey0 *this,UseInteractor *a,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((a != (UseInteractor *)0x0) &&
     (this_00 = (a->fields).triggerCollider, this_00 != (Collider *)0x0)) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_2,this_01,(MethodInfo *)0x0);
      uStack_3._0_4_ = pVVar1->x;
      uStack_3._4_4_ = pVVar1->y;
      fVar4 = pVVar1->z;
      VStack_2.y = (this->fields).triggingColliderPosition.x;
      VStack_2.z = (this->fields).triggingColliderPosition.y;
      fVar5 = (this->fields).triggingColliderPosition.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a_00.z = fVar4;
      a_00.x = (float)(undefined4)uStack_3;
      a_00.y = (float)uStack_3._4_4_;
      b.z = fVar5;
      b.x = VStack_2.y;
      b.y = VStack_2.z;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                (&VStack_2,a_00,b,(MethodInfo *)0x0);
      fVar6 = (float10)func_?();
      return (float)fVar6;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  fVar6 = (float10)(*pcVar7)();
  return (float)fVar6;
}

