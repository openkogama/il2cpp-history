
/* Boolean DebugGetKeyDown(String) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_DebugGetKeyDown_1
               (String *st,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  bVar1 = (*pcRam_?)(st);
  return bVar1;
}


/* Boolean DebugGetKeyUp(KeyCode) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_DebugGetKeyUp
               (KeyCode__Enum key,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  bVar1 = (*pcRam_?)(key);
  return bVar1;
}


/* Boolean DebugGetKeyUp(String) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_DebugGetKeyUp_1
               (String *st,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  bVar1 = (*pcRam_?)(st);
  return bVar1;
}


/* Boolean DebugGetKey(String) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_DebugGetKey_1
               (String *st,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  bVar1 = (*pcRam_?)(st);
  return bVar1;
}


/* Single GetAxis(String) */

float Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetAxis(String *axis,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    fVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
            CrossPlatformInputManager_GetAxis(axis,(MethodInfo *)0x0);
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    fVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
            CrossPlatformInputManager_GetAxisRaw(axis,(MethodInfo *)0x0);
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager)
      ;
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager)
      ;
      cRam_? = '\x01';
    }
    if ((TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
        cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper_GetBooleanControl_1(control,KeyState__Enum_Pressed,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean GetBooleanControlDeviceDependent(KogamaControls) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetBooleanControlDeviceDependent
               (KogamaControls__Enum kogamaControls,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVInputWrapper);
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar1 = MVInputWrapper_GetBooleanControl_1(kogamaControls,KeyState__Enum_Down,(MethodInfo *)0x0)
    ;
    if (bVar1 != 0) {
      return 1;
    }
    return 0;
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper_GetBooleanControl_1(kogamaControls,KeyState__Enum_Up,(MethodInfo *)0x0);
  return bVar1 != 0;
}


/* Boolean GetBooleanControlDown(KogamaControls) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetBooleanControlDown
               (KogamaControls__Enum control,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
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
    func_?(&TypeInfo__IKogamaInputMap);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  bVar1 = MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
  if (((bVar1 == 0) || (control == KogamaControls__Enum_PointerSelect)) ||
     (control == KogamaControls__Enum_PointerSelectAlt)) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    if (TypeInfo__MVInputWrapper->static_fields->inputMap != (IKogamaInputMap *)0x0) {
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVInputWrapper);
      }
      pIVar2 = TypeInfo__MVInputWrapper->static_fields->inputMap;
      if (pIVar2 == (IKogamaInputMap *)0x0) {
        func_?();
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
  pSVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_inputString
                     ((MethodInfo *)0x0);
  return pSVar1;
}


/* Void ResetInput() */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_ResetInput(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__DesktopDefaultKeyboardMapping);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    return;
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  pIVar1 = TypeInfo__MVInputWrapper->static_fields->inputMap;
  pDVar2 = TypeInfo__DesktopDefaultKeyboardMapping;
  if (pIVar1 != (IKogamaInputMap *)0x0) {
    bVar3 = (TypeInfo__DesktopDefaultKeyboardMapping->_1).naturalAligment;
    if (((pIVar1->klass->_1).naturalAligment < bVar3) ||
       ((pIVar1->klass->_1).typeHierarchy[bVar3 - 1] !=
        (Il2CppClass *)TypeInfo__DesktopDefaultKeyboardMapping)) goto code_?;
    pDVar2 = unaff_ESI;
    if ((pIVar1[1].monitor != (MonitorData *)0x0) &&
       (this = *(BitArray **)(pIVar1[1].monitor + 8), this != (BitArray *)0x0)) {
      mscorlib.dll::System::Collections::BitArray::BitArray_SetAll(this,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pIVar1 = extraout_EDX;
code_?:
  func_?(pIVar1,pDVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetInputMap(IKogamaInputMap) */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_SetInputMap
               (IKogamaInputMap *inputMap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  TypeInfo__MVInputWrapper->static_fields->inputMap = inputMap;
  func_?(&TypeInfo__MVInputWrapper->static_fields->inputMap,unaff_EBP);
  return;
}


/* Void SuppressAllInput() */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_SuppressAllInput(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper__InputSuppression);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVInputWrapper__InputSuppression;
  value = (MVInputWrapper_InputSuppression *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (*(code *)(value->klass->vtable).set_IsSuppressed.method)(value,1,value->klass[1]._0.image);
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed = value;
  func_?(&TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed);
  return;
}


/* Void SuppressInGameInput() */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_SuppressInGameInput(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper__InputSuppression);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVInputWrapper__InputSuppression;
  value = (MVInputWrapper_InputSuppression *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (*(code *)(value->klass->vtable).set_IsSuppressed.method)(value,1,value->klass[1]._0.image);
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed = value;
  func_?(&TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed);
  return;
}


/* Void SuppressShortcutKeys() */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_SuppressShortcutKeys(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper__InputSuppression);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVInputWrapper__InputSuppression;
  value = (MVInputWrapper_InputSuppression *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (*(code *)(value->klass->vtable).set_IsSuppressed.method)(value,1,value->klass[1]._0.image);
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed = value;
  func_?(&TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed);
  return;
}


/* MVInputWrapper() */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier = 1.0;
  if (bVar1) {
    func_?(&TypeInfo__MVInputWrapper__InputSuppression);
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVInputWrapper__InputSuppression;
  pMVar3 = (MVInputWrapper_InputSuppression *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pMVar3,ExceptionArgument__Enum_obj,(MethodInfo *)pMVar2);
  (*(code *)(pMVar3->klass->vtable).set_IsSuppressed.method)(pMVar3,0,pMVar3->klass[1]._0.image);
  TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed = pMVar3;
  func_?(&TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed,pMVar3);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVInputWrapper__InputSuppression;
  pMVar3 = (MVInputWrapper_InputSuppression *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pMVar3,ExceptionArgument__Enum_obj,(MethodInfo *)pMVar2);
  (*(code *)(pMVar3->klass->vtable).set_IsSuppressed.method)(pMVar3,0,pMVar3->klass[1]._0.image);
  TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed = pMVar3;
  func_?(&TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed,pMVar3);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVInputWrapper__InputSuppression;
  pMVar3 = (MVInputWrapper_InputSuppression *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)pMVar3,ExceptionArgument__Enum_obj,(MethodInfo *)pMVar2);
  (*(code *)(pMVar3->klass->vtable).set_IsSuppressed.method)(pMVar3);
  TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed = pMVar3;
  func_?(&TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed,pMVar3);
  return;
}


/* Boolean get_IsAllInputSuppressed() */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_get_IsAllInputSuppressed
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pMVar1 = TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed;
  if (pMVar1 != (MVInputWrapper_InputSuppression *)0x0) {
    pMStack_2 = pMVar1;
    bVar3 = (*(code *)(pMVar1->klass->vtable).get_IsSuppressed.method)();
    return bVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* Boolean get_IsInGameInputSuppressed() */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_get_IsInGameInputSuppressed
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pMVar1 = TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed;
  if (pMVar1 != (MVInputWrapper_InputSuppression *)0x0) {
    pMStack_2 = pMVar1;
    cVar3 = (*(code *)(pMVar1->klass->vtable).get_IsSuppressed.method)();
    if (cVar3 != '\0') {
      return 1;
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
    return bVar4;
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  bVar4 = (*pcVar7)();
  return bVar4;
}


/* Boolean get_IsShortcutKeysSuppressed() */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_get_IsShortcutKeysSuppressed
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pMVar1 = TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed;
  if (pMVar1 != (MVInputWrapper_InputSuppression *)0x0) {
    pMStack_2 = pMVar1;
    cVar3 = (*(code *)(pMVar1->klass->vtable).get_IsSuppressed.method)();
    if (cVar3 != '\0') {
      return 1;
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar4 = MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
    return bVar4;
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  bVar4 = (*pcVar7)();
  return bVar4;
}


/* Single get_MouseSensitivityModifier() */

float Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_get_MouseSensitivityModifier
                (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  return TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier;
}


/* Void set_MouseSensitivityModifier(Single) */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_set_MouseSensitivityModifier
               (float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier = value;
  return;
}

