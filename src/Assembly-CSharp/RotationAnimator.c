
/* Void Update() */

void Assembly-CSharp.dll::RotationAnimator::RotationAnimator_Update
               (RotationAnimator *this,MethodInfo *method)

{
  this_00 = (this->fields).rotateCurve;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_timeSinceLevelLoad
                    ((MethodInfo *)0x0);
  if (this_00 != (AnimationCurve *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,(this->fields).rotateSpeed * fVar1,(MethodInfo *)0x0);
    this_01 = (Transform *)(this->fields).rotateTarget;
    auVar2._4_8_ = 0;
    auVar2._0_4_ = (float)((uint)fVar1 ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
                   * _UNK_? * _UNK_?;
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffec,(Vector3)(auVar2 << 0x40),(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (this_01,*pQVar3,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

