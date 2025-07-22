
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RotateOrientationWarning+<RotationAnimationCoroutine>d__8::
     RotateOrientationWarning_RotationAnimationCoroutine_d_8_MoveNext
               (RotateOrientationWarning_RotationAnimationCoroutine_d_8 *this,MethodInfo *method)

{
  puVar1 = (undefined4 *)&stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?();
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
        fVar2 = (this_00->fields).targetPauseTime;
        pSVar3 = (SubscribableVariable_1_System_Single_ *)func_?();
        SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                  (pSVar3,fVar2,(MethodInfo *)0x0);
        (this->fields).__2__current = (Object *)pSVar3;
        func_?(&(this->fields).__2__current);
        (this->fields).__1__state = 2;
        return 1;
      }
      fVar2 = (this->fields)._rotationTime_5__2;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      fVar4 = fVar4 + fVar2;
      (this->fields)._rotationTime_5__2 = fVar4;
      fStack_5 = MathFunctions::MathFunctions_SmoothInverseLerp
                            (0.0,(this_00->fields).targetRotationTime,fVar4,(MethodInfo *)0x0);
      fVar2 = (this_00->fields).startRotationAngle;
      fVar4 = (this_00->fields).targetRotationAngle;
      fVar6 = 0.0;
      if ((fStack_5 < 0.0) || (fVar6 = _UNK_?, _UNK_? < fStack_5)) {
        fStack_5 = fVar6;
      }
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
      auVar8._4_8_ = 0;
      auVar8._0_4_ = ((fVar4 - fVar2) * fStack_5 + fVar2) * _UNK_?;
      pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                Quaternion_Internal_FromEulerRad
                          ((Quaternion *)&stack0xffffffa0,(Vector3)(auVar8 << 0x40),
                           (MethodInfo *)0x0);
      if (pTVar7 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar7,*pQVar9,(MethodInfo *)0x0);
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
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        auVar10._4_8_ = 0;
        auVar10._0_4_ = (this_00->fields).startRotationAngle * _UNK_?;
        pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                  Quaternion_Internal_FromEulerRad
                            ((Quaternion *)&stack0xffffffb0,(Vector3)(auVar10 << 0x40),
                             (MethodInfo *)0x0);
        if (pTVar7 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (pTVar7,*pQVar9,(MethodInfo *)0x0);
          (this->fields)._fadeTime_5__3 = 0.0;
code_?:
          if ((this_00->fields).targetFadeTime < (this->fields)._fadeTime_5__3) {
            fVar2 = (this_00->fields).targetPauseTime;
            pSVar3 = (SubscribableVariable_1_System_Single_ *)func_?();
            SubscribableVariable`1[System::Single]::SubscribableVariable_1_System_Single___ctor
                      (pSVar3,fVar2 * _UNK_?,(MethodInfo *)0x0);
            (this->fields).__2__current = (Object *)pSVar3;
            func_?(&(this->fields).__2__current);
            (this->fields).__1__state = 5;
            return 1;
          }
          fVar2 = (this->fields)._fadeTime_5__3;
          fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          fVar4 = fVar4 + fVar2;
          (this->fields)._fadeTime_5__3 = fVar4;
          MathFunctions::MathFunctions_SmoothInverseLerp
                    (0.0,(this_00->fields).targetFadeTime,fVar4,(MethodInfo *)0x0);
          pIVar11 = (this_00->fields).image;
          if (pIVar11 != (Image *)0x0) {
            puVar12 = (undefined4 *)(*(code *)(pIVar11->klass->vtable).get_color.method)();
            pIVar13 = (this_00->fields).image;
            uVar14 = *puVar12;
            if (pIVar13 != (Image *)0x0) {
              iVar15 = (*(code *)(pIVar13->klass->vtable).get_color.method)(&stack0xffffffb0,pIVar13);
              pIVar13 = (this_00->fields).image;
              fVar2 = *(float *)(iVar15 + 4);
              if (pIVar13 != (Image *)0x0) {
                iVar15 = (*(code *)(pIVar13->klass->vtable).get_color.method)
                                   (&stack0xffffffa0,pIVar13);
                func_?(0x17,pIVar11,uVar14,fVar2,*(undefined4 *)(iVar15 + 8));
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
        fVar2 = (this->fields)._fadeTime_5__3;
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar4 = fVar4 + fVar2;
        (this->fields)._fadeTime_5__3 = fVar4;
        MathFunctions::MathFunctions_SmoothInverseLerp
                  (0.0,(this_00->fields).targetFadeTime,fVar4,(MethodInfo *)0x0);
        pIVar11 = (this_00->fields).image;
        if (pIVar11 != (Image *)0x0) {
          puVar12 = (undefined4 *)(*(code *)(pIVar11->klass->vtable).get_color.method)();
          pIVar13 = (this_00->fields).image;
          uVar14 = *puVar12;
          if (pIVar13 != (Image *)0x0) {
            iVar15 = (*(code *)(pIVar13->klass->vtable).get_color.method)(&stack0xffffffb0,pIVar13);
            pIVar13 = (this_00->fields).image;
            uVar16 = *(undefined4 *)(iVar15 + 4);
            if (pIVar13 != (Image *)0x0) {
              iVar15 = (*(code *)(pIVar13->klass->vtable).get_color.method)(&stack0xffffffb0,pIVar13);
              func_?(0x17,pIVar11,uVar14,uVar16,*(undefined4 *)(iVar15 + 8));
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
  bVar17 = func_?();
  puVar12 = (undefined4 *)&stack0xffffff8c;
  cVar18 = '\x0f';
  do {
    puVar1 = puVar1 + -1;
    puVar12 = puVar12 + -1;
    *puVar12 = *puVar1;
    cVar18 = cVar18 + -1;
  } while ('\0' < cVar18);
  return bVar17;
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

