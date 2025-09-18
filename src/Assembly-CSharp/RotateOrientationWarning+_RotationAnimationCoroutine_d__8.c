
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RotateOrientationWarning+<RotationAnimationCoroutine>d__8::
     RotateOrientationWarning_RotationAnimationCoroutine_d_8_MoveNext
               (RotateOrientationWarning_RotationAnimationCoroutine_d_8 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).__4__this;
  switch((this->fields).__1__state) {
  case 0:
  case 5:
    (this->fields)._rotationTime_5__2 = 0.0;
  case 1:
    (this->fields).__1__state = -1;
    if (this_00 != (RotateOrientationWarning *)0x0) {
      if ((this_00->fields).targetRotationTime < (this->fields)._rotationTime_5__2) {
        fVar1 = (this_00->fields).targetPauseTime;
        pSVar2 = (SubscribableVariable_1_System_Single_ *)
                  func_?(TypeInfo__UnityEngine__WaitForSeconds);
        SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                  (pSVar2,fVar1,(MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)pSVar2;
        func_?(&(this->fields).__2__current,pSVar2);
        (this->fields).__1__state = 2;
        return 1;
      }
      fVar1 = (this->fields)._rotationTime_5__2;
      fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar3 = fVar3 + fVar1;
      (this->fields)._rotationTime_5__2 = fVar3;
      fStack_4 = MathFunctions::MathFunctions_SmoothInverseLerp
                            (0.0,(this_00->fields).targetRotationTime,fVar3,(MethodInfo *)0x0);
      fVar1 = (this_00->fields).startRotationAngle;
      fVar3 = (this_00->fields).targetRotationAngle;
      fVar5 = 0.0;
      if ((fStack_4 < 0.0) || (fVar5 = _UNK_?, _UNK_? < fStack_4)) {
        fStack_4 = fVar5;
      }
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
      auVar7._4_8_ = 0;
      auVar7._0_4_ = ((fVar3 - fVar1) * fStack_4 + fVar1) * _UNK_?;
      pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffffa0,(Vector3)(auVar7 << 0x40),
                           (MethodInfo *)0x0);
      if (pTVar6 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar6,*pQVar8,(MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)0x0;
        func_?();
        (this->fields).__1__state = 1;
        return 1;
      }
    }
    break;
  case 2:
    (this->fields)._fadeTime_5__3 = 0.0;
  case 3:
    (this->fields).__1__state = -1;
    if (this_00 != (RotateOrientationWarning *)0x0) {
      if ((this_00->fields).targetFadeTime < (this->fields)._fadeTime_5__3) {
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        auVar9._4_8_ = 0;
        auVar9._0_4_ = (this_00->fields).startRotationAngle * _UNK_?;
        pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                  Quaternion_Internal_FromEulerRad
                            ((Quaternion *)&stack0xffffffb0,(Vector3)(auVar9 << 0x40),
                             (MethodInfo *)0x0);
        if (pTVar6 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (pTVar6,*pQVar8,(MethodInfo *)0x0);
          (this->fields)._fadeTime_5__3 = 0.0;
code_?:
          if ((this_00->fields).targetFadeTime < (this->fields)._fadeTime_5__3) {
            fVar1 = (this_00->fields).targetPauseTime;
            pSVar2 = (SubscribableVariable_1_System_Single_ *)
                      func_?(TypeInfo__UnityEngine__WaitForSeconds);
            SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                      (pSVar2,fVar1 * _UNK_?,(MethodInfo *)0x0);
            (this->fields).__2__current = (Object *)pSVar2;
            func_?(&(this->fields).__2__current,pSVar2);
            (this->fields).__1__state = 5;
            return 1;
          }
          fVar1 = (this->fields)._fadeTime_5__3;
          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          fVar3 = fVar3 + fVar1;
          (this->fields)._fadeTime_5__3 = fVar3;
          fStack_4 = MathFunctions::MathFunctions_SmoothInverseLerp
                                (0.0,(this_00->fields).targetFadeTime,fVar3,(MethodInfo *)0x0);
          fVar1 = 0.0;
          if ((fStack_4 < 0.0) || (fVar1 = _UNK_?, _UNK_? < fStack_4)) {
            fStack_4 = fVar1;
          }
          pIVar10 = (this_00->fields).image;
          if (pIVar10 != (Image *)0x0) {
            puVar11 = (undefined4 *)
                      (*(code *)(pIVar10->klass->vtable).get_color.method)(&stack0xffffffb0,pIVar10);
            pIVar12 = (this_00->fields).image;
            uVar13 = *puVar11;
            if (pIVar12 != (Image *)0x0) {
              iVar14 = (*(code *)(pIVar12->klass->vtable).get_color.method)
                                 (&stack0xffffffb0,pIVar12,
                                  (pIVar12->klass->vtable).set_color.methodPtr);
              pIVar12 = (this_00->fields).image;
              fVar1 = *(float *)(iVar14 + 4);
              if (pIVar12 != (Image *)0x0) {
                iVar14 = (*(code *)(pIVar12->klass->vtable).get_color.method)
                                   (&stack0xffffffa0,pIVar12,
                                    (pIVar12->klass->vtable).set_color.methodPtr);
                func_?(0x17,pIVar10,uVar13,fVar1,*(undefined4 *)(iVar14 + 8),fStack_4 + 0.0
                               );
                (this->fields).__2__current = (Object *)0x0;
                func_?(&(this->fields).__2__current,0);
                (this->fields).__1__state = 4;
                return 1;
              }
            }
          }
        }
      }
      else {
        fVar1 = (this->fields)._fadeTime_5__3;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar3 = fVar3 + fVar1;
        (this->fields)._fadeTime_5__3 = fVar3;
        fStack_4 = MathFunctions::MathFunctions_SmoothInverseLerp
                              (0.0,(this_00->fields).targetFadeTime,fVar3,(MethodInfo *)0x0);
        fVar1 = 0.0;
        if ((fStack_4 < 0.0) || (fVar1 = _UNK_?, _UNK_? < fStack_4)) {
          fStack_4 = fVar1;
        }
        pIVar10 = (this_00->fields).image;
        if (pIVar10 != (Image *)0x0) {
          puVar11 = (undefined4 *)
                    (*(code *)(pIVar10->klass->vtable).get_color.method)(&stack0xffffffb0,pIVar10);
          pIVar12 = (this_00->fields).image;
          uVar13 = *puVar11;
          if (pIVar12 != (Image *)0x0) {
            iVar14 = (*(code *)(pIVar12->klass->vtable).get_color.method)
                               (&stack0xffffffb0,pIVar12,(pIVar12->klass->vtable).set_color.methodPtr)
            ;
            pIVar12 = (this_00->fields).image;
            uVar15 = *(undefined4 *)(iVar14 + 4);
            if (pIVar12 != (Image *)0x0) {
              iVar14 = (*(code *)(pIVar12->klass->vtable).get_color.method)
                                 (&stack0xffffffb0,pIVar12,
                                  (pIVar12->klass->vtable).set_color.methodPtr);
              func_?(0x17,pIVar10,uVar13,uVar15,*(undefined4 *)(iVar14 + 8),
                              fStack_4 * _UNK_? + _UNK_?);
              (this->fields).__2__current = (Object *)0x0;
              func_?(&(this->fields).__2__current,0);
              (this->fields).__1__state = 3;
              return 1;
            }
          }
        }
      }
    }
    break;
  case 4:
    (this->fields).__1__state = -1;
    if (this_00 == (RotateOrientationWarning *)0x0) break;
    goto code_?;
  default:
    return 0;
  }
  func_?();
  pbVar16 = (byte *)(extraout_ECX + 0x10);
  *pbVar16 = *pbVar16 << 1 | (char)*pbVar16 < '\0';
  pbVar16 = (byte *)(extraout_ECX + 0x10);
  *pbVar16 = *pbVar16 << 1 | (char)*pbVar16 < '\0';
  pcVar17 = (code *)swi(3);
  bVar18 = (*pcVar17)();
  return bVar18;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RotateOrientationWarning+<RotationAnimationCoroutine>d__8::
     RotateOrientationWarning_RotationAnimationCoroutine_d_8_System_Collections_IEnumerator_Reset
               (RotateOrientationWarning_RotationAnimationCoroutine_d_8 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__RotateOrientationWarning___RotationAnimationCoroutine_d__8__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

