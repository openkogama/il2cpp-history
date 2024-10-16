
/* Void AdjustOrthoSizeForFocusPt() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_AdjustOrthoSizeForFocusPt
               (RTFocusCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._targetCamera;
  fVar1 = (this->fields)._focusPointOffset;
  if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__CameraEx);
  }
  if (this_00 != (Camera *)0x0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                      (this_00,(MethodInfo *)0x0);
    dVar3 = (double)(fVar2 * _UNK_? * _UNK_?);
    func_?();
    fVar1 = (float)dVar3 * (fVar1 + fVar1) * _UNK_?;
    if (fVar1 <= _UNK_?) {
      fVar1 = _UNK_?;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographicSize
              (this_00,fVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_Awake
               (RTFocusCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    func_?(&TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionBegin_RTG__CameraPrjSwitchTransition__Type_
                   );
    func_?(&
                    MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionEnd_RTG__CameraPrjSwitchTransition__Type_
                   );
    func_?(&
                    MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionUpate_RTG__CameraPrjSwitchTransition__Type_
                   );
    func_?(&StringLiteral_RTCamera__No_target_camera_was_s);
    cRam_? = '\x01';
  }
  x = (this->fields)._targetCamera;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Break((MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_RTCamera__No_target_camera_was_s,(MethodInfo *)0x0);
  }
  RTFocusCamera_SetTargetCamera(this,(this->fields)._targetCamera,(MethodInfo *)0x0);
  this_00 = (this->fields)._worldTransformSnapshot;
  if (this_00 != (WorldTransformSnapshot *)0x0) {
    WorldTransformSnapshot::WorldTransformSnapshot_Snaphot
              (this_00,(this->fields)._targetTransform,(MethodInfo *)0x0);
    pCVar2 = (this->fields)._prjSwitchTranstion;
    if (pCVar2 != (CameraPrjSwitchTransition *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((pCVar2->fields)._transitionType == 0) {
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)this,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 != 0) {
          (pCVar2->fields)._targetMono = (MonoBehaviour *)this;
          func_?();
        }
      }
      pCVar2 = (this->fields)._prjSwitchTranstion;
      pDVar3 = (Delegate *)func_?();
      pMVar4 = 
      MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionBegin_RTG__CameraPrjSwitchTransition__Type_
      ;
      (pDVar3->fields).method_ptr =
           MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionBegin_RTG__CameraPrjSwitchTransition__Type_
           ->virtualMethodPointer;
      (pDVar3->fields).method = pMVar4;
      (pDVar3->fields).m_target = (Object *)this;
      func_?();
      uVar5 = pMVar4->parameters_count;
      (pDVar3->fields).method_code = pDVar3;
      cVar6 = func_?();
      if ((cVar6 == '\0') || (uVar5 != 1)) {
        (pDVar3->fields).method_code = (pDVar3->fields).m_target;
        puVar7 = (pDVar3->fields).method_ptr;
      }
      else {
        puVar7 = &UNK_?;
      }
      (pDVar3->fields).invoke_impl = puVar7;
      (pDVar3->fields).extra_arg = &UNK_?;
      if (pCVar2 != (CameraPrjSwitchTransition *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        a = (pCVar2->fields).TransitionBegin;
        do {
          pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)a,pDVar3,(MethodInfo *)0x0);
          if (pDVar8 != (Delegate *)0x0) {
            pDVar9 = (Delegate *)0x0;
            if ((CameraProjectionSwitchBeginHandler__Class *)pDVar8->klass ==
                TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
              pDVar9 = pDVar8;
            }
            if (pDVar9 == (Delegate *)0x0) goto code_?;
          }
          pCVar10 = a;
          a = (CameraProjectionSwitchBeginHandler *)func_?();
        } while (a != pCVar10);
        pCVar2 = (this->fields)._prjSwitchTranstion;
        pDVar3 = (Delegate *)func_?();
        pMVar4 = 
        MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionUpate_RTG__CameraPrjSwitchTransition__Type_
        ;
        (pDVar3->fields).method_ptr =
             MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionUpate_RTG__CameraPrjSwitchTransition__Type_
             ->virtualMethodPointer;
        (pDVar3->fields).method = pMVar4;
        (pDVar3->fields).m_target = (Object *)this;
        func_?();
        uVar5 = pMVar4->parameters_count;
        (pDVar3->fields).method_code = pDVar3;
        cVar6 = func_?();
        if ((cVar6 == '\0') || (uVar5 != 1)) {
          (pDVar3->fields).method_code = (pDVar3->fields).m_target;
          puVar7 = (pDVar3->fields).method_ptr;
        }
        else {
          puVar7 = &UNK_?;
        }
        (pDVar3->fields).invoke_impl = puVar7;
        (pDVar3->fields).extra_arg = &UNK_?;
        if (pCVar2 != (CameraPrjSwitchTransition *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          a_00 = (pCVar2->fields).TransitionUpdate;
          do {
            pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)a_00,pDVar3,(MethodInfo *)0x0);
            if (pDVar8 != (Delegate *)0x0) {
              pDVar9 = (Delegate *)0x0;
              if ((CameraProjectionSwitchUpdateHandler__Class *)pDVar8->klass ==
                  TypeInfo__RTG__CameraProjectionSwitchUpdateHandler) {
                pDVar9 = pDVar8;
              }
              if (pDVar9 == (Delegate *)0x0) goto code_?;
            }
            pCVar11 = a_00;
            a_00 = (CameraProjectionSwitchUpdateHandler *)func_?();
          } while (a_00 != pCVar11);
          pDVar3 = (Delegate *)func_?();
          pMVar4 = 
          MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionEnd_RTG__CameraPrjSwitchTransition__Type_
          ;
          (pDVar3->fields).method_ptr =
               MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionEnd_RTG__CameraPrjSwitchTransition__Type_
               ->virtualMethodPointer;
          (pDVar3->fields).method = pMVar4;
          (pDVar3->fields).m_target = (Object *)this;
          func_?();
          uVar5 = pMVar4->parameters_count;
          (pDVar3->fields).method_code = pDVar3;
          cVar6 = func_?();
          if ((cVar6 == '\0') || (uVar5 != 1)) {
            (pDVar3->fields).method_code = (pDVar3->fields).m_target;
            puVar7 = (pDVar3->fields).method_ptr;
          }
          else {
            puVar7 = &UNK_?;
          }
          (pDVar3->fields).invoke_impl = puVar7;
          (pDVar3->fields).extra_arg = &UNK_?;
          if (pDVar3 != (Delegate *)0xfffffff0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pDVar8 = (pDVar3->fields).method_code;
            do {
              pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  (pDVar8,pDVar3,(MethodInfo *)0x0);
              if (pDVar9 != (Delegate *)0x0) {
                pDVar12 = (Delegate *)0x0;
                if ((CameraProjectionSwitchBeginHandler__Class *)pDVar9->klass ==
                    TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
                  pDVar12 = pDVar9;
                }
                if (pDVar12 == (Delegate *)0x0) goto code_?;
              }
              pDVar9 = (Delegate *)func_?();
              bVar13 = pDVar9 == pDVar8;
              pDVar8 = pDVar9;
              if (bVar13) {
                return;
              }
            } while( true );
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Vector2 CalculateLookAroundRotation(Single, Single) */

Vector2 Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_CalculateLookAroundRotation
                  (RTFocusCamera *this,float deviceAxisX,float deviceAxisY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._lookAroundSettings;
  if (pCVar1 != (CameraLookAroundSettings *)0x0) {
    if ((pCVar1->fields)._lookAroundMode == 0) {
      fVar2 = (pCVar1->fields)._standardLookAroundSensitivity;
    }
    else {
      fVar2 = (pCVar1->fields)._smoothLookAroundSensitivity;
    }
    fVar2 = (float)((uint)deviceAxisY ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) * fVar2
    ;
    pCVar3 = (this->fields)._lookAroundSettings;
    if ((pCVar1->fields)._invertY != 0) {
      fVar2 = fVar2 * _UNK_?;
    }
    if ((pCVar3->fields)._lookAroundMode == 0) {
      fVar4 = (pCVar3->fields)._standardLookAroundSensitivity;
    }
    else {
      fVar4 = (pCVar3->fields)._smoothLookAroundSensitivity;
    }
    fVar4 = deviceAxisX * fVar4;
    if ((((this->fields)._lookAroundSettings)->fields)._invertX != 0) {
      fVar4 = fVar4 * _UNK_?;
    }
    VVar5.y = fVar4;
    VVar5.x = fVar2;
    return VVar5;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  VVar5 = (Vector2)(*pcVar6)();
  return VVar5;
}


/* Vector2 CalculateOrbitRotation(Single, Single) */

Vector2 Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_CalculateOrbitRotation
                  (RTFocusCamera *this,float deviceAxisX,float deviceAxisY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._orbitSettings;
  if (pCVar1 != (CameraOrbitSettings *)0x0) {
    if ((pCVar1->fields)._orbitMode == 1) {
      fVar2 = (pCVar1->fields)._smoothOrbitSensitivity;
    }
    else {
      fVar2 = (pCVar1->fields)._standardOrbitSensitivity;
    }
    fVar2 = (float)((uint)deviceAxisY ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) * fVar2
    ;
    pCVar3 = (this->fields)._orbitSettings;
    if ((pCVar1->fields)._invertY != 0) {
      fVar2 = fVar2 * _UNK_?;
    }
    if ((pCVar3->fields)._orbitMode == 1) {
      fVar4 = (pCVar3->fields)._smoothOrbitSensitivity;
    }
    else {
      fVar4 = (pCVar3->fields)._standardOrbitSensitivity;
    }
    fVar4 = deviceAxisX * fVar4;
    if ((((this->fields)._orbitSettings)->fields)._invertX != 0) {
      fVar4 = fVar4 * _UNK_?;
    }
    VVar5.y = fVar4;
    VVar5.x = fVar2;
    return VVar5;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  VVar5 = (Vector2)(*pcVar6)();
  return VVar5;
}


/* Vector2 CalculatePanAmount(Single, Single) */

Vector2 Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_CalculatePanAmount
                  (RTFocusCamera *this,float deviceAxisX,float deviceAxisY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector2);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._panSettings;
  if (pCVar1 != (CameraPanSettings *)0x0) {
    if ((pCVar1->fields)._panMode == 0) {
      fVar2 = (pCVar1->fields)._standardPanSensitivity;
    }
    else {
      fVar2 = (pCVar1->fields)._smoothPanSensitivity;
    }
    fVar2 = (float)((uint)deviceAxisX ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) * fVar2
    ;
    pCVar3 = (this->fields)._panSettings;
    if ((pCVar1->fields)._invertX != 0) {
      fVar2 = fVar2 * _UNK_?;
    }
    if ((pCVar3->fields)._panMode == 0) {
      fVar4 = (pCVar3->fields)._standardPanSensitivity;
    }
    else {
      fVar4 = (pCVar3->fields)._smoothPanSensitivity;
    }
    deviceAxisY = (float)((uint)deviceAxisY ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
                  fVar4;
    if ((((this->fields)._panSettings)->fields)._invertY != 0) {
      deviceAxisY = deviceAxisY * _UNK_?;
    }
    camera = (this->fields)._targetCamera;
    worldPos = (this->fields)._lastFocusPoint;
    if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__CameraEx);
    }
    fVar4 = CameraEx::CameraEx_EstimateZoomFactorSpherical(camera,worldPos,(MethodInfo *)0x0);
    VStack_5.y = deviceAxisY * (float)((uint)fVar4 & _UNK_?);
    VStack_5.x = fVar2 * (float)((uint)fVar4 & _UNK_?);
    return VStack_5;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  VVar7 = (Vector2)(*pcVar6)();
  return VVar7;
}


/* Single CalculateScrollZoomAmount(Single) */

float Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_CalculateScrollZoomAmount
                (RTFocusCamera *this,float deviceScroll,MethodInfo *method)

{
  pRVar1 = this;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  pCVar2 = (this->fields)._zoomSettings;
  pCVar3 = (this->fields)._targetCamera;
  if (pCVar2 != (CameraZoomSettings *)0x0) {
    if ((pCVar2->fields)._zoomMode == 0) {
      if (pCVar3 == (Camera *)0x0) goto code_?;
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (pCVar3,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        fVar5 = (pCVar2->fields)._perspStandardZoomSensitivity;
      }
      else {
        fVar5 = (pCVar2->fields)._orthoStandardZoomSensitivity;
      }
    }
    else if ((pCVar2->fields)._zoomMode == 1) {
      if (pCVar3 == (Camera *)0x0) goto code_?;
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (pCVar3,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        fVar5 = (pCVar2->fields)._perspSmoothZoomSensitivity;
      }
      else {
        fVar5 = (pCVar2->fields)._orthoSmoothZoomSensitivity;
      }
    }
    else {
      fVar5 = 0.0;
    }
    pCVar2 = (this->fields)._zoomSettings;
    if (pCVar2 != (CameraZoomSettings *)0x0) {
      this = (RTFocusCamera *)(fVar5 * deviceScroll);
      if ((pCVar2->fields)._invertZoomAxis != 0) {
        this = (RTFocusCamera *)(fVar5 * deviceScroll * _UNK_?);
      }
      pCVar3 = (pRVar1->fields)._targetCamera;
      worldPos = (pRVar1->fields)._lastFocusPoint;
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__CameraEx);
      }
      fVar5 = CameraEx::CameraEx_EstimateZoomFactorSpherical(pCVar3,worldPos,(MethodInfo *)0x0);
      return fVar5 * (float)this;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  fVar7 = (float10)(*pcVar6)();
  return (float)fVar7;
}


/* Boolean CanCameraProcessInput() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_CanCameraProcessInput
               (RTFocusCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__YesNoAnswer);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._settings;
  if (pCVar1 != (CameraSettings *)0x0) {
    if (((pCVar1->fields)._canProcessInput == 0) || ((this->fields)._isDoingFocus != 0)) {
      return 0;
    }
    pCVar2 = (this->fields)._prjSwitchTranstion;
    if (pCVar2 != (CameraPrjSwitchTransition *)0x0) {
      if ((pCVar2->fields)._transitionType != 0) {
        return 0;
      }
      if ((this->fields)._isDoingRotationSwitch != 0) {
        return 0;
      }
      if ((this->fields).CanProcessInput == (CameraCanProcessInputHandler *)0x0) {
        return 1;
      }
      method_00 = (MethodInfo *)&UNK_?;
      value = (Object *)func_?(TypeInfo__RTG__YesNoAnswer);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,method_00);
      pCVar3 = (this->fields).CanProcessInput;
      if ((pCVar3 != (CameraCanProcessInputHandler *)0x0) &&
         ((*(pCVar3->fields)._._.invoke_impl)
                    ((pCVar3->fields)._._.method_code,value,(pCVar3->fields)._._.method),
         value != (Object *)0x0)) {
        if (*(char *)&value[1].klass != '\0') {
          return *(char *)((int)&value[1].klass + 1) == '\0';
        }
        return 0;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Boolean CanUseMouseScrollWheel() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_CanUseMouseScrollWheel
               (RTFocusCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__YesNoAnswer);
    cRam_? = '\x01';
  }
  if ((this->fields).CanUseScrollWheel != (CameraCanUseScrollWheelHandler *)0x0) {
    method_00 = TypeInfo__RTG__YesNoAnswer;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    pCVar1 = (this->fields).CanUseScrollWheel;
    if (pCVar1 != (CameraCanUseScrollWheelHandler *)0x0) {
      (*(pCVar1->fields)._._.invoke_impl)
                ((pCVar1->fields)._._.method_code,value,(pCVar1->fields)._._.method);
      if (value != (Object *)0x0) {
        if (*(char *)&value[1].klass == '\0') {
          return 0;
        }
        return *(char *)((int)&value[1].klass + 1) == '\0';
      }
    }
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  return 1;
}


/* IEnumerator DoConstantFocus(CameraFocus+Data) */

IEnumerator *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_DoConstantFocus
          (RTFocusCamera *this,CameraFocus_Data *focusData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTFocusCamera___DoConstantFocus_d__135);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__RTFocusCamera___DoConstantFocus_d__135;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)focusData;
  func_?(&value[2].monitor,focusData);
  return (IEnumerator *)value;
}


