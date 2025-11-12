
/* Single GetAxis(String) */

float Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetAxis(String *axis,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
                 field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
                 field_0x1c == 0) {
      FUN_?();
    }
    fVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
            CrossPlatformInputManager_GetAxis_1(axis,0,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar3 = (float)FUN_?();
    return fVar3 * fVar2;
  }
  return 0.0;
}


/* Single GetAxisRaw(String) */

float Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetAxisRaw
                (String *axis,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager,
                  (char)method);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
                 field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
                 field_0x1c == 0) {
      FUN_?();
    }
    fVar2 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager::
            CrossPlatformInputManager_GetAxis_1(axis,1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar3 = (float)FUN_?();
    return fVar3 * fVar2;
  }
  return 0.0;
}


/* Single GetAxisRawWithoutSensitivity(String) */

float Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                (String *axis,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 0.0;
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager,1,0)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar2 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar3 = (float)(*(pVVar2->klass->vtable).__unknown.methodPtr)
                             (pVVar2,axis,1,(pVVar2->klass->vtable).__unknown.method);
    return fVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar3 = (float)(*pcVar4)();
  return fVar3;
}


/* Single GetAxisWithoutSensitivity(String) */

float Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                (String *axis,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper_get_IsInGameInputSuppressed((MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 0.0;
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager,0,0)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->_1).
               field_0x1c == 0) {
    FUN_?(TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager);
  }
  pVVar2 = TypeInfo__UnityStandardAssets__CrossPlatformInput__CrossPlatformInputManager->
           static_fields->activeInput;
  if (pVVar2 != (VirtualInput *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar3 = (float)(*(pVVar2->klass->vtable).__unknown.methodPtr)
                             (pVVar2,axis,0,(pVVar2->klass->vtable).__unknown.method);
    return fVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar3 = (float)(*pcVar4)();
  return fVar3;
}


/* Boolean GetBooleanControl(KogamaControls) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetBooleanControl
               (KogamaControls__Enum control,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IKogamaInputMap,2,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
  if ((bVar1 == 0) || (control - KogamaControls__Enum_PointerSelect < 2)) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TypeInfo__MVInputWrapper->static_fields->inputMap != (IKogamaInputMap *)0x0) {
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar2 = TypeInfo__MVInputWrapper->static_fields->inputMap;
      if (pIVar2 != (IKogamaInputMap *)0x0) {
        bVar1 = FUN_?(TypeInfo__MVInputWrapper,TypeInfo__IKogamaInputMap,pIVar2,control,2);
        return bVar1;
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar1 = (*pcVar3)();
      return bVar1;
    }
  }
  return 0;
}


/* Boolean GetBooleanControlDeviceDependent(KogamaControls) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetBooleanControlDeviceDependent
               (KogamaControls__Enum kogamaControls,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar1 = MVInputWrapper_GetBooleanControl_1(kogamaControls,KeyState__Enum_Down,(MethodInfo *)0x0)
    ;
    if (bVar1 != 0) {
      return 1;
    }
    return 0;
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper_GetBooleanControl_1(kogamaControls,KeyState__Enum_Up,(MethodInfo *)0x0);
  return bVar1 != 0;
}


/* Boolean GetBooleanControlDown(KogamaControls) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetBooleanControlDown
               (KogamaControls__Enum control,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IKogamaInputMap,1,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
  if ((bVar1 == 0) || (control - KogamaControls__Enum_PointerSelect < 2)) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TypeInfo__MVInputWrapper->static_fields->inputMap != (IKogamaInputMap *)0x0) {
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar2 = TypeInfo__MVInputWrapper->static_fields->inputMap;
      if (pIVar2 != (IKogamaInputMap *)0x0) {
        bVar1 = FUN_?(TypeInfo__MVInputWrapper,TypeInfo__IKogamaInputMap,pIVar2,control,1);
        return bVar1;
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar1 = (*pcVar3)();
      return bVar1;
    }
  }
  return 0;
}


/* Boolean GetBooleanControlUp(KogamaControls) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetBooleanControlUp
               (KogamaControls__Enum control,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IKogamaInputMap,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
  if ((bVar1 == 0) || (control - KogamaControls__Enum_PointerSelect < 2)) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TypeInfo__MVInputWrapper->static_fields->inputMap != (IKogamaInputMap *)0x0) {
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar2 = TypeInfo__MVInputWrapper->static_fields->inputMap;
      if (pIVar2 != (IKogamaInputMap *)0x0) {
        bVar1 = FUN_?(TypeInfo__MVInputWrapper,TypeInfo__IKogamaInputMap,pIVar2,control,0);
        return bVar1;
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar1 = (*pcVar3)();
      return bVar1;
    }
  }
  return 0;
}


/* Boolean GetBooleanControl(KogamaControls, KeyState) */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetBooleanControl_1
               (KogamaControls__Enum control,KeyState__Enum keyState,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IKogamaInputMap);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper_get_IsAllInputSuppressed((MethodInfo *)0x0);
  if ((bVar1 == 0) || (control - KogamaControls__Enum_PointerSelect < 2)) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (TypeInfo__MVInputWrapper->static_fields->inputMap != (IKogamaInputMap *)0x0) {
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar2 = TypeInfo__MVInputWrapper->static_fields->inputMap;
      if (pIVar2 != (IKogamaInputMap *)0x0) {
        bVar1 = FUN_?(TypeInfo__MVInputWrapper,TypeInfo__IKogamaInputMap,pIVar2,control,
                              keyState);
        return bVar1;
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      bVar1 = (*pcVar3)();
      return bVar1;
    }
  }
  return 0;
}


