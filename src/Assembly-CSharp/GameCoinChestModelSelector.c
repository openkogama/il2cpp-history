
/* Void Close() */

void Assembly-CSharp.dll::GameCoinChestModelSelector::GameCoinChestModelSelector_Close
               (GameCoinChestModelSelector *this,MethodInfo *method)

{
  pRVar1 = (this->fields).openMesh;
  if (pRVar1 != (Renderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              (pRVar1,0,(MethodInfo *)0x0);
    pRVar1 = (this->fields).closedMesh;
    if (pRVar1 != (Renderer *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                      ,1,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pRVar1 == (Renderer *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (pRVar1->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,1);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean IsVisible() */

bool Assembly-CSharp.dll::GameCoinChestModelSelector::GameCoinChestModelSelector_IsVisible
               (GameCoinChestModelSelector *this,MethodInfo *method)

{
  pRVar1 = (this->fields).openMesh;
  if (pRVar1 != (Renderer *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pRVar1->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      bVar4 = (*pcVar3)();
      return bVar4;
    }
    pcRam_? = pcVar3;
    cVar6 = (*pcRam_?)(pvVar2);
    if (cVar6 != '\0') {
      return 1;
    }
    pRVar1 = (this->fields).closedMesh;
    if (pRVar1 != (Renderer *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pRVar1 == (Renderer *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      pvVar2 = (pRVar1->fields)._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0,in_R8,in_R9,unaff_RBX);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
      pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar4 = (*pcRam_?)(pvVar2);
      return bVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void Open() */

void Assembly-CSharp.dll::GameCoinChestModelSelector::GameCoinChestModelSelector_Open
               (GameCoinChestModelSelector *this,MethodInfo *method)

{
  pRVar1 = (this->fields).openMesh;
  if (pRVar1 != (Renderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
              (pRVar1,1,(MethodInfo *)0x0);
    pRVar1 = (this->fields).closedMesh;
    if (pRVar1 != (Renderer *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pRVar1 == (Renderer *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (pRVar1->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

