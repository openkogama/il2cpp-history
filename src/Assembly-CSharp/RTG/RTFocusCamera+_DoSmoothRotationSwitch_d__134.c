
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera+<DoSmoothRotationSwitch>d__134::
     RTFocusCamera_DoSmoothRotationSwitch_d_134_MoveNext
               (RTFocusCamera_DoSmoothRotationSwitch_d_134 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto code_?;
    pCVar2 = (this_00->fields)._rotationSwitchSettings;
    (this_00->fields)._isDoingRotationSwitch = 1;
    if (pCVar2 == (CameraRotationSwitchSettings *)0x0) goto code_?;
    if ((pCVar2->fields)._switchType == 0) goto code_?;
    pVVar3 = RTFocusCamera::RTFocusCamera_GetFocusPoint
                       ((Vector3 *)&fStack_4,this_00,(MethodInfo *)0x0);
    fVar5 = pVVar3->y;
    fVar6 = pVVar3->z;
    (this->fields)._focusPt_5__2.x = pVVar3->x;
    (this->fields)._focusPt_5__2.y = fVar5;
    (this->fields)._focusPt_5__2.z = fVar6;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      if (this_00 == (RTFocusCamera *)0x0) goto code_?;
code_?:
      pTVar7 = (this_00->fields)._targetTransform;
      if (pTVar7 != (Transform *)0x0) {
        pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           ((Quaternion *)&stack0xffffffcc,pTVar7,(MethodInfo *)0x0);
        fVar6 = pQVar8->x;
        fStack_4 = pQVar8->y;
        puStack_9 = (undefined *)pQVar8->z;
        fVar5 = pQVar8->w;
        fVar10 = (this->fields).targetRotation.z;
        fVar11 = (this->fields).targetRotation.w;
        fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        pCVar2 = (this_00->fields)._rotationSwitchSettings;
        if (pCVar2 != (CameraRotationSwitchSettings *)0x0) {
          fVar12 = fVar12 * (pCVar2->fields)._smoothValue;
          a.y = fStack_4;
          a.x = fVar6;
          a.z = (float)puStack_9;
          a.w = fVar5;
          b.y = 0.0;
          b.x = fVar12;
          b.z = fVar10;
          b.w = fVar11;
          pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                             ((Quaternion *)&stack0xffffffcc,a,b,fVar12,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (pTVar7,*pQVar8,(MethodInfo *)0x0);
          pTVar7 = (this_00->fields)._targetTransform;
          if (pTVar7 != (Transform *)0x0) {
            pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                               ((Quaternion *)&stack0xffffffcc,pTVar7,(MethodInfo *)0x0);
            fVar6 = (float)((uint)((this->fields).targetRotation.y * pQVar8->y +
                                    (this->fields).targetRotation.x * pQVar8->x +
                                    (this->fields).targetRotation.z * pQVar8->z +
                                   (this->fields).targetRotation.w * pQVar8->w) & _UNK_?);
            if (_UNK_? <= fVar6) {
              fVar6 = _UNK_?;
            }
            if (fVar6 <= _UNK_?) {
              dVar13 = (double)fVar6;
              func_?();
              fVar6 = ((float)dVar13 + (float)dVar13) * _UNK_?;
            }
            else {
              fVar6 = 0.0;
            }
            if (_UNK_? <= (float)((uint)fVar6 & _UNK_?)) {
              (this->fields).__2__current = (Object *)0x0;
              func_?();
              (this->fields).__1__state = 1;
              return 1;
            }
            pTVar7 = (this_00->fields)._targetTransform;
            if (pTVar7 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar7,(this->fields).targetRotation,(MethodInfo *)0x0);
              (this_00->fields)._isDoingRotationSwitch = 0;
              return 0;
            }
          }
        }
      }
      goto code_?;
    }
    if (iVar1 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    if (this_00 == (RTFocusCamera *)0x0) goto code_?;
  }
  pCVar2 = (this_00->fields)._rotationSwitchSettings;
  if (pCVar2 != (CameraRotationSwitchSettings *)0x0) {
    fVar5 = (pCVar2->fields)._smoothValue;
    pTVar7 = (this_00->fields)._targetTransform;
    if (pTVar7 != (Transform *)0x0) {
      pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffcc,pTVar7,(MethodInfo *)0x0);
      pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                         ((Quaternion *)&stack0xffffffcc,*pQVar8,(this->fields).targetRotation,
                          fVar6 * fVar5,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar7,*pQVar8,(MethodInfo *)0x0);
      pTVar7 = (this_00->fields)._targetTransform;
      fStack_4 = (this->fields)._focusPt_5__2.x;
      puStack_9 = (undefined *)(this->fields)._focusPt_5__2.y;
      fVar6 = (this->fields)._focusPt_5__2.z;
      this_01 = (this_00->fields)._targetTransform;
      if (this_01 != (Transform *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           ((Vector3 *)&stack0xffffffd0,this_01,(MethodInfo *)0x0);
        uVar14 = pVVar3->x;
        uVar15 = pVVar3->y;
        fVar5 = (this_00->fields)._focusPointOffset;
        fVar10 = fStack_4 - (float)uVar14 * fVar5;
        puStack_9 = (undefined *)((float)puStack_9 - (float)uVar15 * fVar5);
        fStack_4 = fVar10;
        if (pTVar7 != (Transform *)0x0) {
          value.y = (float)puStack_9;
          value.x = fVar10;
          value.z = fVar6 - pVVar3->z * fVar5;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar7,value,(MethodInfo *)0x0);
          pTVar7 = (this_00->fields)._targetTransform;
          if (pTVar7 != (Transform *)0x0) {
            pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                               ((Quaternion *)&stack0xffffffcc,pTVar7,(MethodInfo *)0x0);
            fVar6 = (float)((uint)((this->fields).targetRotation.y * pQVar8->y +
                                    (this->fields).targetRotation.x * pQVar8->x +
                                    (this->fields).targetRotation.z * pQVar8->z +
                                   (this->fields).targetRotation.w * pQVar8->w) & _UNK_?);
            if (_UNK_? <= fVar6) {
              fVar6 = _UNK_?;
            }
            if (fVar6 <= _UNK_?) {
              dVar13 = (double)fVar6;
              func_?();
              fVar6 = ((float)dVar13 + (float)dVar13) * _UNK_?;
            }
            else {
              fVar6 = 0.0;
            }
            if (_UNK_? <= (float)((uint)fVar6 & _UNK_?)) {
              (this->fields).__2__current = (Object *)0x0;
              func_?();
              (this->fields).__1__state = 2;
              return 1;
            }
            pTVar7 = (this_00->fields)._targetTransform;
            if (pTVar7 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar7,(this->fields).targetRotation,(MethodInfo *)0x0);
              (this->fields)._focusPt_5__2.x = 0.0;
              (this->fields)._focusPt_5__2.y = 0.0;
              (this->fields)._focusPt_5__2.z = 0.0;
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
  pcVar16 = (code *)swi(3);
  bVar17 = (*pcVar16)();
  return bVar17;
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

