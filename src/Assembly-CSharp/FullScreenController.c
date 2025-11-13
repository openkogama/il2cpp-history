
/* Boolean AllowFullscreenChange() */

bool Assembly-CSharp.dll::FullScreenController::FullScreenController_AllowFullscreenChange
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = FullScreenController_IsFullscreenSupported((MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 1;
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
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
    FUN_?(&System__Tuple<int,_int>_MethodInfo__System__Tuple__Create<int,_int>_int__int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = System__Tuple<int,_int>_MethodInfo__System__Tuple__Create<int,_int>_int__int_;
  iVar2 = widthInput;
  if ((orientation == MVOrientation__Enum_LandscapeLeft) ||
     (orientation == MVOrientation__Enum_LandscapeRight)) {
    if (heightInput <= widthInput) goto code_?;
  }
  else if (widthInput <= heightInput) goto code_?;
  iVar2 = heightInput;
  heightInput = widthInput;
code_?:
  if ((System__Tuple<int,_int>_MethodInfo__System__Tuple__Create<int,_int>_int__int_->field7_0x38).
      rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(System__Tuple<int,_int>_MethodInfo__System__Tuple__Create<int,_int>_int__int_);
  }
  pvVar3 = (pMVar1->field7_0x38).rgctx_data[2].rgctxDataDummy;
  if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
    pvVar3 = (void *)FUN_?(pvVar3);
  }
  pTVar4 = (Tuple_2_Int32_Int32_ *)FUN_?(pvVar3);
  (pTVar4->fields).m_Item1 = iVar2;
  (pTVar4->fields).m_Item2 = heightInput;
  return pTVar4;
}


/* Void Init(Int32, Int32, Boolean) */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_Init
               (int32_t width,int32_t height,bool init,MethodInfo *method)

{
  aIStackX_8[0].m_value = width;
  aIStackX_10[0].m_value = height;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_init);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CurrentResolution__w_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Screen__w_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__init_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Init__w_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___h_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ScreenOrientation_Unknown_is_dep);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(1);
  values = (String__Array *)FUN_?(TypeInfo__System__String);
  if (values == (String__Array *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_?(values,0,StringLiteral_Init__w_);
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
  FUN_?(values,1,pSVar3);
  FUN_?(values,2,StringLiteral___h_);
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  FUN_?(values,3,pSVar3);
  FUN_?(values,4,StringLiteral__init_);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FUN_?(values);
  mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_5._pointer._value = (void *)0x0;
  RStack_5._length = 0;
  RStack_5._12_4_ = 0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                     (iVar4,&RStack_5,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_5._pointer._value = (void *)0x0;
  RStack_5._length = 0;
  RStack_5._12_4_ = 0;
  pSVar6 = mscorlib.dll::System::Number::Number_FormatInt32
                     (iVar4,&RStack_5,(IFormatProvider *)0x0,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_6
            (StringLiteral_Screen__w_,pSVar3,StringLiteral___h_,pSVar6,(MethodInfo *)0x0);
  RStack_5._pointer._value = (void *)0x0;
  RStack_5._length = 0;
  RStack_5._12_4_ = 0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&RStack_5);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_7[0]._pointer._value = (void *)0x0;
  aRStack_7[0]._length = 0;
  aRStack_7[0]._12_4_ = 0;
  pSVar3 = mscorlib.dll::System::Number::Number_FormatInt32
                     ((int32_t)RStack_5._pointer._value,aRStack_7,(IFormatProvider *)0x0,
                      (MethodInfo *)0x0);
  RStack_5._pointer._value = (void *)0x0;
  RStack_5._length = 0;
  RStack_5._12_4_ = 0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(&RStack_5);
  BVar8._value = RStack_5._pointer._value;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  aRStack_7[0]._pointer._value = (void *)0x0;
  aRStack_7[0]._length = 0;
  aRStack_7[0]._12_4_ = 0;
  pSVar6 = mscorlib.dll::System::Number::Number_FormatInt32
                     ((int32_t)((ulonglong)BVar8._value >> 0x20),aRStack_7,(IFormatProvider *)0x0,
                      (MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_6
            (StringLiteral_CurrentResolution__w_,pSVar3,StringLiteral___h_,pSVar6,(MethodInfo *)0x0)
  ;
  FullScreenController_PrintMeasures(StringLiteral_init,(MethodInfo *)0x0);
  TypeInfo__FullScreenController->static_fields->initialized = init;
  TypeInfo__FullScreenController->static_fields->screenWidthBeforeFullscreen = width;
  TypeInfo__FullScreenController->static_fields->screenHeightBeforeFullscreen = height;
  return;
}


/* Void InitSupports(Boolean, Boolean) */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_InitSupports
               (bool fsSupport,bool fake,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InitSupports__fsSupport_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InitSupports);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___fake_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_False;
  if (fsSupport != 0) {
    pSVar1 = StringLiteral_True;
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  str3 = StringLiteral_False;
  if (fake != 0) {
    str3 = StringLiteral_True;
  }
  mscorlib.dll::System::String::String_Concat_6
            (StringLiteral_InitSupports__fsSupport_,pSVar1,StringLiteral___fake_,str3,
             (MethodInfo *)0x0);
  bVar2 = 0;
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  FullScreenController_PrintMeasures(StringLiteral_InitSupports,(MethodInfo *)0x0);
  TypeInfo__FullScreenController->static_fields->fullscreenSupported = fsSupport;
  if (fake != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar2 = TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField;
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
  TypeInfo__FullScreenController->static_fields->fakeFullscreen = bVar2 != 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ScreenSizeOptimizer);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ScreenSizeOptimizer_UpdateOrigin);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStackX_20 = TypeInfo__ScreenSizeOptimizer->static_fields->originalSize;
  pSVar1 = (String *)FUN_?(&VStackX_20,0);
  mscorlib.dll::System::String::String_Concat_4
            (StringLiteral_ScreenSizeOptimizer_UpdateOrigin,pSVar1,(MethodInfo *)0x0);
  TypeInfo__FullScreenController->static_fields->initialized = 1;
  return;
}


/* Boolean IsFullscreenSupported() */

bool Assembly-CSharp.dll::FullScreenController::FullScreenController_IsFullscreenSupported
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Microsoft_Internet_Explorer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm);
  }
  pBVar1 = TypeInfo__BrowserComm;
  pSVar2 = TypeInfo__BrowserComm->static_fields->browserName;
  if (pSVar2 != StringLiteral_Microsoft_Internet_Explorer) {
    if (((pSVar2 == (String *)0x0) || (StringLiteral_Microsoft_Internet_Explorer == (String *)0x0))
       || ((pSVar2->fields)._stringLength !=
           (StringLiteral_Microsoft_Internet_Explorer->fields)._stringLength))
    goto code_?;
    bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                      ((uint8_t *)&(pSVar2->fields)._firstChar,
                       (uint8_t *)&(StringLiteral_Microsoft_Internet_Explorer->fields)._firstChar,
                       (longlong)(pSVar2->fields)._stringLength * 2,(MethodInfo *)0x0);
    if (bVar3 == 0) goto code_?;
  }
  if (*(int *)&(pBVar1->_1).field_0x1c == 0) {
    FUN_?(pBVar1);
  }
  iVar4 = FUN_?();
  if (7 < iVar4) {
    return 0;
  }
code_?:
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
  return TypeInfo__FullScreenController->static_fields->fullscreenSupported;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_LateUpdate(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Changed_to_fullscreen__fake____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Could_not_call_OnFullScreenChang);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Fullscreen_not_supported_and_not);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__FullScreenController->static_fields->_WaitingForFullscreenChange_k__BackingField ==
      0) {
    return;
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__FullScreenController->static_fields->fullScreen != 0) {
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TypeInfo__FullScreenController->static_fields->fakeFullscreen == 0) {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)();
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      if (iVar3 != 0) {
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)();
      iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      if (iVar3 != 0) {
        return;
      }
    }
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  bVar4 = (*pcRam_?)();
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
  if (bVar4 == TypeInfo__FullScreenController->static_fields->fullScreen) {
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TypeInfo__FullScreenController->static_fields->fullscreenSupported == 0)
    goto code_?;
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TypeInfo__FullScreenController->static_fields->OnFullScreenChange ==
        (UnityAction_1_System_Boolean_ *)0x0) goto code_?;
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?();
    }
    pUVar5 = TypeInfo__FullScreenController->static_fields->OnFullScreenChange;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_fullScreen
                      ((MethodInfo *)0x0);
    if (pUVar5 == (UnityAction_1_System_Boolean_ *)0x0) goto DAT_?;
    (*(pUVar5->fields)._._.invoke_impl)
              ((pUVar5->fields)._._.method_code,bVar4,(pUVar5->fields)._._.method);
  }
  else {
code_?:
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__FullScreenController);
    }
    if (TypeInfo__FullScreenController->static_fields->fakeFullscreen == 0) {
      if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__FullScreenController);
      }
      if (TypeInfo__FullScreenController->static_fields->fullscreenSupported == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)StringLiteral_Fullscreen_not_supported_and_not,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?();
        }
        FUN_?(0);
      }
      return;
    }
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__FullScreenController);
    }
    if (TypeInfo__FullScreenController->static_fields->OnFullScreenChange ==
        (UnityAction_1_System_Boolean_ *)0x0) {
code_?:
      if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c != 0) goto code_?;
      FUN_?(TypeInfo__FullScreenController);
    }
    else {
      if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__FullScreenController);
      }
      pUVar5 = TypeInfo__FullScreenController->static_fields->OnFullScreenChange;
      if (pUVar5 == (UnityAction_1_System_Boolean_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (*(pUVar5->fields)._._.invoke_impl)
                ((pUVar5->fields)._._.method_code,
                 TypeInfo__FullScreenController->static_fields->fullScreen,
                 (pUVar5->fields)._._.method);
    }
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
code_?:
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
  TypeInfo__FullScreenController->static_fields->_WaitingForFullscreenChange_k__BackingField = 0;
  return;
}


