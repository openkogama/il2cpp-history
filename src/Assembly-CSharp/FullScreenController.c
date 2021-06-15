
/* Boolean AllowFullscreenChange() */

bool Assembly-CSharp.dll::FullScreenController::FullScreenController_AllowFullscreenChange
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__BrowserComm->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm->_1).cctor_started == 0)) {
    func_?(TypeInfo__BrowserComm);
  }
  a = BrowserComm::BrowserComm_get_BrowserName((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_op_Equality
                    (a,StringLiteral_Microsoft_Internet_Explorer,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 1;
  }
  if ((((uint)(TypeInfo__BrowserComm->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__BrowserComm->_1).cctor_started == 0)) {
    func_?();
  }
  iVar2 = BrowserComm::BrowserComm_get_BrowserVersion((MethodInfo *)0x0);
  return iVar2 < 8;
}


/* Void Init(Int32, Int32) */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_Init
               (int32_t width,int32_t height,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
    func_?(TypeInfo__FullScreenController);
  }
  TypeInfo__FullScreenController->static_fields->screenWidthBeforeFullscreen = width;
  TypeInfo__FullScreenController->static_fields->screenHeightBeforeFullscreen = height;
  return;
}


/* Void LateUpdate() */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_LateUpdate(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  iStack_2 = 0;
  if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
    func_?(TypeInfo__FullScreenController);
  }
  if (TypeInfo__FullScreenController->static_fields->waitingForFullscreenChange == 0) {
    return;
  }
  if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
    func_?(TypeInfo__FullScreenController);
  }
  if (TypeInfo__FullScreenController->static_fields->fullScreen != 0) {
    pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                       ((Resolution *)&stack0xffffffd0,(MethodInfo *)0x0);
    uStack_1._0_4_ = pRVar3->m_Width;
    uStack_1._4_4_ = pRVar3->m_Height;
    iStack_2 = pRVar3->m_RefreshRate;
    iVar4 = func_?(&uStack_1,0);
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_width((MethodInfo *)0x0);
    if (iVar4 != iVar5) {
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
              ((Resolution *)&stack0xffffffd0,(MethodInfo *)0x0);
    iVar4 = func_?();
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_height((MethodInfo *)0x0);
    if (iVar4 != iVar5) {
      return;
    }
  }
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_fullScreen((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
    func_?(TypeInfo__FullScreenController);
  }
  if (bVar6 == TypeInfo__FullScreenController->static_fields->fullScreen) {
    if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
      func_?(TypeInfo__FullScreenController);
    }
    bStack_7 = TypeInfo__FullScreenController->static_fields->fullScreen;
    arg1 = (Object *)func_?(TypeInfo__System__Boolean,&bStack_7);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    message = mscorlib.dll::System::String::String_Concat
                        ((Object *)StringLiteral_Switched_to_fullscreen_,arg1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)message,(MethodInfo *)0x0)
    ;
    if (TypeInfo__FullScreenController->static_fields->OnFullScreenChange !=
        (UnityAction_1_System_Boolean_ *)0x0) {
      if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
        func_?();
      }
      this = TypeInfo__FullScreenController->static_fields->OnFullScreenChange;
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_fullScreen
                        ((MethodInfo *)0x0);
      _bStack_9 = CONCAT31(uStack_8,bVar6);
      if (this == (UnityAction_1_System_Boolean_ *)0x0) {
        func_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Boolean]::
      UnityAction_1_System_Boolean__Invoke
                (this,bVar6,MethodInfo__UnityEngine__Events__UnityAction<bool>__Invoke_bool_);
    }
    if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__FullScreenController->static_fields->waitingForFullscreenChange = 0;
  }
  return;
}


/* FullScreenController() */

void Assembly-CSharp.dll::FullScreenController::FullScreenController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TypeInfo__FullScreenController->static_fields->screenWidthBeforeFullscreen = 0x3ac;
  TypeInfo__FullScreenController->static_fields->screenHeightBeforeFullscreen = 0x1e2;
  return;
}


/* Boolean get_FullScreen() */

bool Assembly-CSharp.dll::FullScreenController::FullScreenController_get_FullScreen
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
    func_?(TypeInfo__FullScreenController);
  }
  return TypeInfo__FullScreenController->static_fields->fullScreen;
}


/* Void set_FullScreen(Boolean) */

void Assembly-CSharp.dll::FullScreenController::FullScreenController_set_FullScreen
               (bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
    func_?(TypeInfo__FullScreenController);
  }
  if (value != TypeInfo__FullScreenController->static_fields->fullScreen) {
    if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
      func_?(TypeInfo__FullScreenController);
    }
    bVar2 = FullScreenController_AllowFullscreenChange((MethodInfo *)0x0);
    if (bVar2 != 0) {
      if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
        func_?(TypeInfo__FullScreenController);
      }
      TypeInfo__FullScreenController->static_fields->waitingForFullscreenChange = 1;
      TypeInfo__FullScreenController->static_fields->fullScreen = value;
      if (TypeInfo__FullScreenController->static_fields->fullScreen == 0) {
        UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_set_fullScreen(0,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                  (TypeInfo__FullScreenController->static_fields->screenWidthBeforeFullscreen,
                   TypeInfo__FullScreenController->static_fields->screenHeightBeforeFullscreen,0,
                   (MethodInfo *)0x0);
        return;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                ((Resolution *)&stack0xffffffd8,(MethodInfo *)0x0);
      width = func_?(&stack0xfffffff0,0);
      pRVar3 = UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_get_currentResolution
                         ((Resolution *)&stack0xffffffd8,(MethodInfo *)0x0);
      uStack_1._0_4_ = pRVar3->m_Width;
      uStack_1._4_4_ = pRVar3->m_Height;
      height = func_?(&uStack_1,0);
      UnityEngine.CoreModule.dll::UnityEngine::Screen::Screen_SetResolution_2
                (width,height,1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
        func_?();
      }
      if (TypeInfo__FullScreenController->static_fields->fullscreenStatCollected == 0) {
        if ((((uint)(TypeInfo__StatHatWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__StatHatWrapper->_1).cctor_started == 0)) {
          func_?();
        }
        uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
        StatHatWrapper::StatHatWrapper_Count(StringLiteral_FullscreenActivated,1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__FullScreenController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__FullScreenController->_1).cctor_started == 0)) {
          func_?();
        }
        TypeInfo__FullScreenController->static_fields->fullscreenStatCollected = 1;
      }
    }
  }
  return;
}

