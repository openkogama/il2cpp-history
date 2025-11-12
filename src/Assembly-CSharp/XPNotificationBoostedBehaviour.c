
/* Void DoBoostEffect(Single) */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::
     XPNotificationBoostedBehaviour_DoBoostEffect
               (XPNotificationBoostedBehaviour *this,float timeSinceStart,MethodInfo *method)

{
  pRVar1 = (this->fields).boostEffectTransform;
  if ((pRVar1 != (RectTransform *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pGVar2->fields)._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
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
    cVar6 = (*pcRam_?)(pvVar3);
    if (cVar6 == '\0') {
      pRVar1 = (this->fields).boostEffectTransform;
      if ((pRVar1 == (RectTransform *)0x0) ||
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pRVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
    }
    pTVar7 = (this->fields).unboostedXpText;
    if ((pTVar7 != (Text *)0x0) &&
       (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)pTVar7,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pGVar2->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
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
      cVar6 = (*pcRam_?)(pvVar3);
      if (cVar6 != '\0') {
        pTVar7 = (this->fields).unboostedXpText;
        if ((pTVar7 == (Text *)0x0) ||
           (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar7,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0)
           ) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
      }
      obj = (this->fields).boostEffectCurve;
      if (obj != (AnimationCurve *)0x0) {
        pvVar3 = (obj->fields).m_Ptr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar8 = timeSinceStart - _UNK_?;
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
        uVar9 = (*pcRam_?)(pvVar3,fVar8);
        pRVar1 = (this->fields).boostEffectTransform;
        if (pRVar1 != (RectTransform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar3 = (pRVar1->fields)._._._.m_CachedPtr;
          if (pvVar3 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
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
          (*pcRam_?)(pvVar3);
          pRVar1 = (this->fields).boostEffectTransform;
          if (pRVar1 == (RectTransform *)0x0) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uStack_10 = CONCAT44(uVar9,uVar9);
          uStack_11 = 0;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar3 = (pRVar1->fields)._._._.m_CachedPtr;
          if (pvVar3 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
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
          (*pcRam_?)(pvVar3,&uStack_10);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DoFillImageFillingEffect(Single) */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::
     XPNotificationBoostedBehaviour_DoFillImageFillingEffect
               (XPNotificationBoostedBehaviour *this,float timeSinceStart,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pPVar2 = (this->fields).xpFillBar;
  uVar3 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar4 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (pPVar2 != (ProgressBar *)0x0) {
    fVar5 = (timeSinceStart - _UNK_?) / _UNK_?;
    if (fVar5 < 0.0) {
      fVar5 = 0.0;
    }
    else if (_UNK_? < fVar5) {
      fVar5 = _UNK_?;
    }
    pSVar6 = (pPVar2->fields).progressBar;
    (pPVar2->fields).progress = fVar5;
    if (pSVar6 != (Scrollbar *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                (pSVar6,fVar5,(MethodInfo *)0x0);
      pPVar2 = (this->fields).xpFillBarBackground;
      if (pPVar2 != (ProgressBar *)0x0) {
        fVar5 = (timeSinceStart - fVar1) / _UNK_?;
        if (fVar5 < 0.0) {
          fVar5 = 0.0;
        }
        else if (fVar1 < fVar5) {
          fVar5 = fVar1;
        }
        (pPVar2->fields).progress = fVar5;
        pSVar6 = (pPVar2->fields).progressBar;
        if (pSVar6 != (Scrollbar *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<float>_System__Single___float_
                          ,fVar5,0,in_R9,uVar3,uVar4,unaff_RBX);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (fVar5 < 0.0) {
            fVar5 = 0.0;
          }
          else if (_UNK_? < fVar5) {
            fVar5 = _UNK_?;
          }
          cVar7 = FUN_?(&(pSVar6->fields).m_Size,fVar5);
          if (cVar7 != '\0') {
            UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_UpdateVisuals
                      (pSVar6,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DoGlowEffect(Single) */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::
     XPNotificationBoostedBehaviour_DoGlowEffect
               (XPNotificationBoostedBehaviour *this,float timeSinceStart,MethodInfo *method)

{
  if (_UNK_? < timeSinceStart) {
    pGVar1 = (this->fields).glowEffectGameObject;
    if (pGVar1 == (GameObject *)0x0) goto DAT_?;
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pGVar1 = (this->fields).glowEffectGameObject;
      if (pGVar1 == (GameObject *)0x0) goto DAT_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
    }
  }
  obj = (this->fields).glowEffectCurve;
  if (obj != (AnimationCurve *)0x0) {
    pvVar3 = (obj->fields).m_Ptr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar5 = timeSinceStart - _UNK_?;
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    fVar5 = (float)(*pcRam_?)(pvVar3,fVar5);
    pGVar1 = (this->fields).glowEffectGameObject;
    if ((pGVar1 != (GameObject *)0x0) &&
       (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pTVar7->fields)._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3);
      pGVar1 = (this->fields).glowEffectGameObject;
      fVar8 = (fVar5 - _UNK_?) / _UNK_? + _UNK_?;
      if ((pGVar1 != (GameObject *)0x0) &&
         (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar1,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
        uStack_9 = CONCAT44(fVar5,fVar8);
        uStack_10 = 0;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (pTVar7->fields)._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar3,&uStack_9);
        return;
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DoGradientEffect(Single) */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::
     XPNotificationBoostedBehaviour_DoGradientEffect
               (XPNotificationBoostedBehaviour *this,float timeSinceStart,MethodInfo *method)

{
  pGVar1 = (this->fields).arrowGradientEffect;
  fVar2 = timeSinceStart - _UNK_?;
  if (pGVar1 != (GradientEffect *)0x0) {
    fVar3 = (pGVar1->fields).bottom.r;
    fVar4 = (pGVar1->fields).bottom.g;
    fVar5 = (pGVar1->fields).bottom.b;
    pAVar6 = (this->fields).gradientEffectCurve;
    if (pAVar6 != (AnimationCurve *)0x0) {
      pvVar7 = (pAVar6->fields).m_Ptr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar6,(MethodInfo *)0x0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
      uVar10 = (*pcRam_?)(pvVar7,fVar2);
      pGVar1 = (this->fields).arrowGradientEffect;
      if (pGVar1 != (GradientEffect *)0x0) {
        (pGVar1->fields).bottom.r = fVar3;
        (pGVar1->fields).bottom.g = fVar4;
        (pGVar1->fields).bottom.b = fVar5;
        (pGVar1->fields).bottom.a = (float)uVar10;
        pGVar1 = (this->fields).arrowGradientEffect;
        if (pGVar1 != (GradientEffect *)0x0) {
          fVar3 = (pGVar1->fields).top.r;
          fVar4 = (pGVar1->fields).top.g;
          fVar5 = (pGVar1->fields).top.b;
          pAVar6 = (this->fields).gradientEffectCurve;
          if (pAVar6 != (AnimationCurve *)0x0) {
            pvVar7 = (pAVar6->fields).m_Ptr;
            if (pvVar7 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar6,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            fVar2 = fVar2 - _UNK_?;
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pcRam_? = pcVar8;
            uVar10 = (*pcRam_?)(pvVar7,fVar2);
            pGVar1 = (this->fields).arrowGradientEffect;
            if (pGVar1 != (GradientEffect *)0x0) {
              (pGVar1->fields).top.r = fVar3;
              (pGVar1->fields).top.g = fVar4;
              (pGVar1->fields).top.b = fVar5;
              (pGVar1->fields).top.a = (float)uVar10;
              pGVar1 = (this->fields).arrowGradientEffect;
              if ((pGVar1 != (GradientEffect *)0x0) &&
                 (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_gameObject((Component *)pGVar1,(MethodInfo *)0x0),
                 pGVar11 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar11,0,(MethodInfo *)0x0);
                pGVar1 = (this->fields).arrowGradientEffect;
                if ((pGVar1 != (GradientEffect *)0x0) &&
                   (pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                             Component_get_gameObject((Component *)pGVar1,(MethodInfo *)0x0),
                   pGVar11 != (GameObject *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                  ,1,0);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (pGVar11 == (GameObject *)0x0) {
                    FUN_?();
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pvVar7 = (pGVar11->fields)._.m_CachedPtr;
                  if (pvVar7 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar11,(MethodInfo *)0x0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcVar8 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                    uVar9 = func_?(&UNK_?);
                    FUN_?(uVar9,0);
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*pcRam_?)(pvVar7,1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void DoParticleEffect() */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::
     XPNotificationBoostedBehaviour_DoParticleEffect
               (XPNotificationBoostedBehaviour *this,MethodInfo *method)

{
  pXVar1 = (this->fields).xpBoostParticlesPreview;
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    if ((pXVar1->fields).isParticlesPlaying != 0) {
      return;
    }
    pPVar2 = (pXVar1->fields).xpBoostParticles;
    (pXVar1->fields).isParticlesPlaying = 1;
    if (pPVar2 != (ParticleSystem *)0x0) {
      uVar3 = 0;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pPVar2,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        pPVar2 = (pXVar1->fields).xpBoostParticles;
        if (pPVar2 != (ParticleSystem *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                          ,CONCAT71(uVar4,1),0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pPVar2 == (ParticleSystem *)0x0) {
            FUN_?();
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pvVar6 = (pPVar2->fields)._._.m_CachedPtr;
          if (pvVar6 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar2,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar6,1);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void DoSlideOutEffect() */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::
     XPNotificationBoostedBehaviour_DoSlideOutEffect
               (XPNotificationBoostedBehaviour *this,MethodInfo *method)

{
  pTVar1 = (this->fields).xpText;
  if ((pTVar1 != (Text *)0x0) &&
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pTVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar3 = (pGVar2->fields)._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
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
    cVar6 = (*pcRam_?)(pvVar3);
    if (cVar6 == '\0') {
      pTVar1 = (this->fields).xpText;
      if ((pTVar1 == (Text *)0x0) ||
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
      goto DAT_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
    }
    pRVar7 = (this->fields).boostEffectTransform;
    if (pRVar7 != (RectTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pRVar7->fields)._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar7,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar3);
      fVar8 = (this->fields).slideOutSpeed;
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
      fVar9 = (float)(*pcRam_?)();
      pRVar7 = (this->fields).boostEffectTransform;
      uStack_10 = (ulonglong)(uint)(fVar9 * fVar8 + 0.0);
      if (pRVar7 == (RectTransform *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uStack_11 = uStack_10;
      uStack_12 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pRVar7->fields)._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar7,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar3,&uStack_11);
      return;
    }
  }
DAT_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(Int32, Int32) */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::XPNotificationBoostedBehaviour_Initialize
               (XPNotificationBoostedBehaviour *this,int32_t boostedXPAmount,
               int32_t unboostedXpAmount,MethodInfo *method)

{
  aIStackX_18[0].m_value = unboostedXpAmount;
  aIStackX_10[0].m_value = boostedXPAmount;
  if (cRam_? == '\0') {
    FUN_?(&
                  XpBoostParticlePreviewer_MethodInfo__UnityEngine__Object__Instantiate<XpBoostParticlePreviewer>_XpBoostParticlePreviewer_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__XP_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__XP);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pXVar1 = (this->fields).xpBoostParticlesPreview;
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
  if (pXVar1 == (XpBoostParticlePreviewer *)0x0) {
code_?:
    pXVar1 = (this->fields).xpBoostParticlesPreviewPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pXVar1 = (XpBoostParticlePreviewer *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pXVar1,
                         XpBoostParticlePreviewer_MethodInfo__UnityEngine__Object__Instantiate<XpBoostParticlePreviewer>_XpBoostParticlePreviewer_
                        );
    bVar2 = iRam_? != 0;
    (this->fields).xpBoostParticlesPreview = pXVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).xpBoostParticlesPreview >> 0xc);
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
    }
    pXVar1 = (this->fields).xpBoostParticlesPreview;
    if (pXVar1 == (XpBoostParticlePreviewer *)0x0) goto code_?;
    auStack_7._4_4_ = _UNK_?;
    auStack_7._0_4_ = _UNK_?;
    auStack_8._0_4_ = 0.0;
    auStack_8._4_4_ = 0.0;
    uStack_9 = CONCAT44(uStack_9._4_4_,_UNK_?);
    uStack_10 = uStack_10 & 0xffffffff00000000;
    XpBoostParticlePreviewer::XpBoostParticlePreviewer_Initialize
              (pXVar1,600,0xa0,CameraClearFlags__Enum_Color,LayerFlags__Enum_Preview,
               (Vector3 *)auStack_8,(Vector3 *)auStack_7,(MethodInfo *)0x0);
    pXVar1 = (this->fields).xpBoostParticlesPreview;
    if ((pXVar1 == (XpBoostParticlePreviewer *)0x0) ||
       (this_00 = (this->fields).xpBoostParticlesRawImage, this_00 == (RawImage *)0x0))
    goto code_?;
    UnityEngine.UI.dll::UnityEngine::UI::RawImage::RawImage_set_texture
              (this_00,(Texture *)(pXVar1->fields).previewTexture,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pXVar1->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
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
  fVar13 = (float)(*pcRam_?)();
  pTVar14 = (this->fields).xpText;
  (this->fields).startTime = fVar13;
  pSVar15 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
  mscorlib.dll::System::String::String_Concat_4(pSVar15,StringLiteral__XP_,(MethodInfo *)0x0);
  if (pTVar14 != (Text *)0x0) {
    (*(pTVar14->klass->vtable).set_text.methodPtr)(pTVar14);
    pTVar14 = (this->fields).unboostedXpText;
    pSVar15 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_18,(MethodInfo *)0x0);
    mscorlib.dll::System::String::String_Concat_4(pSVar15,StringLiteral__XP,(MethodInfo *)0x0);
    if (pTVar14 != (Text *)0x0) {
      (*(pTVar14->klass->vtable).set_text.methodPtr)(pTVar14);
      if ((this->fields).boostEffectStatPositionX == 0.0) {
        pRVar16 = (this->fields).boostEffectTransform;
        if (pRVar16 == (RectTransform *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auStack_7._0_4_ = 0.0;
        auStack_7._4_4_ = 0.0;
        uStack_9 = uStack_9 & 0xffffffff00000000;
        pvVar17 = (pRVar16->fields)._._._.m_CachedPtr;
        if (pvVar17 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar16,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar17);
        pRVar16 = (this->fields).boostEffectTransform;
        if (pRVar16 == (RectTransform *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_18 = 0;
        uStack_19 = 0;
        pvVar17 = (pRVar16->fields)._._._.m_CachedPtr;
        if (pvVar17 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar16,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar17);
        pRVar16 = (this->fields).boostEffectTransform;
        if (pRVar16 == (RectTransform *)0x0) goto code_?;
        VVar20 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                           (pRVar16,(MethodInfo *)0x0);
        pRVar16 = (this->fields).boostEffectTransform;
        if (pRVar16 == (RectTransform *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auStack_8._0_4_ = 0.0;
        auStack_8._4_4_ = 0.0;
        uStack_10 = 0;
        pvVar17 = (pRVar16->fields)._._._.m_CachedPtr;
        if (pvVar17 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar16,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar17);
        fStackX_8 = VVar20.x;
        (this->fields).boostEffectStatPositionX =
             ((float)uStack_19 - (float)uStack_10 * fStackX_8) + (float)auStack_7._0_4_;
      }
      pRVar16 = (this->fields).boostEffectTransform;
      if (pRVar16 != (RectTransform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        auStack_7._0_4_ = 0.0;
        auStack_7._4_4_ = 0.0;
        uStack_9 = uStack_9 & 0xffffffff00000000;
        pvVar17 = (pRVar16->fields)._._._.m_CachedPtr;
        if (pvVar17 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar16,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar17);
        pRVar16 = (this->fields).boostEffectTransform;
        fVar21 = (float)uStack_9;
        fVar13 = (this->fields).boostEffectStatPositionX;
        auStack_8 = auStack_7;
        if (pRVar16 != (RectTransform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_18 = 0;
          uStack_19 = 0;
          pvVar17 = (pRVar16->fields)._._._.m_CachedPtr;
          if (pvVar17 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar16,(MethodInfo *)0x0);
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
          (*pcRam_?)(pvVar17);
          pRVar16 = (this->fields).boostEffectTransform;
          if (pRVar16 != (RectTransform *)0x0) {
            VVar20 = UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                               (pRVar16,(MethodInfo *)0x0);
            pRVar16 = (this->fields).boostEffectTransform;
            if (pRVar16 != (RectTransform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              auStack_7._0_4_ = 0.0;
              auStack_7._4_4_ = 0.0;
              uStack_9 = 0;
              pvVar17 = (pRVar16->fields)._._._.m_CachedPtr;
              if (pvVar17 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar16,(MethodInfo *)0x0);
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
              (*pcRam_?)(pvVar17);
              fStackX_8 = VVar20.x;
              pRVar16 = (this->fields).boostEffectTransform;
              auStack_8._0_4_ = fVar13 - ((float)uStack_19 - (float)uStack_9 * fStackX_8);
              if (pRVar16 != (RectTransform *)0x0) {
                uStack_10 = CONCAT44(uStack_10._4_4_,fVar21);
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar17 = (pRVar16->fields)._._._.m_CachedPtr;
                if (pvVar17 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar16,(MethodInfo *)0x0);
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
                (*pcRam_?)(pvVar17);
                pRVar16 = (this->fields).boostEffectTransform;
                if ((pRVar16 != (RectTransform *)0x0) &&
                   (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pRVar16,(MethodInfo *)0x0),
                   pGVar22 != (GameObject *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar17 = (pGVar22->fields)._.m_CachedPtr;
                  if (pvVar17 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar22,(MethodInfo *)0x0);
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
                  cVar23 = (*pcRam_?)(pvVar17);
                  if (cVar23 != '\0') {
                    pRVar16 = (this->fields).boostEffectTransform;
                    if ((pRVar16 == (RectTransform *)0x0) ||
                       (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pRVar16,(MethodInfo *)0x0),
                       pGVar22 == (GameObject *)0x0)) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar22,0,(MethodInfo *)0x0);
                  }
                  pPVar24 = (this->fields).xpFillBar;
                  if (pPVar24 != (ProgressBar *)0x0) {
                    pSVar25 = (pPVar24->fields).progressBar;
                    (pPVar24->fields).progress = 0.0;
                    if (pSVar25 != (Scrollbar *)0x0) {
                      UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                                (pSVar25,0.0,(MethodInfo *)0x0);
                      pPVar24 = (this->fields).xpFillBarBackground;
                      if (pPVar24 != (ProgressBar *)0x0) {
                        pSVar25 = (pPVar24->fields).progressBar;
                        (pPVar24->fields).progress = 0.0;
                        if (pSVar25 != (Scrollbar *)0x0) {
                          UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                                    (pSVar25,0.0,(MethodInfo *)0x0);
                          pGVar22 = (this->fields).glowEffectGameObject;
                          if ((pGVar22 != (GameObject *)0x0) &&
                             (pTVar26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_get_transform(pGVar22,(MethodInfo *)0x0),
                             pTVar26 != (Transform *)0x0)) {
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            auStack_7._0_4_ = 0.0;
                            auStack_7._4_4_ = 0.0;
                            uStack_9 = uStack_9 & 0xffffffff00000000;
                            pvVar17 = (pTVar26->fields)._._.m_CachedPtr;
                            if (pvVar17 == (void *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException
                                        ((Object *)pTVar26,(MethodInfo *)0x0);
                              pcVar11 = (code *)swi(3);
                              (*pcVar11)();
                              return;
                            }
                            pcVar11 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar11 = (code *)FUN_?(&UNK_?),
                               pcVar11 == (code *)0x0)) {
                              uVar12 = func_?(&UNK_?);
                              FUN_?(uVar12,0);
                              pcVar11 = (code *)swi(3);
                              (*pcVar11)();
                              return;
                            }
                            pcRam_? = pcVar11;
                            (*pcRam_?)(pvVar17);
                            pGVar22 = (this->fields).glowEffectGameObject;
                            if (pGVar22 != (GameObject *)0x0) {
                              pTVar26 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_get_transform(pGVar22,(MethodInfo *)0x0);
                              if (pTVar26 != (Transform *)0x0) {
                                auStack_8._4_4_ = _UNK_?;
                                auStack_8._0_4_ = _UNK_?;
                                uStack_10 = CONCAT44(uStack_10._4_4_,(float)uStack_9);
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pvVar17 = (pTVar26->fields)._._.m_CachedPtr;
                                if (pvVar17 == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pTVar26,(MethodInfo *)0x0);
                                  pcVar11 = (code *)swi(3);
                                  (*pcVar11)();
                                  return;
                                }
                                pcVar11 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar11 = (code *)FUN_?(&UNK_?),
                                   pcVar11 == (code *)0x0)) {
                                  uVar12 = func_?(&UNK_?);
                                  FUN_?(uVar12,0);
                                  pcVar11 = (code *)swi(3);
                                  (*pcVar11)();
                                  return;
                                }
                                pcRam_? = pcVar11;
                                (*pcRam_?)(pvVar17);
                                pGVar22 = (this->fields).glowEffectGameObject;
                                if (pGVar22 != (GameObject *)0x0) {
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pvVar17 = (pGVar22->fields)._.m_CachedPtr;
                                  if (pvVar17 == (void *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              ((Object *)pGVar22,(MethodInfo *)0x0);
                                    pcVar11 = (code *)swi(3);
                                    (*pcVar11)();
                                    return;
                                  }
                                  pcVar11 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar11 = (code *)FUN_?(&UNK_?),
                                     pcVar11 == (code *)0x0)) {
                                    uVar12 = func_?(&UNK_?);
                                    FUN_?(uVar12,0);
                                    pcVar11 = (code *)swi(3);
                                    (*pcVar11)();
                                    return;
                                  }
                                  pcRam_? = pcVar11;
                                  cVar23 = (*pcRam_?)(pvVar17);
                                  if (cVar23 != '\0') {
                                    pGVar22 = (this->fields).glowEffectGameObject;
                                    if (pGVar22 == (GameObject *)0x0) goto code_?;
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive(pGVar22,0,(MethodInfo *)0x0);
                                  }
                                  pGVar27 = (this->fields).arrowGradientEffect;
                                  if (pGVar27 != (GradientEffect *)0x0) {
                                    pCVar28 = &(pGVar27->fields).bottom;
                                    auStack_8._0_4_ = pCVar28->r;
                                    auStack_8._4_4_ = pCVar28->g;
                                    fVar21 = pCVar28->g;
                                    fVar13 = (pGVar27->fields).bottom.b;
                                    uStack_10 = (ulonglong)(uint)fVar13;
                                    (pGVar27->fields).bottom.r = pCVar28->r;
                                    (pGVar27->fields).bottom.g = fVar21;
                                    (pGVar27->fields).bottom.b = (float)uStack_10;
                                    (pGVar27->fields).bottom.a = (float)uStack_10._4_4_;
                                    pGVar27 = (this->fields).arrowGradientEffect;
                                    uStack_10 = (ulonglong)(uint)fVar13;
                                    if (pGVar27 != (GradientEffect *)0x0) {
                                      (pGVar27->fields).top.r = (float)auStack_8._0_4_;
                                      (pGVar27->fields).top.g = (float)auStack_8._4_4_;
                                      (pGVar27->fields).top.b = (float)uStack_10;
                                      (pGVar27->fields).top.a = (float)uStack_10._4_4_;
                                      pTVar14 = (this->fields).xpText;
                                      if ((pTVar14 != (Text *)0x0) &&
                                         (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Component::Component_get_gameObject
                                                              ((Component *)pTVar14,(MethodInfo *)0x0
                                                              ), pGVar22 != (GameObject *)0x0)) {
                                        if (cRam_? == '\0') {
                                          FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        pvVar17 = (pGVar22->fields)._.m_CachedPtr;
                                        if (pvVar17 == (void *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                          ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                    ((Object *)pGVar22,(MethodInfo *)0x0);
                                          pcVar11 = (code *)swi(3);
                                          (*pcVar11)();
                                          return;
                                        }
                                        pcVar11 = pcRam_?;
                                        if ((pcRam_? == (code *)0x0) &&
                                           (pcVar11 = (code *)FUN_?(&UNK_?),
                                           pcVar11 == (code *)0x0)) {
                                          uVar12 = func_?(&UNK_?);
                                          FUN_?(uVar12,0);
                                          pcVar11 = (code *)swi(3);
                                          (*pcVar11)();
                                          return;
                                        }
                                        pcRam_? = pcVar11;
                                        cVar23 = (*pcRam_?)(pvVar17);
                                        if (cVar23 != '\0') {
                                          pTVar14 = (this->fields).xpText;
                                          if ((pTVar14 == (Text *)0x0) ||
                                             (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        Component::Component_get_gameObject
                                                                  ((Component *)pTVar14,
                                                                   (MethodInfo *)0x0),
                                             pGVar22 == (GameObject *)0x0))
                                          goto code_?;
                                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_SetActive(pGVar22,0,(MethodInfo *)0x0);
                                        }
                                        pTVar14 = (this->fields).unboostedXpText;
                                        if ((pTVar14 != (Text *)0x0) &&
                                           (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_get_gameObject
                                                                ((Component *)pTVar14,
                                                                 (MethodInfo *)0x0),
                                           pGVar22 != (GameObject *)0x0)) {
                                          if (cRam_? == '\0') {
                                            FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                            LOCK();
                                            UNLOCK();
                                            cRam_? = '\x01';
                                          }
                                          pvVar17 = (pGVar22->fields)._.m_CachedPtr;
                                          if (pvVar17 == (void *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                            ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                      ((Object *)pGVar22,(MethodInfo *)0x0);
                                            pcVar11 = (code *)swi(3);
                                            (*pcVar11)();
                                            return;
                                          }
                                          pcVar11 = pcRam_?;
                                          if ((pcRam_? == (code *)0x0) &&
                                             (pcVar11 = (code *)FUN_?(&UNK_?),
                                             pcVar11 == (code *)0x0)) {
                                            uVar12 = func_?(&UNK_?);
                                            FUN_?(uVar12,0);
                                            pcVar11 = (code *)swi(3);
                                            (*pcVar11)();
                                            return;
                                          }
                                          pcRam_? = pcVar11;
                                          cVar23 = (*pcRam_?)(pvVar17);
                                          if (cVar23 == '\0') {
                                            pTVar14 = (this->fields).unboostedXpText;
                                            if ((pTVar14 == (Text *)0x0) ||
                                               (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Component::Component_get_gameObject
                                                                    ((Component *)pTVar14,
                                                                     (MethodInfo *)0x0),
                                               pGVar22 == (GameObject *)0x0))
                                            goto code_?;
                                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_SetActive(pGVar22,1,(MethodInfo *)0x0);
                                          }
                                          pXVar1 = (this->fields).xpBoostParticlesPreview;
                                          if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
                                            if ((pXVar1->fields).isParticlesPlaying == 0) {
                                              return;
                                            }
                                            pPVar29 = (pXVar1->fields).xpBoostParticles;
                                            (pXVar1->fields).isParticlesPlaying = 0;
                                            if (pPVar29 != (ParticleSystem *)0x0) {
                                              UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                              ParticleSystem::ParticleSystem_Stop_1
                                                        (pPVar29,1,(MethodInfo *)0x0);
                                              pPVar29 = (pXVar1->fields).xpBoostParticles;
                                              if ((pPVar29 != (ParticleSystem *)0x0) &&
                                                 (pGVar22 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::Component::Component_get_gameObject
                                                                      ((Component *)pPVar29,
                                                                       (MethodInfo *)0x0),
                                                 pGVar22 != (GameObject *)0x0)) {
                                                UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_SetActive(pGVar22,0,(MethodInfo *)0x0);
                                                return;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  goto code_?;
                                }
                              }
                            }
                            FUN_?();
                            pcVar11 = (code *)swi(3);
                            (*pcVar11)();
                            return;
                          }
                        }
                      }
                    }
                  }
                  goto code_?;
                }
              }
              FUN_?();
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
        }
      }
code_?:
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::XPNotificationBoostedBehaviour_Reset
               (XPNotificationBoostedBehaviour *this,MethodInfo *method)

{
  pRVar1 = (this->fields).boostEffectTransform;
  if (pRVar1 != (RectTransform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pRVar1->fields)._._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
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
    pRVar1 = (this->fields).boostEffectTransform;
    if (pRVar1 != (RectTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (pRVar1->fields)._._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
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
      pRVar1 = (this->fields).boostEffectTransform;
      if (pRVar1 != (RectTransform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::RectTransform::RectTransform_get_pivot
                  (pRVar1,(MethodInfo *)0x0);
        pRVar1 = (this->fields).boostEffectTransform;
        if (pRVar1 != (RectTransform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar2 = (pRVar1->fields)._._._.m_CachedPtr;
          if (pvVar2 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
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
          pRVar1 = (this->fields).boostEffectTransform;
          if (pRVar1 != (RectTransform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar2 = (pRVar1->fields)._._._.m_CachedPtr;
            if (pvVar2 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar1,(MethodInfo *)0x0);
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
            pRVar1 = (this->fields).boostEffectTransform;
            if ((pRVar1 != (RectTransform *)0x0) &&
               (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
               pGVar5 != (GameObject *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar2 = (pGVar5->fields)._.m_CachedPtr;
              if (pvVar2 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar5,(MethodInfo *)0x0);
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
              cVar6 = (*pcRam_?)(pvVar2);
              if (cVar6 != '\0') {
                pRVar1 = (this->fields).boostEffectTransform;
                if ((pRVar1 == (RectTransform *)0x0) ||
                   (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pRVar1,(MethodInfo *)0x0),
                   pGVar5 == (GameObject *)0x0)) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar5,0,(MethodInfo *)0x0);
              }
              pPVar7 = (this->fields).xpFillBar;
              if (pPVar7 != (ProgressBar *)0x0) {
                pSVar8 = (pPVar7->fields).progressBar;
                (pPVar7->fields).progress = 0.0;
                if (pSVar8 != (Scrollbar *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                            (pSVar8,0.0,(MethodInfo *)0x0);
                  pPVar7 = (this->fields).xpFillBarBackground;
                  if (pPVar7 != (ProgressBar *)0x0) {
                    pSVar8 = (pPVar7->fields).progressBar;
                    (pPVar7->fields).progress = 0.0;
                    if (pSVar8 != (Scrollbar *)0x0) {
                      UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                                (pSVar8,0.0,(MethodInfo *)0x0);
                      pGVar5 = (this->fields).glowEffectGameObject;
                      if ((pGVar5 != (GameObject *)0x0) &&
                         (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_get_transform(pGVar5,(MethodInfo *)0x0),
                         pTVar9 != (Transform *)0x0)) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar2 = (pTVar9->fields)._._.m_CachedPtr;
                        if (pvVar2 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pTVar9,(MethodInfo *)0x0);
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        pcVar3 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)
                           ) {
                          uVar4 = func_?(&UNK_?);
                          FUN_?(uVar4,0);
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        pcRam_? = pcVar3;
                        (*pcRam_?)(pvVar2);
                        pGVar5 = (this->fields).glowEffectGameObject;
                        if ((pGVar5 != (GameObject *)0x0) &&
                           (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_get_transform(pGVar5,(MethodInfo *)0x0),
                           pTVar9 != (Transform *)0x0)) {
                          if (cRam_? == '\0') {
                            FUN_?(&
                                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                         );
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          pvVar2 = (pTVar9->fields)._._.m_CachedPtr;
                          if (pvVar2 == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                            ThrowHelper_2_ThrowNullReferenceException
                                      ((Object *)pTVar9,(MethodInfo *)0x0);
                            pcVar3 = (code *)swi(3);
                            (*pcVar3)();
                            return;
                          }
                          pcVar3 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar3 = (code *)FUN_?(&UNK_?),
                             pcVar3 == (code *)0x0)) {
                            uVar4 = func_?(&UNK_?);
                            FUN_?(uVar4,0);
                            pcVar3 = (code *)swi(3);
                            (*pcVar3)();
                            return;
                          }
                          pcRam_? = pcVar3;
                          (*pcRam_?)(pvVar2);
                          pGVar5 = (this->fields).glowEffectGameObject;
                          if (pGVar5 != (GameObject *)0x0) {
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            pvVar2 = (pGVar5->fields)._.m_CachedPtr;
                            if (pvVar2 == (void *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException
                                        ((Object *)pGVar5,(MethodInfo *)0x0);
                              pcVar3 = (code *)swi(3);
                              (*pcVar3)();
                              return;
                            }
                            pcVar3 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar3 = (code *)FUN_?(&UNK_?),
                               pcVar3 == (code *)0x0)) {
                              uVar4 = func_?(&UNK_?);
                              FUN_?(uVar4,0);
                              pcVar3 = (code *)swi(3);
                              (*pcVar3)();
                              return;
                            }
                            pcRam_? = pcVar3;
                            cVar6 = (*pcRam_?)(pvVar2);
                            if (cVar6 != '\0') {
                              pGVar5 = (this->fields).glowEffectGameObject;
                              if (pGVar5 == (GameObject *)0x0) goto code_?;
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar5,0,(MethodInfo *)0x0);
                            }
                            pGVar10 = (this->fields).arrowGradientEffect;
                            if (pGVar10 != (GradientEffect *)0x0) {
                              pCVar11 = &(pGVar10->fields).bottom;
                              fVar12 = pCVar11->r;
                              fVar13 = pCVar11->g;
                              fVar14 = pCVar11->g;
                              fVar15 = (pGVar10->fields).bottom.b;
                              (pGVar10->fields).bottom.r = pCVar11->r;
                              (pGVar10->fields).bottom.g = fVar14;
                              (pGVar10->fields).bottom.b = (float)(int)(ulonglong)(uint)fVar15;
                              (pGVar10->fields).bottom.a =
                                   (float)(int)((ulonglong)(uint)fVar15 >> 0x20);
                              pGVar10 = (this->fields).arrowGradientEffect;
                              if (pGVar10 != (GradientEffect *)0x0) {
                                (pGVar10->fields).top.r = fVar12;
                                (pGVar10->fields).top.g = fVar13;
                                (pGVar10->fields).top.b = (float)(int)(ulonglong)(uint)fVar15;
                                (pGVar10->fields).top.a =
                                     (float)(int)((ulonglong)(uint)fVar15 >> 0x20);
                                pTVar16 = (this->fields).xpText;
                                if ((pTVar16 != (Text *)0x0) &&
                                   (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                              Component_get_gameObject
                                                        ((Component *)pTVar16,(MethodInfo *)0x0),
                                   pGVar5 != (GameObject *)0x0)) {
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pvVar2 = (pGVar5->fields)._.m_CachedPtr;
                                  if (pvVar2 == (void *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              ((Object *)pGVar5,(MethodInfo *)0x0);
                                    pcVar3 = (code *)swi(3);
                                    (*pcVar3)();
                                    return;
                                  }
                                  pcVar3 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar3 = (code *)FUN_?(&UNK_?),
                                     pcVar3 == (code *)0x0)) {
                                    uVar4 = func_?(&UNK_?);
                                    FUN_?(uVar4,0);
                                    pcVar3 = (code *)swi(3);
                                    (*pcVar3)();
                                    return;
                                  }
                                  pcRam_? = pcVar3;
                                  cVar6 = (*pcRam_?)(pvVar2);
                                  if (cVar6 != '\0') {
                                    pTVar16 = (this->fields).xpText;
                                    if ((pTVar16 == (Text *)0x0) ||
                                       (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component
                                                  ::Component_get_gameObject
                                                            ((Component *)pTVar16,(MethodInfo *)0x0),
                                       pGVar5 == (GameObject *)0x0)) goto code_?;
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_SetActive(pGVar5,0,(MethodInfo *)0x0);
                                  }
                                  pTVar16 = (this->fields).unboostedXpText;
                                  if ((pTVar16 != (Text *)0x0) &&
                                     (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                                Component_get_gameObject
                                                          ((Component *)pTVar16,(MethodInfo *)0x0),
                                     pGVar5 != (GameObject *)0x0)) {
                                    if (cRam_? == '\0') {
                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                                  );
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    pvVar2 = (pGVar5->fields)._.m_CachedPtr;
                                    if (pvVar2 == (void *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper
                                      ::ThrowHelper_2_ThrowNullReferenceException
                                                ((Object *)pGVar5,(MethodInfo *)0x0);
                                      pcVar3 = (code *)swi(3);
                                      (*pcVar3)();
                                      return;
                                    }
                                    pcVar3 = pcRam_?;
                                    if ((pcRam_? == (code *)0x0) &&
                                       (pcVar3 = (code *)FUN_?(&UNK_?),
                                       pcVar3 == (code *)0x0)) {
                                      uVar4 = func_?(&UNK_?);
                                      FUN_?(uVar4,0);
                                      pcVar3 = (code *)swi(3);
                                      (*pcVar3)();
                                      return;
                                    }
                                    pcRam_? = pcVar3;
                                    cVar6 = (*pcRam_?)(pvVar2);
                                    if (cVar6 == '\0') {
                                      pTVar16 = (this->fields).unboostedXpText;
                                      if ((pTVar16 == (Text *)0x0) ||
                                         (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Component::Component_get_gameObject
                                                              ((Component *)pTVar16,(MethodInfo *)0x0
                                                              ), pGVar5 == (GameObject *)0x0))
                                      goto code_?;
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_SetActive(pGVar5,1,(MethodInfo *)0x0);
                                    }
                                    pXVar17 = (this->fields).xpBoostParticlesPreview;
                                    if (pXVar17 != (XpBoostParticlePreviewer *)0x0) {
                                      if ((pXVar17->fields).isParticlesPlaying == 0) {
                                        return;
                                      }
                                      pPVar18 = (pXVar17->fields).xpBoostParticles;
                                      (pXVar17->fields).isParticlesPlaying = 0;
                                      if (pPVar18 != (ParticleSystem *)0x0) {
                                        UnityEngine.ParticleSystemModule.dll::UnityEngine::
                                        ParticleSystem::ParticleSystem_Stop_1
                                                  (pPVar18,1,(MethodInfo *)0x0);
                                        pPVar18 = (pXVar17->fields).xpBoostParticles;
                                        if ((pPVar18 != (ParticleSystem *)0x0) &&
                                           (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Component::Component_get_gameObject
                                                                ((Component *)pPVar18,
                                                                 (MethodInfo *)0x0),
                                           pGVar5 != (GameObject *)0x0)) {
                                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_SetActive(pGVar5,0,(MethodInfo *)0x0);
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            goto code_?;
                          }
                        }
                        FUN_?();
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                    }
                  }
                }
              }
              goto code_?;
            }
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::XPNotificationBoostedBehaviour::XPNotificationBoostedBehaviour_Update
               (XPNotificationBoostedBehaviour *this,MethodInfo *method)

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
  fVar4 = _UNK_?;
  fVar3 = fVar3 - (this->fields).startTime;
  if (_UNK_? < fVar3) {
    pPVar5 = (this->fields).xpFillBar;
    if (pPVar5 == (ProgressBar *)0x0) goto DAT_?;
    fVar6 = (fVar3 - _UNK_?) / _UNK_?;
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    else if (_UNK_? < fVar6) {
      fVar6 = _UNK_?;
    }
    pSVar7 = (pPVar5->fields).progressBar;
    (pPVar5->fields).progress = fVar6;
    if (pSVar7 == (Scrollbar *)0x0) goto DAT_?;
    UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
              (pSVar7,fVar6,(MethodInfo *)0x0);
    pPVar5 = (this->fields).xpFillBarBackground;
    if (pPVar5 == (ProgressBar *)0x0) goto DAT_?;
    fVar6 = (fVar3 - fVar4) / _UNK_?;
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    else if (fVar4 < fVar6) {
      fVar6 = fVar4;
    }
    (pPVar5->fields).progress = fVar6;
    pSVar7 = (pPVar5->fields).progressBar;
    if (pSVar7 == (Scrollbar *)0x0) goto DAT_?;
    UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
              (pSVar7,fVar6,(MethodInfo *)0x0);
  }
  fVar4 = _UNK_?;
  if (_UNK_? < fVar3) {
    XPNotificationBoostedBehaviour_DoBoostEffect(this,fVar3,(MethodInfo *)0x0);
    XPNotificationBoostedBehaviour_DoGradientEffect(this,fVar3,(MethodInfo *)0x0);
  }
  if (_UNK_? < fVar3) {
    XPNotificationBoostedBehaviour_DoGlowEffect(this,fVar3,(MethodInfo *)0x0);
  }
  if (_UNK_? < fVar3) {
    XPNotificationBoostedBehaviour_DoSlideOutEffect(this,(MethodInfo *)0x0);
  }
  if (fVar3 <= fVar4) {
    return;
  }
  pXVar8 = (this->fields).xpBoostParticlesPreview;
  if (pXVar8 != (XpBoostParticlePreviewer *)0x0) {
    if ((pXVar8->fields).isParticlesPlaying != 0) {
      return;
    }
    pPVar9 = (pXVar8->fields).xpBoostParticles;
    (pXVar8->fields).isParticlesPlaying = 1;
    if ((pPVar9 != (ParticleSystem *)0x0) &&
       (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pPVar9,(MethodInfo *)0x0), this_00 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      pPVar9 = (pXVar8->fields).xpBoostParticles;
      if (pPVar9 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                  (pPVar9,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

