
/* Void Awake() */

void Assembly-CSharp.dll::MutantModifier::MutantModifier_Awake
               (MutantModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  (this->fields).layerMask = 1 << ((byte)iVar1 & 0x1f);
  return;
}


/* IEnumerator DoFadeAndDestroy() */

IEnumerator *
Assembly-CSharp.dll::MutantModifier::MutantModifier_DoFadeAndDestroy
          (MutantModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MutantModifier___DoFadeAndDestroy_d__9);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__MutantModifier___DoFadeAndDestroy_d__9);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::MutantModifier::MutantModifier_OnActivated
               (MutantModifier *this,Avatar *target,MethodInfo *method)

{
  if ((((target != (Avatar *)0x0) && (pMVar1 = (target->fields).mvAvatar, pMVar1 != (MVAvatar *)0x0)
       ) && (pMVar2 = (pMVar1->fields).body, pMVar2 != (MVBody *)0x0)) &&
     ((pMVar3 = (pMVar2->fields).bodyObject, pMVar3 != (MVBodyObject *)0x0 &&
      (this_00 = (pMVar3->fields).avatarBlinker, this_00 != (AvatarBlinker *)0x0)))) {
    BlinkerBase::BlinkerBase_StartBlinking
              ((BlinkerBase *)this_00,BlinkType__Enum_Poison,_UNK_?,(MethodInfo *)0x0);
    bVar4 = iRam_? != 0;
    (this->fields)._.owner = target;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields)._.owner >> 0xc);
      uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar4 = uVar7 == *puVar8;
        if (bVar4) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar4);
    }
    (this->fields).isDeactivating = 0;
    return;
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::MutantModifier::MutantModifier_OnDeactivated
               (MutantModifier *this,Avatar *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (target != (Avatar *)0x0) {
    Avatar::Avatar_StopBlinking(target,BlinkType__Enum_Poison,(MethodInfo *)0x0);
    (this->fields).isDeactivating = 1;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar2 = (pGVar1->fields)._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
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
      cVar5 = (*pcRam_?)(pvVar2);
      if (cVar5 == '\0') {
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
        pvVar2 = (void *)0x0;
        if (pGVar1 != (GameObject *)0x0) {
          pvVar2 = (pGVar1->fields)._.m_CachedPtr;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar2,0);
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MutantModifier___DoFadeAndDestroy_d__9);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      lVar6 = FUN_?(TypeInfo__MutantModifier___DoFadeAndDestroy_d__9);
      bVar7 = iRam_? != 0;
      *(undefined4 *)(lVar6 + 0x10) = 0;
      *(MutantModifier **)(lVar6 + 0x20) = this;
      if (bVar7) {
        uVar8 = (uint)(lVar6 + 0x20U >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      if (lVar6 == 0) {
        uVar4 = func_?(&TypeInfo__System__NullReferenceException,0,0,0,unaff_RSI);
        this_00 = (NullReferenceException *)func_?(uVar4);
        pSVar12 = (String *)func_?(&StringLiteral_routine_is_null);
        mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                  (this_00,pSVar12,(MethodInfo *)0x0);
        uVar4 = func_?(&
                                    MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                   );
        FUN_?(this_00,uVar4);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar13 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
              MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
      if (bVar13 == 0) {
        uVar4 = func_?(&TypeInfo__System__ArgumentException);
        this_01 = (InvalidEnumArgumentException *)func_?(uVar4);
        pSVar12 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
        System.dll::System::ComponentModel::InvalidEnumArgumentException::
        InvalidEnumArgumentException__ctor_1(this_01,pSVar12,(MethodInfo *)0x0);
        uVar4 = func_?(&
                                    MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                   );
        FUN_?(this_01,uVar4);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (this == (MutantModifier *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar2 = (this->fields)._._._._._.m_CachedPtr;
      if (pvVar2 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar2,lVar6);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::MutantModifier::MutantModifier_OnDisable
               (MutantModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isDeactivating == 0) {
    return;
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
  pvVar2 = (void *)0x0;
  if (pGVar1 != (GameObject *)0x0) {
    pvVar2 = (pGVar1->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::MutantModifier::MutantModifier_Update
               (MutantModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CollisionDetectionGlobalBuffers);
    LOCK();
    UNLOCK();
    FUN_?(&Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Physics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).fireParticles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (pPVar1->fields)._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pPVar1,(MethodInfo *)0x0);
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
    cVar5 = (*pcRam_?)(pvVar2);
    if ((cVar5 == '\0') && ((this->fields).isDeactivating == 0)) {
      pPVar1 = (this->fields).fireParticles;
      if (pPVar1 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                (pPVar1,1,(MethodInfo *)0x0);
    }
    pAVar6 = (this->fields)._.owner;
    if (pAVar6 != (Avatar *)0x0) {
      if (((pAVar6->fields).isLocal == 0) || ((this->fields).isDeactivating != 0)) {
        return;
      }
      pMVar7 = (pAVar6->fields).mvAvatar;
      if (pMVar7 != (MVAvatar *)0x0) {
        bVar8 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
        if (((pMVar7->klass->_1).naturalAligment < bVar8) ||
           ((MVAvatarLocal__Class *)(pMVar7->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
            TypeInfo__MVAvatarLocal)) {
          FUN_?(pMVar7);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pLVar9 = pMVar7[1].fields._._._.outputLinkRefs;
        if (((pLVar9 != (List_1_MV_WorldObject_Link_ *)0x0) &&
            (pLVar10 = pLVar9[5].klass, pLVar10 != (List_1_MV_WorldObject_Link___Class *)0x0)) &&
           (pcVar11 = (pLVar10->_0).namespaze, pcVar11 != (char *)0x0)) {
          fVar12 = *(float *)(pcVar11 + 0x30);
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)(this->fields)._.owner,(MethodInfo *)0x0);
          if (obj != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            IStack_13.damage = 0.0;
            IStack_13.impulse.x = 0.0;
            IStack_13.impulse.y = 0.0;
            pvVar2 = (obj->fields)._._.m_CachedPtr;
            if (pvVar2 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
            (*pcRam_?)(pvVar2,&IStack_13);
            if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
            }
            iVar14 = (this->fields).layerMask;
            pCVar15 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
            if (*(int *)&(TypeInfo__UnityEngine__Physics->_1).field_0x1c == 0) {
              FUN_?();
            }
            uVar16 = 0;
            aIStack_17[0].damage = IStack_13.damage;
            aIStack_17[0].impulse.x = IStack_13.impulse.x;
            aIStack_17[0].impulse.y = IStack_13.impulse.y;
            iVar14 = UnityEngine.PhysicsModule.dll::UnityEngine::Physics::
                     Physics_OverlapSphereNonAlloc_1
                               ((Vector3 *)aIStack_17,fVar12 + fVar12,pCVar15,iVar14,(MethodInfo *)0x0
                               );
            if (iVar14 < 1) {
              return;
            }
            lVar18 = 0x20;
            uVar19 = uVar16;
            while( true ) {
              if (*(int *)&(TypeInfo__CollisionDetectionGlobalBuffers->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__CollisionDetectionGlobalBuffers);
              }
              pCVar15 = TypeInfo__CollisionDetectionGlobalBuffers->static_fields->colliderBuffer;
              if (pCVar15 == (Collider__Array *)0x0) break;
              if ((uint)pCVar15->max_length <= (uint)uVar19) {
                FUN_?();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              this_00 = *(Component **)((longlong)pCVar15->vector + lVar18 + -0x20);
              if (this_00 == (Component *)0x0) break;
              pMVar20 = Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__;
              pAVar21 = (Avatar *)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                  (this_00,
                                   Avatar_MethodInfo__UnityEngine__Component__GetComponent<Avatar>__
                                  );
              pAVar6 = (this->fields)._.owner;
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
              if (pAVar21 != (Avatar *)0x0 || pAVar6 != (Avatar *)0x0) {
                if (pAVar6 == (Avatar *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (pAVar21 == (Avatar *)0x0) break;
                  bVar22 = (pAVar21->fields)._._._._.m_CachedPtr == (void *)0x0;
                }
                else if (pAVar21 == (Avatar *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  bVar22 = (pAVar6->fields)._._._._.m_CachedPtr == (void *)0x0;
                }
                else {
                  bVar22 = pAVar21 == pAVar6;
                }
                if (!bVar22) {
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
                  if (pAVar21 != (Avatar *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if ((pAVar21->fields)._._._._.m_CachedPtr != (void *)0x0) {
                      pIVar23 = (pAVar21->fields).interactionDataHandler;
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
                      if (pIVar23 != (InteractionDataHandlerBase *)0x0) {
                        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        if ((pIVar23->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                          uVar4 = *(undefined8 *)&pMVar7[1].fields._._._.position.z;
                          aIStack_17[0].interactionType = 0;
                          aIStack_17[0].playerKilledByType = 0;
                          aIStack_17[0]._18_2_ = 0;
                          aIStack_17[0].damage = 0.0;
                          aIStack_17[0].impulse.x = 0.0;
                          aIStack_17[0].impulse.y = 0.0;
                          aIStack_17[0].impulse.z = 0.0;
                          MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor
                                    (aIStack_17,
                                     (InteractionPackageType__Enum)
                                     CONCAT71((int7)((ulonglong)pMVar20 >> 8),6),(MethodInfo *)0x0);
                          IStack_13.interactionType = aIStack_17[0].interactionType;
                          IStack_13.playerKilledByType = aIStack_17[0].playerKilledByType;
                          IStack_13._18_2_ = aIStack_17[0]._18_2_;
                          IStack_13.damage = aIStack_17[0].damage;
                          IStack_13.impulse.x = aIStack_17[0].impulse.x;
                          IStack_13.impulse.y = aIStack_17[0].impulse.y;
                          IStack_13.impulse.z = aIStack_17[0].impulse.z;
                          (*(pIVar23->klass->vtable).__unknown_1.methodPtr)
                                    (pIVar23,uVar4,&IStack_13,0,
                                     (pIVar23->klass->vtable).__unknown_1.method);
                        }
                      }
                    }
                  }
                }
              }
              uVar19 = (ulonglong)((uint)uVar19 + 1);
              uVar16 = uVar16 + 1;
              lVar18 = lVar18 + 8;
              if ((longlong)iVar14 <= (longlong)uVar16) {
                return;
              }
            }
          }
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

