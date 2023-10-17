
/* Boolean AllowFullscreenChange() */

bool Assembly-CSharp.dll::FullScreenController::FullScreenController_AllowFullscreenChange
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullScreenController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  bVar1 = FullScreenController_IsFullscreenSupported((MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 1;
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  return TypeInfo__FullScreenController->static_fields->fakeFullscreen;
}


/* Tuple`2[Int32,Int32] GetWidthHeight(MVOrientation, Int32, Int32) */

Tuple_2_Int32_Int32_ *
Assembly-CSharp.dll::FullScreenController::FullScreenController_GetWidthHeight
          (MVOrientation__Enum orientation,int32_t widthInput,int32_t heightInput,MethodInfo *method
          )

{
  if (cRam_? == '\0') {
    func_?(&System__Tuple<int,_int>_MethodInfo__System__Tuple__Create<int,_int>_int__int_);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)widthInput;
  if ((orientation == MVOrientation__Enum_LandscapeLeft) ||
     (orientation == MVOrientation__Enum_LandscapeRight)) {
    if (heightInput <= widthInput) goto code_?;
  }
  else if (widthInput <= heightInput) goto code_?;
  pOVar1 = (Object *)heightInput;
  heightInput = widthInput;
code_?:
  pTVar2 = mscorlib.dll::System::Tuple::Tuple_Create_1
                     (pOVar1,(Object *)heightInput,
                      System__Tuple<int,_int>_MethodInfo__System__Tuple__Create<int,_int>_int__int_)
  ;
  return (Tuple_2_Int32_Int32_ *)pTVar2;
}


/* Void Init(Int32, Int32, Boolean) */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_Init
               (int32_t width,int32_t height,bool init,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullScreenController);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral__init_);
    func_?(&StringLiteral_Init__w_);
    func_?(&StringLiteral___h_);
    cRam_? = '\x01';
  }
  values = (String__Array *)func_?(TypeInfo__System__String,6);
  if (values == (String__Array *)0x0) {
    func_?();
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
code_?:
    uVar1 = func_?(0);
    func_?(uVar1);
  }
  else {
    if ((StringLiteral_Init__w_ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral_Init__w_,(values->klass->_0).element_class),
       iVar2 == 0)) goto code_?;
    pSVar3 = StringLiteral_Init__w_;
    if (values->max_length == 0) goto code_?;
    values->vector[0] = StringLiteral_Init__w_;
    method_00 = (MethodInfo *)&UNK_?;
    func_?(values->vector,pSVar3);
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&width,(MethodInfo *)0x0);
    if ((pSVar3 != (String *)0x0) &&
       (iVar2 = func_?(pSVar3,(values->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (values->max_length < 2) goto code_?;
    values->vector[1] = pSVar3;
    func_?(values->vector + 1,pSVar3);
    if ((StringLiteral___h_ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral___h_,(values->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    pSVar3 = StringLiteral___h_;
    if (values->max_length < 3) goto code_?;
    values->vector[2] = StringLiteral___h_;
    func_?(values->vector + 2,pSVar3);
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&height,(MethodInfo *)0x0);
    if ((pSVar3 != (String *)0x0) &&
       (iVar2 = func_?(pSVar3,(values->klass->_0).element_class), iVar2 == 0))
    goto code_?;
    if (values->max_length < 4) goto code_?;
    values->vector[3] = pSVar3;
    func_?(values->vector + 3,pSVar3);
    if ((StringLiteral__init_ != (String *)0x0) &&
       (iVar2 = func_?(StringLiteral__init_,(values->klass->_0).element_class), iVar2 == 0)
       ) goto code_?;
    pSVar3 = StringLiteral__init_;
    if (values->max_length < 5) goto code_?;
    values->vector[4] = StringLiteral__init_;
    func_?(values->vector + 4,pSVar3);
    pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                       ((Boolean *)&init,(IFormatProvider *)0x0,method_00);
    if ((pSVar3 == (String *)0x0) ||
       (iVar2 = func_?(pSVar3,(values->klass->_0).element_class), iVar2 != 0)) {
      if (5 < values->max_length) {
        values->vector[5] = pSVar3;
        func_?(values->vector + 5,pSVar3);
        pSVar3 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
        if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__FullScreenController);
        }
        FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
        TypeInfo__FullScreenController->static_fields->initialized = init;
        TypeInfo__FullScreenController->static_fields->screenWidthBeforeFullscreen = width;
        TypeInfo__FullScreenController->static_fields->screenHeightBeforeFullscreen = height;
        return;
      }
      goto code_?;
    }
  }
  uVar1 = func_?(0);
  func_?(uVar1);
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InitSupports(Boolean, Boolean) */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_InitSupports
               (bool fsSupport,bool fake,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullScreenController);
    func_?(&StringLiteral_InitSupports__fsSupport_);
    func_?(&StringLiteral___fake_);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                     ((Boolean *)&fsSupport,(IFormatProvider *)0x0,unaff_ESI);
  str3 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                   ((Boolean *)&fake,(IFormatProvider *)0x0,unaff_ESI);
  pSVar1 = mscorlib.dll::System::String::String_Concat_5
                     (StringLiteral_InitSupports__fsSupport_,pSVar1,StringLiteral___fake_,str3,
                      (MethodInfo *)0x0);
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  FullScreenController_PrintLog(pSVar1,(MethodInfo *)0x0);
  TypeInfo__FullScreenController->static_fields->fullscreenSupported = fsSupport;
  if (fake == 0) {
    bVar2 = 0;
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    bVar2 = TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField;
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__FullScreenController->static_fields->fakeFullscreen = bVar2 != 0;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)0x0,in_stack_3,in_stack_4);
  TypeInfo__FullScreenController->static_fields->initialized = 1;
  return;
}


/* Boolean IsFullscreenSupported() */

bool Assembly-CSharp.dll::FullScreenController::FullScreenController_IsFullscreenSupported
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    func_?(&TypeInfo__FullScreenController);
    func_?(&StringLiteral_Microsoft_Internet_Explorer);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__BrowserComm);
    cRam_? = '\x01';
  }
  if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__BrowserComm);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (TypeInfo__BrowserComm->static_fields->browserName,
                     StringLiteral_Microsoft_Internet_Explorer,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
      ppBStack2 = (BrowserComm__Class **)TypeInfo__BrowserComm;
      func_?();
    }
    if (cRam_? == '\0') {
      ppBStack2 = &TypeInfo__BrowserComm;
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__BrowserComm->_1).cctor_finished_or_no_cctor == 0) {
      ppBStack2 = (BrowserComm__Class **)TypeInfo__BrowserComm;
      func_?();
    }
    if (7 < TypeInfo__BrowserComm->static_fields->browserVersion) {
      return 0;
    }
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    ppBStack2 = (BrowserComm__Class **)TypeInfo__FullScreenController;
    func_?();
  }
  return TypeInfo__FullScreenController->static_fields->fullscreenSupported;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_LateUpdate(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__FullScreenController);
    func_?(&StringLiteral_Changed_to_fullscreen__fake____c);
    func_?(&StringLiteral_Could_not_call_OnFullScreenChang);
    func_?(&StringLiteral_Fullscreen_not_supported_and_not);
    cRam_? = '\x01';
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullScreenController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  if (TypeInfo__FullScreenController->static_fields->_WaitingForFullscreenChange_k__BackingField ==
      0) {
    return;
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  if (TypeInfo__FullScreenController->static_fields->fullScreen != 0) {
    if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__FullScreenController);
    }
    if (TypeInfo__FullScreenController->static_fields->fakeFullscreen == 0) {
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                ((Resolution *)&stack0xffffffe0,(MethodInfo *)0x0);
      pvVar1 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_7
                         (&stack0xffffffec,(MethodInfo *)0x0);
      pvVar2 = (void *)UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width
                                 ((MethodInfo *)0x0);
      if (pvVar1 != pvVar2) {
        return;
      }
      pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                         ((Resolution *)&stack0xffffffe0,(MethodInfo *)0x0);
      method_00 = pRVar3->m_Width;
      iVar4 = mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
              SparselyPopulatedArrayAddInfo_1_System_Object__get_Index
                        ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)&stack0xffffffec,
                         (MethodInfo *)method_00);
      iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      if (iVar4 != iVar5) {
        return;
      }
    }
  }
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_fullScreen((MethodInfo *)0x0);
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  if (bVar6 == TypeInfo__FullScreenController->static_fields->fullScreen) {
    if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__FullScreenController);
    }
    if (TypeInfo__FullScreenController->static_fields->fullscreenSupported == 0)
    goto code_?;
    if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__FullScreenController);
    }
    if (TypeInfo__FullScreenController->static_fields->OnFullScreenChange ==
        (UnityAction_1_System_Boolean_ *)0x0) {
code_?:
      if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__FullScreenController);
      }
      FullScreenController_PrintLog
                (StringLiteral_Could_not_call_OnFullScreenChang,(MethodInfo *)0x0);
      goto code_?;
    }
    if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pUVar7 = TypeInfo__FullScreenController->static_fields->OnFullScreenChange;
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_fullScreen((MethodInfo *)0x0);
    if (pUVar7 == (UnityAction_1_System_Boolean_ *)0x0) goto code_?;
    pcVar8 = (pUVar7->fields)._._.invoke_impl;
    pvVar1 = (pUVar7->fields)._._.method_code;
  }
  else {
code_?:
    if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__FullScreenController);
    }
    if (TypeInfo__FullScreenController->static_fields->fakeFullscreen == 0) {
      if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__FullScreenController);
      }
      if (TypeInfo__FullScreenController->static_fields->fullscreenSupported != 0) {
        return;
      }
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Fullscreen_not_supported_and_not,(MethodInfo *)0x0);
      goto code_?;
    }
    if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__FullScreenController);
    }
    if (TypeInfo__FullScreenController->static_fields->OnFullScreenChange ==
        (UnityAction_1_System_Boolean_ *)0x0) goto code_?;
    if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__FullScreenController);
    }
    FullScreenController_PrintLog(StringLiteral_Changed_to_fullscreen__fake____c,(MethodInfo *)0x0);
    pUVar7 = TypeInfo__FullScreenController->static_fields->OnFullScreenChange;
    if (pUVar7 == (UnityAction_1_System_Boolean_ *)0x0) {
code_?:
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pvVar1 = (pUVar7->fields)._._.method_code;
    pcVar8 = (pUVar7->fields)._._.invoke_impl;
  }
  (*pcVar8)(pvVar1);
