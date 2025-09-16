
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera+<DoSmoothRotationSwitch>d__134::
     RTFocusCamera_DoSmoothRotationSwitch_d_134_MoveNext
               (RTFocusCamera_DoSmoothRotationSwitch_d_134 *this,MethodInfo *method)

{
  pRVar1 = this;
  iVar2 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto code_?;
    pCVar3 = (this_00->fields)._rotationSwitchSettings;
    (this_00->fields)._isDoingRotationSwitch = 1;
    if (pCVar3 == (CameraRotationSwitchSettings *)0x0) goto code_?;
    if ((pCVar3->fields)._switchType == 0) goto code_?;
    pVVar4 = RTFocusCamera::RTFocusCamera_GetFocusPoint
                       ((Vector3 *)&fStack_5,this_00,(MethodInfo *)0x0);
    fVar6 = pVVar4->y;
    fVar7 = pVVar4->z;
    (pRVar1->fields)._focusPt_5__2.x = pVVar4->x;
    (pRVar1->fields)._focusPt_5__2.y = fVar6;
    (this->fields)._focusPt_5__2.z = fVar7;
    this = (RTFocusCamera_DoSmoothRotationSwitch_d_134 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  }
  else {
    if (iVar2 == 1) {
      (this->fields).__1__state = -1;
      if (this_00 == (RTFocusCamera *)0x0) goto code_?;
code_?:
      pTVar8 = (this_00->fields)._targetTransform;
      if (pTVar8 != (Transform *)0x0) {
        pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           ((Quaternion *)&stack0xffffffc8,pTVar8,(MethodInfo *)0x0);
        fVar7 = pQVar9->x;
        fStack_5 = pQVar9->y;
        puStack_10 = (undefined *)pQVar9->z;
        fVar6 = pQVar9->w;
        fVar11 = (this->fields).targetRotation.z;
        fVar12 = (this->fields).targetRotation.w;
        fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        pCVar3 = (this_00->fields)._rotationSwitchSettings;
        if (pCVar3 != (CameraRotationSwitchSettings *)0x0) {
          fVar13 = fVar13 * (pCVar3->fields)._smoothValue;
          a.y = fStack_5;
          a.x = fVar7;
          a.z = (float)puStack_10;
          a.w = fVar6;
          b.y = 0.0;
          b.x = fVar13;
          b.z = fVar11;
          b.w = fVar12;
          pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                             ((Quaternion *)&stack0xffffffc8,a,b,fVar13,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (pTVar8,*pQVar9,(MethodInfo *)0x0);
          pTVar8 = (this_00->fields)._targetTransform;
          if (pTVar8 != (Transform *)0x0) {
            pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                               ((Quaternion *)&stack0xffffffc8,pTVar8,(MethodInfo *)0x0);
            fVar7 = (float)((uint)((this->fields).targetRotation.y * pQVar9->y +
                                    (this->fields).targetRotation.x * pQVar9->x +
                                    (this->fields).targetRotation.z * pQVar9->z +
                                   (this->fields).targetRotation.w * pQVar9->w) & _UNK_?);
            if (_UNK_? <= fVar7) {
              fVar7 = _UNK_?;
            }
            if (fVar7 <= _UNK_?) {
              dVar14 = (double)fVar7;
              func_?();
              fVar7 = ((float)dVar14 + (float)dVar14) * _UNK_?;
            }
            else {
              fVar7 = 0.0;
            }
            if (_UNK_? <= (float)((uint)fVar7 & _UNK_?)) {
              (this->fields).__2__current = (Object *)0x0;
              func_?();
              (this->fields).__1__state = 1;
              return 1;
            }
            pTVar8 = (this_00->fields)._targetTransform;
            if (pTVar8 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar8,(this->fields).targetRotation,(MethodInfo *)0x0);
              (this_00->fields)._isDoingRotationSwitch = 0;
              return 0;
            }
          }
        }
      }
      goto code_?;
    }
    if (iVar2 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
    this = (RTFocusCamera_DoSmoothRotationSwitch_d_134 *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 == (RTFocusCamera *)0x0) goto code_?;
  }
  pCVar3 = (this_00->fields)._rotationSwitchSettings;
  if (pCVar3 != (CameraRotationSwitchSettings *)0x0) {
    fVar7 = (pCVar3->fields)._smoothValue;
    pTVar8 = (this_00->fields)._targetTransform;
    if (pTVar8 != (Transform *)0x0) {
      pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffc8,pTVar8,(MethodInfo *)0x0);
      pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                         ((Quaternion *)&stack0xffffffc8,*pQVar9,(pRVar1->fields).targetRotation,
                          fVar7 * (float)this,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar8,*pQVar9,(MethodInfo *)0x0);
      pTVar8 = (this_00->fields)._targetTransform;
      fStack_5 = (pRVar1->fields)._focusPt_5__2.x;
      puStack_10 = (undefined *)(pRVar1->fields)._focusPt_5__2.y;
      fVar7 = (pRVar1->fields)._focusPt_5__2.z;
      this_01 = (this_00->fields)._targetTransform;
      if (this_01 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           ((Vector3 *)&stack0xffffffcc,this_01,(MethodInfo *)0x0);
        uVar15 = pVVar4->x;
        uVar16 = pVVar4->y;
        fVar6 = (this_00->fields)._focusPointOffset;
        fVar11 = fStack_5 - (float)uVar15 * fVar6;
        puStack_10 = (undefined *)((float)puStack_10 - (float)uVar16 * fVar6);
        fStack_5 = fVar11;
        if (pTVar8 != (Transform *)0x0) {
          value.y = (float)puStack_10;
          value.x = fVar11;
          value.z = fVar7 - pVVar4->z * fVar6;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar8,value,(MethodInfo *)0x0);
          pTVar8 = (this_00->fields)._targetTransform;
          if (pTVar8 != (Transform *)0x0) {
            pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                               ((Quaternion *)&stack0xffffffc8,pTVar8,(MethodInfo *)0x0);
            fVar7 = (float)((uint)((pRVar1->fields).targetRotation.y * pQVar9->y +
                                    (pRVar1->fields).targetRotation.x * pQVar9->x +
                                    (pRVar1->fields).targetRotation.z * pQVar9->z +
                                   (pRVar1->fields).targetRotation.w * pQVar9->w) & _UNK_?);
            if (_UNK_? <= fVar7) {
              fVar7 = _UNK_?;
            }
            if (fVar7 <= _UNK_?) {
              dVar14 = (double)fVar7;
              func_?();
              fVar7 = ((float)dVar14 + (float)dVar14) * _UNK_?;
            }
            else {
              fVar7 = 0.0;
            }
            if (_UNK_? <= (float)((uint)fVar7 & _UNK_?)) {
              (pRVar1->fields).__2__current = (Object *)0x0;
              func_?();
              (pRVar1->fields).__1__state = 2;
              return 1;
            }
            pTVar8 = (this_00->fields)._targetTransform;
            if (pTVar8 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar8,(pRVar1->fields).targetRotation,(MethodInfo *)0x0);
              (pRVar1->fields)._focusPt_5__2.x = 0.0;
              (pRVar1->fields)._focusPt_5__2.y = 0.0;
              (pRVar1->fields)._focusPt_5__2.z = 0.0;
              (this_00->fields)._isDoingRotationSwitch = 0;
              return 0;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  bVar18 = (*pcVar17)();
  return bVar18;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RTG::RTFocusCamera+<DoSmoothRotationSwitch>d__134::
     RTFocusCamera_DoSmoothRotationSwitch_d_134_System_Collections_IEnumerator_Reset
               (RTFocusCamera_DoSmoothRotationSwitch_d_134 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__RTG__RTFocusCamera___DoSmoothRotationSwitch_d__134__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

