
/* Void FadeIn() */

void Assembly-CSharp.dll::FirstTimeEventPopup::FirstTimeEventPopup_FadeIn
               (FirstTimeEventPopup *this,MethodInfo *method)

{
  pFVar1 = (this->fields).fader;
  if (pFVar1 != (FirstTimeFadeHandler *)0x0) {
    this_00 = (pFVar1->fields).canvasGroup;
    (pFVar1->fields).fadingIn = 1;
    if (this_00 != (CanvasGroup *)0x0) {
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (this_00,0.0,(MethodInfo *)0x0);
      (pFVar1->fields).currentFadeInTime = 0.0;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void PopSelf(GameObject) */

void Assembly-CSharp.dll::FirstTimeEventPopup::FirstTimeEventPopup_PopSelf
               (FirstTimeEventPopup *this,GameObject *popupGameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeEventPopup____c__DisplayClass5_0___PopSelf_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeEventPopup____c__DisplayClass5_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__FirstTimeEventPopup____c__DisplayClass5_0);
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  object[1].klass = (Object__Class *)popupGameObject;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__FirstTimeEventPopup____c__DisplayClass5_0___PopSelf_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar8 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar8);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar7,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar10 = (longlong)(pLVar9->fields)._size;
    uVar3 = 0;
    if (0 < lVar10) {
      lVar11 = 0;
      lVar12 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar9->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pTVar13 = (pLVar9->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar3) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar12 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar7,(BaseEventData *)0x0,this_01,
                           (pMVar8->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 8;
      } while (lVar11 < lVar10);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetSkippable(Boolean) */

void Assembly-CSharp.dll::FirstTimeEventPopup::FirstTimeEventPopup_SetSkippable
               (FirstTimeEventPopup *this,bool skipAllowed,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).skipButton;
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pBVar1 != (Button *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pBVar1->fields)._._._._._._.m_CachedPtr != (void *)0x0) {
      pBVar1 = (this->fields).skipButton;
      if ((pBVar1 != (Button *)0x0) &&
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pBVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,skipAllowed,(MethodInfo *)0x0);
        return;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void StartFade(Action`1[UnityEngine.GameObject]) */

void Assembly-CSharp.dll::FirstTimeEventPopup::FirstTimeEventPopup_StartFade
               (FirstTimeEventPopup *this,Action_1_UnityEngine_GameObject_ *finishedAction,
               MethodInfo *method)

{
  pFVar1 = (this->fields).fader;
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pFVar1 == (FirstTimeFadeHandler *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::GameObject>,finishedAction,pGVar2,0,
                  unaff_RDI);
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
                     ((Delegate *)(pFVar1->fields).finishedAction,(Delegate *)finishedAction,
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


/* Void StartFadeWithSelfPop() */

void Assembly-CSharp.dll::FirstTimeEventPopup::FirstTimeEventPopup_StartFadeWithSelfPop
               (FirstTimeEventPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__FirstTimeEventPopup__PopSelf_UnityEngine__GameObject_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).fader;
  this_01 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<UnityEngine::GameObject>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__FirstTimeEventPopup__PopSelf_UnityEngine__GameObject_,(MethodInfo *)0x0);
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pFVar1 == (FirstTimeFadeHandler *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::GameObject>,this_01,pGVar2,0,unaff_RDI);
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
                     ((Delegate *)(pFVar1->fields).finishedAction,(Delegate *)this_01,
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

