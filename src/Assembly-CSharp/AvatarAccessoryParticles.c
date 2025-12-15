
/* Bounds GetLocalBounds() */

Bounds * Assembly-CSharp.dll::AvatarAccessoryParticles::AvatarAccessoryParticles_GetLocalBounds
                   (Bounds *__return_storage_ptr__,AvatarAccessoryParticles *this,MethodInfo *method
                   )

{
  puVar1 = (undefined8 *)
           (*(this->klass->vtable).GetWorldBounds.methodPtr)
                     (auStack_2,this,(this->klass->vtable).GetWorldBounds.method);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  (__return_storage_ptr__->m_Center).x = (float)(int)uVar3;
  (__return_storage_ptr__->m_Center).y = (float)(int)((ulonglong)uVar3 >> 0x20);
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = uVar4;
  (__return_storage_ptr__->m_Extents).y = (float)(int)uVar5;
  (__return_storage_ptr__->m_Extents).z = (float)(int)((ulonglong)uVar5 >> 0x20);
  return __return_storage_ptr__;
}


/* Bounds GetWorldBounds() */

Bounds * Assembly-CSharp.dll::AvatarAccessoryParticles::AvatarAccessoryParticles_GetWorldBounds
                   (Bounds *__return_storage_ptr__,AvatarAccessoryParticles *this,MethodInfo *method
                   )

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (__return_storage_ptr__->m_Center).x = (pVVar2->zeroVector).x;
  (__return_storage_ptr__->m_Center).y = fVar3;
  (__return_storage_ptr__->m_Center).z = fVar4;
  (__return_storage_ptr__->m_Extents).x = fVar1;
  (__return_storage_ptr__->m_Extents).y = fVar1;
  (__return_storage_ptr__->m_Extents).z = fVar1;
  return __return_storage_ptr__;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarAccessoryParticles::AvatarAccessoryParticles_Update
               (AvatarAccessoryParticles *this,MethodInfo *method)

