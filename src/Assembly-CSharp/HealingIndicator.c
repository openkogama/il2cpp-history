
/* Void Awake() */

void Assembly-CSharp.dll::HealingIndicator::HealingIndicator_Awake
               (HealingIndicator *this,MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (obj->fields)._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
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
  (*pcRam_?)(pvVar2,0,0);
  return;
}


/* Void ShowHealing(Single, MVPlayer) */

void Assembly-CSharp.dll::HealingIndicator::HealingIndicator_ShowHealing
               (HealingIndicator *this,float healingAmount,MVPlayer *healer,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,1,(MethodInfo *)0x0);
  pAVar1 = (this->fields).curve;
  if (pAVar1 != (AnimationCurve *)0x0) {
    pKVar2 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_keys
                       (pAVar1,(MethodInfo *)0x0);
    pAVar1 = (this->fields).curve;
    if (pAVar1 != (AnimationCurve *)0x0) {
      pvVar3 = (pAVar1->fields).m_Ptr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar1,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      iVar6 = (*pcRam_?)(pvVar3);
      if (pKVar2 != (Keyframe__Array *)0x0) {
        if ((uint)pKVar2->max_length <= iVar6 - 1U) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (this->fields).targetTime = pKVar2->vector[(longlong)iVar6 + -1].m_Time;
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::HealingIndicator::HealingIndicator_Update
               (HealingIndicator *this,MethodInfo *method)

{
  fVar1 = (this->fields).timer;
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
  fVar4 = (float)(*pcRam_?)();
  obj = (this->fields).curve;
  fVar4 = fVar4 + fVar1;
  (this->fields).timer = fVar4;
  if (obj != (AnimationCurve *)0x0) {
    pvVar5 = (obj->fields).m_Ptr;
    if (pvVar5 == (void *)0x0) {
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
    uStack_6 = (*pcRam_?)(pvVar5,fVar4);
    pIVar7 = (this->fields).healthOverlay;
    if (pIVar7 != (Image *)0x0) {
      puVar8 = (undefined4 *)
               (*(pIVar7->klass->vtable).get_color.methodPtr)
                         (&uStack_9,pIVar7,(pIVar7->klass->vtable).get_color.method);
      pIVar7 = (this->fields).healthOverlay;
      uStack_9 = *puVar8;
      uStack_10 = puVar8[1];
      uStack_11 = puVar8[2];
      if (pIVar7 != (Image *)0x0) {
        (*(pIVar7->klass->vtable).set_color.methodPtr)();
        if ((this->fields).targetTime <= (this->fields).timer) {
          (this->fields).timer = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)this,0,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

