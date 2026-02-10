
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


/* ValueTuple`2[Int32,Int32] GetWidthHeight(MVOrientation, Int32, Int32) */

ValueTuple_2_Int32_Int32_
Assembly-CSharp.dll::FullScreenController::FullScreenController_GetWidthHeight
          (MVOrientation__Enum orientation,int32_t widthInput,int32_t heightInput,MethodInfo *method
          )

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__ValueTuple<int,_int>__ValueTuple_int__int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((orientation == MVOrientation__Enum_LandscapeLeft) ||
     (orientation == MVOrientation__Enum_LandscapeRight)) {
    bVar1 = widthInput < heightInput;
  }
  else {
    bVar1 = heightInput < widthInput;
  }
  iVar2 = widthInput;
  if (!bVar1) {
    iVar2 = heightInput;
    heightInput = widthInput;
  }
  VVar3.Item2 = iVar2;
  VVar3.Item1 = heightInput;
  return VVar3;
}


/* Void HandleFakeFullscreenStateChange() */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_HandleFakeFullscreenStateChange
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fakeFullScreenOff);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fakeFullScreenOn);
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
  TypeInfo__FullScreenController->static_fields->_WaitingForFullscreenChange_k__BackingField = 1;
  if (TypeInfo__FullScreenController->static_fields->fullScreen == 0) {
    MVar1 = Misc::OrientationControl::OrientationControl_get_CurrentOrientation((MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__FullScreenController);
    }
    VVar2 = FullScreenController_GetWidthHeight
                      (MVar1,TypeInfo__FullScreenController->static_fields->
                             screenWidthBeforeFullscreen,
                       TypeInfo__FullScreenController->static_fields->screenHeightBeforeFullscreen,
                       (MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
              (VVar2.Item1,VVar2.Item2,0,(MethodInfo *)0x0);
    pSVar3 = StringLiteral_fakeFullScreenOff;
    if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
      FUN_?();
      pSVar3 = StringLiteral_fakeFullScreenOff;
    }
  }
  else {
    MVar1 = Misc::OrientationControl::OrientationControl_get_CurrentOrientation((MethodInfo *)0x0);
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    widthInput = (*pcRam_?)();
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    heightInput = (*pcRam_?)();
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?();
    }
    VVar2 = FullScreenController_GetWidthHeight(MVar1,widthInput,heightInput,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
              (VVar2.Item1,VVar2.Item2,0,(MethodInfo *)0x0);
    pSVar3 = StringLiteral_fakeFullScreenOn;
    if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
      FUN_?();
      pSVar3 = StringLiteral_fakeFullScreenOn;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  args = (Object__Array *)FUN_?(TypeInfo__System__Object);
  if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Would_have_sent_function__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___to_JSBridge_with_args__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm);
  }
  str2 = StringLiteral___to_JSBridge_with_args__;
  str0 = StringLiteral_Would_have_sent_function__;
  if (TypeInfo__BrowserComm->static_fields->enableExternalCall != 0) {
    if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar3 = BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                       (pSVar3,(MethodInfo *)0x0);
    pSVar3 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar3,args,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Attempting_to_use_js_eval_in_non);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
    pSVar3 = StringLiteral_Attempting_to_use_js_eval_in_non;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar6 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar6 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar6,2,pSVar3);
    return;
  }
  if (args == (Object__Array *)0x0) {
    str3 = (String *)0x0;
  }
  else {
    pOVar7 = args->klass;
    uVar5._0_2_ = pOVar7[1]._0.this_arg.attrs;
    uVar5._2_1_ = pOVar7[1]._0.this_arg.type;
    uVar5._3_5_ = *(undefined5 *)&pOVar7[1]._0.this_arg.field_0xb;
    str3 = (String *)(*(code *)pOVar7[1]._0.this_arg.data)(args,uVar5);
  }
  pSVar3 = mscorlib.dll::System::String::String_Concat_6(str0,pSVar3,str2,str3,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar6 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar6 == (ILogger_1 *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar6,3,pSVar3);
  return;
}


/* Void HandleSupportedFullscreenStateChange() */

