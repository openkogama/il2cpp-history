
/* Void Awake() */

void Assembly-CSharp.dll::ScaleAnimation::ScaleAnimation_Awake
               (ScaleAnimation *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._.target;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar1 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._.m_CachedPtr != (void *)0x0) {
      pTVar1 = (this->fields)._.target;
      if (pTVar1 == (Transform *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (pTVar1->fields)._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      (*pcRam_?)(pvVar2);
      (this->fields)._.originalScale.x = 0.0;
      (this->fields)._.originalScale.y = 0.0;
      (this->fields)._.originalScale.z = 0.0;
    }
  }
  pAVar5 = (this->fields).animationCurve;
  if (pAVar5 != (AnimationCurve *)0x0) {
    pKVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_keys
                       (pAVar5,(MethodInfo *)0x0);
    pAVar5 = (this->fields).animationCurve;
    if (pAVar5 != (AnimationCurve *)0x0) {
      pvVar2 = (pAVar5->fields).m_Ptr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar5,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      iVar7 = (*pcRam_?)(pvVar2);
      if (pKVar6 != (Keyframe__Array *)0x0) {
        if ((uint)pKVar6->max_length <= iVar7 - 1U) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (this->fields).doneTime = pKVar6->vector[(longlong)iVar7 + -1].m_Time;
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Play(Single) */

void Assembly-CSharp.dll::ScaleAnimation::ScaleAnimation_Play
               (ScaleAnimation *this,float offsetTime,MethodInfo *method)

{
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
  fVar3 = (float)(*pcRam_?)();
  (this->fields)._.state = 2;
  (this->fields).beginTime = fVar3 - offsetTime;
  return;
}


/* Void Stop() */

void Assembly-CSharp.dll::ScaleAnimation::ScaleAnimation_Stop
               (ScaleAnimation *this,MethodInfo *method)

{
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
  fVar3 = (float)(*pcRam_?)();
  obj = (this->fields).animationCurve;
  uStack_4._0_4_ = (this->fields)._.originalScale.x;
  uStack_4._4_4_ = (this->fields)._.originalScale.y;
  obj_00 = (this->fields)._.target;
  fVar5 = (this->fields)._.originalScale.z;
  fVar6 = (this->fields).beginTime;
  if (obj == (AnimationCurve *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar7 = (obj->fields).m_Ptr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar8 = (this->fields).doneTime;
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
  fVar8 = (float)(*pcRam_?)(pvVar7,fVar8);
  fStack_9 = fVar5 * fVar8;
  if (obj_00 == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_4 = CONCAT44(uStack_4._4_4_ * fVar8,(float)uStack_4 * fVar8);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar7 = (obj_00->fields)._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar7,&uStack_4);
  pSVar10 = (this->fields)._.OnScaleAnimationStopped;
  (this->fields)._.state = 1;
  if (pSVar10 != (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
    (*(pSVar10->fields)._._.invoke_impl)
              ((pSVar10->fields)._._.method_code,(fVar3 - fVar6) - (this->fields).doneTime,
               (pSVar10->fields)._._.method);
  }
  return;
}


/* Void Stopped(Single) */

void Assembly-CSharp.dll::ScaleAnimation::ScaleAnimation_Stopped
               (ScaleAnimation *this,float extraTime,MethodInfo *method)

{
  (this->fields)._.state = 1;
  pSVar1 = (this->fields)._.OnScaleAnimationStopped;
  if (pSVar1 != (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pSVar1->fields)._._.invoke_impl)
              ((pSVar1->fields)._._.method_code,extraTime,(pSVar1->fields)._._.method);
    return;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ScaleAnimation::ScaleAnimation_Update
               (ScaleAnimation *this,MethodInfo *method)

{
  if ((this->fields)._.testState == 2) {
    (*(this->klass->vtable).Play.methodPtr)(this,0,(this->klass->vtable).Play.method);
    (this->fields)._.testState = 0;
  }
  if ((this->fields)._.state == 2) {
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
    fVar3 = (float)(*pcRam_?)();
    obj = (this->fields)._.target;
    fVar3 = fVar3 - (this->fields).beginTime;
    obj_00 = (this->fields).animationCurve;
    pfVar4 = &(this->fields).doneTime;
    uStack_5._0_4_ = (this->fields)._.originalScale.x;
    uStack_5._4_4_ = (this->fields)._.originalScale.y;
    if (*pfVar4 <= fVar3 && fVar3 != *pfVar4) {
      fVar6 = (this->fields)._.originalScale.z;
      if (obj_00 == (AnimationCurve *)0x0) goto DAT_?;
      pvVar7 = (obj_00->fields).m_Ptr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar8 = (this->fields).doneTime;
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
      fVar8 = (float)(*pcRam_?)(pvVar7,fVar8);
      fStack_9 = fVar6 * fVar8;
      if (obj == (Transform *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uStack_5 = CONCAT44(uStack_5._4_4_ * fVar8,(float)uStack_5 * fVar8);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (obj->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
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
      (*pcRam_?)(pvVar7,&uStack_5);
      pSVar10 = (this->fields)._.OnScaleAnimationStopped;
      (this->fields)._.state = 1;
      if (pSVar10 != (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
        (*(pSVar10->fields)._._.invoke_impl)
                  ((pSVar10->fields)._._.method_code,fVar3 - (this->fields).doneTime,
                   (pSVar10->fields)._._.method);
      }
    }
    else {
      fVar6 = (this->fields)._.originalScale.z;
      if (obj_00 == (AnimationCurve *)0x0) {
DAT_?:
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pvVar7 = (obj_00->fields).m_Ptr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
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
      fVar3 = (float)(*pcRam_?)(pvVar7,fVar3);
      fStack_9 = fVar6 * fVar3;
      if (obj == (Transform *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uStack_5 = CONCAT44(uStack_5._4_4_ * fVar3,(float)uStack_5 * fVar3);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (obj->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
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
      (*pcRam_?)(pvVar7,&uStack_5);
    }
  }
  return;
}

