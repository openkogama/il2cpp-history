
/* Void Reset() */

void Assembly-CSharp.dll::ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper_Reset
               (ModifierIndicator_OverlayWrapper *this,MethodInfo *method)

{
  obj = (this->fields).image.image;
  if (obj == (Image *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,0,0);
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
  BVar2._._.m_CachedPtr = (obj->fields)._._._._._._;
  if (BVar2._._.m_CachedPtr == (Object_1__Fields)0x0) {
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
  (*pcRam_?)(BVar2._._.m_CachedPtr,0);
  return;
}


/* Void Update(Boolean) */

void Assembly-CSharp.dll::ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper_Update
               (ModifierIndicator_OverlayWrapper *this,bool active,MethodInfo *method)

{
  pCVar1 = (this->fields).image.alphaHandler;
  if (active == 0) {
    if (pCVar1 != (CanvasGroup *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (pCVar1->fields)._._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
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
      fVar5 = (float)(*pcRam_?)(pvVar2);
      if (_UNK_? < fVar5) {
        obj = (this->fields).fadeOutCurve;
        if (obj != (AnimationCurve *)0x0) {
          pvVar2 = (obj->fields).m_Ptr;
          if (pvVar2 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          fVar5 = (this->fields).fadeOutTimer;
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
          fVar5 = (float)(*pcRam_?)(pvVar2,fVar5);
          pCVar1 = (this->fields).image.alphaHandler;
          if (pCVar1 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (pCVar1,fVar5,(MethodInfo *)0x0);
            fVar5 = (this->fields).fadeOutTimer;
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
            fVar6 = (float)(*pcRam_?)();
            (this->fields).fadeOutTimer = fVar6 + fVar5;
            return;
          }
        }
      }
      else {
        pIVar7 = (this->fields).image.animator;
        if (pIVar7 != (ImageAnimator *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pIVar7,0,(MethodInfo *)0x0);
          pIVar8 = (this->fields).image.image;
          if (pIVar8 != (Image *)0x0) {
            value = 0;
code_?:
            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                      ((Behaviour *)pIVar8,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  else if (pCVar1 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (pCVar1,_UNK_?,(MethodInfo *)0x0);
    pIVar8 = (this->fields).image.image;
    (this->fields).fadeOutTimer = 0.0;
    if (pIVar8 != (Image *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pIVar8,1,(MethodInfo *)0x0);
      pIVar7 = (this->fields).image.animator;
      if (pIVar7 != (ImageAnimator *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pIVar7,1,(MethodInfo *)0x0);
        pIVar8 = (Image *)(this->fields).image.streamComponent;
        if (pIVar8 != (Image *)0x0) {
          value = 1;
          goto code_?;
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* ModifierIndicator+OverlayWrapper(ModifierIndicator+AnimatedImage, AnimationCurve) */

void Assembly-CSharp.dll::ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper__ctor
               (ModifierIndicator_OverlayWrapper *this,ModifierIndicator_AnimatedImage *overlayImage
               ,AnimationCurve *fadeOutCurve,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  pIVar2 = overlayImage->animator;
  pSVar3 = overlayImage->streamComponent;
  pCVar4 = overlayImage->alphaHandler;
  (this->fields).image.image = overlayImage->image;
  (this->fields).image.animator = pIVar2;
  (this->fields).image.streamComponent = pSVar3;
  (this->fields).image.alphaHandler = pCVar4;
  if (bVar1) {
    uVar5 = (uint)((ulonglong)&(this->fields).image >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar7 == *puVar8;
      if (bVar1) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_00 = (this->fields).image.image;
  if (this_00 != (Image *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).fadeOutCurve = fadeOutCurve;
    if (bVar1) {
      uVar5 = (uint)((ulonglong)&this->fields >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar7 == *puVar8;
        if (bVar1) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    if (fadeOutCurve != (AnimationCurve *)0x0) {
      pKVar9 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_keys
                         (fadeOutCurve,(MethodInfo *)0x0);
      pvVar10 = (fadeOutCurve->fields).m_Ptr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)fadeOutCurve,(MethodInfo *)0x0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcVar11 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
        uVar12 = func_?(&UNK_?);
        FUN_?(uVar12,0);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pcRam_? = pcVar11;
      iVar13 = (*pcRam_?)(pvVar10);
      if (pKVar9 != (Keyframe__Array *)0x0) {
        if ((uint)pKVar9->max_length <= iVar13 - 1U) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (this->fields).fadeOutTimer = pKVar9->vector[(longlong)iVar13 + -1].m_Time;
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Single get_Alpha() */

float Assembly-CSharp.dll::ModifierIndicator+OverlayWrapper::
      ModifierIndicator_OverlayWrapper_get_Alpha
                (ModifierIndicator_OverlayWrapper *this,MethodInfo *method)

{
  obj = (this->fields).image.alphaHandler;
  if (obj == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar3 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float)(*pcRam_?)(pvVar3);
  return fVar2;
}


/* Void set_Image(Image) */

void Assembly-CSharp.dll::ModifierIndicator+OverlayWrapper::
     ModifierIndicator_OverlayWrapper_set_Image
               (ModifierIndicator_OverlayWrapper *this,Image *value,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  pMVar2 = &(this->fields).image;
  pMVar2->image = value;
  if (bVar1) {
    uVar3 = (uint)((ulonglong)pMVar2 >> 0xc);
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
  return;
}