void Assembly-CSharp.dll::FullScreenController::
     FullScreenController_HandleSupportedFullscreenStateChange(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FullscreenActivated);
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
  TypeInfo__FullScreenController->static_fields->_WaitingForFullscreenChange_k__BackingField = 1;
  if (TypeInfo__FullScreenController->static_fields->fullScreen == 0) {
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
    (*pcRam_?)(0);
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar3 = TypeInfo__FullScreenController->static_fields->screenWidthBeforeFullscreen;
    iVar4 = TypeInfo__FullScreenController->static_fields->screenHeightBeforeFullscreen;
    uStack_5 = 0x100000000;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?,iVar4,0,0), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)(iVar3,iVar4,3,&uStack_5);
    return;
  }
  uStack_5 = 0;
  uStack_6 = 0;
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
  (*pcRam_?)(&uStack_5);
  uStack_7 = 0;
  uStack_8 = 0;
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
  (*pcRam_?)(&uStack_7);
  UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
            ((int32_t)uStack_5,(int32_t)((ulonglong)uStack_7 >> 0x20),1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
  if (TypeInfo__FullScreenController->static_fields->fullscreenStatCollected == 0) {
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    StatHatWrapper::StatHatWrapper_Count(StringLiteral_FullscreenActivated,1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__FullScreenController);
    }
    TypeInfo__FullScreenController->static_fields->fullscreenStatCollected = 1;
  }
  return;
}


/* Void Init(Int32, Int32, Boolean) */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_Init
               (int32_t width,int32_t height,bool init,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FullScreenController);
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
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
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
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
  TypeInfo__FullScreenController->static_fields->fullscreenSupported = fsSupport;
  if (fake == 0) {
    bVar1 = 0;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar1 = TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField;
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
  TypeInfo__FullScreenController->static_fields->fakeFullscreen = bVar1 != 0;
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
  str1 = (String *)FUN_?(&VStackX_20,0);
  mscorlib.dll::System::String::String_Concat_4
            (StringLiteral_ScreenSizeOptimizer_UpdateOrigin,str1,(MethodInfo *)0x0);
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
  uStack_1 = 0;
  uStack_2 = 0;
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
  (*pcRam_?)(&uStack_1);
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
  iVar5 = (*pcRam_?)();
  bVar6 = false;
  if ((int)uStack_1 == iVar5) {
    uStack_1 = 0;
    uStack_2 = 0;
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
    (*pcRam_?)(&uStack_1);
    uVar4 = uStack_1;
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
    iVar5 = (*pcRam_?)();
    bVar7 = (int)((ulonglong)uVar4 >> 0x20) != iVar5;
  }
  else {
    bVar7 = true;
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__FullScreenController->static_fields->fullScreen != 0) {
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar6 = TypeInfo__FullScreenController->static_fields->fakeFullscreen == 0;
  }
  if ((bool)(bVar7 & bVar6)) {
    return;
  }
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
  bVar8 = (*pcRam_?)();
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
  if (bVar8 == TypeInfo__FullScreenController->static_fields->fullScreen) {
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TypeInfo__FullScreenController->static_fields->fullscreenSupported != 0) {
      if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
        FUN_?();
      }
      pUVar9 = TypeInfo__FullScreenController->static_fields->OnFullScreenChange;
      if (pUVar9 != (UnityAction_1_System_Boolean_ *)0x0) {
        bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_fullScreen
                          ((MethodInfo *)0x0);
        (*(pUVar9->fields)._._.invoke_impl)
                  ((pUVar9->fields)._._.method_code,bVar8,(pUVar9->fields)._._.method);
      }
      goto code_?;
    }
  }
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
    }
  }
  else {
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__FullScreenController);
    }
    pUVar9 = TypeInfo__FullScreenController->static_fields->OnFullScreenChange;
    if (pUVar9 != (UnityAction_1_System_Boolean_ *)0x0) {
      if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__FullScreenController);
      }
      (*(pUVar9->fields)._._.invoke_impl)
                ((pUVar9->fields)._._.method_code,
                 TypeInfo__FullScreenController->static_fields->fullScreen,
                 (pUVar9->fields)._._.method);
    }
  }
