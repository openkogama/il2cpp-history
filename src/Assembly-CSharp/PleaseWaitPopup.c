
/* Void Update() */

void Assembly-CSharp.dll::PleaseWaitPopup::PleaseWaitPopup_Update
               (PleaseWaitPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).timeSinceStart;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  fVar1 = (this->fields).fullyRevealedTime;
  (this->fields).timeSinceStart = fVar2;
  if (fVar1 < fVar2) {
    (this->fields).timeSinceStart = fVar1;
    fVar2 = fVar1;
  }
  pAVar3 = (this->fields).alphaCurveOverTime;
  if (pAVar3 != (AnimationCurve *)0x0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (pAVar3,fVar2,(MethodInfo *)0x0);
    fVar1 = (this->fields).fullScreenBackGroundMaxAlpha;
    if (fVar2 <= fVar1) {
      fVar1 = fVar2;
    }
    pIVar4 = (this->fields).fullScreenBackGround;
    if (pIVar4 != (Image *)0x0) {
      apIStack_5[0] = (pIVar4->klass->vtable).set_color.methodPtr;
      puVar6 = (undefined4 *)(*(code *)(pIVar4->klass->vtable).get_color.method)(&uStack_7,pIVar4);
      pIVar8 = (this->fields).fullScreenBackGround;
      uStack_9 = *puVar6;
      uStack_10 = puVar6[1];
      uStack_11 = *(undefined8 *)(puVar6 + 2);
      if (pIVar8 != (Image *)0x0) {
        puVar6 = (undefined4 *)
                 (*(code *)(pIVar8->klass->vtable).get_color.method)
                           (&uStack_7,pIVar8,(pIVar8->klass->vtable).set_color.methodPtr);
        pIVar8 = (this->fields).fullScreenBackGround;
        uStack_7 = *puVar6;
        VStack_12.x = (float)puVar6[1];
        VStack_12.y = (float)puVar6[2];
        VStack_12.z = (float)puVar6[3];
        if (pIVar8 != (Image *)0x0) {
          iVar13 = (*(code *)(pIVar8->klass->vtable).get_color.method)
                            (apIStack_5,pIVar8,(pIVar8->klass->vtable).set_color.methodPtr);
          uStack_14 = 0;
          uStack_15 = 0;
          uStack_16 = 0;
          uStack_17 = 0;
          func_?(&uStack_14,uStack_9,VStack_12.x,*(undefined4 *)(iVar13 + 8),fVar1,0);
          if (pIVar4 != (Image *)0x0) {
            (*(code *)(pIVar4->klass->vtable).set_color.method)
                      (pIVar4,uStack_14,uStack_15,uStack_16,uStack_17,
                       (pIVar4->klass->vtable).get_raycastTarget.methodPtr);
            pAVar3 = (this->fields).alphaCurveOverTime;
            this_00 = (this->fields).popUpcanvasGroup;
            if ((pAVar3 != (AnimationCurve *)0x0) &&
               (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                        AnimationCurve_Evaluate
                                  (pAVar3,(this->fields).timeSinceStart,(MethodInfo *)0x0),
               this_00 != (CanvasGroup *)0x0)) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (this_00,fVar1,(MethodInfo *)0x0);
              uStack_11._0_4_ = (this->fields).direction.x;
              uStack_11._4_4_ = (this->fields).direction.y;
              fVar1 = (this->fields).spinSpeed;
              this_01 = (Transform *)(this->fields).rectTransform;
              fVar2 = (this->fields).direction.z;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector3);
              }
              a.z = fVar2;
              a.x = (float)(undefined4)uStack_11;
              a.y = (float)uStack_11._4_4_;
              pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                 (&VStack_12,a,fVar1,(MethodInfo *)0x0);
              uStack_11._0_4_ = pVVar18->x;
              uStack_11._4_4_ = pVVar18->y;
              fVar1 = pVVar18->z;
              fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                ((MethodInfo *)0x0);
              a_00.z = fVar1;
              a_00.x = (float)(undefined4)uStack_11;
              a_00.y = (float)uStack_11._4_4_;
              pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                 (&VStack_12,a_00,fVar2,(MethodInfo *)0x0);
              pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                 (&VStack_12,*pVVar18,60.0,(MethodInfo *)0x0);
              if (this_01 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_1
                          (this_01,*pVVar18,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* PleaseWaitPopup() */

void Assembly-CSharp.dll::PleaseWaitPopup::PleaseWaitPopup__ctor
               (PleaseWaitPopup *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  (this->fields).spinSpeed = 5.0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0,0x3f800000,0);
  (this->fields).direction.x = (float)(undefined4)uStack_2;
  (this->fields).direction.y = (float)uStack_2._4_4_;
  (this->fields).direction.z = fStack_1;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

