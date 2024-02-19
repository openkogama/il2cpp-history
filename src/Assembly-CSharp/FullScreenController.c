
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
  iVar1 = widthInput;
  if ((orientation == MVOrientation__Enum_LandscapeLeft) ||
     (orientation == MVOrientation__Enum_LandscapeRight)) {
    if (heightInput <= widthInput) goto code_?;
  }
  else if (widthInput <= heightInput) goto code_?;
  iVar1 = heightInput;
  heightInput = widthInput;
code_?:
  pTVar2 = mscorlib.dll::System::Tuple::Tuple_Create
                     (iVar1,heightInput,
                      System__Tuple<int,_int>_MethodInfo__System__Tuple__Create<int,_int>_int__int_)
  ;
  return pTVar2;
}


/* Void Init(Int32, Int32, Boolean) */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_Init
               (int32_t width,int32_t height,bool init,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__FullScreenController);
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_init);
    func_?(&StringLiteral_CurrentResolution__w_);
    func_?(&StringLiteral_Screen__w_);
    func_?(&StringLiteral__init_);
    func_?(&StringLiteral_Init__w_);
    func_?(&StringLiteral___h_);
    cRam_? = '\x01';
  }
  TStack_1._id_k__BackingField = 0;
  TStack_1.m_Data = (Object *)0x0;
  TStack_1.m_Children = (IList_1_UnityEngine_UIElements_TreeViewItemData_1_System_Object_ *)0x0;
  uStack_2 = 0;
  values = (String__Array *)func_?(TypeInfo__System__String,6);
  pSVar3 = StringLiteral_Init__w_;
  if (values == (String__Array *)0x0) {
    func_?();
  }
  else if (values->max_length != 0) {
    values->vector[0] = StringLiteral_Init__w_;
    func_?(values->vector,pSVar3);
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&width,(MethodInfo *)0x0);
    if (1 < values->max_length) {
      values->vector[1] = pSVar3;
      func_?(values->vector + 1,pSVar3);
      pSVar3 = StringLiteral___h_;
      if (2 < values->max_length) {
        values->vector[2] = StringLiteral___h_;
        func_?(values->vector + 2,pSVar3);
        pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&height,(MethodInfo *)0x0);
        if (3 < values->max_length) {
          values->vector[3] = pSVar3;
          func_?(values->vector + 3,pSVar3);
          pSVar3 = StringLiteral__init_;
          if (4 < values->max_length) {
            values->vector[4] = StringLiteral__init_;
            func_?(values->vector + 4,pSVar3);
            if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Boolean);
            }
            pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString
                               ((Boolean *)&init,(MethodInfo *)0x0);
            if (5 < values->max_length) {
              values->vector[5] = pSVar3;
              func_?(values->vector + 5,pSVar3);
              pSVar3 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
              if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
              IStack_4.m_value =
                   UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width
                             ((MethodInfo *)0x0);
              pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_4,(MethodInfo *)0x0);
              IStack_4.m_value =
                   UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height
                             ((MethodInfo *)0x0);
              str3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_4,(MethodInfo *)0x0);
              pSVar3 = mscorlib.dll::System::String::String_Concat_5
                                 (StringLiteral_Screen__w_,pSVar3,StringLiteral___h_,str3,
                                  (MethodInfo *)0x0);
              FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
              pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                                 ((Resolution *)&stack0xffffffd8,(MethodInfo *)0x0);
              TStack_1._id_k__BackingField = pRVar5->m_Width;
              TStack_1.m_Data = (Object *)pRVar5->m_Height;
              TStack_1.m_Children =
                   (IList_1_UnityEngine_UIElements_TreeViewItemData_1_System_Object_ *)
                   (pRVar5->m_RefreshRate).numerator;
              uStack_2 = (pRVar5->m_RefreshRate).denominator;
              IStack_4.m_value =
                   (int32_t)mscorlib.dll::System::Runtime::CompilerServices::Unsafe::
                            Unsafe_ReadUnaligned_6((uint8_t *)&TStack_1,(MethodInfo *)0x0);
              str1 = (MethodInfo *)
                     mscorlib.dll::System::Int32::Int32_ToString(&IStack_4,(MethodInfo *)0x0);
              pRVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                                 ((Resolution *)&stack0xffffffd8,(MethodInfo *)0x0);
              TStack_1._id_k__BackingField = pRVar5->m_Width;
              TStack_1.m_Data = (Object *)pRVar5->m_Height;
              TStack_1.m_Children =
                   (IList_1_UnityEngine_UIElements_TreeViewItemData_1_System_Object_ *)
                   (pRVar5->m_RefreshRate).numerator;
              uStack_2 = (pRVar5->m_RefreshRate).denominator;
              IStack_4.m_value =
                   (int32_t)UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                            TreeViewItemData`1[System::Object]::
                            TreeViewItemData_1_System_Object__get_data(&TStack_1,(MethodInfo *)0x0)
              ;
              pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_4,(MethodInfo *)0x0);
              _init = StringLiteral_CurrentResolution__w_;
              height = (int32_t)&UNK_?;
              method = str1;
              pSVar3 = mscorlib.dll::System::String::String_Concat_5
                                 (StringLiteral_CurrentResolution__w_,(String *)str1,
                                  StringLiteral___h_,pSVar3,(MethodInfo *)0x0);
              FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
              FullScreenController_PrintMeasures(StringLiteral_init,(MethodInfo *)0x0);
              TypeInfo__FullScreenController->static_fields->initialized = init;
              TypeInfo__FullScreenController->static_fields->screenWidthBeforeFullscreen = width;
              TypeInfo__FullScreenController->static_fields->screenHeightBeforeFullscreen = height;
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void InitSupports(Boolean, Boolean) */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_InitSupports
               (bool fsSupport,bool fake,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__FullScreenController);
    func_?(&StringLiteral_InitSupports__fsSupport_);
    func_?(&StringLiteral_InitSupports);
    func_?(&StringLiteral___fake_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Boolean);
  }
  pSVar1 = mscorlib.dll::System::Boolean::Boolean_ToString((Boolean *)&fsSupport,(MethodInfo *)0x0);
  str3 = mscorlib.dll::System::Boolean::Boolean_ToString((Boolean *)&fake,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_5
                     (StringLiteral_InitSupports__fsSupport_,pSVar1,StringLiteral___fake_,str3,
                      (MethodInfo *)0x0);
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  FullScreenController_PrintLog(pSVar1,(MethodInfo *)0x0);
  FullScreenController_PrintMeasures(StringLiteral_InitSupports,(MethodInfo *)0x0);
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
  ScreenSizeOptimizer::ScreenSizeOptimizer_UpdateOriginalSizeIfNecessary((MethodInfo *)0x0);
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
  TStack_1._id_k__BackingField = 0;
  TStack_1.m_Data = (Object *)0x0;
  TStack_1.m_Children = (IList_1_UnityEngine_UIElements_TreeViewItemData_1_System_Object_ *)0x0;
  uStack_2 = 0;
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
      pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                         ((Resolution *)&stack0xffffffd8,(MethodInfo *)0x0);
      TStack_1._id_k__BackingField = pRVar3->m_Width;
      TStack_1.m_Data = (Object *)pRVar3->m_Height;
      TStack_1.m_Children =
           (IList_1_UnityEngine_UIElements_TreeViewItemData_1_System_Object_ *)
           (pRVar3->m_RefreshRate).numerator;
      uStack_2 = (pRVar3->m_RefreshRate).denominator;
      pvVar4 = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_6
                         ((uint8_t *)&TStack_1,(MethodInfo *)0x0);
      pvVar5 = (void *)UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width
                                 ((MethodInfo *)0x0);
      if (pvVar4 != pvVar5) {
        return;
      }
      pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                         ((Resolution *)&stack0xffffffd8,(MethodInfo *)0x0);
      TStack_1._id_k__BackingField = pRVar3->m_Width;
      TStack_1.m_Data = (Object *)pRVar3->m_Height;
      TStack_1.m_Children =
           (IList_1_UnityEngine_UIElements_TreeViewItemData_1_System_Object_ *)
           (pRVar3->m_RefreshRate).numerator;
      uStack_2 = (pRVar3->m_RefreshRate).denominator;
      pOVar6 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::TreeViewItemData`1[System
               ::Object]::TreeViewItemData_1_System_Object__get_data(&TStack_1,(MethodInfo *)0x0);
      pOVar7 = (Object *)
               UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0)
      ;
      if (pOVar6 != pOVar7) {
        return;
      }
    }
  }
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_fullScreen((MethodInfo *)0x0);
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  if (bVar8 == TypeInfo__FullScreenController->static_fields->fullScreen) {
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
    pUVar9 = TypeInfo__FullScreenController->static_fields->OnFullScreenChange;
    bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_fullScreen
                      ((MethodInfo *)0x0);
    _bStack_8 = CONCAT31(uStack_10,bVar8);
    if (pUVar9 == (UnityAction_1_System_Boolean_ *)0x0) goto code_?;
    pcVar11 = (pUVar9->fields)._._.invoke_impl;
    pvVar4 = (pUVar9->fields)._._.method_code;
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
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
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
    pUVar9 = TypeInfo__FullScreenController->static_fields->OnFullScreenChange;
    if (pUVar9 == (UnityAction_1_System_Boolean_ *)0x0) {
code_?:
      func_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pvVar4 = (pUVar9->fields)._._.method_code;
    pcVar11 = (pUVar9->fields)._._.invoke_impl;
  }
  (*pcVar11)(pvVar4);
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
    func_?(&TypeInfo__FullScreenController);
    func_?(&StringLiteral_FullScreenController___);
    cRam_? = '\x01';
  }
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__FullScreenController);
  }
  if (TypeInfo__FullScreenController->static_fields->debugging == 0) {
    return;
  }
  mscorlib.dll::System::String::String_Concat_3
            (StringLiteral_FullScreenController___,s,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (TypeInfo__UnityEngine__Debug->static_fields->s_Logger != (ILogger_1 *)0x0) {
    func_?(5,TypeInfo__UnityEngine__ILogger);
    return;
  }
  uVar2 = func_?(&stack0xfffffffc);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PrintMeasures(String) */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_PrintMeasures
               (String *prefix,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
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
  TStack_1._id_k__BackingField = 0;
  TStack_1.m_Data = (Object *)0x0;
  TStack_1.m_Children = (IList_1_UnityEngine_UIElements_TreeViewItemData_1_System_Object_ *)0x0;
  uStack_2 = 0;
  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral___________________START___,prefix,(MethodInfo *)0x0);
  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_fullScreen((MethodInfo *)0x0);
  uStack_5 = (undefined *)CONCAT13(bVar4,(undefined3)uStack_5);
  if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString
                     ((Boolean *)((int)&uStack_5 + 3),(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (prefix,StringLiteral____Screen_fullscreen___,pSVar3,(MethodInfo *)0x0);
  FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString
                     ((Boolean *)&TypeInfo__FullScreenController->static_fields->fullScreen,
                      (MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (prefix,StringLiteral____fullscreen___,pSVar3,(MethodInfo *)0x0);
  FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString
                     ((Boolean *)&TypeInfo__FullScreenController->static_fields->fakeFullscreen,
                      (MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (prefix,StringLiteral____fakeFullscreen___,pSVar3,(MethodInfo *)0x0);
  FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString
                     ((Boolean *)&TypeInfo__FullScreenController->static_fields->fullscreenSupported
                      ,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (prefix,StringLiteral____fullscreenSupported___,pSVar3,(MethodInfo *)0x0);
  FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString
                     ((Boolean *)&TypeInfo__FullScreenController->static_fields->initialized,
                      (MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (prefix,StringLiteral____initialized___,pSVar3,(MethodInfo *)0x0);
  FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
  SStack_6 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_orientation
                        ((MethodInfo *)0x0);
  EStack_7.klass = (Enum__Class *)TypeInfo__UnityEngine__ScreenOrientation;
  EStack_7.monitor = (MonitorData *)0xffffffff;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_7,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (prefix,StringLiteral____Screen_orientation___,pSVar3,(MethodInfo *)0x0);
  FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
  DStack_8 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_deviceOrientation
                        ((MethodInfo *)0x0);
  EStack_9.klass = (Enum__Class *)TypeInfo__UnityEngine__DeviceOrientation;
  EStack_9.monitor = (MonitorData *)0xffffffff;
  pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_9,(MethodInfo *)0x0);
  pSVar3 = mscorlib.dll::System::String::String_Concat_4
                     (prefix,StringLiteral____Input_deviceOrientation___,pSVar3,(MethodInfo *)0x0);
  FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
  pSVar10 = (String__Array *)func_?();
  if (pSVar10 != (String__Array *)0x0) {
    if (pSVar10->max_length == 0) goto code_?;
    pSVar10->vector[0] = prefix;
    pSStack11 = prefix;
    func_?();
    if (pSVar10->max_length < 2) goto code_?;
    pSStack11 = StringLiteral____Screen_currentResolution___;
    pSVar10->vector[1] = StringLiteral____Screen_currentResolution___;
    func_?();
    pRVar12 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                       ((Resolution *)&stack0xffffffbc,(MethodInfo *)0x0);
    TStack_1._id_k__BackingField = pRVar12->m_Width;
    TStack_1.m_Data = (Object *)pRVar12->m_Height;
    TStack_1.m_Children =
         (IList_1_UnityEngine_UIElements_TreeViewItemData_1_System_Object_ *)
         (pRVar12->m_RefreshRate).numerator;
    uStack_2 = (pRVar12->m_RefreshRate).denominator;
    IStack_13.m_value =
         (int32_t)mscorlib.dll::System::Runtime::CompilerServices::Unsafe::Unsafe_ReadUnaligned_6
                            ((uint8_t *)&TStack_1,(MethodInfo *)0x0);
    pSStack11 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_13,(MethodInfo *)0x0);
    if (pSVar10->max_length < 3) goto code_?;
    pSVar10->vector[2] = pSStack11;
    func_?();
    if (pSVar10->max_length < 4) goto code_?;
    pSStack11 = ::StringLiteral___;
    pSVar10->vector[3] = ::StringLiteral___;
    func_?();
    pRVar12 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                       ((Resolution *)&stack0xffffffbc,(MethodInfo *)0x0);
    TStack_1._id_k__BackingField = pRVar12->m_Width;
    TStack_1.m_Data = (Object *)pRVar12->m_Height;
    TStack_1.m_Children =
         (IList_1_UnityEngine_UIElements_TreeViewItemData_1_System_Object_ *)
         (pRVar12->m_RefreshRate).numerator;
    uStack_2 = (pRVar12->m_RefreshRate).denominator;
    IStack_13.m_value =
         (int32_t)UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                  TreeViewItemData`1[System::Object]::TreeViewItemData_1_System_Object__get_data
                            (&TStack_1,(MethodInfo *)0x0);
    pSStack11 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_13,(MethodInfo *)0x0);
    if (pSVar10->max_length < 5) goto code_?;
    pSVar10->vector[4] = pSStack11;
    func_?();
    pSVar3 = mscorlib.dll::System::String::String_Concat_6(pSVar10,(MethodInfo *)0x0);
    FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
    pSVar10 = (String__Array *)func_?();
    if (pSVar10 != (String__Array *)0x0) {
      if (pSVar10->max_length == 0) goto code_?;
      pSVar10->vector[0] = prefix;
      pSStack11 = prefix;
      func_?();
      if (pSVar10->max_length < 2) goto code_?;
      pSStack11 = StringLiteral____Screen_width_height___;
      pSVar10->vector[1] = StringLiteral____Screen_width_height___;
      func_?();
      IStack_13.m_value =
           UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
      pSStack11 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_13,(MethodInfo *)0x0);
      if (pSVar10->max_length < 3) goto code_?;
      pSVar10->vector[2] = pSStack11;
      func_?();
      if (pSVar10->max_length < 4) goto code_?;
      pSStack11 = ::StringLiteral___;
      pSVar10->vector[3] = ::StringLiteral___;
      func_?();
      IStack_13.m_value =
           UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
      pSStack11 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_13,(MethodInfo *)0x0);
      if (pSVar10->max_length < 5) goto code_?;
      pSVar10->vector[4] = pSStack11;
      func_?();
      pSVar3 = mscorlib.dll::System::String::String_Concat_6(pSVar10,(MethodInfo *)0x0);
      FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
      pSVar10 = (String__Array *)func_?();
      if (pSVar10 != (String__Array *)0x0) {
        if (pSVar10->max_length != 0) {
          pSVar10->vector[0] = prefix;
          pSStack11 = prefix;
          func_?();
          if (1 < pSVar10->max_length) {
            pSStack11 = StringLiteral____OriginalSize___;
            pSVar10->vector[1] = StringLiteral____OriginalSize___;
            func_?();
            pSStack11 =
                 mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)TypeInfo__FullScreenController->static_fields,(MethodInfo *)0x0
                           );
            if (2 < pSVar10->max_length) {
              pSVar10->vector[2] = pSStack11;
              func_?();
              if (3 < pSVar10->max_length) {
                pSStack11 = ::StringLiteral___;
                pSVar10->vector[3] = ::StringLiteral___;
                func_?();
                pSStack11 =
                     mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&TypeInfo__FullScreenController->static_fields->
                                          screenHeightBeforeFullscreen,(MethodInfo *)0x0);
                if (4 < pSVar10->max_length) {
                  pSVar10->vector[4] = pSStack11;
                  func_?();
                  pSVar3 = mscorlib.dll::System::String::String_Concat_6(pSVar10,(MethodInfo *)0x0);
                  FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
                  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                                     (StringLiteral___________________END___,prefix,
                                      (MethodInfo *)0x0);
                  FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        goto code_?;
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
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__FullScreenController);
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&
                    void_MethodInfo__System__TupleExtensions__Deconstruct<int,_int>_System__Tuple<int,_int>__System__Int32___System__Int32__
                   );
    func_?(&StringLiteral_Not_setting_fullscreen_as_it_has);
    func_?(&StringLiteral_Fullscreen_supported__setting_fu);
    func_?(&StringLiteral__h_);
    func_?(&StringLiteral_Fake_fullscreen__trying_to_chang);
    func_?(&StringLiteral___IsFullscreenSupported_);
    func_?(&StringLiteral_FullScreenController___trying_to);
    func_?(&StringLiteral_fakeFullScreenOff);
    func_?(&StringLiteral_Fullscreen_is_supported__trying_);
    func_?(&StringLiteral_FullscreenActivated);
    func_?(&StringLiteral_Not_setting_fullscreen_as_it_is_);
    func_?(&StringLiteral_fakeFullScreenOn);
    func_?(&StringLiteral___fake_);
    cRam_? = '\x01';
  }
  iStack_1 = 0;
  pOStack_2 = (Object *)0x0;
  values = (String__Array *)func_?(TypeInfo__System__String,6);
  pSVar3 = StringLiteral_FullScreenController___trying_to;
  if (values == (String__Array *)0x0) {
    func_?();
  }
  else if (values->max_length != 0) {
    values->vector[0] = StringLiteral_FullScreenController___trying_to;
    func_?(values->vector,pSVar3);
    if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Boolean);
    }
    pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString((Boolean *)&value,(MethodInfo *)0x0);
    if (1 < values->max_length) {
      values->vector[1] = pSVar3;
      func_?(values->vector + 1,pSVar3);
      pSVar3 = StringLiteral___IsFullscreenSupported_;
      if (2 < values->max_length) {
        values->vector[2] = StringLiteral___IsFullscreenSupported_;
        func_?(values->vector + 2,pSVar3);
        if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__FullScreenController);
        }
        FullScreenController_IsFullscreenSupported((MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString
                           ((Boolean *)&stack0xfffffffb,(MethodInfo *)0x0);
        if (3 < values->max_length) {
          values->vector[3] = pSVar3;
          func_?(values->vector + 3,pSVar3);
          pSVar3 = StringLiteral___fake_;
          if (4 < values->max_length) {
            values->vector[4] = StringLiteral___fake_;
            func_?(values->vector + 4,pSVar3);
            pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString
                               ((Boolean *)
                                &TypeInfo__FullScreenController->static_fields->fakeFullscreen,
                                (MethodInfo *)0x0);
            if (5 < values->max_length) {
              values->vector[5] = pSVar3;
              func_?(values->vector + 5,pSVar3);
              pSVar3 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
              FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
              if (TypeInfo__FullScreenController->static_fields->initialized == 0) {
                if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                FullScreenController_PrintLog
                          (StringLiteral_Not_setting_fullscreen_as_it_is_,(MethodInfo *)0x0);
                return;
              }
              if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              if (value != TypeInfo__FullScreenController->static_fields->fullScreen) {
                if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                bVar4 = FullScreenController_IsFullscreenSupported((MethodInfo *)0x0);
                if (bVar4 == 0) {
                  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  if (TypeInfo__FullScreenController->static_fields->fakeFullscreen != 0) {
                    if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    func_?();
                    TypeInfo__FullScreenController->static_fields->fullScreen = value;
                    if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString
                                       ((Boolean *)
                                        &TypeInfo__FullScreenController->static_fields->fullScreen,
                                        (MethodInfo *)0x0);
                    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                                       (StringLiteral_Fake_fullscreen__trying_to_chang,pSVar3,
                                        (MethodInfo *)0x0);
                    FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
                    if (TypeInfo__FullScreenController->static_fields->fullScreen != 0) {
                      MVar5 = Misc::OrientationControl::OrientationControl_get_CurrentOrientation
                                        ((MethodInfo *)0x0);
                      widthInput = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width
                                             ((MethodInfo *)0x0);
                      heightInput = UnityEngine.CoreModule.dll::UnityEngine::Screen::
                                    Screen_get_height((MethodInfo *)0x0);
                      if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pTVar6 = FullScreenController_GetWidthHeight
                                         (MVar5,widthInput,heightInput,(MethodInfo *)0x0);
                      item1 = (int32_t *)&stack0xfffffff0;
                      mscorlib.dll::System::TupleExtensions::TupleExtensions_Deconstruct
                                (pTVar6,item1,(int32_t *)&stack0xfffffff4,
                                 void_MethodInfo__System__TupleExtensions__Deconstruct<int,_int>_System__Tuple<int,_int>__System__Int32___System__Int32__
                                );
                      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                                ((int32_t)pTVar6,(int32_t)item1,0,(MethodInfo *)0x0);
                      pOVar7 = (Object__Array *)func_?();
                      if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0)
                      {
                        func_?();
                      }
                      BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
                                (StringLiteral_fakeFullScreenOn,pOVar7,(MethodInfo *)0x0);
                      return;
                    }
                    MVar5 = Misc::OrientationControl::OrientationControl_get_CurrentOrientation
                                      ((MethodInfo *)0x0);
                    if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    pTVar6 = FullScreenController_GetWidthHeight
                                       (MVar5,TypeInfo__FullScreenController->static_fields->
                                              screenWidthBeforeFullscreen,
                                        TypeInfo__FullScreenController->static_fields->
                                        screenHeightBeforeFullscreen,(MethodInfo *)0x0);
                    mscorlib.dll::System::TupleExtensions::TupleExtensions_Deconstruct
                              (pTVar6,(int32_t *)&stack0xfffffff4,(int32_t *)&stack0xfffffff0,
                               void_MethodInfo__System__TupleExtensions__Deconstruct<int,_int>_System__Tuple<int,_int>__System__Int32___System__Int32__
                              );
                    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                              ((int32_t)pTVar6,(int32_t)pTVar6,0,(MethodInfo *)0x0);
                    pOVar7 = (Object__Array *)func_?();
                    if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
                              (StringLiteral_fakeFullScreenOff,pOVar7,(MethodInfo *)0x0);
                  }
                }
                else {
                  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString
                                     ((Boolean *)
                                      &TypeInfo__FullScreenController->static_fields->fullScreen,
                                      (MethodInfo *)0x0);
                  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                                     (StringLiteral_Fullscreen_is_supported__trying_,pSVar3,
                                      (MethodInfo *)0x0);
                  FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
                  func_?();
                  TypeInfo__FullScreenController->static_fields->fullScreen = value;
                  if (TypeInfo__FullScreenController->static_fields->fullScreen == 0) {
                    if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
                    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                                       ((Int32 *)TypeInfo__FullScreenController->static_fields,
                                        (MethodInfo *)0x0);
                    str3 = mscorlib.dll::System::Int32::Int32_ToString
                                     ((Int32 *)&TypeInfo__FullScreenController->static_fields->
                                                screenHeightBeforeFullscreen,(MethodInfo *)0x0);
                    pSVar3 = mscorlib.dll::System::String::String_Concat_5
                                       (StringLiteral_Fullscreen_supported__setting_fu,pSVar3,
                                        StringLiteral__h_,str3,(MethodInfo *)0x0);
                    FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_set_fullScreen
                              (0,(MethodInfo *)0x0);
                    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                              (TypeInfo__FullScreenController->static_fields->
                               screenWidthBeforeFullscreen,
                               TypeInfo__FullScreenController->static_fields->
                               screenHeightBeforeFullscreen,0,(MethodInfo *)0x0);
                    return;
                  }
                  pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::Screen::
                           Screen_get_currentResolution
                                     ((Resolution *)&stack0xffffffd0,(MethodInfo *)0x0);
                  iStack_1 = pRVar8->m_Width;
                  pOStack_2 = (Object *)pRVar8->m_Height;
                  width = mscorlib.dll::System::Runtime::CompilerServices::Unsafe::
                          Unsafe_ReadUnaligned_6((uint8_t *)&iStack_1,(MethodInfo *)0x0);
                  pRVar8 = UnityEngine.CoreModule.dll::UnityEngine::Screen::
                           Screen_get_currentResolution
                                     ((Resolution *)&stack0xffffffd0,(MethodInfo *)0x0);
                  iStack_1 = pRVar8->m_Width;
                  pOStack_2 = (Object *)pRVar8->m_Height;
                  height = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                           TreeViewItemData`1[System::Object]::
                           TreeViewItemData_1_System_Object__get_data
                                     ((TreeViewItemData_1_System_Object_ *)&iStack_1,
                                      (MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                            ((int32_t)width,(int32_t)height,1,(MethodInfo *)0x0);
                  if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  if (TypeInfo__FullScreenController->static_fields->fullscreenStatCollected == 0) {
                    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
                      func_?();
                    }
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
              if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pSVar3 = mscorlib.dll::System::Boolean::Boolean_ToString
                                 ((Boolean *)&value,(MethodInfo *)0x0);
              pSVar3 = mscorlib.dll::System::String::String_Concat_3
                                 (StringLiteral_Not_setting_fullscreen_as_it_has,pSVar3,
                                  (MethodInfo *)0x0);
              if ((TypeInfo__FullScreenController->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              FullScreenController_PrintLog(pSVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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