code_?:
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__FullScreenController);
  }
  FUN_?(0);
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
    FUN_?(&TypeInfo__FullScreenController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (TypeInfo__FullScreenController->static_fields->initialized != 0) {
    if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (value != TypeInfo__FullScreenController->static_fields->fullScreen) {
      if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar1 = FullScreenController_IsFullscreenSupported((MethodInfo *)0x0);
      if (bVar1 == 0) {
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__FullScreenController);
        }
        if (TypeInfo__FullScreenController->static_fields->fakeFullscreen == 0) {
          return;
        }
      }
      if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__FullScreenController);
      }
      TypeInfo__FullScreenController->static_fields->fullScreen = value;
      if (bVar1 == 0) {
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (TypeInfo__FullScreenController->static_fields->fakeFullscreen != 0) {
          if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__FullScreenController);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_fakeFullScreenOff);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_fakeFullScreenOn);
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
          TypeInfo__FullScreenController->static_fields->_WaitingForFullscreenChange_k__BackingField
               = 1;
          if (TypeInfo__FullScreenController->static_fields->fullScreen == 0) {
            MVar2 = Misc::OrientationControl::OrientationControl_get_CurrentOrientation
                              ((MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__FullScreenController);
            }
            VVar3 = FullScreenController_GetWidthHeight
                              (MVar2,TypeInfo__FullScreenController->static_fields->
                                     screenWidthBeforeFullscreen,
                               TypeInfo__FullScreenController->static_fields->
                               screenHeightBeforeFullscreen,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                      (VVar3.Item1,VVar3.Item2,0,(MethodInfo *)0x0);
            pSVar4 = StringLiteral_fakeFullScreenOff;
            if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
              FUN_?();
              pSVar4 = StringLiteral_fakeFullScreenOff;
            }
          }
          else {
            MVar2 = Misc::OrientationControl::OrientationControl_get_CurrentOrientation
                              ((MethodInfo *)0x0);
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            widthInput = (*pcRam_?)();
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
              uVar6 = func_?(&UNK_?);
              FUN_?(uVar6,0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcRam_? = pcVar5;
            heightInput = (*pcRam_?)();
            if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
              FUN_?();
            }
            VVar3 = FullScreenController_GetWidthHeight
                              (MVar2,widthInput,heightInput,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                      (VVar3.Item1,VVar3.Item2,0,(MethodInfo *)0x0);
            pSVar4 = StringLiteral_fakeFullScreenOn;
            if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
              FUN_?();
              pSVar4 = StringLiteral_fakeFullScreenOn;
            }
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Object);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          args = (Object__Array *)FUN_?(TypeInfo__System__Object);
          if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__BrowserComm);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__BrowserComm__ToJavaScript);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_Would_have_sent_function__);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral___to_JSBridge_with_args__);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__BrowserComm);
          }
          str2 = StringLiteral___to_JSBridge_with_args__;
          str0 = StringLiteral_Would_have_sent_function__;
          if (TypeInfo__BrowserComm->static_fields->enableExternalCall == 0) {
            if (args == (Object__Array *)0x0) {
              str3 = (String *)0x0;
            }
            else {
              pOVar7 = args->klass;
              uVar6._0_2_ = pOVar7[1]._0.this_arg.attrs;
              uVar6._2_1_ = pOVar7[1]._0.this_arg.type;
              uVar6._3_5_ = *(undefined5 *)&pOVar7[1]._0.this_arg.field_0xb;
              str3 = (String *)(*(code *)pOVar7[1]._0.this_arg.data)(args,uVar6);
            }
            pSVar4 = mscorlib.dll::System::String::String_Concat_6
                               (str0,pSVar4,str2,str3,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug,0);
              LOCK();
              UNLOCK();
              FUN_?(&TypeInfo__UnityEngine__ILogger);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            pIVar8 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
            if (pIVar8 != (ILogger_1 *)0x0) {
              FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar8,3,pSVar4);
              return;
            }
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (*(int *)&(TypeInfo__BrowserComm__ToJavaScript->_1).field_0x1c == 0) {
            FUN_?();
          }
          pSVar4 = BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ToNameSpace
                             (pSVar4,(MethodInfo *)0x0);
          pSVar4 = JSBridge::JSBridge_BuildInvocationForArguments(pSVar4,args,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            FUN_?(&StringLiteral_Attempting_to_use_js_eval_in_non);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar4,(MethodInfo *)0x0);
          pSVar4 = StringLiteral_Attempting_to_use_js_eval_in_non;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__ILogger);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Debug);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar8 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
          if (pIVar8 != (ILogger_1 *)0x0) {
            FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar8,2,pSVar4);
            return;
          }
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        if (*(int *)&(TypeInfo__FullScreenController->_1).field_0x1c == 0) {
          FUN_?();
        }
        FullScreenController_HandleSupportedFullscreenStateChange((MethodInfo *)0x0);
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

