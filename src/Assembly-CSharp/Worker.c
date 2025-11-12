
/* IEnumerator DoTo(Single, Single, Single, Action`1[Single]) */

IEnumerator *
Assembly-CSharp.dll::Worker::Worker_DoTo
          (Worker *this,float duration,float startValue,float endValue,Action_1_Single_ *callback,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Worker___DoTo_d__1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__Worker___DoTo_d__1);
  iVar2 = iRam_?;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  pIVar1[3].monitor = (MonitorData *)callback;
  *(float *)&pIVar1[2].monitor = duration;
  *(float *)((longlong)&pIVar1[2].monitor + 4) = startValue;
  *(float *)&pIVar1[3].klass = endValue;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&pIVar1[3].monitor >> 0xc);
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
  return pIVar1;
}


/* Void To(Single, Single, Single, Action`1[Single]) */

void Assembly-CSharp.dll::Worker::Worker_To
               (Worker *this,float duration,float startValue,float endValue,
               Action_1_Single_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Worker___DoTo_d__1);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar1 = FUN_?(TypeInfo__Worker___DoTo_d__1);
  iVar2 = iRam_?;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(Worker **)(lVar1 + 0x20) = this;
  if (iVar2 != 0) {
    uVar3 = (uint)(lVar1 + 0x20U >> 0xc);
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
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  *(Action_1_Single_ **)(lVar1 + 0x38) = callback;
  *(float *)(lVar1 + 0x28) = duration;
  *(float *)(lVar1 + 0x2c) = startValue;
  *(float *)(lVar1 + 0x30) = endValue;
  if (iVar2 != 0) {
    uVar3 = (uint)(lVar1 + 0x38U >> 0xc);
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
  if (lVar1 == 0) {
    uVar8 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar8);
    pSVar9 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar9,(MethodInfo *)0x0);
    uVar8 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar8);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar11 == 0) {
    uVar8 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar8);
    pSVar9 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar9,(MethodInfo *)0x0);
    uVar8 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar8);
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
  if (this == (Worker *)0x0) {
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pvVar12 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar12 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar12,lVar1);
  return;
}