{
  pAVar1 = AvatarAccessoryParticles_get_AccessoryParticlesSettings(this,(MethodInfo *)0x0);
  if (pAVar1 != (AccessoryParticlesSettings *)0x0) {
    if ((pAVar1->fields).useEmissionMovement == 0) {
      return;
    }
    uStack_2._0_4_ = (this->fields).prevPosition.x;
    uStack_2._4_4_ = (this->fields).prevPosition.y;
    fVar3 = (this->fields).prevPosition.z;
    pTVar4 = AvatarAccessory::AvatarAccessory_get_Transform
                       ((AvatarAccessory *)this,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_5 = 0;
      fStack_6 = 0.0;
      pvVar7 = (pTVar4->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
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
      (*pcRam_?)(pvVar7);
      fVar3 = fVar3 - fStack_6;
      if (_UNK_? <=
          (uStack_2._4_4_ - uStack_5._4_4_) * (uStack_2._4_4_ - uStack_5._4_4_) +
          ((float)uStack_2 - (float)uStack_5) * ((float)uStack_2 - (float)uStack_5) +
          fVar3 * fVar3) {
        pPVar10 = AvatarAccessoryParticles_get_RootParticleSystem(this,(MethodInfo *)0x0);
        if (pPVar10 != (ParticleSystem *)0x0) {
          pPStackX_20 = (ParticleSystem *)
                        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                        ParticleSystem_get_collision(pPVar10,(MethodInfo *)0x0);
          pAVar1 = AvatarAccessoryParticles_get_AccessoryParticlesSettings(this,(MethodInfo *)0x0);
          if (pAVar1 != (AccessoryParticlesSettings *)0x0) {
            fVar3 = (pAVar1->fields).EmitRateMoving;
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
            (*pcRam_?)(&pPStackX_20,fVar3);
            pTVar4 = AvatarAccessory::AvatarAccessory_get_Transform
                               ((AvatarAccessory *)this,(MethodInfo *)0x0);
            if (pTVar4 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_5 = 0;
              fStack_6 = 0.0;
              pvVar7 = (pTVar4->fields)._._.m_CachedPtr;
              if (pvVar7 != (void *)0x0) {
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
                (*pcRam_?)(pvVar7,&uStack_5);
                (this->fields).prevPosition.x = (float)uStack_5;
                (this->fields).prevPosition.y = uStack_5._4_4_;
                (this->fields).prevPosition.z = fStack_6;
                return;
              }
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
        }
      }
      else {
        pPVar10 = AvatarAccessoryParticles_get_RootParticleSystem(this,(MethodInfo *)0x0);
        if (pPVar10 != (ParticleSystem *)0x0) {
          pPStackX_18 = (ParticleSystem *)
                        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                        ParticleSystem_get_collision(pPVar10,(MethodInfo *)0x0);
          pAVar1 = AvatarAccessoryParticles_get_AccessoryParticlesSettings(this,(MethodInfo *)0x0);
          if (pAVar1 != (AccessoryParticlesSettings *)0x0) {
            fVar3 = (pAVar1->fields).EmitRateNormal;
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
            (*pcRam_?)(&pPStackX_18,fVar3);
            return;
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


/* AvatarAccessoryParticles() */

void Assembly-CSharp.dll::AvatarAccessoryParticles::AvatarAccessoryParticles__ctor
               (AvatarAccessoryParticles *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields)._._visible = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052a1b1,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* AccessoryParticlesSettings get_AccessoryParticlesSettings() */

AccessoryParticlesSettings *
Assembly-CSharp.dll::AvatarAccessoryParticles::
AvatarAccessoryParticles_get_AccessoryParticlesSettings
          (AvatarAccessoryParticles *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AccessoryParticlesSettings_MethodInfo__UnityEngine__Component__GetComponent<AccessoryParticlesSettings>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryParticlesSettings;
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
  if (pAVar1 != (AccessoryParticlesSettings *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pAVar1 = (AccessoryParticlesSettings *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      AccessoryParticlesSettings_MethodInfo__UnityEngine__Component__GetComponent<AccessoryParticlesSettings>__
                     );
  bVar2 = iRam_? == 0;
  (this->fields).accessoryParticlesSettings = pAVar1;
  if (bVar2) {
    return pAVar1;
  }
  uVar3 = (uint)((ulonglong)&(this->fields).accessoryParticlesSettings >> 0xc);
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
code_?:
  return (this->fields).accessoryParticlesSettings;
}


/* AccessorySettings get_AccessorySettings() */

AccessorySettings *
Assembly-CSharp.dll::AvatarAccessoryParticles::AvatarAccessoryParticles_get_AccessorySettings
          (AvatarAccessoryParticles *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  AccessoryParticlesSettings_MethodInfo__UnityEngine__Component__GetComponent<AccessoryParticlesSettings>__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).accessoryParticlesSettings;
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
  if (pAVar1 != (AccessoryParticlesSettings *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pAVar1 = (AccessoryParticlesSettings *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      AccessoryParticlesSettings_MethodInfo__UnityEngine__Component__GetComponent<AccessoryParticlesSettings>__
                     );
  bVar2 = iRam_? == 0;
  (this->fields).accessoryParticlesSettings = pAVar1;
  if (bVar2) {
    return (AccessorySettings *)pAVar1;
  }
  uVar3 = (uint)((ulonglong)&(this->fields).accessoryParticlesSettings >> 0xc);
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
code_?:
  return (AccessorySettings *)(this->fields).accessoryParticlesSettings;
}


/* ParticleSystem get_RootParticleSystem() */

ParticleSystem *
Assembly-CSharp.dll::AvatarAccessoryParticles::AvatarAccessoryParticles_get_RootParticleSystem
          (AvatarAccessoryParticles *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::ParticleSystem>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).rootParticleSystem;
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
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  pPVar1 = (ParticleSystem *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentInChildren_1
                     ((Component *)this,
                      UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Component__GetComponentInChildren<UnityEngine::ParticleSystem>__
                     );
  bVar2 = iRam_? == 0;
  (this->fields).rootParticleSystem = pPVar1;
  if (bVar2) {
    return pPVar1;
  }
  uVar3 = (uint)((ulonglong)&(this->fields).rootParticleSystem >> 0xc);
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
code_?:
  return (this->fields).rootParticleSystem;
}