/* IEnumerator DoConstantRotationSwitch(Quaternion) */

IEnumerator *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_DoConstantRotationSwitch
          (RTFocusCamera *this,Quaternion targetRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTFocusCamera___DoConstantRotationSwitch_d__133);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__RTFocusCamera___DoConstantRotationSwitch_d__133;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)targetRotation.x;
  value[3].klass = (Object__Class *)targetRotation.y;
  value[3].monitor = (MonitorData *)targetRotation.z;
  value[4].klass = (Object__Class *)targetRotation.w;
  return (IEnumerator *)value;
}


/* IEnumerator DoSmoothFocus(CameraFocus+Data) */

IEnumerator *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_DoSmoothFocus
          (RTFocusCamera *this,CameraFocus_Data *focusData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothFocus_d__136);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__RTFocusCamera___DoSmoothFocus_d__136;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)focusData;
  func_?(&value[2].monitor,focusData);
  return (IEnumerator *)value;
}


/* IEnumerator DoSmoothLookAround(Single, Single) */

IEnumerator *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_DoSmoothLookAround
          (RTFocusCamera *this,float deviceAxisX,float deviceAxisY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothLookAround_d__130);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__RTFocusCamera___DoSmoothLookAround_d__130;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)deviceAxisX;
  value[3].klass = (Object__Class *)deviceAxisY;
  return (IEnumerator *)value;
}


/* IEnumerator DoSmoothOrbit(Single, Single) */

IEnumerator *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_DoSmoothOrbit
          (RTFocusCamera *this,float deviceAxisX,float deviceAxisY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothOrbit_d__131);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__RTFocusCamera___DoSmoothOrbit_d__131;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)deviceAxisX;
  value[3].klass = (Object__Class *)deviceAxisY;
  return (IEnumerator *)value;
}


/* IEnumerator DoSmoothPan(Single, Single) */

IEnumerator *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_DoSmoothPan
          (RTFocusCamera *this,float deviceAxisX,float deviceAxisY,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothPan_d__129);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__RTFocusCamera___DoSmoothPan_d__129;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)deviceAxisX;
  value[3].klass = (Object__Class *)deviceAxisY;
  return (IEnumerator *)value;
}


/* IEnumerator DoSmoothRotationSwitch(Quaternion) */

IEnumerator *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_DoSmoothRotationSwitch
          (RTFocusCamera *this,Quaternion targetRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothRotationSwitch_d__134);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__RTFocusCamera___DoSmoothRotationSwitch_d__134;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)targetRotation.x;
  value[3].klass = (Object__Class *)targetRotation.y;
  value[3].monitor = (MonitorData *)targetRotation.z;
  value[4].klass = (Object__Class *)targetRotation.w;
  return (IEnumerator *)value;
}


/* IEnumerator DoSmoothZoom(Single) */

IEnumerator *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_DoSmoothZoom
          (RTFocusCamera *this,float deviceScroll,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothZoom_d__132);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__RTG__RTFocusCamera___DoSmoothZoom_d__132;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)deviceScroll;
  return (IEnumerator *)value;
}


/* Void Focus(List`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_Focus
               (RTFocusCamera *this,List_1_UnityEngine_GameObject_ *gameObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__ObjectBounds);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->oneVector).x;
  uVar3 = (pVVar1->oneVector).y;
  fVar4 = (float)uVar2 * _UNK_?;
  fVar5 = (float)uVar3 * _UNK_?;
  fVar6 = (pVVar1->oneVector).z * _UNK_?;
  if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__ObjectBounds);
  }
  queryConfig.NoVolumeSize.x = fVar4;
  queryConfig.ObjectTypes = 7;
  queryConfig.NoVolumeSize.y = fVar5;
  queryConfig.NoVolumeSize.z = fVar6;
  pAVar7 = ObjectBounds::ObjectBounds_CalcObjectCollectionWorldAABB
                     ((AABB *)&stack0xffffffc4,(IEnumerable_1_UnityEngine_GameObject_ *)gameObjects,
                      queryConfig,(MethodInfo *)0x0);
  if ((char)*(undefined4 *)&pAVar7->_isValid != '\0') {
    RTFocusCamera_Focus_1(this,*pAVar7,(MethodInfo *)0x0);
  }
  return;
}


/* Void Focus(AABB) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_Focus_1
               (RTFocusCamera *this,AABB focusAABB,MethodInfo *method)

{
  if ((this->fields)._isDoingFocus != 0) {
    return;
  }
  pCVar1 = (this->fields)._prjSwitchTranstion;
  if (pCVar1 != (CameraPrjSwitchTransition *)0x0) {
    if ((pCVar1->fields)._transitionType != 0) {
      return;
    }
    if ((this->fields)._isDoingRotationSwitch != 0) {
      return;
    }
    if (focusAABB._isValid == 0) {
      return;
    }
    RTFocusCamera_StopCamTransform(this,(MethodInfo *)0x0);
    pCVar2 = CameraFocus::CameraFocus_CalculateFocusData
                       ((this->fields)._targetCamera,focusAABB,(this->fields)._focusSettings,
                        (MethodInfo *)0x0);
    pCVar3 = (this->fields)._focusSettings;
    if (pCVar3 != (CameraFocusSettings *)0x0) {
      if ((pCVar3->fields)._focusMode != 0) {
        if ((pCVar3->fields)._focusMode == 1) {
          method_00 = (RTFocusCamera_DoSmoothFocus_d_136__Class *)
                      TypeInfo__RTG__RTFocusCamera___DoConstantFocus_d__135;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
            method_00 = (RTFocusCamera_DoSmoothFocus_d_136__Class *)
                        TypeInfo__RTG__RTFocusCamera___DoConstantFocus_d__135;
          }
        }
        else {
          if ((pCVar3->fields)._focusMode != 2) {
            return;
          }
          method_00 = TypeInfo__RTG__RTFocusCamera___DoSmoothFocus_d__136;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
            method_00 = TypeInfo__RTG__RTFocusCamera___DoSmoothFocus_d__136;
          }
        }
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
        value[1].klass = (Object__Class *)0x0;
        value[2].klass = (Object__Class *)this;
        func_?();
        value[2].monitor = (MonitorData *)pCVar2;
        func_?();
        (this->fields)._focusCrtn = (IEnumerator *)value;
        func_?();
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
        return;
      }
      if ((pCVar2 != (CameraFocus_Data *)0x0) &&
         (pTVar4 = (this->fields)._targetTransform, pTVar4 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar4,(pCVar2->fields)._cameraWorldPosition,(MethodInfo *)0x0);
        pTVar4 = (this->fields)._targetTransform;
        if (pTVar4 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                    ((Vector3 *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
          fVar5 = (float10)func_?();
          (this->fields)._focusPointOffset = (float)fVar5;
          fVar6 = (pCVar2->fields)._focusPoint.y;
          fVar7 = (pCVar2->fields)._focusPoint.z;
          (this->fields)._lastFocusPoint.x = (pCVar2->fields)._focusPoint.x;
          (this->fields)._lastFocusPoint.y = fVar6;
          (this->fields)._lastFocusPoint.z = fVar7;
          RTFocusCamera_AdjustOrthoSizeForFocusPt(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Vector3 GetFocusPoint() */

Vector3 * Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_GetFocusPoint
                    (Vector3 *__return_storage_ptr__,RTFocusCamera *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._targetTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_3,pTVar1,(MethodInfo *)0x0);
    uVar4 = pVVar2->x;
    uVar5 = pVVar2->y;
    fVar6 = pVVar2->z;
    pTVar1 = (this->fields)._targetTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
      uVar7 = pVVar2->x;
      uVar8 = pVVar2->y;
      fVar9 = pVVar2->z;
      fVar10 = (this->fields)._focusPointOffset;
      __return_storage_ptr__->x = (float)uVar4 + (float)uVar7 * fVar10;
      __return_storage_ptr__->y = (float)uVar5 + (float)uVar8 * fVar10;
      __return_storage_ptr__->z = fVar6 + fVar9 * fVar10;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar11)();
  return pVVar2;
}


