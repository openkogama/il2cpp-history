
/* Void Initialize(Notification, NotificationLifetime, Boolean) */

void Assembly-CSharp.dll::TertiaryNotificationUI::TertiaryNotificationUI_Initialize
               (TertiaryNotificationUI *this,Notification *n,NotificationLifetime__Enum l,
               bool usesIcon,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__UI__LayoutRebuilder);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).notification = n;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).notification >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).lifetime = l;
  pIVar6 = (this->fields).icon;
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
  if (pIVar6 != (Image *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((void *)(pIVar6->fields)._._._._._._._ != (void *)0x0) {
      pIVar6 = (this->fields).icon;
      if ((pIVar6 == (Image *)0x0) ||
         (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pIVar6,(MethodInfo *)0x0), this_00 == (GameObject *)0x0)
         ) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,usesIcon,(MethodInfo *)0x0);
    }
  }
  pCVar7 = (CanvasGroup *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__CanvasGroup_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::CanvasGroup>__
                     );
  bVar1 = iRam_? != 0;
  (this->fields).canvasGroup = pCVar7;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).canvasGroup >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pCVar7 = (this->fields).canvasGroup;
  if ((pCVar7 != (CanvasGroup *)0x0) &&
     (UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar7,0.0,(MethodInfo *)0x0), n != (Notification *)0x0)) {
    layoutRoot = (RectTransform *)
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                           ((Component *)n,
                            UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                           );
    if (*(int *)&(TypeInfo__UnityEngine__UI__LayoutRebuilder->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::UI::LayoutRebuilder::
    LayoutRebuilder_ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__TertiaryNotificationUI___NotificationAnimation_d__7);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    lVar8 = FUN_?(TypeInfo__TertiaryNotificationUI___NotificationAnimation_d__7);
    bVar1 = iRam_? != 0;
    *(undefined4 *)(lVar8 + 0x10) = 0;
    *(TertiaryNotificationUI **)(lVar8 + 0x20) = this;
    if (bVar1) {
      uVar2 = (uint)(lVar8 + 0x20U >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    if (lVar8 == 0) {
      uVar9 = func_?(&TypeInfo__System__NullReferenceException,0,0,0,unaff_RSI);
      this_01 = (NullReferenceException *)func_?(uVar9);
      pSVar10 = (String *)func_?(&StringLiteral_routine_is_null);
      mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                (this_01,pSVar10,(MethodInfo *)0x0);
      uVar9 = func_?(&
                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                 );
      FUN_?(this_01,uVar9);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
    if (bVar12 == 0) {
      uVar9 = func_?(&TypeInfo__System__ArgumentException);
      this_02 = (InvalidEnumArgumentException *)func_?(uVar9);
      pSVar10 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(this_02,pSVar10,(MethodInfo *)0x0);
      uVar9 = func_?(&
                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                 );
      FUN_?(this_02,uVar9);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this == (TertiaryNotificationUI *)0x0) {
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pvVar13 = (this->fields)._._._._.m_CachedPtr;
    if (pvVar13 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pcRam_? = pcVar11;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar13,lVar8);
    return;
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* IEnumerator NotificationAnimation() */

IEnumerator *
Assembly-CSharp.dll::TertiaryNotificationUI::TertiaryNotificationUI_NotificationAnimation
          (TertiaryNotificationUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__TertiaryNotificationUI___NotificationAnimation_d__7);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__TertiaryNotificationUI___NotificationAnimation_d__7);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::TertiaryNotificationUI::TertiaryNotificationUI_OnDisable
               (TertiaryNotificationUI *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).notification;
  if (this_00 == (Notification *)0x0) {
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

