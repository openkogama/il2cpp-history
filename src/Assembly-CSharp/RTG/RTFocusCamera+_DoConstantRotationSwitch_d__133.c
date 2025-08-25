
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
                       ((Quaternion *)&stack0xffffffd4,pTVar2,(MethodInfo *)0x0);
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
    pVVar9 = RTFocusCamera::RTFocusCamera_GetFocusPoint(&VStack_10,this_00,(MethodInfo *)0x0);
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
                             ((Quaternion *)&stack0xffffffd4,(this->fields)._sourceRotation_5__2,
                              (this->fields).targetRotation,
                              (this->fields)._elapsedTime_5__3 /
                              (pCVar8->fields)._constantSwitchDurationInSeconds,(MethodInfo *)0x0),
         pTVar2 != (Transform *)0x0)) {
        uStack_11 = CONCAT44(&UNK_?,(undefined4)uStack_11);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar2,*pQVar3,(MethodInfo *)0x0);
        fVar4 = (this->fields)._elapsedTime_5__3;
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        (this->fields)._elapsedTime_5__3 = fVar5 + fVar4;
        pTVar2 = (this_00->fields)._targetTransform;
        if (pTVar2 != (Transform *)0x0) {
          pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)&stack0xffffffd4,pTVar2,(MethodInfo *)0x0);
          fVar4 = (float)((uint)((this->fields).targetRotation.y * pQVar3->y +
                                  (this->fields).targetRotation.x * pQVar3->x +
                                  (this->fields).targetRotation.z * pQVar3->z +
                                 (this->fields).targetRotation.w * pQVar3->w) & _UNK_?);
          if (_UNK_? <= fVar4) {
            fVar4 = _UNK_?;
          }
          if (fVar4 <= _UNK_?) {
            dVar12 = (double)fVar4;
            func_?();
            fVar4 = ((float)dVar12 + (float)dVar12) * _UNK_?;
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
                       ((Quaternion *)&stack0xffffffd4,(this->fields)._sourceRotation_5__2,
                        (this->fields).targetRotation,
                        (this->fields)._elapsedTime_5__3 /
                        (pCVar8->fields)._constantSwitchDurationInSeconds,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      uStack_11 = CONCAT44(&UNK_?,(undefined4)uStack_11);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar2,*pQVar3,(MethodInfo *)0x0);
      pTVar2 = (this_00->fields)._targetTransform;
      VStack_10.x = (this->fields)._focusPt_5__4.x;
      VStack_10.y = (this->fields)._focusPt_5__4.y;
      VStack_10.z = (this->fields)._focusPt_5__4.z;
      this_01 = (this_00->fields)._targetTransform;
      if (this_01 != (Transform *)0x0) {
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                           ((Vector3 *)&stack0xffffffd8,this_01,(MethodInfo *)0x0);
        uStack_11._0_4_ = pVVar9->x;
        uStack_11._4_4_ = pVVar9->y;
        fVar4 = (this_00->fields)._focusPointOffset;
        fVar5 = VStack_10.x - (float)(undefined4)uStack_11 * fVar4;
        VStack_10.z = VStack_10.z - pVVar9->z * fVar4;
        VStack_10.y = VStack_10.y - (float)uStack_11._4_4_ * fVar4;
        VStack_10.x = fVar5;
        if (pTVar2 != (Transform *)0x0) {
          value.y = VStack_10.y;
          value.x = fVar5;
          value.z = VStack_10.z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar2,value,(MethodInfo *)0x0);
          fVar4 = (this->fields)._elapsedTime_5__3;
          fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          (this->fields)._elapsedTime_5__3 = fVar5 + fVar4;
          pTVar2 = (this_00->fields)._targetTransform;
          if (pTVar2 != (Transform *)0x0) {
            pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                               ((Quaternion *)&stack0xffffffd4,pTVar2,(MethodInfo *)0x0);
            fVar4 = (float)((uint)((this->fields).targetRotation.y * pQVar3->y +
                                    (this->fields).targetRotation.x * pQVar3->x +
                                    (this->fields).targetRotation.z * pQVar3->z +
                                   (this->fields).targetRotation.w * pQVar3->w) & _UNK_?);
            if (_UNK_? <= fVar4) {
              fVar4 = _UNK_?;
            }
            if (fVar4 <= _UNK_?) {
              dVar12 = (double)fVar4;
              func_?();
              fVar4 = ((float)dVar12 + (float)dVar12) * _UNK_?;
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
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
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

