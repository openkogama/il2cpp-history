
/* Boolean DebugGetKeyDown(String) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_DebugGetKeyDown_1
               (String *st,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)func_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?,0,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  bVar3 = (*pcRam_?)(st);
  return bVar3;
}


/* Boolean DebugGetKeyUp(KeyCode) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_DebugGetKeyUp
               (KeyCode__Enum key,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)func_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?,0,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  bVar3 = (*pcRam_?)(key);
  return bVar3;
}


/* Boolean DebugGetKeyUp(String) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_DebugGetKeyUp_1
               (String *st,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)func_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?,0,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  bVar3 = (*pcRam_?)(st);
  return bVar3;
}


/* Boolean DebugGetKey(String) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_DebugGetKey_1
               (String *st,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)func_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?,0,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  bVar3 = (*pcRam_?)(st);
  return bVar3;
}


/* Single GetAxis(String) */

float Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetAxis(String *axis,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_started == 0)) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    fVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
            CrossPlatformInputManager_GetAxis(axis,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    return TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier * fVar2;
  }
  return 0.0;
}


/* Single GetAxisRaw(String) */

float Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetAxisRaw
                (String *axis,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_started == 0)) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    fVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
            CrossPlatformInputManager_GetAxisRaw(axis,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    return TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier * fVar2;
  }
  return 0.0;
}


/* Single GetAxisRawWithoutSensitivity(String) */

float Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                (String *axis,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_started == 0)) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_started == 0)) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    fVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
            CrossPlatformInputManager_GetAxis_1((String *)0x0,1,(MethodInfo *)0x0);
    return fVar2;
  }
  return 0.0;
}


/* Single GetAxisWithoutSensitivity(String) */

float Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                (String *axis,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_started == 0)) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
                vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_started == 0)) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    fVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
            CrossPlatformInputManager_GetAxis_1((String *)0x0,0,(MethodInfo *)0x0);
    return fVar2;
  }
  return 0.0;
}


/* Boolean GetBooleanControl(KogamaControls) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetBooleanControl
               (KogamaControls__Enum control,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper_GetBooleanControl_1(control,KeyState__Enum_Pressed,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean GetBooleanControlDown(KogamaControls) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetBooleanControlDown
               (KogamaControls__Enum control,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper_GetBooleanControl_1(control,KeyState__Enum_Down,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean GetBooleanControlUp(KogamaControls) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetBooleanControlUp
               (KogamaControls__Enum control,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper_GetBooleanControl_1(control,KeyState__Enum_Up,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean GetBooleanControl(KogamaControls, KeyState) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetBooleanControl_1
               (KogamaControls__Enum control,KeyState__Enum keyState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
  if (((bVar1 == 0) || (control == KogamaControls__Enum_PointerSelect)) ||
     (control == KogamaControls__Enum_PointerSelectAlt)) {
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    if (TypeInfo__MVInputWrapper->static_fields->inputMap != (IKogamaInputMap *)0x0) {
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVInputWrapper);
      }
      pIVar2 = TypeInfo__MVInputWrapper->static_fields->inputMap;
      if (pIVar2 == (IKogamaInputMap *)0x0) {
        func_?(0);
        pcVar3 = (code *)swi(3);
        bVar1 = (*pcVar3)();
        return bVar1;
      }
      pIVar4 = pIVar2->klass;
      uVar5 = 0;
      uVar6._0_1_ = (pIVar4->_1).rank;
      uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
      if (uVar6 != 0) {
        do {
          if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
              (Il2CppClass *)TypeInfo__IKogamaInputMap) {
            ppMVar7 = &(&pIVar2->klass->vtable)[pIVar2->klass->interfaceOffsets[uVar5].offset].
                       GetBooleanControl.method;
            goto code_?;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar6);
      }
      ppMVar7 = (MethodInfo **)func_?(pIVar2,TypeInfo__IKogamaInputMap,0);
code_?:
      bVar1 = (*(code *)*ppMVar7)(pIVar2,control,keyState,ppMVar7[1]);
      return bVar1;
    }
  }
  return 0;
}


/* String GetStringInput() */

String * Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetStringInput(MethodInfo *method)

{
  pSVar1 = UnityEngine.CoreModule.dll::UnityEngine::Input::Input_get_inputString((MethodInfo *)0x0);
  return pSVar1;
}


