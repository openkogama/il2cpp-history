
/* Void Update() */

void Assembly-CSharp.dll::PleaseWaitPopup::PleaseWaitPopup_Update
               (PleaseWaitPopup *this,MethodInfo *method)

{
  pPVar1 = this;
  fVar2 = (this->fields).timeSinceStart;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar3 = fVar3 + fVar2;
  fVar2 = (this->fields).fullyRevealedTime;
  (this->fields).timeSinceStart = fVar3;
  if (fVar2 < fVar3) {
    (this->fields).timeSinceStart = fVar2;
  }
  pAVar4 = (this->fields).alphaCurveOverTime;
  if (pAVar4 != (AnimationCurve *)0x0) {
    pPVar5 = (PleaseWaitPopup *)
              UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                        (pAVar4,(this->fields).timeSinceStart,(MethodInfo *)0x0);
    pPVar6 = (PleaseWaitPopup *)(this->fields).fullScreenBackGroundMaxAlpha;
    this = pPVar5;
    if ((float)pPVar6 < (float)pPVar5) {
      this = pPVar6;
    }
    pIVar7 = (pPVar1->fields).fullScreenBackGround;
    if (pIVar7 != (Image *)0x0) {
      puVar8 = (undefined4 *)(*(code *)(pIVar7->klass->vtable).get_color.method)(&uStack_9);
      pIVar10 = (pPVar1->fields).fullScreenBackGround;
      uStack_11 = *puVar8;
      uStack_12 = *(undefined8 *)(puVar8 + 1);
      pPStack_13 = (PleaseWaitPopup *)puVar8[3];
      if (pIVar10 != (Image *)0x0) {
        puVar8 = (undefined4 *)(*(code *)(pIVar10->klass->vtable).get_color.method)(&uStack_9);
        pIVar10 = (pPVar1->fields).fullScreenBackGround;
        uStack_9 = *puVar8;
        uStack_14 = puVar8[1];
        uStack_15 = puVar8[2];
        uStack_16 = puVar8[3];
        if (pIVar10 != (Image *)0x0) {
          iVar17 = (*(code *)(pIVar10->klass->vtable).get_color.method)(&stack0xffffffc0);
          uStack_12 = CONCAT44(*(undefined4 *)(iVar17 + 8),uStack_14);
          pPStack_13 = this;
          (*(code *)(pIVar7->klass->vtable).set_color.method)
                    (pIVar7,uStack_11,uStack_14,*(undefined4 *)(iVar17 + 8));
          pAVar4 = (pPVar1->fields).alphaCurveOverTime;
          this_00 = (pPVar1->fields).popUpcanvasGroup;
          if (pAVar4 != (AnimationCurve *)0x0) {
            fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                     AnimationCurve_Evaluate
                               (pAVar4,(pPVar1->fields).timeSinceStart,(MethodInfo *)0x0);
            if (this_00 != (CanvasGroup *)0x0) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (this_00,fVar2,(MethodInfo *)0x0);
              uStack_12._0_4_ = (pPVar1->fields).direction.x;
              uStack_12._4_4_ = (pPVar1->fields).direction.y;
              pPStack_13 = (PleaseWaitPopup *)(pPVar1->fields).direction.z;
              this_01 = (Transform *)(pPVar1->fields).rectTransform;
              fStack_18 = (pPVar1->fields).spinSpeed;
              fStack_19 = (float)(undefined4)uStack_12 * fStack_18;
              fStack_20 = (float)uStack_12._4_4_ * fStack_18;
              fStack_18 = (float)pPStack_13 * fStack_18;
              fVar21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                 ((MethodInfo *)0x0);
              fVar2 = fStack_19 * fVar21 * _UNK_?;
              fVar3 = fStack_20 * fVar21 * _UNK_?;
              pPStack_13 = (PleaseWaitPopup *)(fStack_18 * fVar21 * _UNK_?);
              uStack_12 = CONCAT44(fVar3,fVar2);
              if (this_01 != (Transform *)0x0) {
                eulers.y = fVar3;
                eulers.x = fVar2;
                eulers.z = (float)pPStack_13;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
                          (this_01,eulers,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* PleaseWaitPopup() */

void Assembly-CSharp.dll::PleaseWaitPopup::PleaseWaitPopup__ctor
               (PleaseWaitPopup *this,MethodInfo *method)

{
  (this->fields).direction.x = 0.0;
  (this->fields).direction.y = 0.0;
  (this->fields).spinSpeed = 5.0;
  (this->fields).direction.z = 1.0;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

