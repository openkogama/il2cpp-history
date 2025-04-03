
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera+<DoConstantRotationSwitch>d__133::
     RTFocusCamera_DoConstantRotationSwitch_d_133_MoveNext
               (RTFocusCamera_DoConstantRotationSwitch_d_133 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if ((this_00 == (RTFocusCamera *)0x0) ||
       (pTVar2 = (this_00->fields)._targetTransform, pTVar2 == (Transform *)0x0))
    goto code_?;
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       ((Quaternion *)&stack0xffffffd0,pTVar2,(MethodInfo *)0x0);
    fVar4 = pQVar3->x;
    fVar5 = pQVar3->y;
    fVar6 = pQVar3->z;
    fVar7 = pQVar3->w;
    (this->fields)._elapsedTime_5__3 = 0.0;
    (this->fields)._sourceRotation_5__2.x = fVar4;
    (this->fields)._sourceRotation_5__2.y = fVar5;
    (this->fields)._sourceRotation_5__2.z = fVar6;
    (this->fields)._sourceRotation_5__2.w = fVar7;
    pCVar8 = (this_00->fields)._rotationSwitchSettings;
    (this_00->fields)._isDoingRotationSwitch = 1;
    if (pCVar8 == (CameraRotationSwitchSettings *)0x0) goto code_?;
    if ((pCVar8->fields)._switchType == 0) goto code_?;
    pVVar9 = RTFocusCamera::RTFocusCamera_GetFocusPoint
                       ((Vector3 *)(auStack_10 + 4),this_00,(MethodInfo *)0x0);
    fVar5 = pVVar9->y;
    fVar4 = pVVar9->z;
    (this->fields)._focusPt_5__4.x = pVVar9->x;
    (this->fields)._focusPt_5__4.y = fVar5;
    (this->fields)._focusPt_5__4.z = fVar4;
  }
  else {
    if (iVar1 == 1) {
      (this->fields).__1__state = -1;
      if (this_00 == (RTFocusCamera *)0x0) goto code_?;
code_?:
      pTVar2 = (this_00->fields)._targetTransform;
      pCVar8 = (this_00->fields)._rotationSwitchSettings;
      if ((pCVar8 != (CameraRotationSwitchSettings *)0x0) &&
         (pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                             ((Quaternion *)&stack0xffffffd0,(this->fields)._sourceRotation_5__2,
                              (this->fields).targetRotation,
                              (this->fields)._elapsedTime_5__3 /
                              (pCVar8->fields)._constantSwitchDurationInSeconds,(MethodInfo *)0x0),
         pTVar2 != (Transform *)0x0)) {
        _puStack_10 = CONCAT44(pTVar2,&UNK_?);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar2,*pQVar3,(MethodInfo *)0x0);
        fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        (this->fields)._elapsedTime_5__3 = fVar4 + 4.3469124e-29;
        pTVar2 = (this_00->fields)._targetTransform;
        if (pTVar2 != (Transform *)0x0) {
          fVar4 = (this->fields).targetRotation.x;
          fVar5 = (this->fields).targetRotation.y;
          fVar6 = (this->fields).targetRotation.z;
          fVar7 = (this->fields).targetRotation.w;
          pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)auStack_10,pTVar2,(MethodInfo *)0x0);
          fVar4 = (float)((uint)(fVar5 * pQVar3->y + fVar4 * pQVar3->x + fVar6 * pQVar3->z +
                                fVar7 * pQVar3->w) & _UNK_?);
          if (_UNK_? <= fVar4) {
            fVar4 = _UNK_?;
          }
          if (fVar4 <= _UNK_?) {
            dVar11 = (double)fVar4;
            func_?();
            fVar4 = ((float)dVar11 + (float)dVar11) * _UNK_?;
          }
          else {
            fVar4 = 0.0;
          }
          if (_UNK_? <= (float)((uint)fVar4 & _UNK_?)) {
            (this->fields).__2__current = (Object *)0x0;
            func_?();
            (this->fields).__1__state = 1;
            return 1;
          }
          pTVar2 = (this_00->fields)._targetTransform;
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar2,(this->fields).targetRotation,(MethodInfo *)0x0);
            (this_00->fields)._isDoingRotationSwitch = 0;
            return 0;
          }
        }
      }
      goto code_?;
    }
    if (iVar1 != 2) {
      return 0;
    }
    (this->fields).__1__state = -1;
    if (this_00 == (RTFocusCamera *)0x0) goto code_?;
  }
  pCVar8 = (this_00->fields)._rotationSwitchSettings;
  if (pCVar8 != (CameraRotationSwitchSettings *)0x0) {
    pTVar2 = (this_00->fields)._targetTransform;
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                       ((Quaternion *)&stack0xffffffd0,(this->fields)._sourceRotation_5__2,
                        (this->fields).targetRotation,
                        (this->fields)._elapsedTime_5__3 /
                        (pCVar8->fields)._constantSwitchDurationInSeconds,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      _puStack_10 = CONCAT44(pTVar2,&UNK_?);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar2,*pQVar3,(MethodInfo *)0x0);
      pTVar2 = (this_00->fields)._targetTransform;
      auStack_10._4_4_ = (this->fields)._focusPt_5__4.x;
      fStack_12 = (this->fields)._focusPt_5__4.y;
      fStack_13 = (this->fields)._focusPt_5__4.z;
      if (pTVar2 != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           ((Vector3 *)&stack0xffffffd4,pTVar2,(MethodInfo *)0x0);
        puStack_14 = pVVar9->x;
        unique0x0000a404 = pVVar9->y;
        fVar4 = (this_00->fields)._focusPointOffset;
        fStack_13 = fStack_13 - pVVar9->z * fVar4;
        value.y = fStack_12 - (float)unique0x0000a404 * fVar4;
        value.x = (float)auStack_10._4_4_ - (float)puStack_14 * fVar4;
        value.z = fStack_13;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar2,value,(MethodInfo *)0x0);
        fVar4 = (this->fields)._elapsedTime_5__3;
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        (this->fields)._elapsedTime_5__3 = fVar5 + fVar4;
        pTVar2 = (this_00->fields)._targetTransform;
        if (pTVar2 != (Transform *)0x0) {
          fVar4 = (this->fields).targetRotation.x;
          fVar5 = (this->fields).targetRotation.y;
          fVar6 = (this->fields).targetRotation.z;
          fVar7 = (this->fields).targetRotation.w;
          pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)auStack_10,pTVar2,(MethodInfo *)0x0);
          fVar4 = (float)((uint)(fVar5 * pQVar3->y + fVar4 * pQVar3->x + fVar6 * pQVar3->z +
                                fVar7 * pQVar3->w) & _UNK_?);
          if (_UNK_? <= fVar4) {
            fVar4 = _UNK_?;
          }
          if (fVar4 <= _UNK_?) {
            dVar11 = (double)fVar4;
            func_?();
            fVar4 = ((float)dVar11 + (float)dVar11) * _UNK_?;
          }
          else {
            fVar4 = 0.0;
          }
          if (_UNK_? <= (float)((uint)fVar4 & _UNK_?)) {
            (this->fields).__2__current = (Object *)0x0;
            func_?();
            (this->fields).__1__state = 2;
            return 1;
          }
          pTVar2 = (this_00->fields)._targetTransform;
          if (pTVar2 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                      (pTVar2,(this->fields).targetRotation,(MethodInfo *)0x0);
            (this->fields)._focusPt_5__4.x = 0.0;
            (this->fields)._focusPt_5__4.y = 0.0;
            (this->fields)._focusPt_5__4.z = 0.0;
            (this_00->fields)._isDoingRotationSwitch = 0;
            return 0;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  bVar16 = (*pcVar15)();
  return bVar16;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::RTG::RTFocusCamera+<DoConstantRotationSwitch>d__133::
     RTFocusCamera_DoConstantRotationSwitch_d_133_System_Collections_IEnumerator_Reset
               (RTFocusCamera_DoConstantRotationSwitch_d_133 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__RTG__RTFocusCamera___DoConstantRotationSwitch_d__133__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

