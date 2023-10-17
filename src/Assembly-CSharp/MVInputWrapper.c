
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
      uVar4 = 0;
      uVar5 = (pIVar2->klass->_1).interface_offsets_count;
      if (uVar5 != 0) {
        do {
          if (pIVar2->klass->interfaceOffsets[uVar4].interfaceType ==
              (Il2CppClass *)TypeInfo__IKogamaInputMap) {
            pIVar6 = &pIVar2->klass->vtable + pIVar2->klass->interfaceOffsets[uVar4].offset;
            goto code_?;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      pIVar6 = (IKogamaInputMap__VTable *)func_?(pIVar2,TypeInfo__IKogamaInputMap,0);
code_?:
      bVar1 = (*(pIVar6->GetBooleanControl).methodPtr)
                        (pIVar2,control,keyState,(pIVar6->GetBooleanControl).method);
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


/* Boolean InputCharActive(KeyCode) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_InputCharActive
               (KeyCode__Enum key,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  bVar1 = (*pcRam_?)(key);
  return bVar1;
}


/* Boolean InputCharActiveDown(KeyCode) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_InputCharActiveDown
               (KeyCode__Enum key,MethodInfo *method)

{
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?(&UNK_?);
  }
  bVar1 = (*pcRam_?)(key);
  return bVar1;
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
    if (((pIVar1->klass->_1).typeHierarchyDepth <
         (TypeInfo__DesktopDefaultKeyboardMapping->_1).typeHierarchyDepth) ||
       ((pIVar1->klass->_1).typeHierarchy
        [(TypeInfo__DesktopDefaultKeyboardMapping->_1).typeHierarchyDepth - 1] !=
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  pMVar1 = MVInputWrapper+InputSuppression::MVInputWrapper_InputSuppression_op_Implicit
                     (1,(MethodInfo *)0x0);
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed = pMVar1;
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
  pMVar1 = MVInputWrapper+InputSuppression::MVInputWrapper_InputSuppression_op_Implicit
                     (1,(MethodInfo *)0x0);
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed = pMVar1;
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
  pMVar1 = MVInputWrapper+InputSuppression::MVInputWrapper_InputSuppression_op_Implicit
                     (1,(MethodInfo *)0x0);
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed = pMVar1;
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
  TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier = 1.0;
  pMVar1 = MVInputWrapper+InputSuppression::MVInputWrapper_InputSuppression_op_Implicit
                     (0,(MethodInfo *)0x0);
  TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed = pMVar1;
  func_?(&TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed,pMVar1);
  pMVar1 = MVInputWrapper+InputSuppression::MVInputWrapper_InputSuppression_op_Implicit
                     (0,(MethodInfo *)0x0);
  TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed = pMVar1;
  func_?(&TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed,pMVar1);
  pMVar1 = MVInputWrapper+InputSuppression::MVInputWrapper_InputSuppression_op_Implicit
                     (0,(MethodInfo *)0x0);
  TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed = pMVar1;
  func_?(&TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed,pMVar1);
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
    bVar3 = (*(pMVar1->klass->vtable).get_IsSuppressed.methodPtr)();
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
    cVar3 = (*(pMVar1->klass->vtable).get_IsSuppressed.methodPtr)();
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
    cVar3 = (*(pMVar1->klass->vtable).get_IsSuppressed.methodPtr)();
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

