
/* Void Awake() */

void Assembly-CSharp.dll::Coroutines::Coroutines_Awake(Coroutines *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Coroutines);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__Coroutines->static_fields->instance = this;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__Coroutines->static_fields >> 0xc);
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


/* Void Start(IEnumerator) */

void Assembly-CSharp.dll::Coroutines::Coroutines_Start(IEnumerator *coroutine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Coroutines);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = TypeInfo__Coroutines->static_fields->instance;
  if (obj == (Coroutines *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (coroutine == (IEnumerator *)0x0) {
    uVar2 = func_?(&TypeInfo__System__NullReferenceException);
    this = (NullReferenceException *)func_?(uVar2);
    pSVar3 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this,uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)obj,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this_00 = (InvalidEnumArgumentException *)func_?(uVar2);
    pSVar3 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_00,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar2);
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
  if (obj == (Coroutines *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar5 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar5,coroutine);
  return;
}


/* Void Stop(IEnumerator) */

void Assembly-CSharp.dll::Coroutines::Coroutines_Stop(IEnumerator *coroutine,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Coroutines);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = TypeInfo__Coroutines->static_fields->instance;
  if (obj == (Coroutines *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (coroutine == (IEnumerator *)0x0) {
    uVar2 = func_?(&TypeInfo__System__NullReferenceException);
    this = (NullReferenceException *)func_?(uVar2);
    pSVar3 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StopCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this,uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)obj,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this_00 = (InvalidEnumArgumentException *)func_?(uVar2);
    pSVar3 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_00,pSVar3,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StopCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar2);
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
  if (obj == (Coroutines *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar5 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar5,coroutine);
  return;
}

