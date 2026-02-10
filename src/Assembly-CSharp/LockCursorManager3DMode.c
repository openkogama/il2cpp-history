
/* Void LockCursor() */

void Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_LockCursor
               (LockCursorManager3DMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Really_trying_to_lock_cursor);
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
  iVar3 = (*pcRam_?)();
  if (iVar3 == 1) {
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
  (*pcRam_?)(1);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar4 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar4 == (IPlayModeUI *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar5 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
  uVar6 = 0;
  pIVar7 = pIVar4->klass;
  uVar8._0_1_ = (pIVar7->_1).rank;
  uVar8._1_1_ = (pIVar7->_1).minimumAlignment;
  if (uVar8 != 0) {
    pIVar5 = pIVar7->interfaceOffsets;
    do {
      if (pIVar5[uVar6].interfaceType == (Il2CppClass *)TypeInfo__IPlayModeUI) {
        pVVar9 = &(pIVar7->vtable).ShowEUseIcon + (pIVar5[uVar6].offset + 8);
        goto code_?;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  pVVar9 = (VirtualInvokeData *)FUN_?(pIVar4,TypeInfo__IPlayModeUI,8,pIVar5);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar9->methodPtr)(pIVar4,0,pVVar9->method,pVVar9->methodPtr);
  return;
}


/* Void LockCursorWithoutCallback() */

void Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_LockCursorWithoutCallback
               (LockCursorManager3DMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Really_trying_to_lock_cursor2);
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
  iVar3 = (*pcRam_?)();
  if (iVar3 == 1) {
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
  (*pcRam_?)(1);
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(0);
  return;
}


/* Void OnApplicationFocus(Boolean) */

void Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_OnApplicationFocus
               (LockCursorManager3DMode *this,bool focus,MethodInfo *method)

{
  if (focus != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI,0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Really_trying_to_unlock_cursor);
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
  iVar3 = (*pcRam_?)();
  if (iVar3 != 1) {
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
  (*pcRam_?)(0);
  pcVar1 = pcRam_?;
  if (pcRam_? == (code *)0x0) {
    pcVar1 = (code *)FUN_?(&UNK_?);
    if (pcVar1 == (code *)0x0) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(1);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar4 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar4 == (IPlayModeUI *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar5 = (Il2CppRuntimeInterfaceOffsetPair *)0x1;
  uVar6 = 0;
  pIVar7 = pIVar4->klass;
  uVar8._0_1_ = (pIVar7->_1).rank;
  uVar8._1_1_ = (pIVar7->_1).minimumAlignment;
  if (uVar8 != 0) {
    pIVar5 = pIVar7->interfaceOffsets;
    do {
      if (pIVar5[uVar6].interfaceType == (Il2CppClass *)TypeInfo__IPlayModeUI) {
        pVVar9 = &(pIVar7->vtable).ShowEUseIcon + (pIVar5[uVar6].offset + 8);
        goto code_?;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  pVVar9 = (VirtualInvokeData *)FUN_?(pIVar4,TypeInfo__IPlayModeUI,8,pIVar5);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar9->methodPtr)(pIVar4,1,pVVar9->method,pVVar9->methodPtr);
  return;
}


/* Void UnlockCursor() */

void Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_UnlockCursor
               (LockCursorManager3DMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Really_trying_to_unlock_cursor);
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
  iVar3 = (*pcRam_?)();
  if (iVar3 != 1) {
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
  (*pcRam_?)(0);
  pcVar1 = pcRam_?;
  if (pcRam_? == (code *)0x0) {
    pcVar1 = (code *)FUN_?(&UNK_?);
    if (pcVar1 == (code *)0x0) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(1);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar4 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if (pIVar4 == (IPlayModeUI *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar5 = (Il2CppRuntimeInterfaceOffsetPair *)0x1;
  uVar6 = 0;
  pIVar7 = pIVar4->klass;
  uVar8._0_1_ = (pIVar7->_1).rank;
  uVar8._1_1_ = (pIVar7->_1).minimumAlignment;
  if (uVar8 != 0) {
    pIVar5 = pIVar7->interfaceOffsets;
    do {
      if (pIVar5[uVar6].interfaceType == (Il2CppClass *)TypeInfo__IPlayModeUI) {
        pVVar9 = &(pIVar7->vtable).ShowEUseIcon + (pIVar5[uVar6].offset + 8);
        goto code_?;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar8);
  }
  pVVar9 = (VirtualInvokeData *)FUN_?(pIVar4,TypeInfo__IPlayModeUI,8,pIVar5);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar9->methodPtr)(pIVar4,1,pVVar9->method,pVVar9->methodPtr);
  return;
}


/* Void UnlockCursorWithoutCallback() */

void Assembly-CSharp.dll::LockCursorManager3DMode::
     LockCursorManager3DMode_UnlockCursorWithoutCallback
               (LockCursorManager3DMode *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Really_trying_to_unlock_cursor2);
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
  iVar3 = (*pcRam_?)();
  if (iVar3 != 1) {
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
  (*pcRam_?)(0);
  pcVar1 = pcRam_?;
  if (pcRam_? == (code *)0x0) {
    pcVar1 = (code *)FUN_?(&UNK_?);
    if (pcVar1 == (code *)0x0) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(1);
  return;
}


/* Boolean get_CursorLock() */

bool Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_get_CursorLock
               (LockCursorManager3DMode *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    bVar3 = (*pcVar1)();
    return bVar3;
  }
  pcRam_? = pcVar1;
  iVar4 = (*pcRam_?)();
  return iVar4 == 1;
}


/* Void set_CursorLock(Boolean) */

void Assembly-CSharp.dll::LockCursorManager3DMode::LockCursorManager3DMode_set_CursorLock
               (LockCursorManager3DMode *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Cursor_locked__);
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
  if (value == 0) {
    mscorlib.dll::System::String::String_Concat_4
              (StringLiteral_Cursor_locked__,StringLiteral_False,(MethodInfo *)0x0);
    LockCursorManager3DMode_UnlockCursor(this,(MethodInfo *)0x0);
  }
  else {
    mscorlib.dll::System::String::String_Concat_4
              (StringLiteral_Cursor_locked__,StringLiteral_True,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__IPlayModeUI);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Really_trying_to_lock_cursor);
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
    iVar3 = (*pcRam_?)();
    if (iVar3 != 1) {
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
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar4 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      if (pIVar4 == (IPlayModeUI *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pIVar5 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
      uVar6 = 0;
      pIVar7 = pIVar4->klass;
      uVar8._0_1_ = (pIVar7->_1).rank;
      uVar8._1_1_ = (pIVar7->_1).minimumAlignment;
      if (uVar8 != 0) {
        pIVar5 = pIVar7->interfaceOffsets;
        do {
          if (pIVar5[uVar6].interfaceType == (Il2CppClass *)TypeInfo__IPlayModeUI) {
            pVVar9 = &(pIVar7->vtable).ShowEUseIcon + (pIVar5[uVar6].offset + 8);
            goto code_?;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar8);
      }
      pVVar9 = (VirtualInvokeData *)FUN_?(pIVar4,TypeInfo__IPlayModeUI,8,pIVar5,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar9->methodPtr)(pIVar4,0,pVVar9->method,pVVar9->methodPtr);
      return;
    }
  }
  return;
}


/* Void set_CursorLockWithoutCallback(Boolean) */

void Assembly-CSharp.dll::LockCursorManager3DMode::
     LockCursorManager3DMode_set_CursorLockWithoutCallback
               (LockCursorManager3DMode *this,bool value,MethodInfo *method)

{
  if (value == 0) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_Really_trying_to_unlock_cursor2);
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
    iVar3 = (*pcRam_?)();
    if (iVar3 == 1) {
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
      pcVar1 = pcRam_?;
      if (pcRam_? == (code *)0x0) {
        pcVar1 = (code *)FUN_?(&UNK_?);
        if (pcVar1 == (code *)0x0) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(1);
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_Really_trying_to_lock_cursor2);
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
    iVar3 = (*pcRam_?)();
    if (iVar3 != 1) {
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(0);
      return;
    }
  }
  return;
}