/* Void GetVisibleObjects(List`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_GetVisibleObjects
               (RTFocusCamera *this,List_1_UnityEngine_GameObject_ *visibleObjects,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    func_?(&TypeInfo__RTG__CameraViewVolume);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::GameObject>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    cRam_? = '\x01';
  }
  if (visibleObjects != (List_1_UnityEngine_GameObject_ *)0x0) {
    length = (visibleObjects->fields)._size;
    piVar1 = &(visibleObjects->fields)._version;
    *piVar1 = *piVar1 + 1;
    (visibleObjects->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(visibleObjects->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if ((this->fields)._isObjectVisibilityDirty != 0) {
      camera = (this->fields)._targetCamera;
      this_00 = (CameraViewVolume *)func_?(camera);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Plane);
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      camera_00 = (Camera *)0x8;
      pVVar2 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3);
      (this_00->fields)._worldPoints = pVVar2;
      func_?(&this_00->fields,pVVar2);
      pPVar3 = (Plane__Array *)func_?(TypeInfo__UnityEngine__Plane,6);
      (this_00->fields)._worldPlanes = pPVar3;
      method_00 = (MethodInfo *)&UNK_?;
      func_?(&(this_00->fields)._worldPlanes,pPVar3);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector2);
        cRam_? = '\x01';
      }
      fVar4 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
      (this_00->fields)._farPlaneSize.x =
           (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
      (this_00->fields)._farPlaneSize.y = fVar4;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector2);
        cRam_? = '\x01';
      }
      fVar4 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
      (this_00->fields)._nearPlaneSize.x =
           (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
      (this_00->fields)._nearPlaneSize.y = fVar4;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)this_00,ExceptionArgument__Enum_obj,method_00);
      CameraViewVolume::CameraViewVolume_FromCamera(this_00,camera,(MethodInfo *)0x0);
      pLVar5 = (this->fields)._visibleObjects;
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__CameraEx);
      }
      CameraEx::CameraEx_GetVisibleObjects(camera_00,this_00,pLVar5,(MethodInfo *)0x0);
      (this->fields)._isObjectVisibilityDirty = 0;
    }
    pLVar5 = (this->fields)._visibleObjects;
    if (pLVar5 != (List_1_UnityEngine_GameObject_ *)0x0) {
      if ((pLVar5->fields)._size != 0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddRange
                  ((List_1_System_Object_ *)visibleObjects,(IEnumerable_1_System_Object_ *)pLVar5,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::GameObject>_
                  );
      }
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HandleMouseAndKeyboardInput() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_HandleMouseAndKeyboardInput
               (RTFocusCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._moveSettings;
  if (pCVar1 != (CameraMoveSettings *)0x0) {
    pCVar2 = (CameraPrjSwitchTransition *)(pCVar1->fields)._moveSpeed;
    fVar3 = (this->fields)._currentAcceleration;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar4 = fVar4 * (fVar3 + (float)pCVar2);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pBVar5 = (this->fields)._moveDirFlags;
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar7 = (pVVar6->zeroVector).x;
    pTVar8 = (Transform *)(pVVar6->zeroVector).y;
    fVar3 = (pVVar6->zeroVector).z;
    pCVar9 = (this->fields)._hotkeys;
    if (((pCVar9 != (CameraHotkeys *)0x0) &&
        (pHVar10 = (pCVar9->fields)._moveForward, pHVar10 != (Hotkeys *)0x0)) &&
       (bVar11 = Hotkeys::Hotkeys_IsActive(pHVar10,1,(MethodInfo *)0x0),
       pBVar5 != (Boolean__Array *)0x0)) {
      if (pBVar5->max_length < 5) goto code_?;
      pBVar5->vector[4] = bVar11;
      pBVar5 = (this->fields)._moveDirFlags;
      if (pBVar5 != (Boolean__Array *)0x0) {
        if (pBVar5->max_length < 5) goto code_?;
        if (pBVar5->vector[4] == 0) {
          pCVar9 = (this->fields)._hotkeys;
          if ((pCVar9 == (CameraHotkeys *)0x0) ||
             (pHVar10 = (pCVar9->fields)._moveBack, pHVar10 == (Hotkeys *)0x0))
          goto code_?;
          bVar11 = Hotkeys::Hotkeys_IsActive(pHVar10,1,(MethodInfo *)0x0);
        }
        else {
          bVar11 = 0;
        }
        if (pBVar5->max_length < 6) goto code_?;
        pBVar5->vector[5] = bVar11;
        pCVar9 = (this->fields)._hotkeys;
        pBVar5 = (this->fields)._moveDirFlags;
        if (((pCVar9 != (CameraHotkeys *)0x0) &&
            (pHVar10 = (pCVar9->fields)._strafeLeft, pHVar10 != (Hotkeys *)0x0)) &&
           (bVar11 = Hotkeys::Hotkeys_IsActive(pHVar10,1,(MethodInfo *)0x0),
           pBVar5 != (Boolean__Array *)0x0)) {
          if (pBVar5->max_length == 0) goto code_?;
          pBVar5->vector[0] = bVar11;
          pBVar5 = (this->fields)._moveDirFlags;
          if (pBVar5 != (Boolean__Array *)0x0) {
            if (pBVar5->max_length == 0) goto code_?;
            if (pBVar5->vector[0] == 0) {
              pCVar9 = (this->fields)._hotkeys;
              if ((pCVar9 == (CameraHotkeys *)0x0) ||
                 (pHVar10 = (pCVar9->fields)._strafeRight, pHVar10 == (Hotkeys *)0x0))
              goto code_?;
              bVar11 = Hotkeys::Hotkeys_IsActive(pHVar10,1,(MethodInfo *)0x0);
            }
            else {
              bVar11 = 0;
            }
            if (pBVar5->max_length < 2) goto code_?;
            pBVar5->vector[1] = bVar11;
            pCVar9 = (this->fields)._hotkeys;
            pBVar5 = (this->fields)._moveDirFlags;
            if (((pCVar9 != (CameraHotkeys *)0x0) &&
                (method_01 = (RTFocusCamera *)(pCVar9->fields)._moveUp,
                method_01 != (RTFocusCamera *)0x0)) &&
               (bVar11 = Hotkeys::Hotkeys_IsActive((Hotkeys *)method_01,1,(MethodInfo *)0x0),
               pBVar5 != (Boolean__Array *)0x0)) {
              if (pBVar5->max_length < 3) goto code_?;
              pBVar5->vector[2] = bVar11;
              pBVar5 = (this->fields)._moveDirFlags;
              if (pBVar5 != (Boolean__Array *)0x0) {
                if (pBVar5->max_length < 3) goto code_?;
                if (pBVar5->vector[2] == 0) {
                  pCVar9 = (this->fields)._hotkeys;
                  if ((pCVar9 == (CameraHotkeys *)0x0) ||
                     (pHVar10 = (pCVar9->fields)._moveDown, pHVar10 == (Hotkeys *)0x0))
                  goto code_?;
                  bVar11 = Hotkeys::Hotkeys_IsActive(pHVar10,1,(MethodInfo *)0x0);
                }
                else {
                  bVar11 = 0;
                }
                if (pBVar5->max_length < 4) goto code_?;
                pBVar5->vector[3] = bVar11;
                pBVar5 = (this->fields)._moveDirFlags;
                if (pBVar5 != (Boolean__Array *)0x0) {
                  if (pBVar5->max_length < 5) goto code_?;
                  fVar12 = fVar4;
                  if (pBVar5->vector[4] == 0) {
                    if (pBVar5->max_length < 6) goto code_?;
                    pCVar2 = (CameraPrjSwitchTransition *)0x0;
                    if (pBVar5->vector[5] != 0) {
                      fVar12 = (float)((uint)fVar4 ^
                                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                      );
                      goto code_?;
                    }
                  }
                  else {
code_?:
                    method_01 = this;
                    RTFocusCamera_Zoom(this,fVar12,(MethodInfo *)0x0);
                    pCVar2 = (CameraPrjSwitchTransition *)0x1;
                  }
                  pBVar5 = (this->fields)._moveDirFlags;
                  if (pBVar5 != (Boolean__Array *)0x0) {
                    if (pBVar5->max_length == 0) goto code_?;
                    if (pBVar5->vector[0] == 0) {
                      if (pBVar5->max_length < 2) goto code_?;
                      pCStack_13 = (Camera *)uVar7;
                      if (pBVar5->vector[1] != 0) {
                        pTVar14 = (this->fields)._targetTransform;
                        if (pTVar14 == (Transform *)0x0) goto code_?;
                        method_01 = (RTFocusCamera *)&stack0xffffffc4;
                        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_right((Vector3 *)method_01,pTVar14,(MethodInfo *)0x0
                                                     );
                        uVar16 = pVVar15->x;
                        uVar17 = pVVar15->y;
                        pCStack_13 = (Camera *)((float)uVar7 + (float)uVar16 * fVar4);
                        pTVar8 = (Transform *)((float)pTVar8 + (float)uVar17 * fVar4);
                        fVar3 = fVar3 + pVVar15->z * fVar4;
                      }
                    }
                    else {
                      pTVar14 = (this->fields)._targetTransform;
                      if (pTVar14 == (Transform *)0x0) goto code_?;
                      method_01 = (RTFocusCamera *)&stack0xffffffc4;
                      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_right((Vector3 *)method_01,pTVar14,(MethodInfo *)0x0);
                      uVar18 = pVVar15->x;
                      uVar19 = pVVar15->y;
                      pCStack_13 = (Camera *)((float)uVar7 - (float)uVar18 * fVar4);
                      pTVar8 = (Transform *)((float)pTVar8 - (float)uVar19 * fVar4);
                      fVar3 = fVar3 - pVVar15->z * fVar4;
                    }
                    pBVar5 = (this->fields)._moveDirFlags;
                    if (pBVar5 != (Boolean__Array *)0x0) {
                      if (pBVar5->max_length < 3) goto code_?;
                      if (pBVar5->vector[2] == 0) {
                        if (pBVar5->max_length < 4) goto code_?;
                        if (pBVar5->vector[3] != 0) {
                          pTVar14 = (this->fields)._targetTransform;
                          if (pTVar14 == (Transform *)0x0) goto code_?;
                          method_01 = (RTFocusCamera *)&stack0xffffffc4;
                          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_up((Vector3 *)method_01,pTVar14,(MethodInfo *)0x0)
                          ;
                          uVar20 = pVVar15->x;
                          uVar21 = pVVar15->y;
                          pCStack_13 = (Camera *)((float)pCStack_13 - (float)uVar20 * fVar4);
                          pTVar8 = (Transform *)((float)pTVar8 - (float)uVar21 * fVar4);
                          fVar3 = fVar3 - pVVar15->z * fVar4;
                        }
                      }
                      else {
                        pTVar14 = (this->fields)._targetTransform;
                        if (pTVar14 == (Transform *)0x0) goto code_?;
                        method_01 = (RTFocusCamera *)&stack0xffffffc4;
                        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_up((Vector3 *)method_01,pTVar14,(MethodInfo *)0x0);
                        uVar22 = pVVar15->x;
                        uVar23 = pVVar15->y;
                        pCStack_13 = (Camera *)((float)pCStack_13 + (float)uVar22 * fVar4);
                        pTVar8 = (Transform *)((float)pTVar8 + (float)uVar23 * fVar4);
                        fVar3 = fVar3 + pVVar15->z * fVar4;
                      }
                      if ((float)pTVar8 * (float)pTVar8 + (float)pCStack_13 * (float)pCStack_13 +
                          fVar3 * fVar3 == 0.0) {
                        bVar24 = false;
                      }
                      else {
                        pTVar14 = (this->fields)._targetTransform;
                        bVar24 = true;
                        if (pTVar14 == (Transform *)0x0) goto code_?;
                        pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_position
                                            ((Vector3 *)&stack0xffffffc4,pTVar14,(MethodInfo *)0x0);
                        uVar25 = pVVar15->x;
                        uVar26 = pVVar15->y;
                        method_01 = (RTFocusCamera *)&UNK_?;
                        value.y = (float)uVar26 + (float)pTVar8;
                        value.x = (float)uVar25 + (float)pCStack_13;
                        value.z = pVVar15->z + fVar3;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                  (pTVar14,value,(MethodInfo *)0x0);
                      }
                      if (bVar24 || pCVar2 != (CameraPrjSwitchTransition *)0x0) {
                        pCVar1 = (this->fields)._moveSettings;
                        if (pCVar1 != (CameraMoveSettings *)0x0) {
                          fVar3 = (pCVar1->fields)._accelerationRate;
                          pCVar27 = (CameraCanUseScrollWheelHandler *)
                                    (this->fields)._lastFocusPoint.z;
                          this_00 = (this->fields)._targetCamera;
                          uVar28._0_4_ = (CameraProjectionSwitchBeginHandler *)
                                         (this->fields)._lastFocusPoint.x;
                          uVar28._4_4_ = (CameraCanProcessInputHandler *)
                                         (this->fields)._lastFocusPoint.y;
                          if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__RTG__CameraEx);
                          }
                          if (this_00 != (Camera *)0x0) {
                            method_01 = (RTFocusCamera *)&UNK_?;
                            bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                     Camera_get_orthographic(this_00,(MethodInfo *)0x0);
                            if (bVar11 == 0) {
                              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                       Component_get_transform
                                                 ((Component *)this_00,(MethodInfo *)0x0);
                              if (pTVar8 == (Transform *)0x0) goto code_?;
                              pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_forward
                                                  ((Vector3 *)&stack0xffffffd0,pTVar8,
                                                   (MethodInfo *)0x0);
                              uVar29._0_4_ = (RTFocusCamera__Class *)pVVar15->x;
                              uVar29._4_4_ = (MonitorData *)pVVar15->y;
                              BVar30._._.m_CachedPtr = (Component__Fields)pVVar15->z;
                              pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_position
                                                  ((Vector3 *)&stack0xffffffb8,pTVar8,
                                                   (MethodInfo *)0x0);
                              uVar31 = pVVar15->x;
                              uVar32 = pVVar15->y;
                              pCVar2 = (CameraPrjSwitchTransition *)
                                        ((float)SUB84(uVar28,4) - (float)uVar32);
                              pWVar33 = (WorldTransformSnapshot *)((float)pCVar27 - pVVar15->z);
                              iVar34 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                       Camera_get_pixelHeight(this_00,(MethodInfo *)0x0);
                              pWVar33 = (WorldTransformSnapshot *)
                                        ((float)(RTFocusCamera__Class *)uVar29 *
                                         ((float)(CameraProjectionSwitchBeginHandler *)uVar28 -
                                         (float)uVar31) + (float)SUB84(uVar29,4) * (float)pCVar2 +
                                        (float)BVar30._._.m_CachedPtr * (float)pWVar33);
                              fVar4 = (float)iVar34 * _UNK_? * _UNK_?;
                              fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                       Camera_get_fieldOfView(this_00,(MethodInfo *)0x0);
                              fVar4 = (float)pWVar33 / (fVar4 / fVar12);
                            }
                            else {
                              fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                       Camera_get_orthographicSize(this_00,(MethodInfo *)0x0);
                              iVar34 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                       Camera_get_pixelHeight(this_00,(MethodInfo *)0x0);
                              fVar4 = (fVar4 + fVar4) / ((float)iVar34 * _UNK_?);
                            }
                            fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::
                                     Time_1_get_deltaTime((MethodInfo *)0x0);
                            (this->fields)._currentAcceleration =
                                 (float)((uint)fVar4 & _UNK_?) * fVar3 * fVar12 +
                                 (this->fields)._currentAcceleration;
                            goto code_?;
                          }
                        }
                      }
                      else {
                        (this->fields)._currentAcceleration = 0.0;
code_?:
                        pCVar2 = (CameraPrjSwitchTransition *)
                                  RTInput::RTInput_MouseAxisX((MethodInfo *)0x0);
                        deviceAxisY = (Object__Class *)
                                      RTInput::RTInput_MouseAxisY((MethodInfo *)0x0);
                        if (((float)pCVar2 == 0.0) && ((float)deviceAxisY == 0.0))
                        goto code_?;
                        pCVar35 = (this->fields)._panSettings;
                        if (pCVar35 != (CameraPanSettings *)0x0) {
                          if ((pCVar35->fields)._isPanningEnabled == 0) {
code_?:
                            pCVar36 = (this->fields)._orbitSettings;
                            if (pCVar36 != (CameraOrbitSettings *)0x0) {
                              if ((pCVar36->fields)._isOrbitEnabled == 0) {
code_?:
                                pCVar37 = (this->fields)._lookAroundSettings;
                                if (pCVar37 != (CameraLookAroundSettings *)0x0) {
                                  if ((pCVar37->fields)._isLookAroundEnabled != 0) {
                                    pCVar9 = (this->fields)._hotkeys;
                                    if ((pCVar9 == (CameraHotkeys *)0x0) ||
                                       (method_01 = (RTFocusCamera *)(pCVar9->fields)._lookAround,
                                       method_01 == (RTFocusCamera *)0x0)) goto code_?;
                                    bVar11 = Hotkeys::Hotkeys_IsActive
                                                       ((Hotkeys *)method_01,1,(MethodInfo *)0x0);
                                    if (bVar11 != 0) {
                                      pCVar37 = (this->fields)._lookAroundSettings;
                                      if (pCVar37 == (CameraLookAroundSettings *)0x0)
                                      goto code_?;
                                      if ((pCVar37->fields)._lookAroundMode != 0) {
                                        RTFocusCamera_StopCamTransform(this,(MethodInfo *)0x0);
                                        method_02 = (RTFocusCamera_DoSmoothOrbit_d_131__Class *)
                                                                                                        
                                                  TypeInfo__RTG__RTFocusCamera___DoSmoothLookAround_d__130
                                        ;
                                        if (cRam_? == '\0') {
                                          func_?();
                                          cRam_? = '\x01';
                                          method_02 = (RTFocusCamera_DoSmoothOrbit_d_131__Class *)
                                                                                                            
                                                  TypeInfo__RTG__RTFocusCamera___DoSmoothLookAround_d__130
                                          ;
                                        }
                                        goto code_?;
                                      }
                                      VVar38 = RTFocusCamera_CalculateLookAroundRotation
                                                         (this,(float)pCVar2,(float)deviceAxisY,
                                                          (MethodInfo *)0x0);
                                      RTFocusCamera_LookAround
                                                (this,(float)VVar38.x,fVar3,(MethodInfo *)0x0);
                                    }
                                  }
code_?:
                                  if (cRam_? == '\0') {
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  if ((this->fields).CanUseScrollWheel !=
                                      (CameraCanUseScrollWheelHandler *)0x0) {
                                    pOVar39 = (Object *)func_?();
                                    mscorlib.dll::System::ThrowHelper::
                                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                              (pOVar39,ExceptionArgument__Enum_obj,
                                               (MethodInfo *)method_01);
                                    pCVar27 = (this->fields).CanUseScrollWheel;
                                    if ((pCVar27 == (CameraCanUseScrollWheelHandler *)0x0) ||
                                       ((*(pCVar27->fields)._._.invoke_impl)
                                                  ((pCVar27->fields)._._.method_code,pOVar39,
                                                   (pCVar27->fields)._._.method),
                                       pOVar39 == (Object *)0x0)) goto code_?;
                                    if (*(char *)&pOVar39[1].klass == '\0') {
                                      bVar24 = false;
                                    }
                                    else {
                                      bVar24 = *(char *)((int)&pOVar39[1].klass + 1) == '\0';
                                    }
                                    if (!bVar24) {
                                      return;
                                    }
                                  }
                                  fVar3 = RTInput::RTInput_MouseScroll((MethodInfo *)0x0);
                                  if (fVar3 == 0.0) {
                                    return;
                                  }
                                  pCVar40 = (this->fields)._zoomSettings;
                                  if (pCVar40 != (CameraZoomSettings *)0x0) {
                                    if ((pCVar40->fields)._isZoomEnabled == 0) {
                                      return;
                                    }
                                    if ((pCVar40->fields)._zoomMode != 0) {
                                      RTFocusCamera_StopCamTransform(this,(MethodInfo *)0x0);
                                      if (cRam_? == '\0') {
                                        func_?();
                                        cRam_? = '\x01';
                                      }
                                      method_00 = TypeInfo__RTG__RTFocusCamera___DoSmoothZoom_d__132
                                      ;
                                      pOVar39 = (Object *)func_?();
                                      mscorlib.dll::System::ThrowHelper::
                                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                                (pOVar39,ExceptionArgument__Enum_obj,
                                                 (MethodInfo *)method_00);
                                      pOVar39[1].klass = (Object__Class *)0x0;
                                      pOVar39[2].klass = (Object__Class *)this;
                                      func_?();
                                      pOVar39[2].monitor = (MonitorData *)this;
                                      (this->fields)._genricCamTransformCrtn =
                                           (IEnumerator *)pOVar39;
                                      func_?();
                                      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                                      MonoBehaviour_StartCoroutine_Auto
                                                ((MonoBehaviour *)this,(IEnumerator *)pOVar39,
                                                 (MethodInfo *)0x0);
                                      return;
                                    }
                                    fVar3 = RTFocusCamera_CalculateScrollZoomAmount
                                                       (this,fVar3,(MethodInfo *)0x0);
                                    RTFocusCamera_Zoom(this,fVar3,(MethodInfo *)0x0);
                                    return;
                                  }
                                }
                              }
                              else {
                                pCVar9 = (this->fields)._hotkeys;
                                if ((pCVar9 != (CameraHotkeys *)0x0) &&
                                   (method_01 = (RTFocusCamera *)(pCVar9->fields)._orbit,
                                   method_01 != (RTFocusCamera *)0x0)) {
                                  bVar11 = Hotkeys::Hotkeys_IsActive
                                                     ((Hotkeys *)method_01,1,(MethodInfo *)0x0);
                                  if (bVar11 == 0) goto code_?;
                                  pCVar36 = (this->fields)._orbitSettings;
                                  if (pCVar36 != (CameraOrbitSettings *)0x0) {
                                    if ((pCVar36->fields)._orbitMode == 0) {
                                      VVar38 = RTFocusCamera_CalculateOrbitRotation
                                                         (this,(float)pCVar2,(float)deviceAxisY,
                                                          (MethodInfo *)0x0);
                                      RTFocusCamera_Orbit(this,(float)VVar38.x,fVar3,
                                                          (MethodInfo *)0x0);
                                      goto code_?;
                                    }
                                    RTFocusCamera_StopCamTransform(this,(MethodInfo *)0x0);
                                    method_02 = TypeInfo__RTG__RTFocusCamera___DoSmoothOrbit_d__131;
                                    if (cRam_? == '\0') {
                                      func_?();
                                      cRam_? = '\x01';
                                      method_02 = 
                                      TypeInfo__RTG__RTFocusCamera___DoSmoothOrbit_d__131;
                                    }
                                    goto code_?;
                                  }
                                }
                              }
                            }
                          }
                          else {
                            pCVar9 = (this->fields)._hotkeys;
                            if ((pCVar9 != (CameraHotkeys *)0x0) &&
                               (pHVar10 = (pCVar9->fields)._pan, pHVar10 != (Hotkeys *)0x0)) {
                              bVar11 = Hotkeys::Hotkeys_IsActive(pHVar10,1,(MethodInfo *)0x0);
                              if (bVar11 == 0) goto code_?;
                              pCVar35 = (this->fields)._panSettings;
                              if (pCVar35 == (CameraPanSettings *)0x0) goto code_?;
                              if ((pCVar35->fields)._panMode == 0) {
                                VVar38 = RTFocusCamera_CalculatePanAmount
                                                   (this,(float)pCVar2,(float)deviceAxisY,
                                                    (MethodInfo *)0x0);
                                RTFocusCamera_Pan(this,VVar38,(MethodInfo *)0x0);
                                goto code_?;
                              }
                              RTFocusCamera_StopCamTransform(this,(MethodInfo *)0x0);
                              method_02 = (RTFocusCamera_DoSmoothOrbit_d_131__Class *)
                                          TypeInfo__RTG__RTFocusCamera___DoSmoothPan_d__129;
                              if (cRam_? == '\0') {
                                func_?();
                                cRam_? = '\x01';
                                method_02 = (RTFocusCamera_DoSmoothOrbit_d_131__Class *)
                                            TypeInfo__RTG__RTFocusCamera___DoSmoothPan_d__129;
                              }
code_?:
                              pOVar39 = (Object *)func_?();
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                        (pOVar39,ExceptionArgument__Enum_obj,(MethodInfo *)method_02
                                        );
                              pOVar39[1].klass = (Object__Class *)0x0;
                              pOVar39[2].klass = (Object__Class *)this;
                              func_?();
                              pOVar39[2].monitor = (MonitorData *)pCVar2;
                              pOVar39[3].klass = deviceAxisY;
                              (this->fields)._genricCamTransformCrtn = (IEnumerator *)pOVar39;
                              func_?();
                              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                              MonoBehaviour_StartCoroutine_Auto
                                        ((MonoBehaviour *)this,(IEnumerator *)pOVar39,
                                         (MethodInfo *)0x0);
                              goto code_?;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
  return;
}


/* Boolean IsViewportHoveredByDevice() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_IsViewportHoveredByDevice
               (RTFocusCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__IInputDevice);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
  }
  pOVar1 = MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                     (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
  if ((pOVar1 != (Object *)0x0) && (pOVar2 = pOVar1[2].klass, pOVar2 != (Object__Class *)0x0)) {
    pIVar3 = (pOVar2->_0).image;
    uVar4 = 0;
    uVar5 = *(ushort *)((int)&pIVar3[4].nameNoExt + 2);
    if (uVar5 != 0) {
      do {
        if (*(IInputDevice__Class **)(pIVar3[2].name + (uint)uVar4 * 8) ==
            TypeInfo__RTG__IInputDevice) {
          pIVar3 = (pOVar2->_0).image;
          ppIVar6 = &pIVar3[5].nameToClassHashTable +
                     *(int *)(pIVar3[2].name + (uint)uVar4 * 8 + 4) * 2;
          goto code_?;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    ppIVar6 = (Il2CppNameToTypeHandleHashTable **)
               func_?(pOVar2,TypeInfo__RTG__IInputDevice,7);
code_?:
    puVar7 = (ulonglong *)
              (*(code *)*ppIVar6)(&VStack_8,pOVar2,(Il2CppCodeGenModule *)ppIVar6[1]);
    uVar9 = *puVar7;
    fStack_10 = (float)uVar9;
    VStack_8.x = fStack_10;
    fStack_11 = (float)(uVar9 >> 0x20);
    VStack_8.y = fStack_11;
    this_00 = (this->fields)._targetCamera;
    VStack_8.z = 0.0;
    if (this_00 != (Camera *)0x0) {
      position.z = 0.0;
      position.x = (float)(int)uVar9;
      position.y = (float)(int)(uVar9 >> 0x20);
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                          (&VStack_8,this_00,position,(MethodInfo *)0x0);
      uVar13 = pVVar12->x;
      uVar14 = pVVar12->y;
      if (((0.0 <= (float)uVar13) && ((float)uVar13 <= _UNK_?)) && (0.0 <= (float)uVar14)) {
        return (float)uVar14 <= _UNK_?;
      }
      return 0;
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  bVar16 = (*pcVar15)();
  return bVar16;
}


/* Void LookAround(Single, Single) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_LookAround
               (RTFocusCamera *this,float degreesLocalX,float degreesWorldY,MethodInfo *method)

{
  pTVar1 = (this->fields)._targetTransform;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
              (pTVar1,TypeInfo__UnityEngine__Vector3->static_fields->upVector,degreesWorldY,
               Space__Enum_World,(MethodInfo *)0x0);
    pTVar1 = (this->fields)._targetTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         ((Vector3 *)&puStack_3,pTVar1,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                (pTVar1,*pVVar2,degreesLocalX,Space__Enum_World,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnPrjSwitchTransitionBegin(CameraPrjSwitchTransition+Type) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_OnPrjSwitchTransitionBegin
               (RTFocusCamera *this,CameraPrjSwitchTransition_Type__Enum transitionType,
               MethodInfo *method)

{
  if ((this->fields).PrjSwitchTransitionBegin != (CameraProjectionSwitchBeginHandler *)0x0) {
    pCVar1 = (this->fields).PrjSwitchTransitionBegin;
    (*(pCVar1->fields)._._.invoke_impl)
              ((pCVar1->fields)._._.method_code,transitionType,(pCVar1->fields)._._.method);
  }
  return;
}


/* Void OnPrjSwitchTransitionEnd(CameraPrjSwitchTransition+Type) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_OnPrjSwitchTransitionEnd
               (RTFocusCamera *this,CameraPrjSwitchTransition_Type__Enum transitionType,
               MethodInfo *method)

{
  if ((this->fields).PrjSwitchTransitionEnd != (CameraProjectionSwitchBeginHandler *)0x0) {
    pCVar1 = (this->fields).PrjSwitchTransitionEnd;
    (*(pCVar1->fields)._._.invoke_impl)
              ((pCVar1->fields)._._.method_code,transitionType,(pCVar1->fields)._._.method);
  }
  return;
}


/* Void OnPrjSwitchTransitionUpate(CameraPrjSwitchTransition+Type) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_OnPrjSwitchTransitionUpate
               (RTFocusCamera *this,CameraPrjSwitchTransition_Type__Enum transitionType,
               MethodInfo *method)

{
  if ((this->fields).PrjSwitchTransitionUpdate != (CameraProjectionSwitchUpdateHandler *)0x0) {
    pCVar1 = (this->fields).PrjSwitchTransitionUpdate;
    (*(pCVar1->fields)._._.invoke_impl)
              ((pCVar1->fields)._._.method_code,transitionType,(pCVar1->fields)._._.method);
  }
  return;
}


/* Void Orbit(Single, Single) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_Orbit
               (RTFocusCamera *this,float degreesLocalX,float degreesWorldY,MethodInfo *method)

{
  pTVar1 = (this->fields)._targetTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    pTVar1 = (this->fields)._targetTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
      uVar6 = pVVar2->x;
      uVar7 = pVVar2->y;
      fVar8 = (this->fields)._focusPointOffset;
      fVar9 = (float)uVar3 + (float)uVar6 * fVar8;
      fVar5 = fVar5 + pVVar2->z * fVar8;
      fVar8 = (float)uVar4 + (float)uVar7 * fVar8;
      pTVar1 = (this->fields)._targetTransform;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pTVar1 != (Transform *)0x0) {
        point.y = fVar8;
        point.x = fVar9;
        point.z = fVar5;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                  (pTVar1,point,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                   degreesWorldY,(MethodInfo *)0x0);
        pTVar1 = (this->fields)._targetTransform;
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                             ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
          point_00.y = fVar8;
          point_00.x = fVar9;
          point_00.z = fVar5;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                    (pTVar1,point_00,*pVVar2,degreesLocalX,(MethodInfo *)0x0);
          this_00 = (this->fields)._targetTransform;
          if (this_00 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                               ((Vector3 *)&stack0xffffffd8,this_00,(MethodInfo *)0x0);
            worldPosition.y = fVar9;
            worldPosition.x = (float)pTVar1;
            worldPosition.z = fVar5;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_1
                      (this_00,worldPosition,*pVVar2,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Pan(Vector2) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_Pan
               (RTFocusCamera *this,Vector2 panAmount,MethodInfo *method)

{
  this_00 = (this->fields)._targetTransform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
    fVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    pTVar4 = (this->fields)._targetTransform;
    if (pTVar4 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                         ((Vector3 *)&stack0xffffffd0,pTVar4,(MethodInfo *)0x0);
      uVar5 = pVVar1->x;
      uVar6 = pVVar1->y;
      fVar7 = pVVar1->z;
      pTVar4 = (this->fields)._targetTransform;
      if (pTVar4 != (Transform *)0x0) {
        fVar8 = 0.0;
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                           ((Vector3 *)&stack0xffffffd0,pTVar4,(MethodInfo *)0x0);
        uVar9 = pVVar1->x;
        uVar10 = pVVar1->y;
        value.y = fVar2 + (float)uVar6 * panAmount.x + (float)uVar10 * panAmount.y;
        value.x = fVar8 + (float)uVar5 * panAmount.x + (float)uVar9 * panAmount.y;
        value.z = fVar3 + fVar7 * panAmount.x + pVVar1->z * panAmount.y;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void PerformInstantFocus(CameraFocus+Data) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_PerformInstantFocus
               (RTFocusCamera *this,CameraFocus_Data *focusData,MethodInfo *method)

{
  if (focusData != (CameraFocus_Data *)0x0) {
    pTVar1 = (this->fields)._targetTransform;
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar1,(focusData->fields)._cameraWorldPosition,(MethodInfo *)0x0);
      pTVar1 = (this->fields)._targetTransform;
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                  ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
        fVar2 = (float10)func_?();
        (this->fields)._focusPointOffset = (float)fVar2;
        fVar3 = (focusData->fields)._focusPoint.y;
        fVar4 = (focusData->fields)._focusPoint.z;
        (this->fields)._lastFocusPoint.x = (focusData->fields)._focusPoint.x;
        (this->fields)._lastFocusPoint.y = fVar3;
        (this->fields)._lastFocusPoint.z = fVar4;
        RTFocusCamera_AdjustOrthoSizeForFocusPt(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void PerformInstantProjectionSwitch() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_PerformInstantProjectionSwitch
               (RTFocusCamera *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetCamera;
  if (this_00 != (Camera *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                      (this_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographic
              (this_00,bVar1 ^ 1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PerformProjectionSwitch() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_PerformProjectionSwitch
               (RTFocusCamera *this,MethodInfo *method)

{
  if ((this->fields)._genricCamTransformCrtn != (IEnumerator *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              ((MonoBehaviour *)this,(this->fields)._genricCamTransformCrtn,(MethodInfo *)0x0);
    (this->fields)._genricCamTransformCrtn = (IEnumerator *)0x0;
    func_?(&(this->fields)._genricCamTransformCrtn,0);
  }
  if ((this->fields)._focusCrtn != (IEnumerator *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              ((MonoBehaviour *)this,(this->fields)._focusCrtn,(MethodInfo *)0x0);
    (this->fields)._focusCrtn = (IEnumerator *)0x0;
    func_?(&(this->fields)._focusCrtn,0);
  }
  pCVar1 = (this->fields)._projectionSwitchSettings;
  if (pCVar1 != (CameraProjectionSwitchSettings *)0x0) {
    this_00 = (this->fields)._targetCamera;
    if ((pCVar1->fields)._switchMode == 0) {
      pCVar2 = (this->fields)._prjSwitchTranstion;
      if (pCVar2 != (CameraPrjSwitchTransition *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Object);
          cRam_? = '\x01';
        }
        if ((pCVar2->fields)._transitionType == 0) {
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar3 != 0) {
            (pCVar2->fields)._targetCamera = this_00;
            func_?(&(pCVar2->fields)._targetCamera,this_00);
          }
        }
        pCVar2 = (this->fields)._prjSwitchTranstion;
        if (pCVar2 != (CameraPrjSwitchTransition *)0x0) {
          if ((pCVar2->fields)._transitionType == 0) {
            (pCVar2->fields)._camFieldOfView =
                 (float)((uint)(this->fields)._fieldOfView & _UNK_?);
          }
          pCVar2 = (this->fields)._prjSwitchTranstion;
          pVVar4 = RTFocusCamera_GetFocusPoint((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
          fVar5 = pVVar4->y;
          fVar6 = pVVar4->z;
          if (pCVar2 != (CameraPrjSwitchTransition *)0x0) {
            if ((pCVar2->fields)._transitionType == 0) {
              (pCVar2->fields)._camFocusPoint.x = pVVar4->x;
              (pCVar2->fields)._camFocusPoint.y = fVar5;
              (pCVar2->fields)._camFocusPoint.z = fVar6;
            }
            pCVar1 = (this->fields)._projectionSwitchSettings;
            pCVar2 = (this->fields)._prjSwitchTranstion;
            if ((pCVar1 != (CameraProjectionSwitchSettings *)0x0) &&
               (pCVar2 != (CameraPrjSwitchTransition *)0x0)) {
              if ((pCVar2->fields)._transitionType == 0) {
                fVar5 = (float)((uint)(pCVar1->fields)._transitionDurationInSeconds & _UNK_?
                                );
                fVar6 = _UNK_?;
                if (_UNK_? <= fVar5) {
                  fVar6 = fVar5;
                }
                (pCVar2->fields)._durationInSeconds = fVar6;
              }
              pOVar7 = (Object__Class *)(this->fields)._prjSwitchTranstion;
              if (pOVar7 != (Object__Class *)0x0) {
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pOVar8 = (Object_1 *)(pOVar7->_0).this_arg.data.typeHandle;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                  (pOVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar3 == 0) {
                  pOVar8 = *(Object_1 **)&(pOVar7->_0).this_arg.attrs;
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                    (pOVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar3 == 0) {
                    if ((pOVar7->_0).klass != (Il2CppClass *)0x0) {
                      pMVar9 = (MonoBehaviour *)(pOVar7->_0).this_arg.data.typeHandle;
                      if (pMVar9 == (MonoBehaviour *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                      MonoBehaviour_StopCoroutine
                                (pMVar9,*(IEnumerator **)&(pOVar7->_0).byval_arg.attrs,
                                 (MethodInfo *)0x0);
                      (pOVar7->_0).byval_arg.attrs = 0;
                      (pOVar7->_0).byval_arg.type = 0;
                      (pOVar7->_0).byval_arg.field_0x7 = 0;
                      func_?(&(pOVar7->_0).byval_arg.attrs,0);
                      this_01 = *(Component **)&(pOVar7->_0).this_arg.attrs;
                      if ((this_01 == (Component *)0x0) ||
                         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_transform(this_01,(MethodInfo *)0x0),
                         this_02 == (Transform *)0x0)) goto code_?;
                      value.x = (float)(pOVar7->_0).generic_class;
                      value.y = (float)(pOVar7->_0).typeMetadataHandle;
                      value.z = (float)(pOVar7->_0).interopData;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                (this_02,value,(MethodInfo *)0x0);
                    }
                    pMVar9 = (MonoBehaviour *)(pOVar7->_0).this_arg.data.typeHandle;
                    if (cRam_? == '\0') {
                      func_?();
                      cRam_? = '\x01';
                    }
                    method_00 = TypeInfo__RTG__CameraPrjSwitchTransition___DoTransition_d__41;
                    value_00 = (Object *)func_?();
                    mscorlib.dll::System::ThrowHelper::
                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                              (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
                    value_00[1].klass = (Object__Class *)0x0;
                    value_00[2].klass = pOVar7;
                    func_?();
                    *(Object **)&(pOVar7->_0).byval_arg.attrs = value_00;
                    func_?(&(pOVar7->_0).byval_arg.attrs,value_00);
                    if (pMVar9 != (MonoBehaviour *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                      MonoBehaviour_StartCoroutine_Auto
                                (pMVar9,(IEnumerator *)value_00,(MethodInfo *)0x0);
                      return;
                    }
                    goto code_?;
                  }
                }
                return;
              }
            }
          }
        }
      }
    }
    else if (this_00 != (Camera *)0x0) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (this_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographic
                (this_00,bVar3 ^ 1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void PerformRotationSwitch(Quaternion) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_PerformRotationSwitch
               (RTFocusCamera *this,Quaternion targetRotation,MethodInfo *method)

{
  pCVar1 = (this->fields)._prjSwitchTranstion;
  if (pCVar1 != (CameraPrjSwitchTransition *)0x0) {
    if ((pCVar1->fields)._transitionType != 0) {
      return;
    }
    if ((this->fields)._genricCamTransformCrtn != (IEnumerator *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
                ((MonoBehaviour *)this,(this->fields)._genricCamTransformCrtn,(MethodInfo *)0x0);
      (this->fields)._genricCamTransformCrtn = (IEnumerator *)0x0;
      func_?(&(this->fields)._genricCamTransformCrtn,0);
    }
    if ((this->fields)._focusCrtn != (IEnumerator *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
                ((MonoBehaviour *)this,(this->fields)._focusCrtn,(MethodInfo *)0x0);
      (this->fields)._focusCrtn = (IEnumerator *)0x0;
      func_?(&(this->fields)._focusCrtn,0);
    }
    pCVar2 = (this->fields)._rotationSwitchSettings;
    if (pCVar2 != (CameraRotationSwitchSettings *)0x0) {
      if ((pCVar2->fields)._switchMode == 0) {
        method_00 = (RTFocusCamera_DoSmoothRotationSwitch_d_134__Class *)
                    TypeInfo__RTG__RTFocusCamera___DoConstantRotationSwitch_d__133;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__RTG__RTFocusCamera___DoConstantRotationSwitch_d__133);
          cRam_? = '\x01';
          method_00 = (RTFocusCamera_DoSmoothRotationSwitch_d_134__Class *)
                      TypeInfo__RTG__RTFocusCamera___DoConstantRotationSwitch_d__133;
        }
      }
      else {
        if ((pCVar2->fields)._switchMode != 1) {
          if ((pCVar2->fields)._switchType == 0) {
            pTVar3 = (this->fields)._targetTransform;
            if (pTVar3 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar3,targetRotation,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            RTFocusCamera_GetFocusPoint((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
            pTVar3 = (this->fields)._targetTransform;
            if (pTVar3 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar3,targetRotation,(MethodInfo *)0x0);
              pTVar3 = (this->fields)._targetTransform;
              if (pTVar3 != (Transform *)0x0) {
                pTVar4 = pTVar3;
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                   ((Vector3 *)&stack0xffffffd8,pTVar3,(MethodInfo *)0x0);
                uVar6 = pVVar5->x;
                uVar7 = pVVar5->y;
                fVar8 = (this->fields)._focusPointOffset;
                value.y = (float)&stack0xffffffd8 - (float)uVar7 * fVar8;
                value.x = 4.351355e-29 - (float)uVar6 * fVar8;
                value.z = (float)pTVar4 - pVVar5->z * fVar8;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar3,value,(MethodInfo *)0x0);
                return;
              }
            }
          }
          goto code_?;
        }
        method_00 = TypeInfo__RTG__RTFocusCamera___DoSmoothRotationSwitch_d__134;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothRotationSwitch_d__134);
          cRam_? = '\x01';
          method_00 = TypeInfo__RTG__RTFocusCamera___DoSmoothRotationSwitch_d__134;
        }
      }
      value_00 = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value_00[1].klass = (Object__Class *)0x0;
      value_00[2].klass = (Object__Class *)this;
      func_?(value_00 + 2,this);
      value_00[2].monitor = (MonitorData *)targetRotation.x;
      value_00[3].klass = (Object__Class *)targetRotation.y;
      value_00[3].monitor = (MonitorData *)targetRotation.z;
      value_00[4].klass = (Object__Class *)targetRotation.w;
      (this->fields)._genricCamTransformCrtn = (IEnumerator *)value_00;
      func_?(&(this->fields)._genricCamTransformCrtn,value_00);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)value_00,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void SetFieldOfView(Single) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_SetFieldOfView
               (RTFocusCamera *this,float fov,MethodInfo *method)

{
  this_00 = (this->fields)._targetCamera;
  if (this_00 != (Camera *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_fieldOfView
              (this_00,fov,(MethodInfo *)0x0);
    (this->fields)._fieldOfView = fov;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetFocusPoint(Vector3) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_SetFocusPoint
               (RTFocusCamera *this,Vector3 focusPoint,MethodInfo *method)

{
  this_00 = (this->fields)._targetTransform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uStack_3._0_4_ = pVVar1->x;
    uStack_3._4_4_ = pVVar1->y;
    focusPoint.x = focusPoint.x - (float)(undefined4)uStack_3;
    focusPoint.y = focusPoint.y - (float)uStack_3._4_4_;
    focusPoint.z = focusPoint.z - pVVar1->z;
    fStack_4 = focusPoint.z;
    fVar5 = (float10)func_?(&focusPoint,0);
    (this->fields)._focusPointOffset = (float)fVar5;
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetObjectVisibilityDirty() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_SetObjectVisibilityDirty
               (RTFocusCamera *this,MethodInfo *method)

{
  (this->fields)._isObjectVisibilityDirty = 1;
  return;
}


/* Void SetTargetCamera(Camera) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_SetTargetCamera
               (RTFocusCamera *this,Camera *camera,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Application);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)camera,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__UnityEngine__Application->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Application::Application_get_isPlaying
                      ((MethodInfo *)0x0);
    if ((bVar1 != 0) && ((this->fields)._isDoingFocus == 0)) {
      pCVar2 = (this->fields)._prjSwitchTranstion;
      if (pCVar2 == (CameraPrjSwitchTransition *)0x0) {
code_?:
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((pCVar2->fields)._transitionType == 0) && ((this->fields)._isDoingRotationSwitch == 0)) {
        (this->fields)._targetCamera = camera;
        func_?();
        if (camera == (Camera *)0x0) goto code_?;
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)camera,(MethodInfo *)0x0);
        (this->fields)._targetTransform = pTVar4;
        func_?();
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                          (camera,(MethodInfo *)0x0);
        (this->fields)._fieldOfView = fVar5;
        pVVar6 = RTFocusCamera_GetFocusPoint((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
        RTFocusCamera_SetFocusPoint(this,*pVVar6,(MethodInfo *)0x0);
        RTFocusCamera_AdjustOrthoSizeForFocusPt(this,(MethodInfo *)0x0);
        (this->fields)._isObjectVisibilityDirty = 1;
      }
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_Start
               (RTFocusCamera *this,MethodInfo *method)

{
  pTVar1 = (this->fields)._targetTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = pVVar2->y;
    fStack_5 = pVVar2->z;
    pTVar1 = (this->fields)._targetTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         (&VStack_6,pTVar1,(MethodInfo *)0x0);
      VStack_3.x = pVVar2->x;
      VStack_3.y = pVVar2->y;
      fVar7 = (this->fields)._focusPointOffset;
      fStack_8 = uStack_4._4_4_ + VStack_3.y * fVar7;
      VStack_3.z = fStack_5 + pVVar2->z * fVar7;
      uVar9 = 0;
      uVar10 = 0;
      (this->fields)._lastFocusPoint.x = (float)uStack_4 + VStack_3.x * fVar7;
      (this->fields)._lastFocusPoint.y = fStack_8;
      (this->fields)._lastFocusPoint.z = VStack_3.z;
      pTVar1 = (this->fields)._targetTransform;
      if (pTVar1 != (Transform *)0x0) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_6,pTVar1,(MethodInfo *)0x0);
        uVar11 = pVVar2->x;
        uVar12 = pVVar2->y;
        fStack_5 = VStack_3.z - pVVar2->z;
        uStack_4 = CONCAT44(fStack_8 - (float)uVar12,(float)pTVar1 - (float)uVar11);
        VStack_3.z = fStack_5;
        fVar13 = (float10)func_?(&uStack_4,0,uVar9,uVar10);
        (this->fields)._focusPointOffset = (float)fVar13;
        RTFocusCamera_AdjustOrthoSizeForFocusPt(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void StopCamTransform() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_StopCamTransform
               (RTFocusCamera *this,MethodInfo *method)

{
  if ((this->fields)._genricCamTransformCrtn != (IEnumerator *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              ((MonoBehaviour *)this,(this->fields)._genricCamTransformCrtn,(MethodInfo *)0x0);
    (this->fields)._genricCamTransformCrtn = (IEnumerator *)0x0;
    func_?(&(this->fields)._genricCamTransformCrtn,0);
  }
  return;
}


/* Void StopFocus() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_StopFocus
               (RTFocusCamera *this,MethodInfo *method)

{
  if ((this->fields)._focusCrtn != (IEnumerator *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              ((MonoBehaviour *)this,(this->fields)._focusCrtn,(MethodInfo *)0x0);
    (this->fields)._focusCrtn = (IEnumerator *)0x0;
    func_?(&(this->fields)._focusCrtn,0);
  }
  return;
}


/* Void Update_SystemCall() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_Update_SystemCall
               (RTFocusCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__YesNoAnswer);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._settings;
  if (pCVar1 == (CameraSettings *)0x0) goto code_?;
  if (((pCVar1->fields)._canProcessInput != 0) && ((this->fields)._isDoingFocus == 0)) {
    pCVar2 = (this->fields)._prjSwitchTranstion;
    if (pCVar2 == (CameraPrjSwitchTransition *)0x0) goto code_?;
    if (((pCVar2->fields)._transitionType == 0) && ((this->fields)._isDoingRotationSwitch == 0)) {
      if ((this->fields).CanProcessInput != (CameraCanProcessInputHandler *)0x0) {
        method_00 = (MethodInfo *)&UNK_?;
        value = (Object *)func_?(TypeInfo__RTG__YesNoAnswer);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (value,ExceptionArgument__Enum_obj,method_00);
        pCVar3 = (this->fields).CanProcessInput;
        if (pCVar3 == (CameraCanProcessInputHandler *)0x0) goto code_?;
        (*(pCVar3->fields)._._.invoke_impl)
                  ((pCVar3->fields)._._.method_code,value,(pCVar3->fields)._._.method);
        if (value == (Object *)0x0) goto code_?;
        if (*(char *)&value[1].klass == '\0') {
          bVar4 = false;
        }
        else {
          bVar4 = *(char *)((int)&value[1].klass + 1) == '\0';
        }
        if (!bVar4) goto code_?;
      }
      if ((TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__MonoSingleton<RTG::RTInputDevice>);
      }
      this_00 = (RTInputDevice *)
                MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTInputDevice>__get_Get__);
      if (this_00 == (RTInputDevice *)0x0) goto code_?;
      IVar5 = RTInputDevice::RTInputDevice_get_DeviceType(this_00,(MethodInfo *)0x0);
      if (IVar5 == InputDeviceType__Enum_Mouse) {
        RTFocusCamera_HandleMouseAndKeyboardInput(this,(MethodInfo *)0x0);
      }
    }
  }
code_?:
  pWVar6 = (this->fields)._worldTransformSnapshot;
  if (pWVar6 != (WorldTransformSnapshot *)0x0) {
    bVar7 = WorldTransformSnapshot::WorldTransformSnapshot_SameAs
                      (pWVar6,(this->fields)._targetTransform,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      pWVar6 = (this->fields)._worldTransformSnapshot;
      (this->fields)._isObjectVisibilityDirty = 1;
      if (pWVar6 == (WorldTransformSnapshot *)0x0) goto code_?;
      WorldTransformSnapshot::WorldTransformSnapshot_Snaphot
                (pWVar6,(this->fields)._targetTransform,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Zoom(Single) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_Zoom
               (RTFocusCamera *this,float zoomAmount,MethodInfo *method)

{
  pVVar1 = RTFocusCamera_GetFocusPoint((Vector3 *)&stack0xffffffb0,this,(MethodInfo *)0x0);
  pTVar2 = (this->fields)._targetTransform;
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  if (pTVar2 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffc0,pTVar2,(MethodInfo *)0x0);
    uVar5 = pVVar1->x;
    uVar6 = pVVar1->y;
    fVar7 = pVVar1->z;
    pTVar8 = (this->fields)._targetTransform;
    if (pTVar8 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&stack0xffffffa0,pTVar8,(MethodInfo *)0x0);
      uVar9 = pVVar1->x;
      uVar10 = pVVar1->y;
      value.y = (float)uVar6 + (float)uVar10 * zoomAmount;
      value.x = (float)uVar5 + (float)uVar9 * zoomAmount;
      value.z = fVar7 + pVVar1->z * zoomAmount;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar2,value,(MethodInfo *)0x0);
      this_00 = (this->fields)._targetCamera;
      if (this_00 != (Camera *)0x0) {
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                           (this_00,(MethodInfo *)0x0);
        if (bVar11 != 0) {
          pTVar2 = (this->fields)._targetTransform;
          if (pTVar2 == (Transform *)0x0) goto code_?;
          puVar12 = &UNK_?;
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffa0,pTVar2,(MethodInfo *)0x0);
          uVar13 = pVVar1->x;
          uVar14 = pVVar1->y;
          fVar7 = (float)puVar12 - (float)uVar13;
          fVar3 = fVar3 - (float)uVar14;
          fVar4 = fVar4 - pVVar1->z;
          pTVar2 = (this->fields)._targetTransform;
          if (pTVar2 == (Transform *)0x0) goto code_?;
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                              ((Vector3 *)&stack0xffffffa0,pTVar2,(MethodInfo *)0x0);
          uVar15 = pVVar1->x;
          uVar16 = pVVar1->y;
          if ((float)uVar15 * fVar7 + (float)uVar16 * fVar3 + pVVar1->z * fVar4 < _UNK_?) {
            pTVar2 = (this->fields)._targetTransform;
            if (pTVar2 == (Transform *)0x0) goto code_?;
            pVVar1 = (Vector3 *)&stack0xffffffa0;
            pTVar8 = pTVar2;
            pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                (pVVar1,pTVar2,(MethodInfo *)0x0);
            uVar18 = pVVar17->x;
            uVar19 = pVVar17->y;
            value_00.y = (float)pVVar1 - (float)uVar19 * _UNK_?;
            value_00.x = (float)puVar12 - (float)uVar18 * _UNK_?;
            value_00.z = (float)pTVar8 - pVVar17->z * _UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar2,value_00,(MethodInfo *)0x0);
          }
        }
        pTVar2 = (this->fields)._targetTransform;
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                    ((Vector3 *)&stack0xffffffa0,pTVar2,(MethodInfo *)0x0);
          fVar20 = (float10)func_?();
          (this->fields)._focusPointOffset = (float)fVar20;
          RTFocusCamera_AdjustOrthoSizeForFocusPt(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* RTFocusCamera() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera__ctor
               (RTFocusCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__RTG__CameraFocusSettings);
    func_?(&TypeInfo__RTG__CameraHotkeys);
    func_?(&TypeInfo__RTG__CameraLookAroundSettings);
    func_?(&TypeInfo__RTG__CameraMoveSettings);
    func_?(&TypeInfo__RTG__CameraOrbitSettings);
    func_?(&TypeInfo__RTG__CameraPanSettings);
    func_?(&TypeInfo__RTG__CameraPrjSwitchTransition);
    func_?(&TypeInfo__RTG__CameraProjectionSwitchSettings);
    func_?(&TypeInfo__RTG__CameraRotationSwitchSettings);
    func_?(&TypeInfo__RTG__CameraSettings);
    func_?(&TypeInfo__RTG__CameraZoomSettings);
    func_?(&TypeInfo__System__Enum);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    func_?(&MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__MonoSingleton__);
    func_?(&TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>);
    func_?(&TypeRef__RTG__RTFocusCamera__MoveDirection);
    func_?(&TypeInfo__System__Type);
    func_?(&TypeInfo__RTG__WorldTransformSnapshot);
    cRam_? = '\x01';
  }
  this_00 = (WorldTransformSnapshot *)func_?(TypeInfo__RTG__WorldTransformSnapshot);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_00,(MethodInfo *)0x0);
  (this->fields)._worldTransformSnapshot = this_00;
  func_?(&(this->fields)._worldTransformSnapshot,this_00);
  method_00 = TypeInfo__RTG__CameraPrjSwitchTransition;
  value = (CameraPrjSwitchTransition *)func_?();
  (value->fields)._camFieldOfView = 60.0;
  (value->fields)._durationInSeconds = 0.23;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (this->fields)._prjSwitchTranstion = value;
  func_?(&(this->fields)._prjSwitchTranstion,value);
  (this->fields)._isObjectVisibilityDirty = 1;
  this_01 = (List_1_UnityEngine_GameObject_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  (this->fields)._visibleObjects = this_01;
  func_?(&(this->fields)._visibleObjects,this_01);
  (this->fields)._focusPointOffset = 5.0;
  handle = TypeRef__RTG__RTFocusCamera__MoveDirection;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  enumType = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                       ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  if ((TypeInfo__System__Enum->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_02 = mscorlib.dll::System::Enum::Enum_GetValues(enumType,(MethodInfo *)0x0);
  if (this_02 != (Array *)0x0) {
    mscorlib.dll::System::Array::Array_get_Length(this_02,(MethodInfo *)0x0);
    pBVar1 = (Boolean__Array *)func_?();
    (this->fields)._moveDirFlags = pBVar1;
    func_?();
    value_00 = (CameraSettings *)func_?();
    bVar2 = cRam_? == '\0';
    (value_00->fields)._canProcessInput = 1;
    if (bVar2) {
      func_?();
      cRam_? = '\x01';
    }
    (value_00->fields)._._canBeDisplayed = 1;
    (value_00->fields)._._isExpanded = 1;
    (value_00->fields)._._foldoutLabel = StringLiteral_Settings;
    pMVar3 = (MethodInfo *)&(value_00->fields)._._foldoutLabel;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,pMVar3);
    (this->fields)._settings = value_00;
    func_?();
    value_01 = (CameraMoveSettings *)func_?();
    bVar2 = cRam_? == '\0';
    (value_01->fields)._moveSpeed = 6.0;
    (value_01->fields)._accelerationRate = 15.0;
    if (bVar2) {
      func_?();
      cRam_? = '\x01';
    }
    (value_01->fields)._._canBeDisplayed = 1;
    (value_01->fields)._._isExpanded = 1;
    (value_01->fields)._._foldoutLabel = StringLiteral_Settings;
    pMVar3 = (MethodInfo *)&(value_01->fields)._._foldoutLabel;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_01,ExceptionArgument__Enum_obj,pMVar3);
    (this->fields)._moveSettings = value_01;
    func_?();
    value_02 = (CameraPanSettings *)func_?();
    bVar2 = cRam_? == '\0';
    (value_02->fields)._standardPanSensitivity = 1.0;
    (value_02->fields)._smoothPanSensitivity = 0.7;
    (value_02->fields)._smoothValue = 4.0;
    (value_02->fields)._isPanningEnabled = 1;
    if (bVar2) {
      func_?();
      cRam_? = '\x01';
    }
    (value_02->fields)._._canBeDisplayed = 1;
    (value_02->fields)._._isExpanded = 1;
    (value_02->fields)._._foldoutLabel = StringLiteral_Settings;
    pMVar3 = (MethodInfo *)&(value_02->fields)._._foldoutLabel;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_02,ExceptionArgument__Enum_obj,pMVar3);
    (this->fields)._panSettings = value_02;
    func_?();
    value_03 = (CameraLookAroundSettings *)func_?();
    bVar2 = cRam_? == '\0';
    (value_03->fields)._standardLookAroundSensitivity = 5.0;
    (value_03->fields)._smoothLookAroundSensitivity = 5.0;
    (value_03->fields).smoothValue = 4.0;
    (value_03->fields)._isLookAroundEnabled = 1;
    if (bVar2) {
      func_?();
      cRam_? = '\x01';
    }
    (value_03->fields)._._canBeDisplayed = 1;
    (value_03->fields)._._isExpanded = 1;
    (value_03->fields)._._foldoutLabel = StringLiteral_Settings;
    pMVar3 = (MethodInfo *)&(value_03->fields)._._foldoutLabel;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_03,ExceptionArgument__Enum_obj,pMVar3);
    (this->fields)._lookAroundSettings = value_03;
    func_?();
    value_04 = (CameraOrbitSettings *)func_?();
    bVar2 = cRam_? == '\0';
    (value_04->fields)._standardOrbitSensitivity = 5.0;
    (value_04->fields)._smoothOrbitSensitivity = 5.0;
    (value_04->fields)._smoothValue = 8.0;
    (value_04->fields)._isOrbitEnabled = 1;
    if (bVar2) {
      func_?();
      cRam_? = '\x01';
    }
    (value_04->fields)._._canBeDisplayed = 1;
    (value_04->fields)._._isExpanded = 1;
    (value_04->fields)._._foldoutLabel = StringLiteral_Settings;
    pMVar3 = (MethodInfo *)&(value_04->fields)._._foldoutLabel;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_04,ExceptionArgument__Enum_obj,pMVar3);
    (this->fields)._orbitSettings = value_04;
    func_?();
    value_05 = (CameraZoomSettings *)func_?();
    bVar2 = cRam_? == '\0';
    (value_05->fields)._orthoStandardZoomSensitivity = 10.0;
    (value_05->fields)._perspStandardZoomSensitivity = 10.0;
    (value_05->fields)._orthoSmoothZoomSensitivity = 5.0;
    (value_05->fields)._perspSmoothZoomSensitivity = 5.0;
    (value_05->fields)._orthoZoomSmoothValue = 5.0;
    (value_05->fields)._perspZoomSmoothValue = 5.0;
    (value_05->fields)._isZoomEnabled = 1;
    if (bVar2) {
      func_?();
      cRam_? = '\x01';
    }
    (value_05->fields)._._canBeDisplayed = 1;
    (value_05->fields)._._isExpanded = 1;
    (value_05->fields)._._foldoutLabel = StringLiteral_Settings;
    pMVar3 = (MethodInfo *)&(value_05->fields)._._foldoutLabel;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_05,ExceptionArgument__Enum_obj,pMVar3);
    (this->fields)._zoomSettings = value_05;
    func_?();
    value_06 = (CameraFocusSettings *)func_?();
    bVar2 = cRam_? == '\0';
    (value_06->fields)._focusMode = 2;
    (value_06->fields)._constantSpeed = 10.0;
    (value_06->fields)._smoothTime = 1.5;
    (value_06->fields)._focusDistanceAdd = 1.2;
    if (bVar2) {
      func_?();
      cRam_? = '\x01';
    }
    (value_06->fields)._._canBeDisplayed = 1;
    (value_06->fields)._._isExpanded = 1;
    (value_06->fields)._._foldoutLabel = StringLiteral_Settings;
    pMVar3 = (MethodInfo *)&(value_06->fields)._._foldoutLabel;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_06,ExceptionArgument__Enum_obj,pMVar3);
    (this->fields)._focusSettings = value_06;
    func_?();
    value_07 = (CameraRotationSwitchSettings *)func_?();
    bVar2 = cRam_? == '\0';
    (value_07->fields)._switchMode = 1;
    (value_07->fields)._constantSwitchDurationInSeconds = 0.3;
    (value_07->fields)._smoothValue = 8.0;
    if (bVar2) {
      func_?();
      cRam_? = '\x01';
    }
    (value_07->fields)._._canBeDisplayed = 1;
    (value_07->fields)._._isExpanded = 1;
    (value_07->fields)._._foldoutLabel = StringLiteral_Settings;
    pMVar3 = (MethodInfo *)&(value_07->fields)._._foldoutLabel;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_07,ExceptionArgument__Enum_obj,pMVar3);
    (this->fields)._rotationSwitchSettings = value_07;
    func_?();
    value_08 = (CameraProjectionSwitchSettings *)func_?();
    bVar2 = cRam_? == '\0';
    (value_08->fields)._transitionDurationInSeconds = 0.23;
    if (bVar2) {
      ppSStack4 = &StringLiteral_Settings;
      func_?();
      cRam_? = '\x01';
    }
    (value_08->fields)._._canBeDisplayed = 1;
    (value_08->fields)._._isExpanded = 1;
    (value_08->fields)._._foldoutLabel = StringLiteral_Settings;
    pMVar3 = (MethodInfo *)&(value_08->fields)._._foldoutLabel;
    ppSStack4 = (String **)StringLiteral_Settings;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_08,ExceptionArgument__Enum_obj,pMVar3);
    (this->fields)._projectionSwitchSettings = value_08;
    func_?();
    this_03 = (CameraHotkeys *)func_?();
    CameraHotkeys::CameraHotkeys__ctor(this_03,(MethodInfo *)0x0);
    (this->fields)._hotkeys = this_03;
    func_?();
    if ((TypeInfo__RTG__MonoSingleton<RTG::RTFocusCamera>->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    Borodar::FarlandSkies::CloudyCrownPro::Helpers::Singleton`1[System::Object]::
    Singleton_1_System_Object___ctor
              ((Singleton_1_System_Object_ *)this,
               MethodInfo__RTG__MonoSingleton<RTG::RTFocusCamera>__MonoSingleton__);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void add_CanProcessInput(CameraCanProcessInputHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_add_CanProcessInput
               (RTFocusCamera *this,CameraCanProcessInputHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraCanProcessInputHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).CanProcessInput;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CameraCanProcessInputHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__CameraCanProcessInputHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CameraCanProcessInputHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CameraCanProcessInputHandler *)
             func_?(&(this->fields).CanProcessInput,pDVar2,a);
    bVar5 = pCVar4 == a;
    a = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void add_CanUseScrollWheel(CameraCanUseScrollWheelHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_add_CanUseScrollWheel
               (RTFocusCamera *this,CameraCanUseScrollWheelHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraCanUseScrollWheelHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).CanUseScrollWheel;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CameraCanUseScrollWheelHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__CameraCanUseScrollWheelHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CameraCanUseScrollWheelHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CameraCanUseScrollWheelHandler *)
             func_?(&(this->fields).CanUseScrollWheel,pDVar2,a);
    bVar5 = pCVar4 == a;
    a = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void add_PrjSwitchTransitionBegin(CameraProjectionSwitchBeginHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_add_PrjSwitchTransitionBegin
               (RTFocusCamera *this,CameraProjectionSwitchBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).PrjSwitchTransitionBegin;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchBeginHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CameraProjectionSwitchBeginHandler *)
             func_?(&(this->fields).PrjSwitchTransitionBegin,pDVar2,a);
    bVar5 = pCVar4 == a;
    a = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void add_PrjSwitchTransitionEnd(CameraProjectionSwitchBeginHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_add_PrjSwitchTransitionEnd
               (RTFocusCamera *this,CameraProjectionSwitchBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).PrjSwitchTransitionEnd;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchBeginHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CameraProjectionSwitchBeginHandler *)
             func_?(&(this->fields).PrjSwitchTransitionEnd,pDVar2,a);
    bVar5 = pCVar4 == a;
    a = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void add_PrjSwitchTransitionUpdate(CameraProjectionSwitchUpdateHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_add_PrjSwitchTransitionUpdate
               (RTFocusCamera *this,CameraProjectionSwitchUpdateHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
    cRam_? = '\x01';
  }
  a = (this->fields).PrjSwitchTransitionUpdate;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchUpdateHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__CameraProjectionSwitchUpdateHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CameraProjectionSwitchUpdateHandler *)
             func_?(&(this->fields).PrjSwitchTransitionUpdate,pDVar2,a);
    bVar5 = pCVar4 == a;
    a = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Boolean get_IsDoingProjectionSwitch() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_IsDoingProjectionSwitch
               (RTFocusCamera *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pCVar2 = (this->fields)._prjSwitchTranstion;
  if (pCVar2 != (CameraPrjSwitchTransition *)0x0) {
    return (pCVar2->fields)._transitionType != 0;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_IsMovingBackwards() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_IsMovingBackwards
               (RTFocusCamera *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._moveDirFlags;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (5 < pBVar2->max_length) {
    return pBVar2->vector[5] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_IsMovingDown() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_IsMovingDown
               (RTFocusCamera *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._moveDirFlags;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (3 < pBVar2->max_length) {
    return pBVar2->vector[3] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_IsMovingForward() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_IsMovingForward
               (RTFocusCamera *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._moveDirFlags;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (4 < pBVar2->max_length) {
    return pBVar2->vector[4] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_IsMovingLeft() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_IsMovingLeft
               (RTFocusCamera *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._moveDirFlags;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (pBVar2->max_length != 0) {
    return pBVar2->vector[0] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_IsMovingRight() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_IsMovingRight
               (RTFocusCamera *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._moveDirFlags;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (1 < pBVar2->max_length) {
    return pBVar2->vector[1] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean get_IsMovingUp() */