/* Void PrintMeasures(String) */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_PrintMeasures
               (String *prefix,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__DeviceOrientation);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ScreenOrientation);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral____fullscreen___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral____Input_deviceOrientation___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral____Screen_width_height___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral____Screen_orientation___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral____fakeFullscreen___);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral____OriginalSize___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral____Screen_currentResolution___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral____initialized___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral____fullscreenSupported___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___________________START___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral____Screen_fullscreen___);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___________________END___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  mscorlib.dll::System::String::String_Concat_4
            (StringLiteral___________________START___,prefix,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar3 = (*pcRam_?)();
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = StringLiteral_False;
  if (cVar3 != '\0') {
    pSVar4 = StringLiteral_True;
  }
  mscorlib.dll::System::String::String_Concat_5
            (prefix,StringLiteral____Screen_fullscreen___,pSVar4,(MethodInfo *)0x0);
  pFVar5 = TypeInfo__FullScreenController->static_fields;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = StringLiteral_False;
  if (pFVar5->fullScreen != 0) {
    pSVar4 = StringLiteral_True;
  }
  mscorlib.dll::System::String::String_Concat_5
            (prefix,StringLiteral____fullscreen___,pSVar4,(MethodInfo *)0x0);
  pFVar5 = TypeInfo__FullScreenController->static_fields;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = StringLiteral_False;
  if (pFVar5->fakeFullscreen != 0) {
    pSVar4 = StringLiteral_True;
  }
  mscorlib.dll::System::String::String_Concat_5
            (prefix,StringLiteral____fakeFullscreen___,pSVar4,(MethodInfo *)0x0);
  pFVar5 = TypeInfo__FullScreenController->static_fields;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = StringLiteral_False;
  if (pFVar5->fullscreenSupported != 0) {
    pSVar4 = StringLiteral_True;
  }
  mscorlib.dll::System::String::String_Concat_5
            (prefix,StringLiteral____fullscreenSupported___,pSVar4,(MethodInfo *)0x0);
  pFVar5 = TypeInfo__FullScreenController->static_fields;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar4 = StringLiteral_False;
  if (pFVar5->initialized != 0) {
    pSVar4 = StringLiteral_True;
  }
  mscorlib.dll::System::String::String_Concat_5
            (prefix,StringLiteral____initialized___,pSVar4,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  uStack_6 = (*pcRam_?)();
  auStack_7 = (undefined1  [8])TypeInfo__UnityEngine__ScreenOrientation;
  pMStack_8 = (MonitorData *)0xffffffffffffffff;
  pSVar4 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)auStack_7,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_5
            (prefix,StringLiteral____Screen_orientation___,pSVar4,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  uStack_6 = (*pcRam_?)();
  auStack_7 = (undefined1  [8])TypeInfo__UnityEngine__DeviceOrientation;
  pMStack_8 = (MonitorData *)0xffffffffffffffff;
  pSVar4 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)auStack_7,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_5
            (prefix,StringLiteral____Input_deviceOrientation___,pSVar4,(MethodInfo *)0x0);
  pSVar9 = (String__Array *)FUN_?(TypeInfo__System__String,5);
  if (pSVar9 != (String__Array *)0x0) {
    FUN_?(pSVar9,0,prefix);
    FUN_?(pSVar9,1);
    uStack_10 = 0;
    uStack_11 = 0;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(&uStack_10);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    auStack_7 = (undefined1  [8])0x0;
    pMStack_8 = (MonitorData *)0x0;
    pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                       ((int32_t)uStack_10,(ReadOnlySpan_1_Char_ *)auStack_7,(IFormatProvider *)0x0
                        ,(MethodInfo *)0x0);
    FUN_?(pSVar9,2,pSVar4);
    FUN_?(pSVar9,3);
    uStack_10 = 0;
    uStack_11 = 0;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(&uStack_10);
    uVar2 = uStack_10;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    auStack_7 = (undefined1  [8])0x0;
    pMStack_8 = (MonitorData *)0x0;
    pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                       ((int32_t)((ulonglong)uVar2 >> 0x20),(ReadOnlySpan_1_Char_ *)auStack_7,
                        (IFormatProvider *)0x0,(MethodInfo *)0x0);
    FUN_?(pSVar9,4,pSVar4);
    mscorlib.dll::System::String::String_Concat_7(pSVar9,(MethodInfo *)0x0);
    pSVar9 = (String__Array *)FUN_?(TypeInfo__System__String,5);
    if (pSVar9 != (String__Array *)0x0) {
      FUN_?(pSVar9,0,prefix);
      FUN_?(pSVar9,1);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      iVar12 = (*pcRam_?)();
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      auStack_7 = (undefined1  [8])0x0;
      pMStack_8 = (MonitorData *)0x0;
      pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                         (iVar12,(ReadOnlySpan_1_Char_ *)auStack_7,(IFormatProvider *)0x0,
                          (MethodInfo *)0x0);
      FUN_?(pSVar9,2,pSVar4);
      FUN_?(pSVar9,3);
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      iVar12 = (*pcRam_?)();
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Number);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
           field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
        FUN_?();
      }
      auStack_7 = (undefined1  [8])0x0;
      pMStack_8 = (MonitorData *)0x0;
      pSVar4 = mscorlib.dll::System::Number::Number_FormatInt32
                         (iVar12,(ReadOnlySpan_1_Char_ *)auStack_7,(IFormatProvider *)0x0,
                          (MethodInfo *)0x0);
      FUN_?(pSVar9,4,pSVar4);
      mscorlib.dll::System::String::String_Concat_7(pSVar9,(MethodInfo *)0x0);
      pSVar9 = (String__Array *)FUN_?(TypeInfo__System__String,5);
      if (pSVar9 != (String__Array *)0x0) {
        FUN_?(pSVar9,0,prefix);
        FUN_?(pSVar9,1,StringLiteral____OriginalSize___);
        pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&TypeInfo__FullScreenController->static_fields->
                                      screenWidthBeforeFullscreen,(MethodInfo *)0x0);
        FUN_?(pSVar9,2,pSVar4);
        FUN_?(pSVar9,3,::StringLiteral___);
        pSVar4 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&TypeInfo__FullScreenController->static_fields->
                                      screenHeightBeforeFullscreen,(MethodInfo *)0x0);
        FUN_?(pSVar9,4,pSVar4);
        mscorlib.dll::System::String::String_Concat_7(pSVar9,(MethodInfo *)0x0);
        pSVar4 = StringLiteral___________________END___;
        if ((StringLiteral___________________END___ == (String *)0x0) ||
           ((StringLiteral___________________END___->fields)._stringLength == 0)) {
          if ((prefix != (String *)0x0) && ((prefix->fields)._stringLength != 0)) {
            return;
          }
          return;
        }
        if ((prefix == (String *)0x0) || ((prefix->fields)._stringLength == 0)) {
          return;
        }
        iVar13 = (StringLiteral___________________END___->fields)._stringLength;
        lVar14 = FUN_?((prefix->fields)._stringLength + iVar13,prefix,0);
        if (lVar14 == 0) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(lVar14 + 0x10) < (pSVar4->fields)._stringLength) {
          uVar2 = func_?(&TypeInfo__System__IndexOutOfRangeException);
          pIVar15 = (IndexOutOfRangeException *)func_?(uVar2);
          mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                    (pIVar15,(MethodInfo *)0x0);
          uVar2 = func_?(&
                                       MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                      );
          FUN_?(pIVar15,uVar2);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar16 = (uint8_t *)(lVar14 + 0x14);
        puVar17 = &(pSVar4->fields)._firstChar;
        uVar18 = (pSVar4->fields)._stringLength * 2;
        if (((ulonglong)((longlong)puVar16 - (longlong)puVar17) < (ulonglong)uVar18) ||
           ((ulonglong)((longlong)puVar17 - (longlong)puVar16) < (ulonglong)uVar18)) {
          FUN_?();
        }
        else {
          mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                    (puVar16,(uint8_t *)puVar17,uVar18,(MethodInfo *)0x0);
        }
        if (*(int *)(lVar14 + 0x10) - iVar13 < (prefix->fields)._stringLength) {
          uVar2 = func_?(&TypeInfo__System__IndexOutOfRangeException);
          pIVar15 = (IndexOutOfRangeException *)func_?(uVar2);
          mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
                    (pIVar15,(MethodInfo *)0x0);
          uVar2 = func_?(&
                                       MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                                      );
          FUN_?(pIVar15,uVar2);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar16 = (uint8_t *)(lVar14 + ((longlong)iVar13 + 10) * 2);
        puVar17 = &(prefix->fields)._firstChar;
        uVar18 = (prefix->fields)._stringLength * 2;
        if (((ulonglong)((longlong)puVar16 - (longlong)puVar17) < (ulonglong)uVar18) ||
           ((ulonglong)((longlong)puVar17 - (longlong)puVar16) < (ulonglong)uVar18)) {
          FUN_?();
        }
        else {
          mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                    (puVar16,(uint8_t *)puVar17,uVar18,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* FullScreenController() */

void Assembly-CSharp.dll::FullScreenController::FullScreenController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__FullScreenController->static_fields->fullscreenSupported = 1;
  TypeInfo__FullScreenController->static_fields->screenWidthBeforeFullscreen = 0x3ac;
  TypeInfo__FullScreenController->static_fields->screenHeightBeforeFullscreen = 0x1e2;
  TypeInfo__FullScreenController->static_fields->fullscreenStatCollected = 0;
  TypeInfo__FullScreenController->static_fields->fakeFullscreen = 0;
  TypeInfo__FullScreenController->static_fields->initialized = 0;
  return;
}


/* Boolean get_FullScreen() */

bool Assembly-CSharp.dll::FullScreenController::FullScreenController_get_FullScreen
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
  return TypeInfo__FullScreenController->static_fields->fullScreen;
}


/* Boolean get_ShouldHideOrientationWarning() */

bool Assembly-CSharp.dll::FullScreenController::
     FullScreenController_get_ShouldHideOrientationWarning(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__FullScreenController->static_fields->fullScreen == 0) {
    return 0;
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  return TypeInfo__FullScreenController->static_fields->fakeFullscreen == 0;
}


/* Boolean get_WaitingForFullscreenChange() */

bool Assembly-CSharp.dll::FullScreenController::FullScreenController_get_WaitingForFullscreenChange
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
  return TypeInfo__FullScreenController->static_fields->_WaitingForFullscreenChange_k__BackingField;
}


/* Void set_FullScreen(Boolean) */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_set_FullScreen
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__String);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&
                  void_MethodInfo__System__TupleExtensions__Deconstruct<int,_int>_System__Tuple<int,_int>__System__Int32___System__Int32__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Not_setting_fullscreen_as_it_has);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Fullscreen_supported__setting_fu);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__h_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Fake_fullscreen__trying_to_chang);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___IsFullscreenSupported_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FullScreenController___trying_to);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fakeFullScreenOff);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Fullscreen_is_supported__trying_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FullscreenActivated);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Not_setting_fullscreen_as_it_is_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fakeFullScreenOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___fake_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  values = (String__Array *)FUN_?(TypeInfo__System__String,6);
  if (values == (String__Array *)0x0) goto code_?;
  FUN_?(values,0,StringLiteral_FullScreenController___trying_to);
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_False;
  if (value != 0) {
    pSVar1 = StringLiteral_True;
  }
  FUN_?(values,1,pSVar1);
  FUN_?(values,2,StringLiteral___IsFullscreenSupported_);
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar2 = FullScreenController_IsFullscreenSupported((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_False;
  if (bVar2 != 0) {
    pSVar1 = StringLiteral_True;
  }
  FUN_?(values,3,pSVar1);
  FUN_?(values,4,StringLiteral___fake_);
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FUN_?(values);
  mscorlib.dll::System::String::String_Concat_7(values,(MethodInfo *)0x0);
  if (TypeInfo__FullScreenController->static_fields->initialized != 0) {
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (value != TypeInfo__FullScreenController->static_fields->fullScreen) {
      if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar2 = FullScreenController_IsFullscreenSupported((MethodInfo *)0x0);
      if (bVar2 != 0) {
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (*(int *)(lRam_? + 0xe4) == 0) {
          FUN_?();
        }
        pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString
                            ((Boolean *)&TypeInfo__FullScreenController->static_fields->fullScreen,
                             (MethodInfo *)0x0);
        mscorlib.dll::System::String::String_Concat_4
                  (StringLiteral_Fullscreen_is_supported__trying_,pSVar1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__FullScreenController);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__FullScreenController);
        }
        TypeInfo__FullScreenController->static_fields->_WaitingForFullscreenChange_k__BackingField =
             1;
        TypeInfo__FullScreenController->static_fields->fullScreen = value;
        if (TypeInfo__FullScreenController->static_fields->fullScreen == 0) {
          if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar1 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&TypeInfo__FullScreenController->static_fields->
                                         screenWidthBeforeFullscreen,(MethodInfo *)0x0);
          str3 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&TypeInfo__FullScreenController->static_fields->
                                      screenHeightBeforeFullscreen,(MethodInfo *)0x0);
          mscorlib.dll::System::String::String_Concat_6
                    (StringLiteral_Fullscreen_supported__setting_fu,pSVar1,StringLiteral__h_,str3,
                     (MethodInfo *)0x0);
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(0);
          iVar5 = TypeInfo__FullScreenController->static_fields->screenWidthBeforeFullscreen;
          iVar6 = TypeInfo__FullScreenController->static_fields->screenHeightBeforeFullscreen;
          uStack_7 = 0x100000000;
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?,iVar6,0,0), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(iVar5,iVar6,3,&uStack_7);
          return;
        }
        uStack_7 = 0;
        uStack_8 = 0;
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(&uStack_7);
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(&stack0xffffffffffffffd8);
        UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                  ((int32_t)uStack_7,0,1,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__FullScreenController);
        }
        if (TypeInfo__FullScreenController->static_fields->fullscreenStatCollected != 0) {
          return;
        }
        if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        StatHatWrapper::StatHatWrapper_Count(StringLiteral_FullscreenActivated,1,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__FullScreenController);
        }
        TypeInfo__FullScreenController->static_fields->fullscreenStatCollected = 1;
        return;
      }
      if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (TypeInfo__FullScreenController->static_fields->fakeFullscreen == 0) {
        return;
      }
      if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
        FUN_?();
      }
      FUN_?(1);
      TypeInfo__FullScreenController->static_fields->fullScreen = value;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString
                          ((Boolean *)&TypeInfo__FullScreenController->static_fields->fullScreen,
                           (MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Concat_4
                (StringLiteral_Fake_fullscreen__trying_to_chang,pSVar1,(MethodInfo *)0x0);
      if (TypeInfo__FullScreenController->static_fields->fullScreen == 0) {
        MVar9 = Misc::OrientationControl::OrientationControl_get_CurrentOrientation
                           ((MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__FullScreenController);
        }
        pTVar10 = FullScreenController_GetWidthHeight
                            (MVar9,TypeInfo__FullScreenController->static_fields->
                                    screenWidthBeforeFullscreen,
                             TypeInfo__FullScreenController->static_fields->
                             screenHeightBeforeFullscreen,(MethodInfo *)0x0);
        if ((
            void_MethodInfo__System__TupleExtensions__Deconstruct<int,_int>_System__Tuple<int,_int>__System__Int32___System__Int32__
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        if (pTVar10 == (Tuple_2_Int32_Int32_ *)0x0) {
code_?:
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                  ((pTVar10->fields).m_Item1,(pTVar10->fields).m_Item2,0,(MethodInfo *)0x0);
        args = (Object__Array *)
               System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_2
                         (System__Object__MethodInfo__System__Array__Empty<System::Object>______);
        pSVar1 = StringLiteral_fakeFullScreenOff;
        if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
          FUN_?();
          pSVar1 = StringLiteral_fakeFullScreenOff;
        }
      }
      else {
        MVar9 = Misc::OrientationControl::OrientationControl_get_CurrentOrientation
                           ((MethodInfo *)0x0);
        iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width
                           ((MethodInfo *)0x0);
        iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                           ((MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?();
        }
        pTVar10 = FullScreenController_GetWidthHeight(MVar9,iVar5,iVar6,(MethodInfo *)0x0);
        if ((
            void_MethodInfo__System__TupleExtensions__Deconstruct<int,_int>_System__Tuple<int,_int>__System__Int32___System__Int32__
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?();
        }
        if (pTVar10 == (Tuple_2_Int32_Int32_ *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                  ((pTVar10->fields).m_Item1,(pTVar10->fields).m_Item2,0,(MethodInfo *)0x0);
        args = (Object__Array *)
               System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_2
                         (System__Object__MethodInfo__System__Array__Empty<System::Object>______);
        pSVar1 = StringLiteral_fakeFullScreenOn;
        if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
          FUN_?();
          pSVar1 = StringLiteral_fakeFullScreenOn;
        }
      }
      BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
                (pSVar1,args,(MethodInfo *)0x0);
      return;
    }
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_False);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_True);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar1 = StringLiteral_False;
    if (value != 0) {
      pSVar1 = StringLiteral_True;
    }
    mscorlib.dll::System::String::String_Concat_4
              (StringLiteral_Not_setting_fullscreen_as_it_has,pSVar1,(MethodInfo *)0x0);
  }
  pFVar11 = TypeInfo__FullScreenController;
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c != 0) {
    return;
  }
  ppMVar12 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    lVar13 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
    ppMVar14 = ppMVar12;
    if (lVar13 == lRam_?) {
      iRam_? = iRam_? + 1;
      lVar13 = lRam_?;
    }
    else {
      do {
        uVar15 = (uint)ppMVar14;
        LOCK();
        bVar16 = uVar15 != uRam_?;
        uVar17 = uVar15;
        uVar18 = uVar15 + 1;
        if (bVar16) {
          uVar17 = uRam_?;
          uVar18 = uRam_?;
        }
        uRam_? = uVar18;
        UNLOCK();
      } while ((bVar16) && (ppMVar14 = (MethodInfo **)(ulonglong)uVar17, uVar15 = uVar17, uVar17 != 2))
      ;
      while (uVar15 != 0) {
        _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
        uVar15 = uRam_?;
        LOCK();
        uRam_? = 2;
        UNLOCK();
      }
    }
    lRam_? = lVar13;
    puVar19 = &(pFVar11->_1).field_0x1c;
    LOCK();
    bVar16 = *(int *)puVar19 == 1;
    if (bVar16) {
      *(undefined4 *)puVar19 = 1;
    }
    uVar15 = uRam_?;
    UNLOCK();
    if (bVar16) {
      if (iRam_? == 0) {
        lRam_? = 0;
        LOCK();
        uRam_? = 0;
        UNLOCK();
        if (uVar15 == 2) {
          _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                    (0xADDR,1,0);
        }
      }
      else {
        iRam_? = iRam_? + -1;
      }
    }
    else {
      puVar20 = &(pFVar11->_1).cctor_finished_or_no_cctor;
      LOCK();
      bVar16 = *puVar20 == 1;
      if (bVar16) {
        *puVar20 = 1;
      }
      uVar15 = uRam_?;
      UNLOCK();
      if (bVar16) {
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar15 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        uVar15 = GetCurrentThreadId();
        psVar21 = &(pFVar11->_1).cctor_thread;
        LOCK();
        bVar16 = (ulonglong)uVar15 == *psVar21;
        if (bVar16) {
          *psVar21 = (ulonglong)uVar15;
        }
        UNLOCK();
        if (bVar16) {
          return;
        }
        while( true ) {
          puVar19 = &(pFVar11->_1).field_0x1c;
          LOCK();
          bVar16 = *(int *)puVar19 == 1;
          if (bVar16) {
            *(undefined4 *)puVar19 = 1;
          }
          UNLOCK();
          if (bVar16) break;
          LOCK();
          lVar13._0_4_ = (pFVar11->_1).initializationExceptionGCHandle;
          lVar13._4_4_ = (pFVar11->_1).cctor_started;
          if (lVar13 == 0) {
            (pFVar11->_1).initializationExceptionGCHandle = 0;
            (pFVar11->_1).cctor_started = 0;
          }
          UNLOCK();
          if (lVar13 != 0) break;
          FUN_?(*puRam_?);
        }
      }
      else {
        uVar15 = GetCurrentThreadId();
        LOCK();
        (pFVar11->_1).cctor_thread = (ulonglong)uVar15;
        UNLOCK();
        LOCK();
        (pFVar11->_1).cctor_finished_or_no_cctor = 1;
        uVar15 = uRam_?;
        UNLOCK();
        if (iRam_? == 0) {
          lRam_? = 0;
          LOCK();
          uRam_? = 0;
          UNLOCK();
          if (uVar15 == 2) {
            _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                      (0xADDR,1,0);
          }
        }
        else {
          iRam_? = iRam_? + -1;
        }
        if (((pFVar11->_1).field_0x6e & 4) != 0) {
          FUN_?(pFVar11);
          ppMVar14 = ppMVar12;
          pIVar22 = (Il2CppClass *)pFVar11;
code_?:
          do {
            if (ppMVar14 == (MethodInfo **)0x0) {
              FUN_?(pIVar22);
              if (pIVar22->field_count != 0) {
                ppMVar14 = pIVar22->methods;
                pMVar23 = *ppMVar14;
code_?:
                if (pMVar23 != (MethodInfo *)0x0) {
                  if ((*pMVar23->name == '.') && ((pMVar23->flags & 0x800) != 0)) {
                    ppMVar24 = ppMVar12;
                    while (pcVar25 = (char *)((longlong)ppMVar24 + 0xADDR),
                          ppMVar24 = (MethodInfo **)((longlong)ppMVar24 + 1),
                          *pcVar25 == (pMVar23->name + -1)[(longlong)ppMVar24]) {
                      if (ppMVar24 == (MethodInfo **)0x7) {
                        FUN_?(pMVar23,0,0,&stack0x00000010);
                        goto code_?;
                      }
                    }
                  }
                  goto code_?;
                }
              }
            }
            else {
              ppMVar14 = ppMVar14 + 1;
              if (ppMVar14 < pIVar22->methods + pIVar22->field_count) {
                pMVar23 = *ppMVar14;
                goto code_?;
              }
            }
            pIVar22 = pIVar22->parent;
            ppMVar14 = ppMVar12;
          } while (pIVar22 != (Il2CppClass *)0x0);
        }
code_?:
        LOCK();
        (pFVar11->_1).cctor_thread = 0;
        UNLOCK();
        LOCK();
        *(undefined4 *)&(pFVar11->_1).field_0x1c = 1;
        UNLOCK();
      }
      lVar26._0_4_ = (pFVar11->_1).initializationExceptionGCHandle;
      lVar26._4_4_ = (pFVar11->_1).cctor_started;
      if (lVar26 != 0) {
        uVar4._0_4_ = (pFVar11->_1).initializationExceptionGCHandle;
        uVar4._4_4_ = (pFVar11->_1).cctor_started;
        uVar4 = FUN_?(uVar4);
        FUN_?(uVar4,0);
        FUN_?(0,0,0,0,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  return;
}


/* Void set_WaitingForFullscreenChange(Boolean) */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_set_WaitingForFullscreenChange
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
  TypeInfo__FullScreenController->static_fields->_WaitingForFullscreenChange_k__BackingField = value
  ;
  return;
}