code_?:
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  func_?();
  return;
}


/* Void PrintLog(String) */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_PrintLog
               (String *s,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__FullScreenController);
    func_?(&StringLiteral_FullScreenController__);
    cRam_? = '\x01';
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  if (TypeInfo__FullScreenController->static_fields->debugging != 0) {
    message = mscorlib.dll::System::String::String_Concat_3
                        (StringLiteral_FullScreenController__,s,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0)
    ;
  }
  return;
}


/* Void PrintMeasures(String) */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_PrintMeasures
               (String *prefix,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__DeviceOrientation);
    func_?(&TypeInfo__FullScreenController);
    func_?(&TypeInfo__UnityEngine__ScreenOrientation);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral____fullscreen___);
    func_?(&StringLiteral____Input_deviceOrientation___);
    func_?(&StringLiteral____Screen_width_height___);
    func_?(&StringLiteral____Screen_orientation___);
    func_?(&StringLiteral____fakeFullscreen___);
    func_?(&::StringLiteral___);
    func_?(&StringLiteral____OriginalSize___);
    func_?(&StringLiteral____Screen_currentResolution___);
    func_?(&StringLiteral____initialized___);
    func_?(&StringLiteral____fullscreenSupported___);
    func_?(&StringLiteral___________________START___);
    func_?(&StringLiteral____Screen_fullscreen___);
    func_?(&StringLiteral___________________END___);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral___________________START___,prefix,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  BStack_2.m_value =
       UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_fullScreen((MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                     (&BStack_2,(IFormatProvider *)0x0,in_stack_3);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (prefix,StringLiteral____Screen_fullscreen___,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                     ((Boolean *)&TypeInfo__FullScreenController->static_fields->fullScreen,
                      (IFormatProvider *)0x0,method_00);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (prefix,StringLiteral____fullscreen___,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                     ((Boolean *)&TypeInfo__FullScreenController->static_fields->fakeFullscreen,
                      (IFormatProvider *)0x0,method_00);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (prefix,StringLiteral____fakeFullscreen___,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                     ((Boolean *)&TypeInfo__FullScreenController->static_fields->fullscreenSupported
                      ,(IFormatProvider *)0x0,in_stack_4);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (prefix,StringLiteral____fullscreenSupported___,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                     ((Boolean *)&TypeInfo__FullScreenController->static_fields->initialized,
                      (IFormatProvider *)0x0,in_stack_4);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (prefix,StringLiteral____initialized___,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_orientation((MethodInfo *)0x0);
  pSStack_5 = TypeInfo__UnityEngine__ScreenOrientation;
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&pSStack_5,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (prefix,StringLiteral____Screen_orientation___,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  DStack_6 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_deviceOrientation
                        ((MethodInfo *)0x0);
  EStack_7.klass = (Enum__Class *)TypeInfo__UnityEngine__DeviceOrientation;
  EStack_7.monitor = (MonitorData *)0xffffffff;
  pSVar1 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_7,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (prefix,StringLiteral____Input_deviceOrientation___,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pSVar8 = (String__Array *)func_?();
  if (pSVar8 == (String__Array *)0x0) {
code_?:
    func_?();
code_?:
    pIStack9 = (Il2CppClass *)0x0;
    func_?();
    func_?();
code_?:
    pIStack9 = (Il2CppClass *)0x0;
    func_?();
    func_?();
code_?:
    pIStack9 = (Il2CppClass *)0x0;
    func_?();
    func_?();
code_?:
    pIStack9 = (Il2CppClass *)0x0;
    func_?();
    func_?();
code_?:
    pIStack9 = (Il2CppClass *)0x0;
    func_?();
    func_?();
code_?:
    pIStack9 = (Il2CppClass *)0x0;
    func_?();
    func_?();
code_?:
    pIStack9 = (Il2CppClass *)0x0;
    func_?();
    func_?();
code_?:
    pIStack9 = (Il2CppClass *)0x0;
    func_?();
    func_?();
code_?:
    pIStack9 = (Il2CppClass *)0x0;
    func_?();
    func_?();
code_?:
    pIStack9 = (Il2CppClass *)0x0;
    func_?();
    func_?();
code_?:
    pIStack9 = (Il2CppClass *)0x0;
    func_?();
    func_?();
code_?:
    pIStack9 = (Il2CppClass *)0x0;
    func_?();
    func_?();
code_?:
    pIStack9 = (Il2CppClass *)0x0;
    func_?();
    func_?();
code_?:
    pIStack9 = (Il2CppClass *)0x0;
    func_?();
    func_?();
  }
  else {
    if (prefix != (String *)0x0) {
      pIStack9 = (pSVar8->klass->_0).element_class;
      iVar10 = func_?();
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar8->max_length == 0) goto code_?;
    pSVar8->vector[0] = prefix;
    pIStack9 = (Il2CppClass *)prefix;
    func_?();
    if (StringLiteral____Screen_currentResolution___ != (String *)0x0) {
      pIStack9 = (pSVar8->klass->_0).element_class;
      iVar10 = func_?();
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar8->max_length < 2) goto code_?;
    pIStack9 = (Il2CppClass *)StringLiteral____Screen_currentResolution___;
    pSVar8->vector[1] = StringLiteral____Screen_currentResolution___;
    func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
              ((Resolution *)&stack0xffffffc4,(MethodInfo *)0x0);
    IStack_11.m_value =
         (int32_t)mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_7
                            (&stack0xffffffe8,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_11,(MethodInfo *)0x0);
    if (pSVar1 != (String *)0x0) {
      pIStack9 = (pSVar8->klass->_0).element_class;
      iVar10 = func_?();
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar8->max_length < 3) goto code_?;
    pSVar8->vector[2] = pSVar1;
    pIStack9 = (Il2CppClass *)pSVar1;
    func_?();
    if (::StringLiteral___ != (String *)0x0) {
      pIStack9 = (pSVar8->klass->_0).element_class;
      iVar10 = func_?();
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar8->max_length < 4) goto code_?;
    pIStack9 = (Il2CppClass *)::StringLiteral___;
    pSVar8->vector[3] = ::StringLiteral___;
    func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
              ((Resolution *)&stack0xffffffc4,(MethodInfo *)0x0);
    IStack_11.m_value =
         mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
         SparselyPopulatedArrayAddInfo_1_System_Object__get_Index
                   ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)&stack0xffffffe8,
                    (MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_11,(MethodInfo *)0x0);
    if (pSVar1 != (String *)0x0) {
      pIStack9 = (pSVar8->klass->_0).element_class;
      iVar10 = func_?();
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar8->max_length < 5) goto code_?;
    pSVar8->vector[4] = pSVar1;
    pIStack9 = (Il2CppClass *)pSVar1;
    func_?();
    pSVar1 = mscorlib.dll::System::String::String_Concat_6(pSVar8,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
    pSVar8 = (String__Array *)func_?();
    if (pSVar8 == (String__Array *)0x0) goto code_?;
    if (prefix != (String *)0x0) {
      pIStack9 = (pSVar8->klass->_0).element_class;
      iVar10 = func_?();
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar8->max_length == 0) goto code_?;
    pSVar8->vector[0] = prefix;
    pIStack9 = (Il2CppClass *)prefix;
    func_?();
    if (StringLiteral____Screen_width_height___ != (String *)0x0) {
      pIStack9 = (pSVar8->klass->_0).element_class;
      iVar10 = func_?();
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar8->max_length < 2) goto code_?;
    pIStack9 = (Il2CppClass *)StringLiteral____Screen_width_height___;
    pSVar8->vector[1] = StringLiteral____Screen_width_height___;
    func_?();
    IStack_11.m_value =
         UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_11,(MethodInfo *)0x0);
    if (pSVar1 != (String *)0x0) {
      pIStack9 = (pSVar8->klass->_0).element_class;
      iVar10 = func_?();
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar8->max_length < 3) goto code_?;
    pSVar8->vector[2] = pSVar1;
    pIStack9 = (Il2CppClass *)pSVar1;
    func_?();
    if (::StringLiteral___ != (String *)0x0) {
      pIStack9 = (pSVar8->klass->_0).element_class;
      iVar10 = func_?();
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar8->max_length < 4) goto code_?;
    pIStack9 = (Il2CppClass *)::StringLiteral___;
    pSVar8->vector[3] = ::StringLiteral___;
    func_?();
    IStack_11.m_value =
         UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_11,(MethodInfo *)0x0);
    if (pSVar1 != (String *)0x0) {
      pIStack9 = (pSVar8->klass->_0).element_class;
      iVar10 = func_?();
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar8->max_length < 5) goto code_?;
    pSVar8->vector[4] = pSVar1;
    pIStack9 = (Il2CppClass *)pSVar1;
    func_?();
    pSVar1 = mscorlib.dll::System::String::String_Concat_6(pSVar8,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar1,(MethodInfo *)0x0);
    pSVar8 = (String__Array *)func_?();
    if (pSVar8 == (String__Array *)0x0) goto code_?;
    if (prefix != (String *)0x0) {
      pIStack9 = (pSVar8->klass->_0).element_class;
      iVar10 = func_?();
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar8->max_length == 0) goto code_?;
    pSVar8->vector[0] = prefix;
    pIStack9 = (Il2CppClass *)prefix;
    func_?();
    if (StringLiteral____OriginalSize___ != (String *)0x0) {
      pIStack9 = (pSVar8->klass->_0).element_class;
      iVar10 = func_?();
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar8->max_length < 2) goto code_?;
    pIStack9 = (Il2CppClass *)StringLiteral____OriginalSize___;
    pSVar8->vector[1] = StringLiteral____OriginalSize___;
    func_?();
    pSVar1 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)TypeInfo__FullScreenController->static_fields,(MethodInfo *)0x0);
    if (pSVar1 != (String *)0x0) {
      pIStack9 = (pSVar8->klass->_0).element_class;
      iVar10 = func_?();
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar8->max_length < 3) goto code_?;
    pSVar8->vector[2] = pSVar1;
    pIStack9 = (Il2CppClass *)pSVar1;
    func_?();
    if (::StringLiteral___ != (String *)0x0) {
      pIStack9 = (pSVar8->klass->_0).element_class;
      iVar10 = func_?();
      if (iVar10 != 0) goto code_?;
      goto code_?;
    }
code_?:
    if (pSVar8->max_length < 4) goto code_?;
    pIStack9 = (Il2CppClass *)::StringLiteral___;
    pSVar8->vector[3] = ::StringLiteral___;
    func_?();
    pSVar1 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&TypeInfo__FullScreenController->static_fields->
                                  screenHeightBeforeFullscreen,(MethodInfo *)0x0);
    if (pSVar1 == (String *)0x0) {
code_?:
      if (4 < pSVar8->max_length) {
        pSVar8->vector[4] = pSVar1;
        pIStack9 = (Il2CppClass *)pSVar1;
        func_?();
        pSVar1 = mscorlib.dll::System::String::String_Concat_6(pSVar8,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar1,(MethodInfo *)0x0);
        pSVar1 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral___________________END___,prefix,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar1,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pIStack9 = (pSVar8->klass->_0).element_class;
    iVar10 = func_?();
    if (iVar10 != 0) goto code_?;
  }
  pIStack9 = (Il2CppClass *)0x0;
  func_?();
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* FullScreenController() */

void Assembly-CSharp.dll::FullScreenController::FullScreenController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullScreenController);
    cRam_? = '\x01';
  }
  TypeInfo__FullScreenController->static_fields->screenWidthBeforeFullscreen = 0x3ac;
  TypeInfo__FullScreenController->static_fields->screenHeightBeforeFullscreen = 0x1e2;
  TypeInfo__FullScreenController->static_fields->fullscreenStatCollected = 0;
  TypeInfo__FullScreenController->static_fields->fullscreenSupported = 1;
  TypeInfo__FullScreenController->static_fields->fakeFullscreen = 0;
  TypeInfo__FullScreenController->static_fields->initialized = 0;
  TypeInfo__FullScreenController->static_fields->debugging = 0;
  return;
}


/* Boolean get_FullScreen() */

bool Assembly-CSharp.dll::FullScreenController::FullScreenController_get_FullScreen
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullScreenController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  return TypeInfo__FullScreenController->static_fields->fullScreen;
}


/* Boolean get_ShouldHideOrientationWarning() */

bool Assembly-CSharp.dll::FullScreenController::
     FullScreenController_get_ShouldHideOrientationWarning(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullScreenController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullScreenController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  if (TypeInfo__FullScreenController->static_fields->fullScreen == 0) {
    return 0;
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  return TypeInfo__FullScreenController->static_fields->fakeFullscreen == 0;
}


/* Boolean get_WaitingForFullscreenChange() */

bool Assembly-CSharp.dll::FullScreenController::FullScreenController_get_WaitingForFullscreenChange
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullScreenController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  return TypeInfo__FullScreenController->static_fields->_WaitingForFullscreenChange_k__BackingField;
}


/* Void set_FullScreen(Boolean) */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_set_FullScreen
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    func_?(&TypeInfo__FullScreenController);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&
                    void_MethodInfo__System__TupleExtensions__Deconstruct<int,_int>_System__Tuple<int,_int>__System__Int32___System__Int32__
                   );
    func_?(&StringLiteral_Not_setting_fullscreen_as_it_has);
    func_?(&StringLiteral_Fullscreen_supported__setting_fu);
    func_?(&StringLiteral__h_);
    func_?(&StringLiteral_fakeFullScreenOff);
    func_?(&StringLiteral_FullscreenActivated);
    func_?(&StringLiteral_Not_setting_fullscreen_as_it_is_);
    func_?(&StringLiteral_fakeFullScreenOn);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  iStack_2 = 0;
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  if (TypeInfo__FullScreenController->static_fields->initialized != 0) {
    if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__FullScreenController);
    }
    if (value != TypeInfo__FullScreenController->static_fields->fullScreen) {
      if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__FullScreenController);
      }
      bVar3 = FullScreenController_IsFullscreenSupported((MethodInfo *)0x0);
      if (bVar3 == 0) {
        if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__FullScreenController);
        }
        if (TypeInfo__FullScreenController->static_fields->fakeFullscreen != 0) {
          if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__FullScreenController);
          }
          func_?(1,0);
          TypeInfo__FullScreenController->static_fields->fullScreen = value;
          if (TypeInfo__FullScreenController->static_fields->fullScreen != 0) {
            MVar4 = Misc::OrientationControl::OrientationControl_get_CurrentOrientation
                              ((MethodInfo *)0x0);
            iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width
                              ((MethodInfo *)0x0);
            heightInput = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                                    ((MethodInfo *)0x0);
            if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            pTVar6 = FullScreenController_GetWidthHeight(MVar4,iVar5,heightInput,(MethodInfo *)0x0);
            mscorlib.dll::System::TupleExtensions::TupleExtensions_Deconstruct
                      (pTVar6,&iStack_1,&iStack_2,
                       void_MethodInfo__System__TupleExtensions__Deconstruct<int,_int>_System__Tuple<int,_int>__System__Int32___System__Int32__
                      );
            UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                      (iStack_1,iStack_2,0,(MethodInfo *)0x0);
            pOVar7 = (Object__Array *)func_?();
            if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            method = (MethodInfo *)&UNK_?;
            BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
                      (StringLiteral_fakeFullScreenOn,pOVar7,(MethodInfo *)0x0);
            return;
          }
          MVar4 = Misc::OrientationControl::OrientationControl_get_CurrentOrientation
                            ((MethodInfo *)0x0);
          if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pTVar6 = FullScreenController_GetWidthHeight
                             (MVar4,TypeInfo__FullScreenController->static_fields->
                                    screenWidthBeforeFullscreen,
                              TypeInfo__FullScreenController->static_fields->
                              screenHeightBeforeFullscreen,(MethodInfo *)0x0);
          mscorlib.dll::System::TupleExtensions::TupleExtensions_Deconstruct
                    (pTVar6,&iStack_2,&iStack_1,
                     void_MethodInfo__System__TupleExtensions__Deconstruct<int,_int>_System__Tuple<int,_int>__System__Int32___System__Int32__
                    );
          UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                    (iStack_2,iStack_1,0,(MethodInfo *)0x0);
          pOVar7 = (Object__Array *)func_?();
          if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
            method = (MethodInfo *)&UNK_?;
            func_?();
          }
          _value = StringLiteral_fakeFullScreenOff;
          method = (MethodInfo *)pOVar7;
          BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
                    (StringLiteral_fakeFullScreenOff,pOVar7,(MethodInfo *)0x0);
        }
      }
      else {
        if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__FullScreenController);
        }
        func_?(1,0);
        TypeInfo__FullScreenController->static_fields->fullScreen = value;
        if (TypeInfo__FullScreenController->static_fields->fullScreen == 0) {
          if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__FullScreenController);
          }
          pSVar8 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)TypeInfo__FullScreenController->static_fields,
                              (MethodInfo *)0x0);
          str3 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&TypeInfo__FullScreenController->static_fields->
                                      screenHeightBeforeFullscreen,(MethodInfo *)0x0);
          pSVar8 = mscorlib.dll::System::String::String_Concat_5
                             (StringLiteral_Fullscreen_supported__setting_fu,pSVar8,
                              StringLiteral__h_,str3,(MethodInfo *)0x0);
          FullScreenController_PrintLog(pSVar8,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_set_fullScreen
                    (0,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                    (TypeInfo__FullScreenController->static_fields->screenWidthBeforeFullscreen,
                     TypeInfo__FullScreenController->static_fields->screenHeightBeforeFullscreen,0,
                     (MethodInfo *)0x0);
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                  ((Resolution *)&stack0xffffffdc,(MethodInfo *)0x0);
        width = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_7
                          (&stack0xffffffe8,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                  ((Resolution *)&stack0xffffffdc,(MethodInfo *)0x0);
        iVar5 = mscorlib.dll::System::Threading::SparselyPopulatedArrayAddInfo`1[System::Object]::
                SparselyPopulatedArrayAddInfo_1_System_Object__get_Index
                          ((SparselyPopulatedArrayAddInfo_1_System_Object_ *)&stack0xffffffe8,
                           (MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                  ((int32_t)width,iVar5,1,(MethodInfo *)0x0);
        if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
          method = (MethodInfo *)TypeInfo__FullScreenController;
          _value = (String *)&UNK_?;
          func_?();
        }
        if (TypeInfo__FullScreenController->static_fields->fullscreenStatCollected == 0) {
          if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
            method = (MethodInfo *)TypeInfo__StatHatWrapper;
            _value = (String *)&UNK_?;
            func_?();
          }
          method = (MethodInfo *)0x0;
          _value = (String *)0x1;
          StatHatWrapper::StatHatWrapper_Count
                    (StringLiteral_FullscreenActivated,1,(MethodInfo *)0x0);
          if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          TypeInfo__FullScreenController->static_fields->fullscreenStatCollected = 1;
          return;
        }
      }
      return;
    }
    pSVar8 = mscorlib.dll::System::Boolean::Boolean_ToString_1
                       ((Boolean *)&value,(IFormatProvider *)0x0,unaff_ESI);
    pSVar8 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_Not_setting_fullscreen_as_it_has,pSVar8,(MethodInfo *)0x0);
    if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    FullScreenController_PrintLog(pSVar8,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  FullScreenController_PrintLog(StringLiteral_Not_setting_fullscreen_as_it_is_,(MethodInfo *)0x0);
  return;
}


/* Void set_WaitingForFullscreenChange(Boolean) */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_set_WaitingForFullscreenChange
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FullScreenController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
    TypeInfo__FullScreenController->static_fields->_WaitingForFullscreenChange_k__BackingField =
         value;
    return;
  }
  TypeInfo__FullScreenController->static_fields->_WaitingForFullscreenChange_k__BackingField = value
  ;
  return;
}

