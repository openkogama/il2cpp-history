
/* IEnumerator CheckIfAlive() */

IEnumerator *
Assembly-CSharp.dll::CFX_AutoDestructShuriken::CFX_AutoDestructShuriken_CheckIfAlive
          (CFX_AutoDestructShuriken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CFX_AutoDestructShuriken___CheckIfAlive_d__2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__CFX_AutoDestructShuriken___CheckIfAlive_d__2);
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


/* Void OnEnable() */

void Assembly-CSharp.dll::CFX_AutoDestructShuriken::CFX_AutoDestructShuriken_OnEnable
               (CFX_AutoDestructShuriken *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_CheckIfAlive);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_CheckIfAlive;
  if ((StringLiteral_CheckIfAlive == (String *)0x0) ||
     ((StringLiteral_CheckIfAlive->fields)._stringLength == 0)) {
    uVar2 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar2);
    pSVar1 = (String *)func_?(&StringLiteral_methodName_is_null_or_empty);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__String__System__Object_
                               );
    FUN_?(this_00,uVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puStackX_8 = unaff_RBX;
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar2);
    pSVar1 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar1,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__String__System__Object_
                               );
    FUN_?(this_01,uVar2);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puStackX_10 = puStackX_8;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                  ,pSVar1,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puStackX_8 = (uint16_t *)0x0;
  puStack_5 = (uint16_t *)0x0;
  puStack_6 = (undefined *)0x0;
  uStack_7 = 0;
  ppuStack_8 = &puStackX_8;
  if (this != (CFX_AutoDestructShuriken *)0x0) {
    pvVar9 = (this->fields)._._._._.m_CachedPtr;
    if (pvVar9 != (void *)0x0) {
      if (pSVar1 != (String *)0x0) {
        if ((pSVar1->fields)._stringLength == 0) {
          puStack_5 = (uint16_t *)0x1;
          puStack_6 = (undefined *)0x0;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          iVar10 = (pSVar1->fields)._stringLength;
          puStackX_8 = &(pSVar1->fields)._firstChar;
          if (iVar10 == 0) {
            puStackX_8 = (uint16_t *)0x0;
          }
          puStack_6 = (undefined *)CONCAT44(puStack_6._4_4_,iVar10);
          puStack_5 = puStackX_8;
        }
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? != (code *)0x0) ||
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 != (code *)0x0)) {
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar9,&puStack_5,0);
        return;
      }
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
  }
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

