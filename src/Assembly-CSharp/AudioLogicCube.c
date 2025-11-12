
/* Void Awake() */

void Assembly-CSharp.dll::AudioLogicCube::AudioLogicCube_Awake
               (AudioLogicCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AudioOnOffComponent__MethodInfo__UnityEngine__Component__GetComponents<AudioOnOffComponent>______
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  AudioOnOffComponent__MethodInfo__UnityEngine__Component__GetComponents<AudioOnOffComponent>______;
  if ((
      AudioOnOffComponent__MethodInfo__UnityEngine__Component__GetComponents<AudioOnOffComponent>______
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 AudioOnOffComponent__MethodInfo__UnityEngine__Component__GetComponents<AudioOnOffComponent>______
                 );
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pAVar3 = (AudioOnOffComponent__Array *)
           UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponents_1
                     (this_00,((pMVar1->field7_0x38).rgctx_data)->method);
  bVar4 = iRam_? != 0;
  (this->fields).audioOnOffComponents = pAVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).audioOnOffComponents >> 0xc);
    puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar7 = *puVar6;
      LOCK();
      uVar8 = *puVar6;
      if (uVar7 == uVar8) {
        *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar7 != uVar8);
  }
  return;
}


/* Void Play(Boolean) */

void Assembly-CSharp.dll::AudioLogicCube::AudioLogicCube_Play
               (AudioLogicCube *this,bool on,MethodInfo *method)

{
  pAVar1 = (this->fields).audioOnOffComponents;
  uVar2 = 0;
  if (on == 0) {
    if (pAVar1 != (AudioOnOffComponent__Array *)0x0) {
      ppAVar3 = pAVar1->vector;
      while( true ) {
        if ((int)pAVar1->max_length <= (int)uVar2) {
          return;
        }
        if ((uint)pAVar1->max_length <= uVar2) break;
        pAVar4 = *ppAVar3;
        if (pAVar4 == (AudioOnOffComponent *)0x0) goto code_?;
        (*(pAVar4->klass->vtable).TurnOff.methodPtr)(pAVar4,(pAVar4->klass->vtable).TurnOff.method);
        uVar2 = uVar2 + 1;
        ppAVar3 = ppAVar3 + 1;
      }
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (pAVar1 != (AudioOnOffComponent__Array *)0x0) {
    ppAVar3 = pAVar1->vector;
    while( true ) {
      if ((int)pAVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pAVar1->max_length <= uVar2) break;
      pAVar4 = *ppAVar3;
      if (pAVar4 == (AudioOnOffComponent *)0x0) goto code_?;
      (*(pAVar4->klass->vtable).TurnOn.methodPtr)(pAVar4,(pAVar4->klass->vtable).TurnOn.method);
      uVar2 = uVar2 + 1;
      ppAVar3 = ppAVar3 + 1;
    }
    goto code_?;
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AudioLogicCube::AudioLogicCube_Update
               (AudioLogicCube *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_x);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_z);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).testKeys != 0) {
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
            InputUnsafeUtility_GetKeyDownString(StringLiteral_z,(MethodInfo *)0x0);
    uVar2 = 0;
    if (bVar1 != 0) {
      pAVar3 = (this->fields).audioOnOffComponents;
      uVar4 = 0;
      if (pAVar3 == (AudioOnOffComponent__Array *)0x0) goto code_?;
      ppAVar5 = pAVar3->vector;
      for (; (int)uVar4 < (int)pAVar3->max_length; uVar4 = uVar4 + 1) {
        if ((uint)pAVar3->max_length <= uVar4) goto DAT_?;
        if (*ppAVar5 == (AudioOnOffComponent *)0x0) goto code_?;
        (*((*ppAVar5)->klass->vtable).TurnOn.methodPtr)();
        ppAVar5 = ppAVar5 + 1;
      }
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar1 = UnityEngine.InputLegacyModule.dll::UnityEngine::Internal::InputUnsafeUtility::
            InputUnsafeUtility_GetKeyDownString(StringLiteral_x,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pAVar3 = (this->fields).audioOnOffComponents;
      if (pAVar3 == (AudioOnOffComponent__Array *)0x0) {
code_?:
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      ppAVar5 = pAVar3->vector;
      for (; (int)uVar2 < (int)pAVar3->max_length; uVar2 = uVar2 + 1) {
        if ((uint)pAVar3->max_length <= uVar2) {
DAT_?:
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pAVar7 = *ppAVar5;
        if (pAVar7 == (AudioOnOffComponent *)0x0) goto code_?;
        (*(pAVar7->klass->vtable).TurnOff.methodPtr)(pAVar7,(pAVar7->klass->vtable).TurnOff.method);
        ppAVar5 = ppAVar5 + 1;
      }
    }
  }
  return;
}

