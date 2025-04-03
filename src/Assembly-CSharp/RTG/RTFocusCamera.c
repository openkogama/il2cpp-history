
/* Void AdjustOrthoSizeForFocusPt() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_AdjustOrthoSizeForFocusPt
               (RTFocusCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__CameraEx);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._focusPointOffset;
  this_00 = (this->fields)._targetCamera;
  if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__CameraEx);
  }
  if (this_00 != (Camera *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                      (this_00,(MethodInfo *)0x0);
    dVar2 = (double)(fVar1 * _UNK_? * _UNK_?);
    puVar3 = &UNK_?;
    func_?();
    fVar1 = (float)dVar2 * ((float)puVar3 + (float)puVar3) * _UNK_?;
    if (fVar1 <= _UNK_?) {
      fVar1 = _UNK_?;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographicSize
              (this_00,fVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)(fVar1);
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
          pCVar10 = (CameraProjectionSwitchBeginHandler *)func_?();
          bVar11 = pCVar10 != a;
          a = pCVar10;
        } while (bVar11);
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
            pCVar12 = (CameraProjectionSwitchUpdateHandler *)func_?();
            bVar11 = pCVar12 != a_00;
            a_00 = pCVar12;
          } while (bVar11);
          pDVar3 = (Delegate *)func_?();
          pMVar4 = 
          MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionEnd_RTG__CameraPrjSwitchTransition__Type_
          ;
          ppOVar13 = &(pDVar3->fields).m_target;
          (pDVar3->fields).method_ptr =
               MethodInfo__RTG__RTFocusCamera__OnPrjSwitchTransitionEnd_RTG__CameraPrjSwitchTransition__Type_
               ->virtualMethodPointer;
          (pDVar3->fields).method = pMVar4;
          *ppOVar13 = (Object *)this;
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
          if (ppOVar13 != (Object **)0x0) {
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pDVar8 = (pDVar3->fields).method_code;
            do {
              pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  (pDVar8,pDVar3,(MethodInfo *)0x0);
              if (pDVar9 != (Delegate *)0x0) {
                pDVar14 = (Delegate *)0x0;
                if ((CameraProjectionSwitchBeginHandler__Class *)pDVar9->klass ==
                    TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
                  pDVar14 = pDVar9;
                }
                if (pDVar14 == (Delegate *)0x0) goto code_?;
              }
              pDVar9 = (Delegate *)func_?();
              bVar11 = pDVar9 == pDVar8;
              pDVar8 = pDVar9;
              if (bVar11) {
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
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
    if ((pCVar1->fields)._invertY != 0) {
      fVar2 = fVar2 * _UNK_?;
    }
    if ((pCVar1->fields)._lookAroundMode == 0) {
      fVar3 = (pCVar1->fields)._standardLookAroundSensitivity;
    }
    else {
      fVar3 = (pCVar1->fields)._smoothLookAroundSensitivity;
    }
    fVar3 = deviceAxisX * fVar3;
    if ((pCVar1->fields)._invertX != 0) {
      fVar3 = fVar3 * _UNK_?;
    }
    VVar4.y = fVar3;
    VVar4.x = fVar2;
    return VVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  VVar4 = (Vector2)(*pcVar5)();
  return VVar4;
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
    if ((pCVar1->fields)._invertY != 0) {
      fVar2 = fVar2 * _UNK_?;
    }
    if ((pCVar1->fields)._orbitMode == 1) {
      fVar3 = (pCVar1->fields)._smoothOrbitSensitivity;
    }
    else {
      fVar3 = (pCVar1->fields)._standardOrbitSensitivity;
    }
    fVar3 = deviceAxisX * fVar3;
    if ((pCVar1->fields)._invertX != 0) {
      fVar3 = fVar3 * _UNK_?;
    }
    VVar4.y = fVar3;
    VVar4.x = fVar2;
    return VVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  VVar4 = (Vector2)(*pcVar5)();
  return VVar4;
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
    if ((pCVar1->fields)._invertX != 0) {
      fVar2 = fVar2 * _UNK_?;
    }
    if ((pCVar1->fields)._panMode == 0) {
      fVar3 = (pCVar1->fields)._standardPanSensitivity;
    }
    else {
      fVar3 = (pCVar1->fields)._smoothPanSensitivity;
    }
    deviceAxisY = (float)((uint)deviceAxisY ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
                  fVar3;
    if ((pCVar1->fields)._invertY != 0) {
      deviceAxisY = deviceAxisY * _UNK_?;
    }
    camera = (this->fields)._targetCamera;
    worldPos = (this->fields)._lastFocusPoint;
    if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__RTG__CameraEx);
    }
    fVar3 = CameraEx::CameraEx_EstimateZoomFactorSpherical(camera,worldPos,(MethodInfo *)0x0);
    VStack_4.y = deviceAxisY * (float)((uint)fVar3 & _UNK_?);
    VStack_4.x = fVar2 * (float)((uint)fVar3 & _UNK_?);
    return VStack_4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  VVar6 = (Vector2)(*pcVar5)();
  return VVar6;
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
    iVar4 = (pCVar2->fields)._zoomMode;
    if (iVar4 == 0) {
      if (pCVar3 == (Camera *)0x0) goto code_?;
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (pCVar3,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        fVar6 = (pCVar2->fields)._perspStandardZoomSensitivity;
      }
      else {
        fVar6 = (pCVar2->fields)._orthoStandardZoomSensitivity;
      }
    }
    else if (iVar4 == 1) {
      if (pCVar3 == (Camera *)0x0) goto code_?;
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                        (pCVar3,(MethodInfo *)0x0);
      if (bVar5 == 0) {
        fVar6 = (pCVar2->fields)._perspSmoothZoomSensitivity;
      }
      else {
        fVar6 = (pCVar2->fields)._orthoSmoothZoomSensitivity;
      }
    }
    else {
      fVar6 = 0.0;
    }
    pCVar2 = (this->fields)._zoomSettings;
    if (pCVar2 != (CameraZoomSettings *)0x0) {
      this = (RTFocusCamera *)(fVar6 * deviceScroll);
      if ((pCVar2->fields)._invertZoomAxis != 0) {
        this = (RTFocusCamera *)(fVar6 * deviceScroll * _UNK_?);
      }
      pCVar3 = (pRVar1->fields)._targetCamera;
      worldPos = (pRVar1->fields)._lastFocusPoint;
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__CameraEx);
      }
      fVar6 = CameraEx::CameraEx_EstimateZoomFactorSpherical(pCVar3,worldPos,(MethodInfo *)0x0);
      return fVar6 * (float)this;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
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
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
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
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
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
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
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
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
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
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
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
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
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
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
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
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
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
  fVar4 = (pVVar1->oneVector).z * _UNK_?;
  fVar5 = (float)uVar2 * _UNK_?;
  fVar6 = (float)uVar3 * _UNK_?;
  if ((TypeInfo__RTG__ObjectBounds->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__ObjectBounds);
  }
  queryConfig.NoVolumeSize.x = fVar5;
  queryConfig.ObjectTypes = 7;
  queryConfig.NoVolumeSize.y = fVar6;
  queryConfig.NoVolumeSize.z = fVar4;
  pAVar7 = ObjectBounds::ObjectBounds_CalcObjectCollectionWorldAABB
                     ((AABB *)&stack0xffffffb8,(IEnumerable_1_UnityEngine_GameObject_ *)gameObjects,
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
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          focusAABB._center.z = (float)TypeInfo__RTG__RTFocusCamera___DoConstantFocus_d__135;
        }
        else {
          if ((pCVar3->fields)._focusMode != 2) {
            return;
          }
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          focusAABB._center.z = (float)TypeInfo__RTG__RTFocusCamera___DoSmoothFocus_d__136;
        }
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (value,ExceptionArgument__Enum_obj,(MethodInfo *)focusAABB._center.z);
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
         (this_00 = (this->fields)._targetTransform, this_00 != (Transform *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (this_00,(pCVar2->fields)._cameraWorldPosition,(MethodInfo *)0x0);
        pVVar4 = &(pCVar2->fields)._focusPoint;
        uVar5 = pVVar4->y;
        puStack6 = (undefined *)uVar5;
        RTFocusCamera_SetFocusPoint(this,*pVVar4,(MethodInfo *)0x0);
        fVar7 = (pCVar2->fields)._focusPoint.y;
        fVar8 = (pCVar2->fields)._focusPoint.z;
        (this->fields)._lastFocusPoint.x = (pCVar2->fields)._focusPoint.x;
        (this->fields)._lastFocusPoint.y = fVar7;
        (this->fields)._lastFocusPoint.z = fVar8;
        RTFocusCamera_AdjustOrthoSizeForFocusPt(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
      this_00 = (CameraViewVolume *)func_?(TypeInfo__RTG__CameraViewVolume);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Plane);
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar2 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,8);
      (this_00->fields)._worldPoints = pVVar2;
      func_?(&this_00->fields,pVVar2);
      pPVar3 = (Plane__Array *)func_?(TypeInfo__UnityEngine__Plane,6);
      ppPVar4 = &(this_00->fields)._worldPlanes;
      *ppPVar4 = pPVar3;
      method_00 = (MethodInfo *)&UNK_?;
      func_?(ppPVar4,pPVar3);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector2);
        cRam_? = '\x01';
      }
      fVar5 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
      (this_00->fields)._farPlaneSize.x =
           (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
      (this_00->fields)._farPlaneSize.y = fVar5;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector2);
        cRam_? = '\x01';
      }
      fVar5 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
      (this_00->fields)._nearPlaneSize.x =
           (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
      (this_00->fields)._nearPlaneSize.y = fVar5;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)this_00,ExceptionArgument__Enum_obj,method_00);
      CameraViewVolume::CameraViewVolume_FromCamera(this_00,camera,(MethodInfo *)0x0);
      pLVar6 = (this->fields)._visibleObjects;
      if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__RTG__CameraEx);
      }
      CameraEx::CameraEx_GetVisibleObjects(camera,this_00,pLVar6,(MethodInfo *)0x0);
      (this->fields)._isObjectVisibilityDirty = 0;
    }
    pLVar6 = (this->fields)._visibleObjects;
    if (pLVar6 != (List_1_UnityEngine_GameObject_ *)0x0) {
      if ((pLVar6->fields)._size != 0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddRange
                  ((List_1_System_Object_ *)visibleObjects,(IEnumerable_1_System_Object_ *)pLVar6,
                   MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__AddRange_System__Collections__Generic__IEnumerable<UnityEngine::GameObject>_
                  );
      }
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
    uVar8 = (pVVar6->zeroVector).y;
    fStack_9 = (pVVar6->zeroVector).z;
    pCVar10 = (this->fields)._hotkeys;
    if (((pCVar10 != (CameraHotkeys *)0x0) &&
        (pHVar11 = (pCVar10->fields)._moveForward, pHVar11 != (Hotkeys *)0x0)) &&
       (bVar12 = Hotkeys::Hotkeys_IsActive(pHVar11,1,(MethodInfo *)0x0),
       pBVar5 != (Boolean__Array *)0x0)) {
      if (pBVar5->max_length < 5) goto code_?;
      pBVar5->vector[4] = bVar12;
      pBVar5 = (this->fields)._moveDirFlags;
      if (pBVar5 != (Boolean__Array *)0x0) {
        if (pBVar5->max_length < 5) goto code_?;
        if (pBVar5->vector[4] == 0) {
          pCVar10 = (this->fields)._hotkeys;
          if ((pCVar10 == (CameraHotkeys *)0x0) ||
             (pHVar11 = (pCVar10->fields)._moveBack, pHVar11 == (Hotkeys *)0x0))
          goto code_?;
          bVar12 = Hotkeys::Hotkeys_IsActive(pHVar11,1,(MethodInfo *)0x0);
        }
        else {
          bVar12 = 0;
        }
        if (pBVar5->max_length < 6) goto code_?;
        pBVar5->vector[5] = bVar12;
        pCVar10 = (this->fields)._hotkeys;
        pBVar5 = (this->fields)._moveDirFlags;
        if (((pCVar10 != (CameraHotkeys *)0x0) &&
            (pHVar11 = (pCVar10->fields)._strafeLeft, pHVar11 != (Hotkeys *)0x0)) &&
           (bVar12 = Hotkeys::Hotkeys_IsActive(pHVar11,1,(MethodInfo *)0x0),
           pBVar5 != (Boolean__Array *)0x0)) {
          if (pBVar5->max_length == 0) goto code_?;
          pBVar5->vector[0] = bVar12;
          pBVar5 = (this->fields)._moveDirFlags;
          if (pBVar5 != (Boolean__Array *)0x0) {
            if (pBVar5->max_length == 0) goto code_?;
            if (pBVar5->vector[0] == 0) {
              pCVar10 = (this->fields)._hotkeys;
              if ((pCVar10 == (CameraHotkeys *)0x0) ||
                 (pHVar11 = (pCVar10->fields)._strafeRight, pHVar11 == (Hotkeys *)0x0))
              goto code_?;
              bVar12 = Hotkeys::Hotkeys_IsActive(pHVar11,1,(MethodInfo *)0x0);
            }
            else {
              bVar12 = 0;
            }
            if (pBVar5->max_length < 2) goto code_?;
            pBVar5->vector[1] = bVar12;
            pCVar10 = (this->fields)._hotkeys;
            pBVar5 = (this->fields)._moveDirFlags;
            if (((pCVar10 != (CameraHotkeys *)0x0) &&
                (method_00 = (RTFocusCamera *)(pCVar10->fields)._moveUp,
                method_00 != (RTFocusCamera *)0x0)) &&
               (bVar12 = Hotkeys::Hotkeys_IsActive((Hotkeys *)method_00,1,(MethodInfo *)0x0),
               pBVar5 != (Boolean__Array *)0x0)) {
              if (pBVar5->max_length < 3) goto code_?;
              pBVar5->vector[2] = bVar12;
              pBVar5 = (this->fields)._moveDirFlags;
              if (pBVar5 != (Boolean__Array *)0x0) {
                if (pBVar5->max_length < 3) goto code_?;
                if (pBVar5->vector[2] == 0) {
                  pCVar10 = (this->fields)._hotkeys;
                  if ((pCVar10 == (CameraHotkeys *)0x0) ||
                     (pHVar11 = (pCVar10->fields)._moveDown, pHVar11 == (Hotkeys *)0x0))
                  goto code_?;
                  bVar12 = Hotkeys::Hotkeys_IsActive(pHVar11,1,(MethodInfo *)0x0);
                }
                else {
                  bVar12 = 0;
                }
                if (pBVar5->max_length < 4) goto code_?;
                pBVar5->vector[3] = bVar12;
                pBVar5 = (this->fields)._moveDirFlags;
                if (pBVar5 != (Boolean__Array *)0x0) {
                  if (pBVar5->max_length < 5) goto code_?;
                  fVar3 = fVar4;
                  if (pBVar5->vector[4] == 0) {
                    if (pBVar5->max_length < 6) goto code_?;
                    pCVar2 = (CameraPrjSwitchTransition *)0x0;
                    if (pBVar5->vector[5] != 0) {
                      fVar3 = (float)((uint)fVar4 ^
                                      __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                      );
                      goto code_?;
                    }
                  }
                  else {
code_?:
                    method_00 = this;
                    RTFocusCamera_Zoom(this,fVar3,(MethodInfo *)0x0);
                    pCVar2 = (CameraPrjSwitchTransition *)0x1;
                  }
                  pBVar5 = (this->fields)._moveDirFlags;
                  if (pBVar5 != (Boolean__Array *)0x0) {
                    if (pBVar5->max_length == 0) goto code_?;
                    if (pBVar5->vector[0] == 0) {
                      if (pBVar5->max_length < 2) goto code_?;
                      pCStack_13 = (Camera *)uVar7;
                      pTStack_14 = (Transform *)uVar8;
                      if (pBVar5->vector[1] != 0) {
                        pTVar15 = (this->fields)._targetTransform;
                        if (pTVar15 == (Transform *)0x0) goto code_?;
                        method_00 = (RTFocusCamera *)&stack0xffffffc4;
                        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_right((Vector3 *)method_00,pTVar15,(MethodInfo *)0x0
                                                     );
                        uVar17 = pVVar16->x;
                        uVar18 = pVVar16->y;
                        pCStack_13 = (Camera *)((float)uVar7 + (float)uVar17 * fVar4);
                        pTStack_14 = (Transform *)((float)uVar8 + (float)uVar18 * fVar4);
                        fStack_9 = fStack_9 + pVVar16->z * fVar4;
                      }
                    }
                    else {
                      pTVar15 = (this->fields)._targetTransform;
                      if (pTVar15 == (Transform *)0x0) goto code_?;
                      method_00 = (RTFocusCamera *)&stack0xffffffc4;
                      pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_right((Vector3 *)method_00,pTVar15,(MethodInfo *)0x0);
                      uVar19 = pVVar16->x;
                      uVar20 = pVVar16->y;
                      pCStack_13 = (Camera *)((float)uVar7 - (float)uVar19 * fVar4);
                      pTStack_14 = (Transform *)((float)uVar8 - (float)uVar20 * fVar4);
                      fStack_9 = fStack_9 - pVVar16->z * fVar4;
                    }
                    pBVar5 = (this->fields)._moveDirFlags;
                    if (pBVar5 != (Boolean__Array *)0x0) {
                      if (pBVar5->max_length < 3) goto code_?;
                      if (pBVar5->vector[2] == 0) {
                        if (pBVar5->max_length < 4) goto code_?;
                        if (pBVar5->vector[3] != 0) {
                          pTVar15 = (this->fields)._targetTransform;
                          if (pTVar15 == (Transform *)0x0) goto code_?;
                          method_00 = (RTFocusCamera *)&stack0xffffffc4;
                          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                    Transform_get_up((Vector3 *)method_00,pTVar15,(MethodInfo *)0x0)
                          ;
                          uVar21 = pVVar16->x;
                          uVar22 = pVVar16->y;
                          pCStack_13 = (Camera *)((float)pCStack_13 - (float)uVar21 * fVar4);
                          pTStack_14 = (Transform *)((float)pTStack_14 - (float)uVar22 * fVar4);
                          fStack_9 = fStack_9 - pVVar16->z * fVar4;
                        }
                      }
                      else {
                        pTVar15 = (this->fields)._targetTransform;
                        if (pTVar15 == (Transform *)0x0) goto code_?;
                        method_00 = (RTFocusCamera *)&stack0xffffffc4;
                        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_up((Vector3 *)method_00,pTVar15,(MethodInfo *)0x0);
                        uVar23 = pVVar16->x;
                        uVar24 = pVVar16->y;
                        pCStack_13 = (Camera *)((float)pCStack_13 + (float)uVar23 * fVar4);
                        pTStack_14 = (Transform *)((float)pTStack_14 + (float)uVar24 * fVar4);
                        fStack_9 = fStack_9 + pVVar16->z * fVar4;
                      }
                      if ((float)pTStack_14 * (float)pTStack_14 +
                          (float)pCStack_13 * (float)pCStack_13 + fStack_9 * fStack_9 == 0.0) {
                        bVar25 = false;
                      }
                      else {
                        pTVar15 = (this->fields)._targetTransform;
                        bVar25 = true;
                        if (pTVar15 == (Transform *)0x0) goto code_?;
                        pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_position
                                            ((Vector3 *)&stack0xffffffc4,pTVar15,(MethodInfo *)0x0);
                        uVar26 = pVVar16->x;
                        uVar27 = pVVar16->y;
                        method_00 = (RTFocusCamera *)&UNK_?;
                        value.y = (float)uVar27 + (float)pTStack_14;
                        value.x = (float)uVar26 + (float)pCStack_13;
                        value.z = pVVar16->z + fStack_9;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                  (pTVar15,value,(MethodInfo *)0x0);
                      }
                      if (bVar25 || pCVar2 != (CameraPrjSwitchTransition *)0x0) {
                        pCVar1 = (this->fields)._moveSettings;
                        if (pCVar1 != (CameraMoveSettings *)0x0) {
                          fStack_9 = (pCVar1->fields)._accelerationRate;
                          fVar3 = (this->fields)._lastFocusPoint.z;
                          this_00 = (this->fields)._targetCamera;
                          uVar28 = (this->fields)._lastFocusPoint.x;
                          uVar29 = (this->fields)._lastFocusPoint.y;
                          if ((TypeInfo__RTG__CameraEx->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__RTG__CameraEx);
                          }
                          if (this_00 != (Camera *)0x0) {
                            method_00 = (RTFocusCamera *)&UNK_?;
                            bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                     Camera_get_orthographic(this_00,(MethodInfo *)0x0);
                            if (bVar12 == 0) {
                              pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_transform
                                                  ((Component *)this_00,(MethodInfo *)0x0);
                              if (pTVar15 == (Transform *)0x0) goto code_?;
                              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_forward
                                                  ((Vector3 *)&stack0xffffffd0,pTVar15,
                                                   (MethodInfo *)0x0);
                              uVar30._0_4_ = (RTFocusCamera__Class *)pVVar16->x;
                              uVar30._4_4_ = (MonitorData *)pVVar16->y;
                              BVar31._._.m_CachedPtr = (Component__Fields)pVVar16->z;
                              pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                        Transform_get_position
                                                  ((Vector3 *)&stack0xffffffb8,pTVar15,
                                                   (MethodInfo *)0x0);
                              uVar32 = pVVar16->x;
                              uVar33 = pVVar16->y;
                              fVar4 = pVVar16->z;
                              pCVar2 = (CameraPrjSwitchTransition *)((float)uVar28 - (float)uVar32);
                              iVar34 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                       Camera_get_pixelHeight(this_00,(MethodInfo *)0x0);
                              fVar35 = (float)iVar34 * _UNK_? * _UNK_?;
                              fVar36 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                       Camera_get_fieldOfView(this_00,(MethodInfo *)0x0);
                              fVar3 = ((float)SUB84(uVar30,4) * ((float)uVar29 - (float)uVar33) +
                                        (float)(RTFocusCamera__Class *)uVar30 * (float)pCVar2 +
                                       (float)BVar31._._.m_CachedPtr * (fVar3 - fVar4)) /
                                       (fVar35 / fVar36);
                            }
                            else {
                              fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                       Camera_get_orthographicSize(this_00,(MethodInfo *)0x0);
                              fVar3 = fVar3 * _UNK_?;
                              iVar34 = UnityEngine.CoreModule.dll::UnityEngine::Camera::
                                       Camera_get_pixelHeight(this_00,(MethodInfo *)0x0);
                              fVar3 = fVar3 / ((float)iVar34 * _UNK_?);
                            }
                            fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::
                                     Time_1_get_deltaTime((MethodInfo *)0x0);
                            (this->fields)._currentAcceleration =
                                 (float)((uint)fVar3 & _UNK_?) * fStack_9 * fVar4 +
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
                        pCVar37 = (this->fields)._panSettings;
                        if (pCVar37 != (CameraPanSettings *)0x0) {
                          if ((pCVar37->fields)._isPanningEnabled == 0) {
code_?:
                            pCVar38 = (this->fields)._orbitSettings;
                            if (pCVar38 != (CameraOrbitSettings *)0x0) {
                              if ((pCVar38->fields)._isOrbitEnabled == 0) {
code_?:
                                pCVar39 = (this->fields)._lookAroundSettings;
                                if (pCVar39 != (CameraLookAroundSettings *)0x0) {
                                  if ((pCVar39->fields)._isLookAroundEnabled != 0) {
                                    pCVar10 = (this->fields)._hotkeys;
                                    if ((pCVar10 == (CameraHotkeys *)0x0) ||
                                       (method_00 = (RTFocusCamera *)(pCVar10->fields)._lookAround,
                                       method_00 == (RTFocusCamera *)0x0)) goto code_?;
                                    bVar12 = Hotkeys::Hotkeys_IsActive
                                                       ((Hotkeys *)method_00,1,(MethodInfo *)0x0);
                                    if (bVar12 != 0) {
                                      pCVar39 = (this->fields)._lookAroundSettings;
                                      if (pCVar39 == (CameraLookAroundSettings *)0x0)
                                      goto code_?;
                                      if ((pCVar39->fields)._lookAroundMode != 0) {
                                        pIVar40 = (this->fields)._genricCamTransformCrtn;
                                        ppIVar41 = &(this->fields)._genricCamTransformCrtn;
                                        if (pIVar40 != (IEnumerator *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                                          MonoBehaviour_StopCoroutine
                                                    ((MonoBehaviour *)this,pIVar40,(MethodInfo *)0x0
                                                    );
                                          *ppIVar41 = (IEnumerator *)0x0;
                                          func_?(ppIVar41);
                                        }
                                        method_01 = (RTFocusCamera_DoSmoothOrbit_d_131__Class *)
                                                                                                        
                                                  TypeInfo__RTG__RTFocusCamera___DoSmoothLookAround_d__130
                                        ;
                                        if (cRam_? == '\0') {
                                          func_?(&
                                                  TypeInfo__RTG__RTFocusCamera___DoSmoothLookAround_d__130
                                                  );
                                          cRam_? = '\x01';
                                          method_01 = (RTFocusCamera_DoSmoothOrbit_d_131__Class *)
                                                                                                            
                                                  TypeInfo__RTG__RTFocusCamera___DoSmoothLookAround_d__130
                                          ;
                                        }
                                        goto code_?;
                                      }
                                      VVar42 = RTFocusCamera_CalculateLookAroundRotation
                                                         (this,(float)pCVar2,(float)deviceAxisY,
                                                          (MethodInfo *)0x0);
                                      pTStack_14 = (Transform *)VVar42.x;
                                      RTFocusCamera_LookAround
                                                (this,(float)pTStack_14,fStack_9,(MethodInfo *)0x0)
                                      ;
                                    }
                                  }
code_?:
                                  if (cRam_? == '\0') {
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  if ((this->fields).CanUseScrollWheel !=
                                      (CameraCanUseScrollWheelHandler *)0x0) {
                                    pOVar43 = (Object *)func_?();
                                    mscorlib.dll::System::ThrowHelper::
                                    ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                              (pOVar43,ExceptionArgument__Enum_obj,
                                               (MethodInfo *)method_00);
                                    pCVar44 = (this->fields).CanUseScrollWheel;
                                    if ((pCVar44 == (CameraCanUseScrollWheelHandler *)0x0) ||
                                       ((*(pCVar44->fields)._._.invoke_impl)
                                                  ((pCVar44->fields)._._.method_code,pOVar43,
                                                   (pCVar44->fields)._._.method),
                                       pOVar43 == (Object *)0x0)) goto code_?;
                                    if (*(char *)&pOVar43[1].klass == '\0') {
                                      return;
                                    }
                                    if (*(char *)((int)&pOVar43[1].klass + 1) != '\0') {
                                      return;
                                    }
                                  }
                                  deviceScroll = (MonitorData *)
                                                 RTInput::RTInput_MouseScroll((MethodInfo *)0x0);
                                  if ((float)deviceScroll == 0.0) {
                                    return;
                                  }
                                  pCVar45 = (this->fields)._zoomSettings;
                                  if (pCVar45 != (CameraZoomSettings *)0x0) {
                                    if ((pCVar45->fields)._isZoomEnabled == 0) {
                                      return;
                                    }
                                    if ((pCVar45->fields)._zoomMode != 0) {
                                      pIVar40 = (this->fields)._genricCamTransformCrtn;
                                      if (pIVar40 != (IEnumerator *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                                        MonoBehaviour_StopCoroutine
                                                  ((MonoBehaviour *)this,pIVar40,(MethodInfo *)0x0);
                                        (this->fields)._genricCamTransformCrtn = (IEnumerator *)0x0;
                                        func_?();
                                      }
                                      if (cRam_? == '\0') {
                                        func_?(&
                                                  TypeInfo__RTG__RTFocusCamera___DoSmoothZoom_d__132
                                                  );
                                        cRam_? = '\x01';
                                      }
                                      method_02 = TypeInfo__RTG__RTFocusCamera___DoSmoothZoom_d__132
                                      ;
                                      pOVar43 = (Object *)func_?();
                                      mscorlib.dll::System::ThrowHelper::
                                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                                (pOVar43,ExceptionArgument__Enum_obj,
                                                 (MethodInfo *)method_02);
                                      pOVar43[1].klass = (Object__Class *)0x0;
                                      pOVar43[2].klass = (Object__Class *)this;
                                      func_?(pOVar43 + 2,this);
                                      ppIVar41 = &(this->fields)._genricCamTransformCrtn;
                                      pOVar43[2].monitor = deviceScroll;
                                      *ppIVar41 = (IEnumerator *)pOVar43;
                                      func_?(ppIVar41,pOVar43);
                                      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                                      MonoBehaviour_StartCoroutine_Auto
                                                ((MonoBehaviour *)this,(IEnumerator *)pOVar43,
                                                 (MethodInfo *)0x0);
                                      return;
                                    }
                                    fVar3 = RTFocusCamera_CalculateScrollZoomAmount
                                                       (this,(float)deviceScroll,(MethodInfo *)0x0);
                                    RTFocusCamera_Zoom(this,fVar3,(MethodInfo *)0x0);
                                    return;
                                  }
                                }
                              }
                              else {
                                pCVar10 = (this->fields)._hotkeys;
                                if ((pCVar10 != (CameraHotkeys *)0x0) &&
                                   (method_00 = (RTFocusCamera *)(pCVar10->fields)._orbit,
                                   method_00 != (RTFocusCamera *)0x0)) {
                                  bVar12 = Hotkeys::Hotkeys_IsActive
                                                     ((Hotkeys *)method_00,1,(MethodInfo *)0x0);
                                  if (bVar12 == 0) goto code_?;
                                  pCVar38 = (this->fields)._orbitSettings;
                                  if (pCVar38 != (CameraOrbitSettings *)0x0) {
                                    if ((pCVar38->fields)._orbitMode == 0) {
                                      VVar42 = RTFocusCamera_CalculateOrbitRotation
                                                         (this,(float)pCVar2,(float)deviceAxisY,
                                                          (MethodInfo *)0x0);
                                      pTStack_14 = (Transform *)VVar42.x;
                                      RTFocusCamera_Orbit(this,(float)pTStack_14,fStack_9,
                                                          (MethodInfo *)0x0);
                                      goto code_?;
                                    }
                                    pIVar40 = (this->fields)._genricCamTransformCrtn;
                                    ppIVar41 = &(this->fields)._genricCamTransformCrtn;
                                    if (pIVar40 != (IEnumerator *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                                      MonoBehaviour_StopCoroutine
                                                ((MonoBehaviour *)this,pIVar40,(MethodInfo *)0x0);
                                      *ppIVar41 = (IEnumerator *)0x0;
                                      func_?(ppIVar41);
                                    }
                                    method_01 = TypeInfo__RTG__RTFocusCamera___DoSmoothOrbit_d__131;
                                    if (cRam_? == '\0') {
                                      func_?(&
                                                  TypeInfo__RTG__RTFocusCamera___DoSmoothOrbit_d__131
                                                  );
                                      cRam_? = '\x01';
                                      method_01 = 
                                      TypeInfo__RTG__RTFocusCamera___DoSmoothOrbit_d__131;
                                    }
                                    goto code_?;
                                  }
                                }
                              }
                            }
                          }
                          else {
                            pCVar10 = (this->fields)._hotkeys;
                            if ((pCVar10 != (CameraHotkeys *)0x0) &&
                               (pHVar11 = (pCVar10->fields)._pan, pHVar11 != (Hotkeys *)0x0)) {
                              bVar12 = Hotkeys::Hotkeys_IsActive(pHVar11,1,(MethodInfo *)0x0);
                              if (bVar12 == 0) goto code_?;
                              pCVar37 = (this->fields)._panSettings;
                              if (pCVar37 == (CameraPanSettings *)0x0) goto code_?;
                              if ((pCVar37->fields)._panMode == 0) {
                                VVar42 = RTFocusCamera_CalculatePanAmount
                                                   (this,(float)pCVar2,(float)deviceAxisY,
                                                    (MethodInfo *)0x0);
                                RTFocusCamera_Pan(this,VVar42,(MethodInfo *)0x0);
                                goto code_?;
                              }
                              pIVar40 = (this->fields)._genricCamTransformCrtn;
                              if (pIVar40 != (IEnumerator *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                                MonoBehaviour_StopCoroutine
                                          ((MonoBehaviour *)this,pIVar40,(MethodInfo *)0x0);
                                (this->fields)._genricCamTransformCrtn = (IEnumerator *)0x0;
                                func_?();
                              }
                              method_01 = (RTFocusCamera_DoSmoothOrbit_d_131__Class *)
                                          TypeInfo__RTG__RTFocusCamera___DoSmoothPan_d__129;
                              if (cRam_? == '\0') {
                                func_?(&TypeInfo__RTG__RTFocusCamera___DoSmoothPan_d__129);
                                cRam_? = '\x01';
                                method_01 = (RTFocusCamera_DoSmoothOrbit_d_131__Class *)
                                            TypeInfo__RTG__RTFocusCamera___DoSmoothPan_d__129;
                              }
code_?:
                              pOVar43 = (Object *)func_?();
                              mscorlib.dll::System::ThrowHelper::
                              ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                                        (pOVar43,ExceptionArgument__Enum_obj,(MethodInfo *)method_01
                                        );
                              method_00 = (RTFocusCamera *)(pOVar43 + 2);
                              pOVar43[1].klass = (Object__Class *)0x0;
                              method_00->klass = (RTFocusCamera__Class *)this;
                              func_?(method_00,this);
                              ppIVar41 = &(this->fields)._genricCamTransformCrtn;
                              pOVar43[2].monitor = (MonitorData *)pCVar2;
                              pOVar43[3].klass = deviceAxisY;
                              *ppIVar41 = (IEnumerator *)pOVar43;
                              func_?(ppIVar41,pOVar43);
                              UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                              MonoBehaviour_StartCoroutine_Auto
                                        ((MonoBehaviour *)this,(IEnumerator *)pOVar43,
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
  pcVar46 = (code *)swi(3);
  (*pcVar46)();
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
      pcVar6 = pIVar3[2].name;
      do {
        if (*(IInputDevice__Class **)(pcVar6 + (uint)uVar4 * 8) == TypeInfo__RTG__IInputDevice) {
          ppIVar7 = &(pOVar2->_0).image[5].nameToClassHashTable +
                     *(int *)(pcVar6 + (uint)uVar4 * 8 + 4) * 2;
          goto code_?;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    ppIVar7 = (Il2CppNameToTypeHandleHashTable **)
               func_?(pOVar2,TypeInfo__RTG__IInputDevice,7);
code_?:
    puVar8 = (ulonglong *)
              (*(code *)*ppIVar7)(&VStack_9,pOVar2,(Il2CppCodeGenModule *)ppIVar7[1]);
    uVar10 = *puVar8;
    fStack_11 = (float)uVar10;
    VStack_9.x = fStack_11;
    fStack_12 = (float)(uVar10 >> 0x20);
    VStack_9.y = fStack_12;
    this_00 = (this->fields)._targetCamera;
    VStack_9.z = 0.0;
    if (this_00 != (Camera *)0x0) {
      position.z = 0.0;
      position.x = (float)(int)uVar10;
      position.y = (float)(int)(uVar10 >> 0x20);
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenToViewportPoint
                          (&VStack_9,this_00,position,(MethodInfo *)0x0);
      uVar14 = pVVar13->x;
      uVar15 = pVVar13->y;
      if (((0.0 <= (float)uVar14) && ((float)uVar14 <= _UNK_?)) && (0.0 <= (float)uVar15)) {
        return (float)uVar15 <= _UNK_?;
      }
      return 0;
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  bVar17 = (*pcVar16)();
  return bVar17;
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


/* Void OnPrjSwitchTransitionEnd(CameraPrjSwitchTransition+Type) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_OnPrjSwitchTransitionEnd
               (RTFocusCamera *this,CameraPrjSwitchTransition_Type__Enum transitionType,
               MethodInfo *method)

{
  pCVar1 = (this->fields).PrjSwitchTransitionEnd;
  if (pCVar1 != (CameraProjectionSwitchBeginHandler *)0x0) {
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
      fVar10 = (float)uVar4 + (float)uVar7 * fVar8;
      fVar5 = fVar5 + pVVar2->z * fVar8;
      pTVar1 = (this->fields)._targetTransform;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pTVar1 != (Transform *)0x0) {
        point.y = fVar10;
        point.x = fVar9;
        point.z = fVar5;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_RotateAround
                  (pTVar1,point,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                   degreesWorldY,(MethodInfo *)0x0);
        pTVar1 = (this->fields)._targetTransform;
        if (pTVar1 != (Transform *)0x0) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_right
                             ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
          point_00.y = fVar10;
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
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
        value.y = fVar2 + (float)uVar10 * panAmount.y + (float)uVar6 * panAmount.x;
        value.x = fVar8 + (float)uVar9 * panAmount.y + (float)uVar5 * panAmount.x;
        value.z = fVar3 + pVVar1->z * panAmount.y + fVar7 * panAmount.x;
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
  uVar1 = CONCAT44(unaff_EBP,unaff_ESI);
  if (focusData != (CameraFocus_Data *)0x0) {
    this_00 = (this->fields)._targetTransform;
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,(focusData->fields)._cameraWorldPosition,(MethodInfo *)0x0);
      RTFocusCamera_SetFocusPoint(this,(focusData->fields)._focusPoint,(MethodInfo *)0x0);
      fVar2 = (focusData->fields)._focusPoint.y;
      fVar3 = (focusData->fields)._focusPoint.z;
      (this->fields)._lastFocusPoint.x = (focusData->fields)._focusPoint.x;
      (this->fields)._lastFocusPoint.y = fVar2;
      (this->fields)._lastFocusPoint.z = fVar3;
      RTFocusCamera_AdjustOrthoSizeForFocusPt(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)(uVar1);
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
              (this_00,bVar1 == 0,(MethodInfo *)0x0);
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
  pIVar1 = (this->fields)._genricCamTransformCrtn;
  ppIVar2 = &(this->fields)._genricCamTransformCrtn;
  if (pIVar1 != (IEnumerator *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              ((MonoBehaviour *)this,pIVar1,(MethodInfo *)0x0);
    *ppIVar2 = (IEnumerator *)0x0;
    func_?(ppIVar2,0);
  }
  pIVar1 = (this->fields)._focusCrtn;
  ppIVar2 = &(this->fields)._focusCrtn;
  if (pIVar1 != (IEnumerator *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              ((MonoBehaviour *)this,pIVar1,(MethodInfo *)0x0);
    *ppIVar2 = (IEnumerator *)0x0;
    func_?(ppIVar2,0);
  }
  pCVar3 = (this->fields)._projectionSwitchSettings;
  if (pCVar3 != (CameraProjectionSwitchSettings *)0x0) {
    this_00 = (this->fields)._targetCamera;
    if ((pCVar3->fields)._switchMode == 0) {
      pCVar4 = (this->fields)._prjSwitchTranstion;
      if (pCVar4 != (CameraPrjSwitchTransition *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Object);
          cRam_? = '\x01';
        }
        if ((pCVar4->fields)._transitionType == 0) {
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                             ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            ppCVar6 = &(pCVar4->fields)._targetCamera;
            *ppCVar6 = this_00;
            func_?(ppCVar6,this_00);
          }
        }
        pCVar4 = (this->fields)._prjSwitchTranstion;
        if (pCVar4 != (CameraPrjSwitchTransition *)0x0) {
          if ((pCVar4->fields)._transitionType == 0) {
            (pCVar4->fields)._camFieldOfView =
                 (float)((uint)(this->fields)._fieldOfView & _UNK_?);
          }
          pCVar4 = (this->fields)._prjSwitchTranstion;
          pVVar7 = RTFocusCamera_GetFocusPoint((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
          fVar8 = pVVar7->y;
          fVar9 = pVVar7->z;
          if (pCVar4 != (CameraPrjSwitchTransition *)0x0) {
            if ((pCVar4->fields)._transitionType == 0) {
              (pCVar4->fields)._camFocusPoint.x = pVVar7->x;
              (pCVar4->fields)._camFocusPoint.y = fVar8;
              (pCVar4->fields)._camFocusPoint.z = fVar9;
            }
            pCVar3 = (this->fields)._projectionSwitchSettings;
            if ((pCVar3 != (CameraProjectionSwitchSettings *)0x0) &&
               (pCVar4 = (this->fields)._prjSwitchTranstion,
               pCVar4 != (CameraPrjSwitchTransition *)0x0)) {
              if ((pCVar4->fields)._transitionType == 0) {
                fVar8 = (float)((uint)(pCVar3->fields)._transitionDurationInSeconds & _UNK_?
                                );
                fVar9 = _UNK_?;
                if (_UNK_? <= fVar8) {
                  fVar9 = fVar8;
                }
                (pCVar4->fields)._durationInSeconds = fVar9;
              }
              pOVar10 = (Object__Class *)(this->fields)._prjSwitchTranstion;
              if (pOVar10 != (Object__Class *)0x0) {
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pOVar11 = (Object_1 *)(pOVar10->_0).this_arg.data.typeHandle;
                if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__Object);
                }
                bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                   (pOVar11,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar5 == 0) {
                  pOVar11 = *(Object_1 **)&(pOVar10->_0).this_arg.attrs;
                  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__Object);
                  }
                  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                     (pOVar11,(Object_1 *)0x0,(MethodInfo *)0x0);
                  if (bVar5 == 0) {
                    if ((pOVar10->_0).klass != (Il2CppClass *)0x0) {
                      pMVar12 = (MonoBehaviour *)(pOVar10->_0).this_arg.data.typeHandle;
                      if (pMVar12 == (MonoBehaviour *)0x0) goto code_?;
                      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                      MonoBehaviour_StopCoroutine
                                (pMVar12,*(IEnumerator **)&(pOVar10->_0).byval_arg.attrs,
                                 (MethodInfo *)0x0);
                      (pOVar10->_0).byval_arg.attrs = 0;
                      (pOVar10->_0).byval_arg.type = 0;
                      (pOVar10->_0).byval_arg.field_0x7 = 0;
                      func_?(&(pOVar10->_0).byval_arg.attrs,0);
                      this_01 = *(Component **)&(pOVar10->_0).this_arg.attrs;
                      if ((this_01 == (Component *)0x0) ||
                         (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                    Component_get_transform(this_01,(MethodInfo *)0x0),
                         this_02 == (Transform *)0x0)) goto code_?;
                      value.x = (float)(pOVar10->_0).generic_class;
                      value.y = (float)(pOVar10->_0).typeMetadataHandle;
                      value.z = (float)(pOVar10->_0).interopData;
                      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                                (this_02,value,(MethodInfo *)0x0);
                    }
                    pMVar12 = (MonoBehaviour *)(pOVar10->_0).this_arg.data.typeHandle;
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
                    value_00[2].klass = pOVar10;
                    func_?();
                    puVar13 = &(pOVar10->_0).byval_arg.attrs;
                    *(Object **)puVar13 = value_00;
                    func_?(puVar13,value_00);
                    if (pMVar12 != (MonoBehaviour *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                      MonoBehaviour_StartCoroutine_Auto
                                (pMVar12,(IEnumerator *)value_00,(MethodInfo *)0x0);
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
      bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                         (this_00,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_orthographic
                (this_00,bVar5 == 0,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
    pIVar2 = (this->fields)._genricCamTransformCrtn;
    ppIVar3 = &(this->fields)._genricCamTransformCrtn;
    if (pIVar2 != (IEnumerator *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
                ((MonoBehaviour *)this,pIVar2,(MethodInfo *)0x0);
      *ppIVar3 = (IEnumerator *)0x0;
      func_?(ppIVar3,0);
    }
    pIVar2 = (this->fields)._focusCrtn;
    ppIVar4 = &(this->fields)._focusCrtn;
    if (pIVar2 != (IEnumerator *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
                ((MonoBehaviour *)this,pIVar2,(MethodInfo *)0x0);
      *ppIVar4 = (IEnumerator *)0x0;
      func_?(ppIVar4,0);
    }
    pCVar5 = (this->fields)._rotationSwitchSettings;
    if (pCVar5 != (CameraRotationSwitchSettings *)0x0) {
      if ((pCVar5->fields)._switchMode == 0) {
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
        if ((pCVar5->fields)._switchMode != 1) {
          if ((pCVar5->fields)._switchType == 0) {
            pTVar6 = (this->fields)._targetTransform;
            if (pTVar6 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar6,targetRotation,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            RTFocusCamera_GetFocusPoint((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
            pTVar6 = (this->fields)._targetTransform;
            if (pTVar6 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar6,targetRotation,(MethodInfo *)0x0);
              pTVar6 = (this->fields)._targetTransform;
              if (pTVar6 != (Transform *)0x0) {
                fVar7 = 0.0;
                __return_storage_ptr__ = &VStack_8;
                VStack_8.z = (float)&UNK_?;
                pTVar9 = pTVar6;
                pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                    (__return_storage_ptr__,pTVar6,(MethodInfo *)0x0);
                uVar11 = pVVar10->x;
                uVar12 = pVVar10->y;
                fVar13 = (this->fields)._focusPointOffset;
                value.y = (float)pTVar9 - (float)uVar12 * fVar13;
                value.x = (float)__return_storage_ptr__ - (float)uVar11 * fVar13;
                value.z = fVar7 - pVVar10->z * fVar13;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar6,value,(MethodInfo *)0x0);
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
      *ppIVar3 = (IEnumerator *)value_00;
      func_?(ppIVar3,value_00);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)value_00,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
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
  if (this_00 == (Transform *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     (&VStack_3,this_00,(MethodInfo *)0x0);
  VStack_3.x = pVVar2->x;
  VStack_3.y = pVVar2->y;
  VStack_3.z = pVVar2->z;
  fVar4 = focusPoint.x - VStack_3.x;
  fVar5 = focusPoint.y - VStack_3.y;
  fVar6 = focusPoint.z - VStack_3.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar7 = (double)(fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6);
  if (0.0 <= dVar7) {
    (this->fields)._focusPointOffset = (float)SQRT(dVar7);
    return;
  }
  func_?();
  (this->fields)._focusPointOffset = (float)dVar7;
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
    fVar4 = pVVar2->x;
    fVar5 = pVVar2->y;
    fVar6 = pVVar2->z;
    pTVar1 = (this->fields)._targetTransform;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                         ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
      VStack_3.x = pVVar2->x;
      VStack_3.y = pVVar2->y;
      VStack_3.z = pVVar2->z;
      fVar7 = (this->fields)._focusPointOffset;
      fVar6 = fVar6 + VStack_3.z * fVar7;
      fVar4 = fVar4 + VStack_3.x * fVar7;
      fVar5 = fVar5 + VStack_3.y * fVar7;
      (this->fields)._lastFocusPoint.x = fVar4;
      (this->fields)._lastFocusPoint.y = fVar5;
      (this->fields)._lastFocusPoint.z = fVar6;
      focusPoint.y = fVar5;
      focusPoint.x = fVar4;
      focusPoint.z = fVar6;
      RTFocusCamera_SetFocusPoint(this,focusPoint,(MethodInfo *)0x0);
      RTFocusCamera_AdjustOrthoSizeForFocusPt(this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void StopCamTransform() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_StopCamTransform
               (RTFocusCamera *this,MethodInfo *method)

{
  routine = (this->fields)._genricCamTransformCrtn;
  ppIVar1 = &(this->fields)._genricCamTransformCrtn;
  if (routine != (IEnumerator *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
    *ppIVar1 = (IEnumerator *)0x0;
    func_?(ppIVar1,0);
  }
  return;
}


/* Void StopFocus() */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_StopFocus
               (RTFocusCamera *this,MethodInfo *method)

