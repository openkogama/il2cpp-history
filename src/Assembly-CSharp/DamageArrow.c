
/* Void OnEnable() */

void Assembly-CSharp.dll::DamageArrow::DamageArrow_OnEnable(DamageArrow *this,MethodInfo *method)

{
  obj = (this->fields).image;
  if (obj == (Image *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Image *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  CVar2._.m_CachedPtr = (obj->fields)._._._._._._._;
  if (CVar2._.m_CachedPtr == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(CVar2._.m_CachedPtr,1);
  return;
}


/* RectTransform get_RectTransform() */

RectTransform *
Assembly-CSharp.dll::DamageArrow::DamageArrow_get_RectTransform
          (DamageArrow *this,MethodInfo *method)

{
  this_00 = (this->fields).image;
  if (this_00 == (Image *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pRVar2 = (RectTransform *)(*pcVar1)();
    return pRVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                  ,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this_00->fields)._._.m_RectTransform == (RectTransform *)0x0) {
    pRVar2 = (RectTransform *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this_00,
                        UnityEngine__RectTransform_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::RectTransform>__
                       );
    bVar3 = iRam_? == 0;
    (this_00->fields)._._.m_RectTransform = pRVar2;
    if (bVar3) {
      return pRVar2;
    }
    uVar4 = (uint)((ulonglong)&(this_00->fields)._._.m_RectTransform >> 0xc);
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
  return (this_00->fields)._._.m_RectTransform;
}

