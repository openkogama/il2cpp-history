
/* Void Init(Int32) */

void Assembly-CSharp.dll::AvatarLevelUp::AvatarLevelUp_Init
               (AvatarLevelUp *this,int32_t ownerActorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AvatarLevelUp__OnLevelChanged_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLevelUp__OnScaleAnimationStopped_float_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).ownerActorNr = ownerActorNr;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar4 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                         (this_00,ownerActorNr,(MethodInfo *)0x0), pMVar4 != (MVPlayer *)0x0)) {
    pUVar5 = (pMVar4->fields).OnLevelChanged;
    pDVar6 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    FUN_?(pDVar6,this);
    pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar5,pDVar6,(MethodInfo *)0x0);
    pUVar7 = TypeInfo__UnityEngine__Events__UnityAction<int>;
    if (pDVar6 == (Delegate *)0x0) {
      (pMVar4->fields).OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
    }
    else {
      pUVar5 = (UnityAction_1_System_Int32_ *)
                FUN_?(pDVar6,TypeInfo__UnityEngine__Events__UnityAction<int>);
      if (pUVar5 == (UnityAction_1_System_Int32_ *)0x0) {
        FUN_?(pDVar6,pUVar7);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (pMVar4->fields).OnLevelChanged = pUVar5;
      pUVar7 = TypeInfo__UnityEngine__Events__UnityAction<int>;
      lVar9 = FUN_?(pDVar6,TypeInfo__UnityEngine__Events__UnityAction<int>);
      if (lVar9 == 0) {
        FUN_?(pDVar6,pUVar7);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar10 = (uint)((ulonglong)&(pMVar4->fields).OnLevelChanged >> 0xc);
      lVar9 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar9 + 0xADDR);
        puVar12 = (ulonglong *)(lVar9 + 0xADDR);
        LOCK();
        bVar1 = uVar11 == *puVar12;
        if (bVar1) {
          *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pSVar13 = (this->fields).scaleAnimation;
    if (pSVar13 != (ScaleAnimation *)0x0) {
      pSVar14 = (pSVar13->fields)._.OnScaleAnimationStopped;
      this_01 = (UnityAction_1_System_Single_ *)
                FUN_?(TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
      UnityAction_1_System_Single___ctor
                (this_01,(Object *)this,MethodInfo__AvatarLevelUp__OnScaleAnimationStopped_float_,
                 (MethodInfo *)0x0);
      pSVar14 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pSVar14,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pSVar14 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
        (pSVar13->fields)._.OnScaleAnimationStopped =
             (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
      }
      else {
        pSVar15 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
        if (pSVar14->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
          pSVar15 = pSVar14;
        }
        if (pSVar15 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
          FUN_?(pSVar14);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (pSVar13->fields)._.OnScaleAnimationStopped = pSVar15;
        pSVar15 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
        if (pSVar14->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
          pSVar15 = pSVar14;
        }
        if (pSVar15 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
          FUN_?(pSVar14);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)&(pSVar13->fields)._.OnScaleAnimationStopped >> 0xc);
        lVar9 = (ulonglong)((uVar10 & 0x1fffff) >> 6) * 8;
        do {
          uVar11 = *(ulonglong *)(lVar9 + 0xADDR);
          puVar12 = (ulonglong *)(lVar9 + 0xADDR);
          LOCK();
          bVar1 = uVar11 == *puVar12;
          if (bVar1) {
            *puVar12 = uVar11 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarLevelUp::AvatarLevelUp_OnDestroy
               (AvatarLevelUp *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__AvatarLevelUp__OnLevelChanged_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLevelUp__OnScaleAnimationStopped_float_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar2 == (MVGameControllerBase *)0x0) goto code_?;
    if ((pMVar2->fields).game != (MVNetworkGame *)0x0) {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 == (MVNetworkGame *)0x0) ||
         (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0))
      goto code_?;
      bVar1 = MVPlayerContainer::MVPlayerContainer_ContainsKey
                        (pMVar4,(this->fields).ownerActorNr,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar3 == (MVNetworkGame *)0x0) ||
            (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0)) ||
           (pMVar5 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                (pMVar4,(this->fields).ownerActorNr,(MethodInfo *)0x0),
           pMVar5 == (MVPlayer *)0x0)) goto code_?;
        pUVar6 = (pMVar5->fields).OnLevelChanged;
        pDVar7 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
        FUN_?(pDVar7,this);
        pDVar7 = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pUVar6,pDVar7,(MethodInfo *)0x0);
        pUVar8 = TypeInfo__UnityEngine__Events__UnityAction<int>;
        if (pDVar7 == (Delegate *)0x0) {
          (pMVar5->fields).OnLevelChanged = (UnityAction_1_System_Int32_ *)0x0;
        }
        else {
          pUVar6 = (UnityAction_1_System_Int32_ *)
                    FUN_?(pDVar7,TypeInfo__UnityEngine__Events__UnityAction<int>);
          if (pUVar6 == (UnityAction_1_System_Int32_ *)0x0) {
            FUN_?(pDVar7,pUVar8);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          (pMVar5->fields).OnLevelChanged = pUVar6;
          pUVar8 = TypeInfo__UnityEngine__Events__UnityAction<int>;
          lVar10 = FUN_?(pDVar7,TypeInfo__UnityEngine__Events__UnityAction<int>);
          if (lVar10 == 0) {
            FUN_?(pDVar7,pUVar8);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        func_?(&(pMVar5->fields).OnLevelChanged);
      }
    }
  }
  pSVar11 = (this->fields).scaleAnimation;
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
  if (pSVar11 != (ScaleAnimation *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar11->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pSVar11 = (this->fields).scaleAnimation;
      if (pSVar11 == (ScaleAnimation *)0x0) {
code_?:
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pSVar12 = (pSVar11->fields)._.OnScaleAnimationStopped;
      this_00 = (UnityAction_1_System_Single_ *)
                FUN_?(TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
      UnityAction_1_System_Single___ctor
                (this_00,(Object *)this,MethodInfo__AvatarLevelUp__OnScaleAnimationStopped_float_,
                 (MethodInfo *)0x0);
      pSVar12 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Remove
                          ((Delegate *)pSVar12,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pSVar12 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
        (pSVar11->fields)._.OnScaleAnimationStopped =
             (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
      }
      else {
        pSVar13 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
        if (pSVar12->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
          pSVar13 = pSVar12;
        }
        if (pSVar13 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
          FUN_?(pSVar12);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        (pSVar11->fields)._.OnScaleAnimationStopped = pSVar13;
        pSVar13 = (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0;
        if (pSVar12->klass == TypeInfo__ScaleAnimationBase__OnScaleAnimationStoppedDelegate) {
          pSVar13 = pSVar12;
        }
        if (pSVar13 == (ScaleAnimationBase_OnScaleAnimationStoppedDelegate *)0x0) {
          FUN_?(pSVar12);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar14 = (uint)((ulonglong)&(pSVar11->fields)._.OnScaleAnimationStopped >> 0xc);
        puVar15 = (ulonglong *)((ulonglong)((uVar14 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar16 = *puVar15;
          LOCK();
          uVar17 = *puVar15;
          if (uVar16 == uVar17) {
            *puVar15 = uVar16 | 1L << (uVar14 & 0x3f);
          }
          UNLOCK();
        } while (uVar16 != uVar17);
      }
    }
  }
  return;
}


/* Void OnLevelChanged(Int32) */

void Assembly-CSharp.dll::AvatarLevelUp::AvatarLevelUp_OnLevelChanged
               (AvatarLevelUp *this,int32_t level,MethodInfo *method)

{
  aIStackX_10[0].m_value = level;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_LEVEL_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).onLevelUpParticleSystem;
  if (pPVar1 != (ParticleSystem *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pPVar1,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      pPVar1 = (this->fields).onLevelUpParticleSystem;
      if (pPVar1 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                  (pPVar1,1,(MethodInfo *)0x0);
        pSVar3 = (this->fields).scaleAnimation;
        if (pSVar3 != (ScaleAnimation *)0x0) {
          (*(pSVar3->klass->vtable).Play.methodPtr)(pSVar3,0);
          pTVar4 = (this->fields).levelText;
          if (pTVar4 != (TextMesh *)0x0) {
            pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)pTVar4,(MethodInfo *)0x0);
            value = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_Default,(MethodInfo *)0x0);
            if (pGVar2 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_set_layer
                        (pGVar2,value,(MethodInfo *)0x0);
              pTVar4 = (this->fields).levelText;
              pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
              pSVar5 = mscorlib.dll::System::String::String_Concat_4
                                 (StringLiteral_LEVEL_,pSVar5,(MethodInfo *)0x0);
              pSVar5 = TM::TM__(pSVar5,(MethodInfo *)0x0);
              if (pTVar4 != (TextMesh *)0x0) {
                UnityEngine.TextRenderingModule.dll::UnityEngine::TextMesh::TextMesh_set_text
                          (pTVar4,pSVar5,(MethodInfo *)0x0);
                pSVar3 = (this->fields).scaleAnimation;
                if (pSVar3 != (ScaleAnimation *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(pSVar3->klass->vtable).Play.methodPtr)
                            (pSVar3,0,(pSVar3->klass->vtable).Play.method);
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnScaleAnimationStopped(Single) */

void Assembly-CSharp.dll::AvatarLevelUp::AvatarLevelUp_OnScaleAnimationStopped
               (AvatarLevelUp *this,float extraTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Hidden);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).levelText;
  if (this_00 != (TextMesh *)0x0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this_00,(MethodInfo *)0x0);
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Hidden,(MethodInfo *)0x0);
    if (obj != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,iVar1,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (obj->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,iVar1);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

