
/* Void OnValidate() */

void Assembly-CSharp.dll::MVPickupItemBaseObject::MVPickupItemBaseObject_OnValidate
               (MVPickupItemBaseObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponentInChildren<TriggerBoxEvents>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  GreyOutObjectScript_MethodInfo__UnityEngine__Component__GetComponent<GreyOutObjectScript>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (GreyOutObjectScript *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      GreyOutObjectScript_MethodInfo__UnityEngine__Component__GetComponent<GreyOutObjectScript>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).pickupItem = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).pickupItem >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pTVar7 = (TriggerBoxEvents *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInChildren_1
                     ((Component *)this,
                      TriggerBoxEvents_MethodInfo__UnityEngine__Component__GetComponentInChildren<TriggerBoxEvents>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).triggerBoxEvents = pTVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).triggerBoxEvents >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pAVar8 = (AudioSource *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__AudioSource_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::AudioSource>__
                     );
  bVar2 = iRam_? != 0;
  (this->fields).audioSource = pAVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).audioSource >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}