/* String GetStringInput() */

String * Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_GetStringInput(MethodInfo *method)

{
  pVStack_1 = (Void *)0x0;
  uStack_2._0_4_ = 0;
  uStack_2._4_4_ = 0;
  auStackX_10[0] = 0;
  uStack_3 = 0;
  ppVStack_4 = &pVStack_1;
  puStack_5 = auStackX_10;
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    FUN_?();
    pcVar6 = (code *)swi(3);
    pSVar8 = (String *)(*pcVar6)();
    return pSVar8;
  }
  pcRam_? = pcVar6;
  (*pcRam_?)(&pVStack_1);
  MStack_9.begin = pVStack_1;
  MStack_9.length = (int32_t)uStack_2;
  MStack_9._12_4_ = uStack_2._4_4_;
  pSVar8 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::OutStringMarshaller::
           OutStringMarshaller_GetStringAndDispose(&MStack_9,(MethodInfo *)0x0);
  return pSVar8;
}


/* Void ResetInput() */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_ResetInput(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DesktopDefaultKeyboardMapping);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
    return;
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  pIVar1 = TypeInfo__MVInputWrapper->static_fields->inputMap;
  if (pIVar1 != (IKogamaInputMap *)0x0) {
    bVar2 = (TypeInfo__DesktopDefaultKeyboardMapping->_1).naturalAligment;
    if (((pIVar1->klass->_1).naturalAligment < bVar2) ||
       ((pIVar1->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__DesktopDefaultKeyboardMapping)) {
      FUN_?(pIVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pIVar1[1].monitor != (MonitorData *)0x0) &&
       (lVar4 = *(longlong *)(pIVar1[1].monitor + 0x10), lVar4 != 0)) {
      uVar5 = 0;
      iVar6 = 0;
      if (0 < *(int *)(lVar4 + 0x18)) {
        iVar6 = *(int *)(lVar4 + 0x18) + -1;
        iVar6 = ((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) + 1;
      }
      if (0 < iVar6) {
        lVar7 = 0x20;
        uVar8 = uVar5;
        do {
          lVar9 = *(longlong *)(lVar4 + 0x10);
          if (lVar9 == 0) goto code_?;
          if (*(uint *)(lVar9 + 0x18) <= (uint)uVar5) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined4 *)(lVar7 + lVar9) = 0;
          uVar5 = (ulonglong)((uint)uVar5 + 1);
          lVar7 = lVar7 + 4;
          uVar8 = uVar8 + 1;
        } while ((longlong)uVar8 < (longlong)iVar6);
      }
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetInputMap(IKogamaInputMap) */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_SetInputMap
               (IKogamaInputMap *inputMap,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  TypeInfo__MVInputWrapper->static_fields->inputMap = inputMap;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->inputMap >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}


/* Void SuppressAllInput() */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_SuppressAllInput(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper__InputSuppression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVInputWrapper_InputSuppression *)
           FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
  (*(pMVar1->klass->vtable).set_IsSuppressed.methodPtr)
            (pMVar1,CONCAT71((int7)((ulonglong)in_RDX >> 8),1),
             (pMVar1->klass->vtable).set_IsSuppressed.method);
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed = pMVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed >> 0xc)
    ;
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Void SuppressInGameInput() */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_SuppressInGameInput(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper__InputSuppression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVInputWrapper_InputSuppression *)
           FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
  (*(pMVar1->klass->vtable).set_IsSuppressed.methodPtr)
            (pMVar1,CONCAT71((int7)((ulonglong)in_RDX >> 8),1),
             (pMVar1->klass->vtable).set_IsSuppressed.method);
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed = pMVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed >>
                  0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Void SuppressShortcutKeys() */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_SuppressShortcutKeys(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper__InputSuppression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVInputWrapper_InputSuppression *)
           FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
  (*(pMVar1->klass->vtable).set_IsSuppressed.methodPtr)
            (pMVar1,CONCAT71((int7)((ulonglong)in_RDX >> 8),1),
             (pMVar1->klass->vtable).set_IsSuppressed.method);
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed = pMVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed >>
                  0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* MVInputWrapper() */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier = 1.0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper__InputSuppression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVInputWrapper_InputSuppression *)
           FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
  (*(pMVar1->klass->vtable).set_IsSuppressed.methodPtr)
            (pMVar1,0,(pMVar1->klass->vtable).set_IsSuppressed.method);
  TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed = pMVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed >> 0xc)
    ;
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper__InputSuppression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVInputWrapper_InputSuppression *)
           FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
  (*(pMVar1->klass->vtable).set_IsSuppressed.methodPtr)
            (pMVar1,0,(pMVar1->klass->vtable).set_IsSuppressed.method);
  TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed = pMVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed >>
                  0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper__InputSuppression);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVInputWrapper_InputSuppression *)
           FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
  (*(pMVar1->klass->vtable).set_IsSuppressed.methodPtr)
            (pMVar1,0,(pMVar1->klass->vtable).set_IsSuppressed.method);
  TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed = pMVar1;
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed >>
                  0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* Boolean get_IsAllInputSuppressed() */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_get_IsAllInputSuppressed
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  pMVar1 = TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed;
  if (pMVar1 != (MVInputWrapper_InputSuppression *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pMVar1->klass->vtable).get_IsSuppressed.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable).get_IsSuppressed.method);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean get_IsInGameInputSuppressed() */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_get_IsInGameInputSuppressed
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  pMVar1 = TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed;
  if (pMVar1 == (MVInputWrapper_InputSuppression *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  cVar4 = (*(pMVar1->klass->vtable).get_IsSuppressed.methodPtr)
                    (pMVar1,(pMVar1->klass->vtable).get_IsSuppressed.method);
  if (cVar4 != '\0') {
    return 1;
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  pMVar1 = TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed;
  if (pMVar1 != (MVInputWrapper_InputSuppression *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar3 = (*(pMVar1->klass->vtable).get_IsSuppressed.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable).get_IsSuppressed.method);
    return bVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsShortcutKeysSuppressed() */

bool Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_get_IsShortcutKeysSuppressed
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  pMVar1 = TypeInfo__MVInputWrapper->static_fields->isShortcutKeysSuppressed;
  if (pMVar1 == (MVInputWrapper_InputSuppression *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  cVar4 = (*(pMVar1->klass->vtable).get_IsSuppressed.methodPtr)
                    (pMVar1,(pMVar1->klass->vtable).get_IsSuppressed.method);
  if (cVar4 != '\0') {
    return 1;
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  pMVar1 = TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed;
  if (pMVar1 != (MVInputWrapper_InputSuppression *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar3 = (*(pMVar1->klass->vtable).get_IsSuppressed.methodPtr)
                      (pMVar1,(pMVar1->klass->vtable).get_IsSuppressed.method);
    return bVar3;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Single get_MouseSensitivityModifier() */

float Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_get_MouseSensitivityModifier
                (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  return TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier;
}


/* Void set_MouseSensitivityModifier(Single) */

void Assembly-CSharp.dll::MVInputWrapper::MVInputWrapper_set_MouseSensitivityModifier
               (float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  TypeInfo__MVInputWrapper->static_fields->mouseSensitivtyModifier = value;
  return;
}

