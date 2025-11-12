
/* Void DestroyMessage() */

void Assembly-CSharp.dll::FirstTimeActivatableMessage::FirstTimeActivatableMessage_DestroyMessage
               (FirstTimeActivatableMessage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).firstTimeEventMessage;
  if (this_00 == (FirstTimeEventMessage *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar3 = (void *)0x0;
  if (pGVar2 != (GameObject *)0x0) {
    pvVar3 = (pGVar2->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,0);
  return;
}


/* Void DoDisabled() */

void Assembly-CSharp.dll::FirstTimeActivatableMessage::FirstTimeActivatableMessage_DoDisabled
               (FirstTimeActivatableMessage *this,MethodInfo *method)

{
  pFVar1 = (this->fields).firstTimeEventMessage;
  if (pFVar1 == (FirstTimeEventMessage *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
            ((Component *)pFVar1,(MethodInfo *)0x0);
  FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
            ((this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).firstTimeEventMessage;
  if (pFVar1 == (FirstTimeEventMessage *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)pFVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar4 = (void *)0x0;
  if (pGVar3 != (GameObject *)0x0) {
    pvVar4 = (pGVar3->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar4,0);
  return;
}


/* Void FadeOut() */

void Assembly-CSharp.dll::FirstTimeActivatableMessage::FirstTimeActivatableMessage_FadeOut
               (FirstTimeActivatableMessage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstTimeActivatableMessage__OnFinished_UnityEngine__GameObject_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (this->fields).firstTimeEventMessage;
  this_02 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::GameObject>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_02,(Object *)this,
             MethodInfo__FirstTimeActivatableMessage__OnFinished_UnityEngine__GameObject_,
             (MethodInfo *)0x0);
  if (this_01 != (FirstTimeEventMessage *)0x0) {
    pFVar1 = (this_01->fields).fader;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_01,(MethodInfo *)0x0);
    if (pFVar1 != (FirstTimeFadeHandler *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__Action<UnityEngine::GameObject>,this_02,pGVar2,0,unaff_RDI
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (pFVar1->fields).canvasGroup;
      (pFVar1->fields).currentFadeOutTime = (pFVar1->fields).fadeOutTime;
      (pFVar1->fields).fadingOut = 1;
      if (this_00 == (CanvasGroup *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,_UNK_?,(MethodInfo *)0x0);
      pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)(pFVar1->fields).finishedAction,(Delegate *)this_02,
                          (MethodInfo *)0x0);
      pAVar5 = TypeInfo__System__Action<UnityEngine::GameObject>;
      if (pDVar4 == (Delegate *)0x0) {
        (pFVar1->fields).finishedAction = (Action_1_UnityEngine_GameObject_ *)0x0;
      }
      else {
        pAVar6 = (Action_1_UnityEngine_GameObject_ *)
                 FUN_?(pDVar4,TypeInfo__System__Action<UnityEngine::GameObject>);
        if (pAVar6 == (Action_1_UnityEngine_GameObject_ *)0x0) {
          FUN_?(pDVar4,pAVar5);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (pFVar1->fields).finishedAction = pAVar6;
        pAVar5 = TypeInfo__System__Action<UnityEngine::GameObject>;
        lVar7 = FUN_?(pDVar4,TypeInfo__System__Action<UnityEngine::GameObject>);
        if (lVar7 == 0) {
          FUN_?(pDVar4,pAVar5);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(pFVar1->fields).finishedAction >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      iVar13 = iRam_?;
      (pFVar1->fields).targetGameObject = pGVar2;
      if (iVar13 != 0) {
        uVar8 = (uint)((ulonglong)&(pFVar1->fields).targetGameObject >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnFinished(GameObject) */

void Assembly-CSharp.dll::FirstTimeActivatableMessage::FirstTimeActivatableMessage_OnFinished
               (FirstTimeActivatableMessage *this,GameObject *firstTimeEventMessage,
               MethodInfo *method)

{
  FirstTimeEventManager::FirstTimeEventManager_SetFirstTimeEvent
            ((this->fields)._._.firstTimeEvent,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).firstTimeEventMessage;
  if (this_00 == (FirstTimeEventMessage *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this_00,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar3 = (void *)0x0;
  if (pGVar2 != (GameObject *)0x0) {
    pvVar3 = (pGVar2->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,0);
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeActivatableMessage::FirstTimeActivatableMessage_OnShow
               (FirstTimeActivatableMessage *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  FirstTimeEventMessage_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventMessage>_FirstTimeEventMessage_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_firstTimeMessageParentTransform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).firstTimeEventMessagePrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pFVar1 = (FirstTimeEventMessage *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pFVar1,
                      FirstTimeEventMessage_MethodInfo__UnityEngine__Object__Instantiate<FirstTimeEventMessage>_FirstTimeEventMessage_
                     );
  bVar2 = iRam_? != 0;
  (this->fields).firstTimeEventMessage = pFVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).firstTimeEventMessage >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pTVar7 = (this->fields).firstTimeMessageParentTransform;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar7 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar7->fields)._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_firstTimeMessageParentTransform_,(MethodInfo *)0x0);
  pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).firstTimeMessageParentTransform = pTVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).firstTimeMessageParentTransform >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
code_?:
  pFVar1 = (this->fields).firstTimeEventMessage;
  if ((pFVar1 != (FirstTimeEventMessage *)0x0) &&
     (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pFVar1,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar7,(this->fields).firstTimeMessageParentTransform,0,(MethodInfo *)0x0);
    pFVar1 = (this->fields).firstTimeEventMessage;
    if ((pFVar1 != (FirstTimeEventMessage *)0x0) &&
       (pFVar8 = (pFVar1->fields).fader, pFVar8 != (FirstTimeFadeHandler *)0x0)) {
      this_00 = (pFVar8->fields).canvasGroup;
      (pFVar8->fields).fadingIn = 1;
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        (pFVar8->fields).currentFadeInTime = 0.0;
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean get_CanShow() */

bool Assembly-CSharp.dll::FirstTimeActivatableMessage::FirstTimeActivatableMessage_get_CanShow
               (FirstTimeActivatableMessage *this,MethodInfo *method)

{
  bVar1 = FirstTimeActivatableElementBase::FirstTimeActivatableElementBase_get_IsBlocked
                    ((FirstTimeActivatableElementBase *)this,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    return 0;
  }
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar1 = (*pcVar2)();
    return bVar1;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar1 = (*pcVar2)();
    return bVar1;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    bVar1 = (*pcVar2)();
    return bVar1;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0,in_R8,in_R9,unaff_RBX);
    pcVar2 = (code *)swi(3);
    bVar1 = (*pcVar2)();
    return bVar1;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*pcRam_?)(pvVar3);
  return bVar1;
}