/* Boolean InputCharActive(KeyCode) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_InputCharActive
               (KeyCode__Enum key,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)func_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?,0,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  bVar3 = (*pcRam_?)(key);
  return bVar3;
}


/* Boolean InputCharActiveDown(KeyCode) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_InputCharActiveDown
               (KeyCode__Enum key,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)func_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?,0,0);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  bVar3 = (*pcRam_?)(key);
  return bVar3;
}


/* Void ResetInput() */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_ResetInput(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  pDVar1 = (DesktopDefaultKeyboardMapping *)TypeInfo__MVInputWrapper->static_fields->inputMap;
  if (pDVar1 == (DesktopDefaultKeyboardMapping *)0x0) {
    func_?(0);
    pDVar1 = extraout_ECX;
    pDVar2 = extraout_EDX;
  }
  else {
    bVar3 = (TypeInfo__DesktopDefaultKeyboardMapping->_1).naturalAligment;
    pDVar4 = pDVar1->klass;
    bVar5 = (pDVar4->_1).naturalAligment;
    if ((bVar5 < bVar3) ||
       ((pDVar4->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__DesktopDefaultKeyboardMapping)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pDVar7 = (DesktopDefaultKeyboardMapping *)0x0;
    if (bVar6) {
      pDVar7 = pDVar1;
    }
    pDVar2 = TypeInfo__DesktopDefaultKeyboardMapping;
    if (pDVar7 != (DesktopDefaultKeyboardMapping *)0x0) {
      if ((bVar5 < bVar3) ||
         ((pDVar4->_1).typeHierarchy[bVar3 - 1] !=
          (Il2CppClass *)TypeInfo__DesktopDefaultKeyboardMapping)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pDVar7 = (DesktopDefaultKeyboardMapping *)0x0;
      if (bVar6) {
        pDVar7 = pDVar1;
      }
      if (pDVar7 != (DesktopDefaultKeyboardMapping *)0x0) {
        DesktopDefaultKeyboardMapping::DesktopDefaultKeyboardMapping_Reset(pDVar7,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  func_?(pDVar1,pDVar2);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetInputMap(IKogamaInputMap) */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_SetInputMap
               (IKogamaInputMap *inputMap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
    TypeInfo__MVInputWrapper->static_fields->inputMap = inputMap;
    return;
  }
  TypeInfo__MVInputWrapper->static_fields->inputMap = inputMap;
  return;
}


/* Void SuppressAllInput() */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_SuppressAllInput(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVInputWrapper__InputSuppression;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  (*this->klass[1]._0.gc_desc)(this,1,this->klass[1]._0.name);
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed =
       (MVInputWrapper_InputSuppression *)this;
  return;
}


/* Void SuppressInGameInput() */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_SuppressInGameInput(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVInputWrapper__InputSuppression;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  (*this->klass[1]._0.gc_desc)(this,1,this->klass[1]._0.name);
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed =
       (MVInputWrapper_InputSuppression *)this;
  return;
}


/* Void SuppressShortcutKeys() */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_SuppressShortcutKeys(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVInputWrapper__InputSuppression;
  this = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  (*this->klass[1]._0.gc_desc)(this,1,this->klass[1]._0.name);
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed =
       (MVInputWrapper_InputSuppression *)this;
  return;
}


/* MVInputWrapper() */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier = 1.0;
  if (bVar1) {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVInputWrapper__InputSuppression;
  pSVar3 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,(MethodInfo *)pMVar2);
  (*pSVar3->klass[1]._0.gc_desc)(pSVar3,0,pSVar3->klass[1]._0.name);
  bVar1 = cRam_? == '\0';
  TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed =
       (MVInputWrapper_InputSuppression *)pSVar3;
  if (bVar1) {
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVInputWrapper__InputSuppression;
  pSVar3 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,(MethodInfo *)pMVar2);
  (*pSVar3->klass[1]._0.gc_desc)(pSVar3,0,pSVar3->klass[1]._0.name);
  bVar1 = cRam_? == '\0';
  TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed =
       (MVInputWrapper_InputSuppression *)pSVar3;
  if (bVar1) {
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVInputWrapper__InputSuppression;
  pSVar3 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar3,0.0,(MethodInfo *)pMVar2);
  (*pSVar3->klass[1]._0.gc_desc)(pSVar3);
  TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed =
       (MVInputWrapper_InputSuppression *)pSVar3;
  return;
}


/* Boolean get_IsAllInputSuppressed() */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_get_IsAllInputSuppressed
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  pMVar1 = TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed;
  if (pMVar1 != (MVInputWrapper_InputSuppression *)0x0) {
    bVar2 = (*(code *)(pMVar1->klass->vtable).get_IsSuppressed.method)
                      (pMVar1,(pMVar1->klass->vtable).set_IsSuppressed.methodPtr);
    return bVar2;
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean get_IsInGameInputSuppressed() */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_get_IsInGameInputSuppressed
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  pMVar1 = TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed;
  if (pMVar1 != (MVInputWrapper_InputSuppression *)0x0) {
    cVar2 = (*(code *)(pMVar1->klass->vtable).get_IsSuppressed.method)
                      (pMVar1,(pMVar1->klass->vtable).set_IsSuppressed.methodPtr);
    if (cVar2 != '\0') {
      return 1;
    }
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar3 = MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
    return bVar3;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Boolean get_IsShortcutKeysSuppressed() */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_get_IsShortcutKeysSuppressed
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  pMVar1 = TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed;
  if (pMVar1 != (MVInputWrapper_InputSuppression *)0x0) {
    cVar2 = (*(code *)(pMVar1->klass->vtable).get_IsSuppressed.method)
                      (pMVar1,(pMVar1->klass->vtable).set_IsSuppressed.methodPtr);
    if (cVar2 != '\0') {
      return 1;
    }
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar3 = MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
    return bVar3;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Single get_MouseSensitivityModifier() */

float Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_get_MouseSensitivityModifier
                (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  return TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier;
}


/* Void set_MouseSensitivityModifier(Single) */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_set_MouseSensitivityModifier
               (float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVInputWrapper);
  }
  TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier = value;
  return;
}