bool Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_IsMovingUp
               (RTFocusCamera *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pBVar2 = (this->fields)._moveDirFlags;
  if (pBVar2 == (Boolean__Array *)0x0) {
    uVar3 = func_?(&puStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if (2 < pBVar2->max_length) {
    return pBVar2->vector[2] != 0;
  }
  puStack_1 = (undefined1 *)0x0;
  puStack_7 = (undefined *)func_?();
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Vector3 get_Look() */

Vector3 * Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_Look
                    (Vector3 *__return_storage_ptr__,RTFocusCamera *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetTransform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Single get_PrjSwitchDurationInSeconds() */

float Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_PrjSwitchDurationInSeconds
                (RTFocusCamera *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pCVar2 = (this->fields)._projectionSwitchSettings;
  if (pCVar2 != (CameraProjectionSwitchSettings *)0x0) {
    return (pCVar2->fields)._transitionDurationInSeconds;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* Single get_PrjSwitchProgress() */

float Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_PrjSwitchProgress
                (RTFocusCamera *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pCVar2 = (this->fields)._prjSwitchTranstion;
  if (pCVar2 != (CameraPrjSwitchTransition *)0x0) {
    return (pCVar2->fields)._progress;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  fVar6 = (float10)(*pcVar5)();
  return (float)fVar6;
}


/* CameraPrjSwitchTransition+Type get_PrjSwitchTransitionType() */

CameraPrjSwitchTransition_Type__Enum
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_PrjSwitchTransitionType
          (RTFocusCamera *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pCVar2 = (this->fields)._prjSwitchTranstion;
  if (pCVar2 != (CameraPrjSwitchTransition *)0x0) {
    return (pCVar2->fields)._transitionType;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  CVar6 = (*pcVar5)();
  return CVar6;
}


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_Right
                    (Vector3 *__return_storage_ptr__,RTFocusCamera *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetTransform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Vector3 get_Up() */

Vector3 * Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_Up
                    (Vector3 *__return_storage_ptr__,RTFocusCamera *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetTransform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Vector3 get_WorldPosition() */

Vector3 * Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_WorldPosition
                    (Vector3 *__return_storage_ptr__,RTFocusCamera *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetTransform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar5)();
  return pVVar1;
}


/* Quaternion get_WorldRotation() */

Quaternion *
Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_get_WorldRotation
          (Quaternion *__return_storage_ptr__,RTFocusCamera *this,MethodInfo *method)

{
  this_00 = (this->fields)._targetTransform;
  if (this_00 != (Transform *)0x0) {
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                       (&QStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = pQVar1->y;
    fVar4 = pQVar1->z;
    fVar5 = pQVar1->w;
    __return_storage_ptr__->x = pQVar1->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar4;
    __return_storage_ptr__->w = fVar5;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pQVar1 = (Quaternion *)(*pcVar6)();
  return pQVar1;
}


/* Void remove_CanProcessInput(CameraCanProcessInputHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_remove_CanProcessInput
               (RTFocusCamera *this,CameraCanProcessInputHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraCanProcessInputHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).CanProcessInput;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CameraCanProcessInputHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__CameraCanProcessInputHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CameraCanProcessInputHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CameraCanProcessInputHandler *)
             func_?(&(this->fields).CanProcessInput,pDVar2,source);
    bVar5 = pCVar4 == source;
    source = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_CanUseScrollWheel(CameraCanUseScrollWheelHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_remove_CanUseScrollWheel
               (RTFocusCamera *this,CameraCanUseScrollWheelHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraCanUseScrollWheelHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).CanUseScrollWheel;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CameraCanUseScrollWheelHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__CameraCanUseScrollWheelHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CameraCanUseScrollWheelHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CameraCanUseScrollWheelHandler *)
             func_?(&(this->fields).CanUseScrollWheel,pDVar2,source);
    bVar5 = pCVar4 == source;
    source = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_PrjSwitchTransitionBegin(CameraProjectionSwitchBeginHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_remove_PrjSwitchTransitionBegin
               (RTFocusCamera *this,CameraProjectionSwitchBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).PrjSwitchTransitionBegin;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchBeginHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CameraProjectionSwitchBeginHandler *)
             func_?(&(this->fields).PrjSwitchTransitionBegin,pDVar2,source);
    bVar5 = pCVar4 == source;
    source = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_PrjSwitchTransitionEnd(CameraProjectionSwitchBeginHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_remove_PrjSwitchTransitionEnd
               (RTFocusCamera *this,CameraProjectionSwitchBeginHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).PrjSwitchTransitionEnd;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchBeginHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CameraProjectionSwitchBeginHandler *)
             func_?(&(this->fields).PrjSwitchTransitionEnd,pDVar2,source);
    bVar5 = pCVar4 == source;
    source = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void remove_PrjSwitchTransitionUpdate(CameraProjectionSwitchUpdateHandler) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_remove_PrjSwitchTransitionUpdate
               (RTFocusCamera *this,CameraProjectionSwitchUpdateHandler *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
    cRam_? = '\x01';
  }
  source = (this->fields).PrjSwitchTransitionUpdate;
  do {
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar2 = (Delegate *)0x0;
    if (pDVar1 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchUpdateHandler__Class *)pDVar1->klass ==
          TypeInfo__RTG__CameraProjectionSwitchUpdateHandler) {
        pDVar2 = pDVar1;
      }
      if (pDVar2 == (Delegate *)0x0) {
        func_?(pDVar1,TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pCVar4 = (CameraProjectionSwitchUpdateHandler *)
             func_?(&(this->fields).PrjSwitchTransitionUpdate,pDVar2,source);
    bVar5 = pCVar4 == source;
    source = pCVar4;
    if (bVar5) {
      return;
    }
  } while( true );
}


/* Void set_WorldPosition(Vector3) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_set_WorldPosition
               (RTFocusCamera *this,Vector3 value,MethodInfo *method)

{
  RTFocusCamera_GetFocusPoint((Vector3 *)&stack0xffffffe4,this,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._targetTransform;
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar1,value,(MethodInfo *)0x0);
    pTVar1 = (this->fields)._targetTransform;
    if (pTVar1 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
      fVar2 = (float10)func_?();
      (this->fields)._focusPointOffset = (float)fVar2;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_WorldRotation(Quaternion) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_set_WorldRotation
               (RTFocusCamera *this,Quaternion value,MethodInfo *method)

{
  this_00 = (this->fields)._targetTransform;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (this_00,value,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