{
  routine = (this->fields)._focusCrtn;
  ppIVar1 = &(this->fields)._focusCrtn;
  if (routine != (IEnumerator *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
    *ppIVar1 = (IEnumerator *)0x0;
    func_?(ppIVar1,0);
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
        value = (Object *)func_?(TypeInfo__RTG__YesNoAnswer);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (value,ExceptionArgument__Enum_obj,in_stack_3);
        pCVar4 = (this->fields).CanProcessInput;
        if (pCVar4 == (CameraCanProcessInputHandler *)0x0) goto code_?;
        (*(pCVar4->fields)._._.invoke_impl)
                  ((pCVar4->fields)._._.method_code,value,(pCVar4->fields)._._.method);
        if (value == (Object *)0x0) goto code_?;
        if ((*(char *)&value[1].klass == '\0') || (*(char *)((int)&value[1].klass + 1) != '\0'))
        goto code_?;
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
  pVVar1 = RTFocusCamera_GetFocusPoint((Vector3 *)&stack0xffffffa0,this,(MethodInfo *)0x0);
  pTVar2 = (this->fields)._targetTransform;
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  if (pTVar2 != (Transform *)0x0) {
    fVar5 = (float)(undefined4)uVar3;
    fVar6 = (float)uVar3._4_4_;
    fVar7 = fVar4;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffb0,pTVar2,(MethodInfo *)0x0);
    uVar8 = pVVar1->x;
    uVar9 = pVVar1->y;
    fVar10 = pVVar1->z;
    pTVar11 = (this->fields)._targetTransform;
    if (pTVar11 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          ((Vector3 *)&stack0xffffff90,pTVar11,(MethodInfo *)0x0);
      uVar12 = pVVar1->x;
      uVar13 = pVVar1->y;
      value.y = (float)uVar9 + (float)uVar13 * zoomAmount;
      value.x = (float)uVar8 + (float)uVar12 * zoomAmount;
      value.z = fVar10 + pVVar1->z * zoomAmount;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar2,value,(MethodInfo *)0x0);
      this_00 = (this->fields)._targetCamera;
      if (this_00 != (Camera *)0x0) {
        bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_orthographic
                           (this_00,(MethodInfo *)0x0);
        if (bVar14 == 0) goto code_?;
        pTVar2 = (this->fields)._targetTransform;
        if (pTVar2 != (Transform *)0x0) {
          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffff90,pTVar2,(MethodInfo *)0x0);
          uVar15 = pVVar1->x;
          uVar16 = pVVar1->y;
          fVar17 = (float)uVar3;
          fVar10 = fVar17 - (float)uVar15;
          fVar18 = (float)((ulonglong)uVar3 >> 0x20) - (float)uVar16;
          fVar4 = fVar4 - pVVar1->z;
          pTVar2 = (this->fields)._targetTransform;
          if (pTVar2 != (Transform *)0x0) {
            pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                ((Vector3 *)&stack0xffffff90,pTVar2,(MethodInfo *)0x0);
            uVar19 = pVVar1->x;
            uVar20 = pVVar1->y;
            if ((float)uVar19 * fVar10 + (float)uVar20 * fVar18 + pVVar1->z * fVar4 < _UNK_?)
            {
              pTVar2 = (this->fields)._targetTransform;
              if (pTVar2 == (Transform *)0x0) goto code_?;
              fVar6 = 0.0;
              pTVar11 = pTVar2;
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                  ((Vector3 *)&stack0xffffff90,pTVar2,(MethodInfo *)0x0);
              uVar21 = pVVar1->x;
              uVar22 = pVVar1->y;
              fVar5 = (float)pTVar11 - (float)uVar22 * _UNK_?;
              fVar6 = fVar6 - pVVar1->z * _UNK_?;
              fVar7 = 0.0;
              value_00.y = fVar5;
              value_00.x = fVar17 - (float)uVar21 * _UNK_?;
              value_00.z = fVar6;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar2,value_00,(MethodInfo *)0x0);
            }
code_?:
            focusPoint.y = fVar6;
            focusPoint.x = fVar5;
            focusPoint.z = fVar7;
            RTFocusCamera_SetFocusPoint(this,focusPoint,(MethodInfo *)0x0);
            RTFocusCamera_AdjustOrthoSizeForFocusPt(this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
  ppWVar1 = &(this->fields)._worldTransformSnapshot;
  *ppWVar1 = this_00;
  func_?(ppWVar1,this_00);
  method_00 = TypeInfo__RTG__CameraPrjSwitchTransition;
  value = (CameraPrjSwitchTransition *)func_?();
  (value->fields)._camFieldOfView = 60.0;
  (value->fields)._durationInSeconds = 0.23;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  ppCVar2 = &(this->fields)._prjSwitchTranstion;
  *ppCVar2 = value;
  func_?(ppCVar2,value);
  (this->fields)._isObjectVisibilityDirty = 1;
  this_01 = (List_1_UnityEngine_GameObject_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  ppLVar3 = &(this->fields)._visibleObjects;
  *ppLVar3 = this_01;
  func_?(ppLVar3,this_01);
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
    pBVar4 = (Boolean__Array *)func_?();
    (this->fields)._moveDirFlags = pBVar4;
    func_?();
    value_00 = (CameraSettings *)func_?();
    bVar5 = cRam_? == '\0';
    (value_00->fields)._canProcessInput = 1;
    if (bVar5) {
      func_?();
      cRam_? = '\x01';
    }
    (value_00->fields)._._canBeDisplayed = 1;
    (value_00->fields)._._isExpanded = 1;
    pMVar6 = (MethodInfo *)&(value_00->fields)._._foldoutLabel;
    *(String **)pMVar6 = StringLiteral_Settings;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_00,ExceptionArgument__Enum_obj,pMVar6);
    (this->fields)._settings = value_00;
    func_?();
    value_01 = (CameraMoveSettings *)func_?();
    bVar5 = cRam_? == '\0';
    (value_01->fields)._moveSpeed = 6.0;
    (value_01->fields)._accelerationRate = 15.0;
    if (bVar5) {
      func_?();
      cRam_? = '\x01';
    }
    (value_01->fields)._._canBeDisplayed = 1;
    (value_01->fields)._._isExpanded = 1;
    pMVar6 = (MethodInfo *)&(value_01->fields)._._foldoutLabel;
    *(String **)pMVar6 = StringLiteral_Settings;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_01,ExceptionArgument__Enum_obj,pMVar6);
    (this->fields)._moveSettings = value_01;
    func_?();
    value_02 = (CameraPanSettings *)func_?();
    bVar5 = cRam_? == '\0';
    (value_02->fields)._standardPanSensitivity = 1.0;
    (value_02->fields)._smoothPanSensitivity = 0.7;
    (value_02->fields)._smoothValue = 4.0;
    (value_02->fields)._isPanningEnabled = 1;
    if (bVar5) {
      func_?();
      cRam_? = '\x01';
    }
    (value_02->fields)._._canBeDisplayed = 1;
    (value_02->fields)._._isExpanded = 1;
    pMVar6 = (MethodInfo *)&(value_02->fields)._._foldoutLabel;
    *(String **)pMVar6 = StringLiteral_Settings;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_02,ExceptionArgument__Enum_obj,pMVar6);
    (this->fields)._panSettings = value_02;
    func_?();
    value_03 = (CameraLookAroundSettings *)func_?();
    bVar5 = cRam_? == '\0';
    (value_03->fields)._standardLookAroundSensitivity = 5.0;
    (value_03->fields)._smoothLookAroundSensitivity = 5.0;
    (value_03->fields).smoothValue = 4.0;
    (value_03->fields)._isLookAroundEnabled = 1;
    if (bVar5) {
      func_?();
      cRam_? = '\x01';
    }
    (value_03->fields)._._canBeDisplayed = 1;
    (value_03->fields)._._isExpanded = 1;
    pMVar6 = (MethodInfo *)&(value_03->fields)._._foldoutLabel;
    *(String **)pMVar6 = StringLiteral_Settings;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_03,ExceptionArgument__Enum_obj,pMVar6);
    (this->fields)._lookAroundSettings = value_03;
    func_?();
    value_04 = (CameraOrbitSettings *)func_?();
    bVar5 = cRam_? == '\0';
    (value_04->fields)._standardOrbitSensitivity = 5.0;
    (value_04->fields)._smoothOrbitSensitivity = 5.0;
    (value_04->fields)._smoothValue = 8.0;
    (value_04->fields)._isOrbitEnabled = 1;
    if (bVar5) {
      func_?();
      cRam_? = '\x01';
    }
    (value_04->fields)._._canBeDisplayed = 1;
    (value_04->fields)._._isExpanded = 1;
    pMVar6 = (MethodInfo *)&(value_04->fields)._._foldoutLabel;
    *(String **)pMVar6 = StringLiteral_Settings;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_04,ExceptionArgument__Enum_obj,pMVar6);
    (this->fields)._orbitSettings = value_04;
    func_?();
    value_05 = (CameraZoomSettings *)func_?();
    bVar5 = cRam_? == '\0';
    (value_05->fields)._orthoStandardZoomSensitivity = 10.0;
    (value_05->fields)._perspStandardZoomSensitivity = 10.0;
    (value_05->fields)._orthoSmoothZoomSensitivity = 5.0;
    (value_05->fields)._perspSmoothZoomSensitivity = 5.0;
    (value_05->fields)._orthoZoomSmoothValue = 5.0;
    (value_05->fields)._perspZoomSmoothValue = 5.0;
    (value_05->fields)._isZoomEnabled = 1;
    if (bVar5) {
      func_?();
      cRam_? = '\x01';
    }
    (value_05->fields)._._canBeDisplayed = 1;
    (value_05->fields)._._isExpanded = 1;
    pMVar6 = (MethodInfo *)&(value_05->fields)._._foldoutLabel;
    *(String **)pMVar6 = StringLiteral_Settings;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_05,ExceptionArgument__Enum_obj,pMVar6);
    (this->fields)._zoomSettings = value_05;
    func_?();
    value_06 = (CameraFocusSettings *)func_?();
    bVar5 = cRam_? == '\0';
    (value_06->fields)._focusMode = 2;
    (value_06->fields)._constantSpeed = 10.0;
    (value_06->fields)._smoothTime = 1.5;
    (value_06->fields)._focusDistanceAdd = 1.2;
    if (bVar5) {
      func_?();
      cRam_? = '\x01';
    }
    (value_06->fields)._._canBeDisplayed = 1;
    (value_06->fields)._._isExpanded = 1;
    pMVar6 = (MethodInfo *)&(value_06->fields)._._foldoutLabel;
    *(String **)pMVar6 = StringLiteral_Settings;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_06,ExceptionArgument__Enum_obj,pMVar6);
    (this->fields)._focusSettings = value_06;
    func_?();
    value_07 = (CameraRotationSwitchSettings *)func_?();
    bVar5 = cRam_? == '\0';
    (value_07->fields)._switchMode = 1;
    (value_07->fields)._constantSwitchDurationInSeconds = 0.3;
    (value_07->fields)._smoothValue = 8.0;
    if (bVar5) {
      func_?();
      cRam_? = '\x01';
    }
    (value_07->fields)._._canBeDisplayed = 1;
    (value_07->fields)._._isExpanded = 1;
    pMVar6 = (MethodInfo *)&(value_07->fields)._._foldoutLabel;
    *(String **)pMVar6 = StringLiteral_Settings;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_07,ExceptionArgument__Enum_obj,pMVar6);
    (this->fields)._rotationSwitchSettings = value_07;
    func_?();
    value_08 = (CameraProjectionSwitchSettings *)func_?();
    bVar5 = cRam_? == '\0';
    (value_08->fields)._transitionDurationInSeconds = 0.23;
    if (bVar5) {
      ppSStack7 = &StringLiteral_Settings;
      func_?();
      cRam_? = '\x01';
    }
    (value_08->fields)._._canBeDisplayed = 1;
    (value_08->fields)._._isExpanded = 1;
    pMVar6 = (MethodInfo *)&(value_08->fields)._._foldoutLabel;
    *(String **)pMVar6 = StringLiteral_Settings;
    ppSStack7 = (String **)StringLiteral_Settings;
    func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)value_08,ExceptionArgument__Enum_obj,pMVar6);
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  ppCVar1 = &(this->fields).CanProcessInput;
  a = *ppCVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((CameraCanProcessInputHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__CameraCanProcessInputHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__CameraCanProcessInputHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pCVar5 = (CameraCanProcessInputHandler *)func_?(ppCVar1,pDVar3,a);
    bVar6 = pCVar5 == a;
    a = pCVar5;
    if (bVar6) {
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
  ppCVar1 = &(this->fields).CanUseScrollWheel;
  a = *ppCVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((CameraCanUseScrollWheelHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__CameraCanUseScrollWheelHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__CameraCanUseScrollWheelHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pCVar5 = (CameraCanUseScrollWheelHandler *)func_?(ppCVar1,pDVar3,a);
    bVar6 = pCVar5 == a;
    a = pCVar5;
    if (bVar6) {
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
  ppCVar1 = &(this->fields).PrjSwitchTransitionBegin;
  a = *ppCVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchBeginHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pCVar5 = (CameraProjectionSwitchBeginHandler *)func_?(ppCVar1,pDVar3,a);
    bVar6 = pCVar5 == a;
    a = pCVar5;
    if (bVar6) {
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
  ppCVar1 = &(this->fields).PrjSwitchTransitionEnd;
  a = *ppCVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchBeginHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pCVar5 = (CameraProjectionSwitchBeginHandler *)func_?(ppCVar1,pDVar3,a);
    bVar6 = pCVar5 == a;
    a = pCVar5;
    if (bVar6) {
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
  ppCVar1 = &(this->fields).PrjSwitchTransitionUpdate;
  a = *ppCVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchUpdateHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__CameraProjectionSwitchUpdateHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pCVar5 = (CameraProjectionSwitchUpdateHandler *)func_?(ppCVar1,pDVar3,a);
    bVar6 = pCVar5 == a;
    a = pCVar5;
    if (bVar6) {
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
  ppCVar1 = &(this->fields).CanProcessInput;
  source = *ppCVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((CameraCanProcessInputHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__CameraCanProcessInputHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__CameraCanProcessInputHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pCVar5 = (CameraCanProcessInputHandler *)func_?(ppCVar1,pDVar3,source);
    bVar6 = pCVar5 == source;
    source = pCVar5;
    if (bVar6) {
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
  ppCVar1 = &(this->fields).CanUseScrollWheel;
  source = *ppCVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((CameraCanUseScrollWheelHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__CameraCanUseScrollWheelHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__CameraCanUseScrollWheelHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pCVar5 = (CameraCanUseScrollWheelHandler *)func_?(ppCVar1,pDVar3,source);
    bVar6 = pCVar5 == source;
    source = pCVar5;
    if (bVar6) {
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
  ppCVar1 = &(this->fields).PrjSwitchTransitionBegin;
  source = *ppCVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchBeginHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pCVar5 = (CameraProjectionSwitchBeginHandler *)func_?(ppCVar1,pDVar3,source);
    bVar6 = pCVar5 == source;
    source = pCVar5;
    if (bVar6) {
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
  ppCVar1 = &(this->fields).PrjSwitchTransitionEnd;
  source = *ppCVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchBeginHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__CameraProjectionSwitchBeginHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__CameraProjectionSwitchBeginHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pCVar5 = (CameraProjectionSwitchBeginHandler *)func_?(ppCVar1,pDVar3,source);
    bVar6 = pCVar5 == source;
    source = pCVar5;
    if (bVar6) {
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
  ppCVar1 = &(this->fields).PrjSwitchTransitionUpdate;
  source = *ppCVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDVar2 != (Delegate *)0x0) {
      if ((CameraProjectionSwitchUpdateHandler__Class *)pDVar2->klass ==
          TypeInfo__RTG__CameraProjectionSwitchUpdateHandler) {
        pDVar3 = pDVar2;
      }
      if (pDVar3 == (Delegate *)0x0) {
        func_?(pDVar2,TypeInfo__RTG__CameraProjectionSwitchUpdateHandler);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pCVar5 = (CameraProjectionSwitchUpdateHandler *)func_?(ppCVar1,pDVar3,source);
    bVar6 = pCVar5 == source;
    source = pCVar5;
    if (bVar6) {
      return;
    }
  } while( true );
}


/* Void set_WorldPosition(Vector3) */

void Assembly-CSharp.dll::RTG::RTFocusCamera::RTFocusCamera_set_WorldPosition
               (RTFocusCamera *this,Vector3 value,MethodInfo *method)

{
  pVVar1 = RTFocusCamera_GetFocusPoint((Vector3 *)&stack0xffffffe8,this,(MethodInfo *)0x0);
  this_00 = (this->fields)._targetTransform;
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (this_00,value,(MethodInfo *)0x0);
    focusPoint.y = (float)uVar3;
    focusPoint.x = (float)uVar2;
    focusPoint.z = fVar4;
    RTFocusCamera_SetFocusPoint(this,focusPoint,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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

