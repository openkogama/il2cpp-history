
/* Void AvatarStateChangedHandler(Object) */

void Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier_AvatarStateChangedHandler
               (ShieldedModifier *this,Object *state,MethodInfo *method)

{
  if (state != (Object *)0x0) {
    if ((state->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(state);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((ulonglong)state[1].klass & 4) == 0) {
      if (((ulonglong)state[1].klass & 1) == 0) {
        return;
      }
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        uVar3 = _UNK_?;
        fVar4 = _UNK_?;
        fVar5 = _UNK_?;
        fVar6 = _UNK_?;
        pRVar7 = (this->fields).lineRenderer;
        if (pRVar7 != (RotatingShieldLine *)0x0) {
          if ((pRVar7->fields).recreatOrbs != 0) {
            fVar8 = 0.0;
            iVar9 = 0;
            do {
              fVar10 = (pRVar7->fields).radius;
              fVar11 = (float)FUN_?(fVar8 * fVar6);
              fVar12 = (float)FUN_?(fVar8 * fVar6);
              fVar8 = fVar8 + fVar4;
              uStack_13 = CONCAT44(fVar12 * fVar10 * fVar5,fVar11 * fVar10 * fVar5);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar14 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar15 = (pVVar14->zeroVector).x;
              uVar16 = (pVVar14->zeroVector).y;
              fVar11 = (pVVar14->zeroVector).z;
              fVar12 = (float)FUN_?(uVar3);
              fVar17 = (float)FUN_?(uVar3);
              fVar18 = (float)FUN_?(uVar3);
              fVar19 = (float)FUN_?(uVar3);
              obj = (pRVar7->fields).orbSpawner;
              uStack_20 = (ulonglong)
                           CONCAT31(CONCAT21(CONCAT11((char)(int)fVar19,(char)(int)fVar18),
                                             (char)(int)fVar17),(char)(int)fVar12);
              if (obj == (ParticleSystem *)0x0) {
                FUN_?();
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              uStack_21 = CONCAT44(uVar15,fVar10 * 0.0 * fVar5);
              uStack_22 = CONCAT44(fVar11,uVar16);
              uStack_23 = uStack_13;
              uStack_24 = 0x3e99999a00000000;
              uStack_25 = 0x3e99999a3e99999a;
              uStack_26 = 0;
              uStack_27 = uStack_20;
              uStack_28 = 0;
              uStack_29 = 0x47c35000;
              uStack_30 = 0;
              uStack_31 = 0;
              uStack_32 = 0;
              uStack_33 = 0;
              uStack_34 = 0x101;
              uStack_35 = 0x10100;
              uStack_36 = 1;
              uStack_37 = 0;
              uStack_38 = 0;
              uStack_39 = 0;
              uStack_40 = 0;
              uStack_41 = 0;
              uStack_42 = 0;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar43 = (obj->fields)._._.m_CachedPtr;
              if (pvVar43 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcVar1 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                uVar44 = func_?(&UNK_?);
                FUN_?(uVar44,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcRam_? = pcVar1;
              (*pcRam_?)(pvVar43,&uStack_23,1);
              iVar9 = iVar9 + 1;
            } while (iVar9 < 3);
          }
          return;
        }
      }
    }
    else {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        pRVar7 = (this->fields).lineRenderer;
        if (pRVar7 != (RotatingShieldLine *)0x0) {
          (pRVar7->fields).recreatOrbs = 1;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* IEnumerator MakeVisible(Single, Single) */

IEnumerator *
Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier_MakeVisible
          (ShieldedModifier *this,float fadeInTime,float fadeOutTime,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ShieldedModifier___MakeVisible_d__14);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__ShieldedModifier___MakeVisible_d__14);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  *(float *)&pIVar1[2].monitor = fadeInTime;
  *(float *)((longlong)&pIVar1[2].monitor + 4) = fadeOutTime;
  return pIVar1;
}


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier_OnActivated
               (ShieldedModifier *this,Avatar *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ShieldedModifier__AvatarStateChangedHandler_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ShieldedModifier__OnHealthChange_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Torso);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields)._.owner = target;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.owner >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  pAVar7 = (this->fields)._.owner;
  if ((((pAVar7 != (Avatar *)0x0) && (pMVar8 = (pAVar7->fields).mvAvatar, pMVar8 != (MVAvatar *)0x0)
       ) && (pMVar9 = (pMVar8->fields).body, pMVar9 != (MVBody *)0x0)) &&
     (pTVar6 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (pTVar6,(pMVar9->fields)._._._.transform,1,(MethodInfo *)0x0);
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar6 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar10 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar10);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar10 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar10);
      this_00 = (this->fields).shieldRenderer;
      if (this_00 != (MeshRenderer *)0x0) {
        pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                            ((Renderer *)this_00,(MethodInfo *)0x0);
        bVar1 = iRam_? != 0;
        (this->fields).shieldMat = pMVar13;
        if (bVar1) {
          uVar2 = (uint)((ulonglong)&(this->fields).shieldMat >> 0xc);
          uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
          do {
            uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
            puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
            LOCK();
            bVar1 = uVar4 == *puVar5;
            if (bVar1) {
              *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (!bVar1);
        }
        pAVar7 = (this->fields)._.owner;
        if (((pAVar7 != (Avatar *)0x0) &&
            (pMVar8 = (pAVar7->fields).mvAvatar, pMVar8 != (MVAvatar *)0x0)) &&
           (pMVar14 = (pMVar8->fields).Health,
           pMVar14 != (MVRuntimeDataVariable_1_System_Single_ *)0x0)) {
          fVar15 = (float)(*(pMVar14->klass->vtable).get_Value.methodPtr)
                                    (pMVar14,(pMVar14->klass->vtable).get_Value.method);
          pAVar7 = (this->fields)._.owner;
          (this->fields).prevHealth = fVar15;
          if (((pAVar7 != (Avatar *)0x0) &&
              (pMVar8 = (pAVar7->fields).mvAvatar, pMVar8 != (MVAvatar *)0x0)) &&
             (pMVar14 = (pMVar8->fields).Health,
             pMVar14 != (MVRuntimeDataVariable_1_System_Single_ *)0x0)) {
            pMVar16 = (pMVar14->fields)._.OnChange;
            pUVar17 = (UnityAction_1_System_Object_ *)
                      FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (pUVar17,(Object *)this,
                       MethodInfo__ShieldedModifier__OnHealthChange_System__Object_,
                       (MethodInfo *)0x0);
            pMVar18 = (MVRuntimeDataVariable_OnChangeDelegate *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pMVar16,(Delegate *)pUVar17,(MethodInfo *)0x0);
            pMVar16 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            if (pMVar18 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              (pMVar14->fields)._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
            }
            else {
              pMVar19 = pMVar16;
              if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar19 = pMVar18;
              }
              if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              (pMVar14->fields)._.OnChange = pMVar19;
              pMVar19 = pMVar16;
              if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                pMVar19 = pMVar18;
              }
              if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                FUN_?();
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar2 = (uint)((ulonglong)&(pMVar14->fields)._.OnChange >> 0xc);
              uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
              do {
                uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                LOCK();
                bVar1 = uVar4 == *puVar5;
                if (bVar1) {
                  *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                }
                UNLOCK();
              } while (!bVar1);
            }
            pRVar20 = (this->fields).lineRenderer;
            if (pRVar20 != (RotatingShieldLine *)0x0) {
              RotatingShieldLine::RotatingShieldLine_Initialize(pRVar20,(MethodInfo *)0x0);
              pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this,(MethodInfo *)0x0);
              pAVar7 = (this->fields)._.owner;
              if (((pAVar7 != (Avatar *)0x0) &&
                  (pMVar8 = (pAVar7->fields).mvAvatar, pMVar8 != (MVAvatar *)0x0)) &&
                 ((pMVar9 = (pMVar8->fields).body, pMVar9 != (MVBody *)0x0 &&
                  (((pMVar21 = (pMVar9->fields).bodyObject, pMVar21 != (MVBodyObject *)0x0 &&
                    (this_01 = (pMVar21->fields).bodyData, this_01 != (BodyData *)0x0)) &&
                   (parent = BodyData::BodyData_GetPartBone_1
                                       (this_01,StringLiteral_Torso,(MethodInfo *)0x0),
                   pTVar6 != (Transform *)0x0)))))) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (pTVar6,parent,1,(MethodInfo *)0x0);
                pAVar7 = (this->fields)._.owner;
                if (((pAVar7 != (Avatar *)0x0) &&
                    (pMVar8 = (pAVar7->fields).mvAvatar, pMVar8 != (MVAvatar *)0x0)) &&
                   (pMVar22 = (pMVar8->fields).SpawnRoleModeTypes,
                   pMVar22 != (MVRuntimeDataVariable *)0x0)) {
                  pMVar18 = (pMVar22->fields).OnChange;
                  pUVar17 = (UnityAction_1_System_Object_ *)
                            FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
                  UnityAction_1_System_Object___ctor
                            (pUVar17,(Object *)this,
                             MethodInfo__ShieldedModifier__AvatarStateChangedHandler_System__Object_
                             ,(MethodInfo *)0x0);
                  pMVar18 = (MVRuntimeDataVariable_OnChangeDelegate *)
                            mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)pMVar18,(Delegate *)pUVar17,(MethodInfo *)0x0);
                  if (pMVar18 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                    (pMVar22->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                  }
                  else {
                    pMVar19 = pMVar16;
                    if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                      pMVar19 = pMVar18;
                    }
                    if (pMVar19 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                      FUN_?(pMVar18);
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    (pMVar22->fields).OnChange = pMVar19;
                    if (pMVar18->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                      pMVar16 = pMVar18;
                    }
                    if (pMVar16 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                      FUN_?(pMVar18);
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                  }
                  if (iRam_? != 0) {
                    uVar2 = (uint)((ulonglong)&(pMVar22->fields).OnChange >> 0xc);
                    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
                    do {
                      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
                      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
                      LOCK();
                      bVar1 = uVar4 == *puVar5;
                      if (bVar1) {
                        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
                      }
                      UNLOCK();
                    } while (!bVar1);
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
                      (IPlayModeUI *)0x0) {
                    cVar23 = FUN_?(7);
                    if (cVar23 == '\0') {
                      return;
                    }
                    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                    if (this_02 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (this_02,0,(MethodInfo *)0x0);
                      pRVar20 = (this->fields).lineRenderer;
                      if (pRVar20 != (RotatingShieldLine *)0x0) {
                        (pRVar20->fields).recreatOrbs = 1;
                        return;
                      }
                    }
                    goto code_?;
                  }
                }
              }
            }
          }
        }
      }
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


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier_OnDeactivated
               (ShieldedModifier *this,Avatar *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ShieldedModifier__AvatarStateChangedHandler_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ShieldedModifier__OnHealthChange_System__Object_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._.owner;
  if (((pAVar1 != (Avatar *)0x0) && (pMVar2 = (pAVar1->fields).mvAvatar, pMVar2 != (MVAvatar *)0x0))
     && (pMVar3 = (pMVar2->fields).Health, pMVar3 != (MVRuntimeDataVariable_1_System_Single_ *)0x0))
  {
    pMVar4 = (pMVar3->fields)._.OnChange;
    pUVar5 = (UnityAction_1_System_Object_ *)
             FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (pUVar5,(Object *)this,MethodInfo__ShieldedModifier__OnHealthChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
    pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar6 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar3->fields)._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    }
    else {
      pMVar7 = pMVar4;
      if (pMVar6->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar7 = pMVar6;
      }
      if (pMVar7 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (pMVar3->fields)._.OnChange = pMVar7;
      pMVar7 = pMVar4;
      if (pMVar6->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar7 = pMVar6;
      }
      if (pMVar7 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar9 = (uint)((ulonglong)&(pMVar3->fields)._.OnChange >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar13 = uVar11 == *puVar12;
        if (bVar13) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar13);
    }
    pAVar1 = (this->fields)._.owner;
    if (((pAVar1 != (Avatar *)0x0) &&
        (pMVar2 = (pAVar1->fields).mvAvatar, pMVar2 != (MVAvatar *)0x0)) &&
       (pMVar14 = (pMVar2->fields).SpawnRoleModeTypes, pMVar14 != (MVRuntimeDataVariable *)0x0)) {
      pMVar6 = (pMVar14->fields).OnChange;
      pUVar5 = (UnityAction_1_System_Object_ *)
               FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (pUVar5,(Object *)this,
                 MethodInfo__ShieldedModifier__AvatarStateChangedHandler_System__Object_,
                 (MethodInfo *)0x0);
      pMVar6 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pMVar6,(Delegate *)pUVar5,(MethodInfo *)0x0);
      if (pMVar6 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (pMVar14->fields).OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      }
      else {
        pMVar7 = pMVar4;
        if (pMVar6->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar7 = pMVar6;
        }
        if (pMVar7 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?(pMVar6);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (pMVar14->fields).OnChange = pMVar7;
        if (pMVar6->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar4 = pMVar6;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?(pMVar6);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(pMVar14->fields).OnChange >> 0xc);
        uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        do {
          uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar13 = uVar11 == *puVar12;
          if (bVar13) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      pGVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
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
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                      ,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pvVar16 = (void *)0x0;
      if (pGVar15 != (GameObject *)0x0) {
        pvVar16 = (pGVar15->fields)._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar17 = func_?(&UNK_?);
        FUN_?(uVar17,0);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar16,0);
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnHealthChange(Object) */

void Assembly-CSharp.dll::ShieldedModifier::ShieldedModifier_OnHealthChange
               (ShieldedModifier *this,Object *floatHealth,MethodInfo *method)

{
  if (floatHealth == (Object *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((floatHealth->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
    FUN_?(floatHealth);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar2 = *(float *)&floatHealth[1].klass;
  if ((fVar2 < (this->fields).prevHealth) && ((this->fields).readyToPlayEffect != 0)) {
    bVar3 = cRam_? == '\0';
    (this->fields).readyToPlayEffect = 0;
    if (bVar3) {
      FUN_?(&TypeInfo__ShieldedModifier___MakeVisible_d__14);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    routine = (IEnumerator *)FUN_?(TypeInfo__ShieldedModifier___MakeVisible_d__14);
    bVar3 = iRam_? != 0;
    *(undefined4 *)&routine[1].klass = 0;
    routine[2].klass = (IEnumerator__Class *)this;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)(routine + 2) >> 0xc);
      uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar6 == *puVar7;
        if (bVar3) {
          *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
    *(undefined4 *)&routine[2].monitor = 0x3dcccccd;
    *(undefined4 *)((longlong)&routine[2].monitor + 4) = 0x3f19999a;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
              ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  }
  (this->fields).prevHealth = fVar2;
  return;
}

