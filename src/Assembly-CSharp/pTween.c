
/* IEnumerator RealtimeTo(Single, Single, Single, Action`1[Single]) */

IEnumerator *
Assembly-CSharp.dll::pTween::pTween_RealtimeTo
          (float duration,float startValue,float endValue,Action_1_Single_ *callback,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__pTween___RealtimeTo_d__1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__pTween___RealtimeTo_d__1);
  bVar2 = iRam_? != 0;
  *(float *)&pIVar1[2].klass = duration;
  *(float *)&pIVar1[3].klass = startValue;
  *(float *)((longlong)&pIVar1[3].klass + 4) = endValue;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].monitor = (MonitorData *)callback;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&pIVar1[2].monitor >> 0xc);
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
  return pIVar1;
}


/* IEnumerator To(Single, Single, Single, Action`1[Single]) */

IEnumerator *
Assembly-CSharp.dll::pTween::pTween_To
          (float duration,float startValue,float endValue,Action_1_Single_ *callback,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__pTween___To_d__0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__pTween___To_d__0);
  bVar2 = iRam_? != 0;
  *(float *)&pIVar1[2].klass = duration;
  *(float *)&pIVar1[3].klass = startValue;
  *(float *)((longlong)&pIVar1[3].klass + 4) = endValue;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].monitor = (MonitorData *)callback;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&pIVar1[2].monitor >> 0xc);
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
  return pIVar1;
}


/* IEnumerator To(Single, Action`1[Single]) */

IEnumerator *
Assembly-CSharp.dll::pTween::pTween_To_1
          (float duration,Action_1_Single_ *callback,MethodInfo *method)

{
  pIVar1 = pTween_To(duration,0.0,_UNK_?,callback,(MethodInfo *)0x0);
  return pIVar1;
}


/* Void WorkerTo(Single, Single, Single, Action`1[Single]) */

void Assembly-CSharp.dll::pTween::pTween_WorkerTo
               (float duration,float startValue,float endValue,Action_1_Single_ *callback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&Worker_MethodInfo__UnityEngine__GameObject__AddComponent<Worker>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  self = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_Internal_CreateGameObject
            (self,(String *)0x0,(MethodInfo *)0x0);
  if ((self == (GameObject *)0x0) ||
     (obj = (Object_1 *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                      (self,Worker_MethodInfo__UnityEngine__GameObject__AddComponent<Worker>__),
     obj == (Object_1 *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Worker___DoTo_d__1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar2 = FUN_?(TypeInfo__Worker___DoTo_d__1);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(Object_1 **)(lVar2 + 0x20) = obj;
  if (iRam_? != 0) {
    uVar3 = (uint)(lVar2 + 0x20U >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  iVar8 = iRam_?;
  *(float *)(lVar2 + 0x28) = duration;
  *(float *)(lVar2 + 0x2c) = startValue;
  *(float *)(lVar2 + 0x30) = endValue;
  *(Action_1_Single_ **)(lVar2 + 0x38) = callback;
  if (iVar8 != 0) {
    uVar3 = (uint)(lVar2 + 0x38U >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  if (lVar2 == 0) {
    uVar9 = func_?(&TypeInfo__System__NullReferenceException);
    this = (NullReferenceException *)func_?(uVar9);
    pSVar10 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this,pSVar10,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this,uVar9);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour(obj,(MethodInfo *)0x0);
  if (bVar11 == 0) {
    uVar9 = func_?(&TypeInfo__System__ArgumentException);
    this_00 = (InvalidEnumArgumentException *)func_?(uVar9);
    pSVar10 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_00,pSVar10,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar9);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
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
  if (obj == (Object_1 *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar12 = (obj->fields).m_CachedPtr;
  if (pvVar12 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar12,lVar2);
  return;
}


/* Void WorkerTo(Single, Action`1[Single]) */

void Assembly-CSharp.dll::pTween::pTween_WorkerTo_1
               (float duration,Action_1_Single_ *callback,MethodInfo *method)

{
  pTween_WorkerTo(duration,0.0,_UNK_?,callback,(MethodInfo *)0x0);
  return;
}

