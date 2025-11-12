
/* Void OnAvatarAnimationChange(String) */

void Assembly-CSharp.dll::ActivateSoundOnAnimation::ActivateSoundOnAnimation_OnAvatarAnimationChange
               (ActivateSoundOnAnimation *this,String *newAnimation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ActivateSoundOnAnimation::ActivationData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ActivateSoundOnAnimation::ActivationData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activationDataList;
  uVar2 = 0;
  if (pLVar1 != (List_1_ActivateSoundOnAnimation_ActivationData_ *)0x0) {
    lVar3 = 0x20;
    while( true ) {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pAVar4 = (pLVar1->fields)._items;
      if (pAVar4 == (ActivateSoundOnAnimation_ActivationData__Array *)0x0)
      goto code_?;
      if ((uint)pAVar4->max_length <= uVar2) goto code_?;
      pSVar5 = *(String **)
                ((longlong)
                 &((ActivateSoundOnAnimation_ActivationData__Array *)(pAVar4->vector + -2))->klass +
                lVar3);
      if (pSVar5 == newAnimation) break;
      if (((pSVar5 == (String *)0x0) || (newAnimation == (String *)0x0)) ||
         ((pSVar5->fields)._stringLength != (newAnimation->fields)._stringLength)) {
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x10;
      }
      else {
        bVar6 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar5->fields)._firstChar,
                           (uint8_t *)&(newAnimation->fields)._firstChar,
                           (longlong)(pSVar5->fields)._stringLength * 2,(MethodInfo *)0x0);
        if (bVar6 != 0) break;
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x10;
      }
    }
    if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pAVar4 = (pLVar1->fields)._items;
    if (pAVar4 != (ActivateSoundOnAnimation_ActivationData__Array *)0x0) {
      if (uVar2 < (uint)pAVar4->max_length) {
        routine = ActivateSoundOnAnimation_PlaySound
                            (this,pAVar4->vector[(int)uVar2].activationDelay,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                  ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
        return;
      }
code_?:
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* IEnumerator PlaySound(Single) */

IEnumerator *
Assembly-CSharp.dll::ActivateSoundOnAnimation::ActivateSoundOnAnimation_PlaySound
          (ActivateSoundOnAnimation *this,float activationDelay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ActivateSoundOnAnimation___PlaySound_d__4);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__ActivateSoundOnAnimation___PlaySound_d__4);
  bVar2 = iRam_? == 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].monitor = (MonitorData *)this;
  if (bVar2) {
    *(float *)&pIVar1[2].klass = activationDelay;
    return pIVar1;
  }
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
  *(float *)&pIVar1[2].klass = activationDelay;
  return pIVar1;
}

