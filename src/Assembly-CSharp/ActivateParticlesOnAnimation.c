
/* Void OnAvatarAnimationChange(String) */

void Assembly-CSharp.dll::ActivateParticlesOnAnimation::
     ActivateParticlesOnAnimation_OnAvatarAnimationChange
               (ActivateParticlesOnAnimation *this,String *newAnimation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ActivateParticlesOnAnimation::ActivationData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<ActivateParticlesOnAnimation::ActivationData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).activationDataList;
  uVar2 = 0;
  if (pLVar1 != (List_1_ActivateParticlesOnAnimation_ActivationData_ *)0x0) {
    lVar3 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      pLVar1 = (this->fields).activationDataList;
      if (pLVar1 == (List_1_ActivateParticlesOnAnimation_ActivationData_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pAVar5 = (pLVar1->fields)._items;
      if (pAVar5 == (ActivateParticlesOnAnimation_ActivationData__Array *)0x0) break;
      if ((uint)pAVar5->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pSVar6 = *(String **)
                ((longlong)
                 &((ActivateParticlesOnAnimation_ActivationData__Array *)(pAVar5->vector + -2))->
                  klass + lVar3);
      if ((pSVar6 == newAnimation) ||
         ((((pSVar6 != (String *)0x0 && (newAnimation != (String *)0x0)) &&
           ((pSVar6->fields)._stringLength == (newAnimation->fields)._stringLength)) &&
          (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar6->fields)._firstChar,
                              (uint8_t *)&(newAnimation->fields)._firstChar,
                              (longlong)(pSVar6->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar7 != 0)))) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_00 == (GameObject *)0x0) break;
        bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_get_activeInHierarchy(this_00,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          pLVar1 = (this->fields).activationDataList;
          if (pLVar1 != (List_1_ActivateParticlesOnAnimation_ActivationData_ *)0x0) {
            if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
            pAVar5 = (pLVar1->fields)._items;
            if (pAVar5 != (ActivateParticlesOnAnimation_ActivationData__Array *)0x0) {
              if (uVar2 < (uint)pAVar5->max_length) {
                routine = ActivateParticlesOnAnimation_PlayParticles
                                    (this,pAVar5->vector[(int)uVar2].activationDelay,
                                     (MethodInfo *)0x0);
                UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                MonoBehaviour_StartCoroutine_2((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
                return;
              }
              goto code_?;
            }
          }
          break;
        }
      }
      pLVar1 = (this->fields).activationDataList;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (pLVar1 != (List_1_ActivateParticlesOnAnimation_ActivationData_ *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* IEnumerator PlayParticles(Single) */

IEnumerator *
Assembly-CSharp.dll::ActivateParticlesOnAnimation::ActivateParticlesOnAnimation_PlayParticles
          (ActivateParticlesOnAnimation *this,float activationDelay,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ActivateParticlesOnAnimation___PlayParticles_d__4);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__ActivateParticlesOnAnimation___PlayParticles_d__4)
  ;
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

