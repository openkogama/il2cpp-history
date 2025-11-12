
/* Void Awake() */

void Assembly-CSharp.dll::GameMeterShake::GameMeterShake_Awake
               (GameMeterShake *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__RectTransform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  pTVar2 = (Transform *)0x0;
  if ((pTVar1 != (Transform *)0x0) &&
     (pTVar1->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform)) {
    pTVar2 = pTVar1;
  }
  bVar3 = iRam_? != 0;
  (this->fields).rectTransform = (RectTransform *)pTVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).rectTransform >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  this_00 = (this->fields).rectTransform;
  if (this_00 == (RectTransform *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  VVar9 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_anchoredPosition
                    (this_00,(MethodInfo *)0x0);
  fStackX_8 = VVar9.x;
  fStackX_c = VVar9.y;
  (this->fields).startPos.x = fStackX_8;
  (this->fields).startPos.y = fStackX_c;
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GameMeterShake::GameMeterShake_OnDisable
               (GameMeterShake *this,MethodInfo *method)

{
  if ((this->fields).shakeCoroutine == (IEnumerator *)0x0) {
    return;
  }
  pIVar1 = (this->fields).shakeCoroutine;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Coroutines);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = TypeInfo__Coroutines->static_fields->instance;
  if (obj == (Coroutines *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (pIVar1 == (IEnumerator *)0x0) {
    uVar3 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar3);
    pSVar4 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar4,(MethodInfo *)0x0);
    uVar3 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StopCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)obj,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    uVar3 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar3);
    pSVar4 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar4,(MethodInfo *)0x0);
    uVar3 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StopCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
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
  if (obj == (Coroutines *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar6 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar6,pIVar1);
  return;
}


/* IEnumerator ShakeAnimation() */

IEnumerator *
Assembly-CSharp.dll::GameMeterShake::GameMeterShake_ShakeAnimation
          (GameMeterShake *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameMeterShake___ShakeAnimation_d__5);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__GameMeterShake___ShakeAnimation_d__5);
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


/* Void StartShake() */

void Assembly-CSharp.dll::GameMeterShake::GameMeterShake_StartShake
               (GameMeterShake *this,MethodInfo *method)

{
  if ((this->fields).shakeCoroutine != (IEnumerator *)0x0) {
    pIVar1 = (this->fields).shakeCoroutine;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Coroutines);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
    if (this_00 == (MonoBehaviour *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              (this_00,pIVar1,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GameMeterShake___ShakeAnimation_d__5);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__GameMeterShake___ShakeAnimation_d__5);
  iVar2 = iRam_?;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).shakeCoroutine = pIVar1;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).shakeCoroutine >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (ulonglong)(uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pIVar1 = (this->fields).shakeCoroutine;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Coroutines);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = TypeInfo__Coroutines->static_fields->instance;
  if (obj != (Coroutines *)0x0) {
    if (pIVar1 == (IEnumerator *)0x0) {
      uVar8 = func_?(&TypeInfo__System__NullReferenceException);
      this_01 = (NullReferenceException *)func_?(uVar8);
      pSVar9 = (String *)func_?(&StringLiteral_routine_is_null);
      mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                (this_01,pSVar9,(MethodInfo *)0x0);
      uVar8 = func_?(&
                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                 );
      FUN_?(this_01,uVar8);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    bVar11 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)obj,(MethodInfo *)0x0);
    if (bVar11 == 0) {
      uVar8 = func_?(&TypeInfo__System__ArgumentException);
      this_02 = (InvalidEnumArgumentException *)func_?(uVar8);
      pSVar9 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(this_02,pSVar9,(MethodInfo *)0x0);
      uVar8 = func_?(&
                                  MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                 );
      FUN_?(this_02,uVar8);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
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
    if (obj == (Coroutines *)0x0) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pvVar12 = (obj->fields)._._._._.m_CachedPtr;
    if (pvVar12 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcVar10 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pcRam_? = pcVar10;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar12,pIVar1);
    return;
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}

