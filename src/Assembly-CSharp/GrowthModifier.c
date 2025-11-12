
/* Void Destroy() */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier_Destroy
               (GrowthModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&AvatarMotor_MethodInfo__UnityEngine__Component__GetComponent<AvatarMotor>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVAvatarLocal);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._._.owner;
  if ((pAVar1 != (Avatar *)0x0) && (pMVar2 = (pAVar1->fields).mvAvatar, pMVar2 != (MVAvatar *)0x0))
  {
    fStack_3 = (this->fields)._.defaultScale.z;
    uStack_4._0_4_ = (this->fields)._.defaultScale.x;
    uStack_4._4_4_ = (this->fields)._.defaultScale.y;
    (*(pMVar2->klass->vtable).set_Scale.methodPtr)
              (pMVar2,&uStack_4,(pMVar2->klass->vtable).set_Scale.method);
    pAVar1 = (this->fields)._._.owner;
    if (pAVar1 != (Avatar *)0x0) {
      pMVar2 = (pAVar1->fields).mvAvatar;
      if (pMVar2 != (MVAvatar *)0x0) {
        bVar5 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
        if ((bVar5 <= (pMVar2->klass->_1).naturalAligment) &&
           ((MVAvatarLocal__Class *)(pMVar2->klass->_1).typeHierarchy[(ulonglong)bVar5 - 1] ==
            TypeInfo__MVAvatarLocal)) {
          this_00 = pMVar2[1].fields._._._.outputLinkRefs;
          if ((this_00 == (List_1_MV_WorldObject_Link_ *)0x0) ||
             ((pOVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                                  ((Component *)this_00,
                                   AvatarMotor_MethodInfo__UnityEngine__Component__GetComponent<AvatarMotor>__
                                  ), pOVar6 == (Object *)0x0 ||
              ((SizeState *)pOVar6[0xc].monitor == (SizeState *)0x0)))) goto code_?;
          SizeState::SizeState_ScaleChanged((SizeState *)pOVar6[0xc].monitor,(MethodInfo *)0x0);
        }
      }
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
      pvVar8 = (void *)0x0;
      if (pGVar7 != (GameObject *)0x0) {
        pvVar8 = (pGVar7->fields)._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar8,0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier_OnDisable
               (GrowthModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (GrowthModifier *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  OVar2.m_CachedPtr = (this->fields)._._._._._._.m_CachedPtr;
  if (OVar2.m_CachedPtr == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
  (*pcRam_?)(OVar2.m_CachedPtr);
  pAVar4 = (this->fields)._._.owner;
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
  if (pAVar4 != (Avatar *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar4->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pAVar4 = (this->fields)._._.owner;
      if (pAVar4 != (Avatar *)0x0) {
        pMVar5 = (pAVar4->fields).mvAvatar;
        if ((this->fields)._.isDeactivating == 0) {
          uStack_6._0_4_ = (this->fields)._.defaultScale.x;
          uStack_6._4_4_ = (this->fields)._.defaultScale.y;
          fVar7 = (this->fields)._.sizeModifier;
          fStack_8 = fVar7 * (this->fields)._.defaultScale.z;
          if (pMVar5 != (MVAvatar *)0x0) {
            uStack_6 = CONCAT44(fVar7 * (float)uStack_6._4_4_,fVar7 * (float)(undefined4)uStack_6
                                );
            (*(pMVar5->klass->vtable).set_Scale.methodPtr)
                      (pMVar5,&uStack_6,(pMVar5->klass->vtable).set_Scale.method);
            return;
          }
        }
        else if (pMVar5 != (MVAvatar *)0x0) {
          fStack_8 = (this->fields)._.defaultScale.z;
          uStack_6._0_4_ = (this->fields)._.defaultScale.x;
          uStack_6._4_4_ = (this->fields)._.defaultScale.y;
          (*(pMVar5->klass->vtable).set_Scale.methodPtr)
                    (pMVar5,&uStack_6,(pMVar5->klass->vtable).set_Scale.method);
          if (cRam_? == '\0') {
            FUN_?(&
                          AvatarMotor_MethodInfo__UnityEngine__Component__GetComponent<AvatarMotor>__
                          ,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__MVAvatarLocal);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pAVar4 = (this->fields)._._.owner;
          if ((pAVar4 != (Avatar *)0x0) &&
             (pMVar5 = (pAVar4->fields).mvAvatar, pMVar5 != (MVAvatar *)0x0)) {
            fStack_8 = (this->fields)._.defaultScale.z;
            uStack_6._0_4_ = (this->fields)._.defaultScale.x;
            uStack_6._4_4_ = (this->fields)._.defaultScale.y;
            (*(pMVar5->klass->vtable).set_Scale.methodPtr)
                      (pMVar5,&uStack_6,(pMVar5->klass->vtable).set_Scale.method);
            pAVar4 = (this->fields)._._.owner;
            if (pAVar4 != (Avatar *)0x0) {
              pMVar5 = (pAVar4->fields).mvAvatar;
              if (pMVar5 != (MVAvatar *)0x0) {
                bVar9 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
                if ((bVar9 <= (pMVar5->klass->_1).naturalAligment) &&
                   ((MVAvatarLocal__Class *)(pMVar5->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1]
                    == TypeInfo__MVAvatarLocal)) {
                  this_00 = pMVar5[1].fields._._._.outputLinkRefs;
                  if ((this_00 == (List_1_MV_WorldObject_Link_ *)0x0) ||
                     ((pOVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_GetComponent_1
                                          ((Component *)this_00,
                                           AvatarMotor_MethodInfo__UnityEngine__Component__GetComponent<AvatarMotor>__
                                          ), pOVar10 == (Object *)0x0 ||
                      ((SizeState *)pOVar10[0xc].monitor == (SizeState *)0x0))))
                  goto code_?;
                  SizeState::SizeState_ScaleChanged
                            ((SizeState *)pOVar10[0xc].monitor,(MethodInfo *)0x0);
                }
              }
              pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
              pvVar12 = (void *)0x0;
              if (pGVar11 != (GameObject *)0x0) {
                pvVar12 = (pGVar11->fields)._.m_CachedPtr;
              }
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
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
              (*pcRam_?)(pvVar12,0);
              return;
            }
          }
code_?:
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      goto code_?;
    }
  }
  return;
}


/* Void Scale() */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier_Scale
               (GrowthModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SizeModifier__ActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GrowthModifier___Scale_b__3_0_float_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._._.owner;
  if ((pAVar1 != (Avatar *)0x0) && (pMVar2 = (pAVar1->fields).mvAvatar, pMVar2 != (MVAvatar *)0x0))
  {
    fStack_3 = (this->fields)._.defaultScale.z;
    uStack_4._0_4_ = (this->fields)._.defaultScale.x;
    uStack_4._4_4_ = (this->fields)._.defaultScale.y;
    (*(pMVar2->klass->vtable).set_Scale.methodPtr)
              (pMVar2,&uStack_4,(pMVar2->klass->vtable).set_Scale.method);
    pAVar1 = (this->fields)._._.owner;
    if ((pAVar1 != (Avatar *)0x0) &&
       (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pAVar1,(MethodInfo *)0x0), pGVar5 != (GameObject *)0x0))
    {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar6 = (pGVar5->fields)._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar5,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pcRam_? = pcVar7;
      cVar9 = (*pcRam_?)(pvVar6);
      if (cVar9 == '\0') {
        pAVar1 = (this->fields)._._.owner;
        if (pAVar1 != (Avatar *)0x0) {
          uStack_4._0_4_ = (this->fields)._.defaultScale.x;
          uStack_4._4_4_ = (this->fields)._.defaultScale.y;
          fVar10 = (this->fields)._.sizeModifier;
          pMVar2 = (pAVar1->fields).mvAvatar;
          if (pMVar2 != (MVAvatar *)0x0) {
            uStack_4 = CONCAT44(fVar10 * (float)uStack_4._4_4_,fVar10 * (float)(undefined4)uStack_4
                                );
            fStack_3 = fVar10 * (this->fields)._.defaultScale.z;
            (*(pMVar2->klass->vtable).set_Scale.methodPtr)
                      (pMVar2,&uStack_4,(pMVar2->klass->vtable).set_Scale.method);
            return;
          }
        }
      }
      else {
        pAVar11 = (this->fields)._.audioSource;
        if ((pAVar11 != (AudioSource *)0x0) &&
           (pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pAVar11,(MethodInfo *)0x0),
           pGVar5 != (GameObject *)0x0)) {
          bVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_get_activeInHierarchy(pGVar5,(MethodInfo *)0x0);
          if (bVar12 != 0) {
            pSVar13 = (this->fields)._.growSoundStream;
            if ((pSVar13 == (StreamedAudioClipManual *)0x0) ||
               (pAVar11 = (this->fields)._.audioSource, pAVar11 == (AudioSource *)0x0))
            goto code_?;
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_PlayOneShot_1
                      (pAVar11,(pSVar13->fields)._Clip_k__BackingField,_UNK_?,
                       (MethodInfo *)0x0);
          }
          fVar10 = (this->fields)._.timeToSize;
          body = (SizeModifier_ActionDelegate *)
                 FUN_?(TypeInfo__SizeModifier__ActionDelegate);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
          UnityAction_1_System_Single___ctor
                    ((UnityAction_1_System_Single_ *)body,(Object *)this,
                     MethodInfo__GrowthModifier___Scale_b__3_0_float_,(MethodInfo *)0x0);
          pIVar14 = SizeModifier::SizeModifier_DoForSeconds
                              ((SizeModifier *)this,fVar10,body,(MethodInfo *)0x0);
          if (pIVar14 == (IEnumerator *)0x0) {
            uVar8 = func_?(&TypeInfo__System__NullReferenceException);
            this_00 = (NullReferenceException *)func_?(uVar8);
            pSVar15 = (String *)func_?(&StringLiteral_routine_is_null);
            mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                      (this_00,pSVar15,(MethodInfo *)0x0);
            uVar8 = func_?(&
                                         MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                        );
            FUN_?(this_00,uVar8);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar12 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                  MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
          if (bVar12 == 0) {
            uVar8 = func_?(&TypeInfo__System__ArgumentException);
            this_01 = (InvalidEnumArgumentException *)func_?(uVar8);
            pSVar15 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o)
            ;
            System.dll::System::ComponentModel::InvalidEnumArgumentException::
            InvalidEnumArgumentException__ctor_1(this_01,pSVar15,(MethodInfo *)0x0);
            uVar8 = func_?(&
                                         MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                        );
            FUN_?(this_01,uVar8);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
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
          if (this == (GrowthModifier *)0x0) {
            FUN_?();
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          OVar16.m_CachedPtr = (this->fields)._._._._._._.m_CachedPtr;
          if (OVar16.m_CachedPtr == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(OVar16.m_CachedPtr,pIVar14);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UnScale() */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier_UnScale
               (GrowthModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SizeModifier__ActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GrowthModifier___UnScale_b__4_0_float_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__StreamingAsset<UnityEngine::AudioClip,_UnityEngine::AudioClip>__op_Implicit_MethodInfo__StreamingAsset<UnityEngine::AudioClip,_UnityEngine::AudioClip>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._._.owner;
  if (pAVar1 != (Avatar *)0x0) {
    uStack_2._0_4_ = (this->fields)._.defaultScale.x;
    uStack_2._4_4_ = (this->fields)._.defaultScale.y;
    fVar3 = (this->fields)._.sizeModifier;
    pMVar4 = (pAVar1->fields).mvAvatar;
    if (pMVar4 != (MVAvatar *)0x0) {
      uStack_2 = CONCAT44(fVar3 * (float)uStack_2._4_4_,fVar3 * (float)(undefined4)uStack_2);
      fStack_5 = fVar3 * (this->fields)._.defaultScale.z;
      (*(pMVar4->klass->vtable).set_Scale.methodPtr)
                (pMVar4,&uStack_2,(pMVar4->klass->vtable).set_Scale.method);
      pAVar1 = (this->fields)._._.owner;
      if ((pAVar1 != (Avatar *)0x0) &&
         (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pAVar1,(MethodInfo *)0x0), pGVar6 != (GameObject *)0x0)
         ) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar7 = (pGVar6->fields)._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar6,(MethodInfo *)0x0);
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
        cVar10 = (*pcRam_?)(pvVar7);
        if (cVar10 == '\0') {
          if (cRam_? == '\0') {
            FUN_?(&
                          AvatarMotor_MethodInfo__UnityEngine__Component__GetComponent<AvatarMotor>__
                          ,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__MVAvatarLocal);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pAVar1 = (this->fields)._._.owner;
          if ((pAVar1 != (Avatar *)0x0) &&
             (pMVar4 = (pAVar1->fields).mvAvatar, pMVar4 != (MVAvatar *)0x0)) {
            fStack_11 = (this->fields)._.defaultScale.z;
            uStack_12._0_4_ = (this->fields)._.defaultScale.x;
            uStack_12._4_4_ = (this->fields)._.defaultScale.y;
            (*(pMVar4->klass->vtable).set_Scale.methodPtr)
                      (pMVar4,&uStack_12,(pMVar4->klass->vtable).set_Scale.method);
            pAVar1 = (this->fields)._._.owner;
            if (pAVar1 != (Avatar *)0x0) {
              pMVar4 = (pAVar1->fields).mvAvatar;
              if (pMVar4 != (MVAvatar *)0x0) {
                bVar13 = (TypeInfo__MVAvatarLocal->_1).naturalAligment;
                if ((bVar13 <= (pMVar4->klass->_1).naturalAligment) &&
                   ((MVAvatarLocal__Class *)(pMVar4->klass->_1).typeHierarchy[(ulonglong)bVar13 - 1]
                    == TypeInfo__MVAvatarLocal)) {
                  this_00 = pMVar4[1].fields._._._.outputLinkRefs;
                  if ((this_00 == (List_1_MV_WorldObject_Link_ *)0x0) ||
                     ((pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                 Component_GetComponent_1
                                           ((Component *)this_00,
                                            AvatarMotor_MethodInfo__UnityEngine__Component__GetComponent<AvatarMotor>__
                                           ), pOVar14 == (Object *)0x0 ||
                      ((SizeState *)pOVar14[0xc].monitor == (SizeState *)0x0))))
                  goto code_?;
                  SizeState::SizeState_ScaleChanged
                            ((SizeState *)pOVar14[0xc].monitor,(MethodInfo *)0x0);
                }
              }
              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
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
              pvVar7 = (void *)0x0;
              if (pGVar6 != (GameObject *)0x0) {
                pvVar7 = (pGVar6->fields)._.m_CachedPtr;
              }
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
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
              (*pcRam_?)(pvVar7,0);
              return;
            }
          }
code_?:
          FUN_?();
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pAVar15 = (this->fields)._.audioSource;
        if ((pAVar15 != (AudioSource *)0x0) &&
           (pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)pAVar15,(MethodInfo *)0x0),
           pGVar6 != (GameObject *)0x0)) {
          bVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_get_activeInHierarchy(pGVar6,(MethodInfo *)0x0);
          if (bVar16 != 0) {
            pSVar17 = (this->fields)._.shrinkSoundStream;
            if ((pSVar17 == (StreamedAudioClipManual *)0x0) ||
               (pAVar15 = (this->fields)._.audioSource, pAVar15 == (AudioSource *)0x0))
            goto code_?;
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_PlayOneShot_1
                      (pAVar15,(pSVar17->fields)._._.asset,_UNK_?,(MethodInfo *)0x0);
          }
          fVar3 = (this->fields)._.timeToSize;
          body = (SizeModifier_ActionDelegate *)
                 FUN_?(TypeInfo__SizeModifier__ActionDelegate);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
          UnityAction_1_System_Single___ctor
                    ((UnityAction_1_System_Single_ *)body,(Object *)this,
                     MethodInfo__GrowthModifier___UnScale_b__4_0_float_,(MethodInfo *)0x0);
          pIVar18 = SizeModifier::SizeModifier_DoForSeconds
                              ((SizeModifier *)this,fVar3,body,(MethodInfo *)0x0);
          if (pIVar18 == (IEnumerator *)0x0) {
            uVar9 = func_?(&TypeInfo__System__NullReferenceException);
            this_01 = (NullReferenceException *)func_?(uVar9);
            pSVar19 = (String *)func_?(&StringLiteral_routine_is_null);
            mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                      (this_01,pSVar19,(MethodInfo *)0x0);
            uVar9 = func_?(&
                                         MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                        );
            FUN_?(this_01,uVar9);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          bVar16 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
                  MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
          if (bVar16 == 0) {
            uVar9 = func_?(&TypeInfo__System__ArgumentException);
            this_02 = (InvalidEnumArgumentException *)func_?(uVar9);
            pSVar19 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o)
            ;
            System.dll::System::ComponentModel::InvalidEnumArgumentException::
            InvalidEnumArgumentException__ctor_1(this_02,pSVar19,(MethodInfo *)0x0);
            uVar9 = func_?(&
                                         MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                        );
            FUN_?(this_02,uVar9);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
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
          if (this == (GrowthModifier *)0x0) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          OVar20.m_CachedPtr = (this->fields)._._._._._._.m_CachedPtr;
          if (OVar20.m_CachedPtr == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
          (*pcRam_?)(OVar20.m_CachedPtr,pIVar18);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <Scale>b__3_0(Single) */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier__Scale_b__3_0
               (GrowthModifier *this,float t,MethodInfo *method)

{
  pAVar1 = (this->fields)._._.owner;
  uVar2 = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  if (pAVar1 != (Avatar *)0x0) {
    uStack_3._0_4_ = (this->fields)._.defaultScale.x;
    uStack_3._4_4_ = (this->fields)._.defaultScale.y;
    pMVar4 = (pAVar1->fields).mvAvatar;
    fVar5 = (this->fields)._.defaultScale.z;
    auVar6._4_4_ = in_XMM1_Db;
    auVar6._0_4_ = t;
    auVar6._8_4_ = (int)in_XMM1_Qb;
    auVar6._12_4_ = uVar2;
    auVar7._4_12_ = auVar6._4_12_;
    auVar7._0_4_ = t * _UNK_?;
    fVar8 = (this->fields)._.sizeModifier;
    fVar9 = (float)FUN_?(auVar7._0_8_);
    fVar10 = _UNK_?;
    fVar9 = fVar9 / _UNK_?;
    if (fVar9 < 0.0) {
      fVar9 = 0.0;
    }
    else if (fVar8 < fVar9) {
      fVar9 = fVar8;
    }
    fVar9 = fVar9 + _UNK_?;
    auVar11._4_4_ = in_XMM1_Db;
    auVar11._0_4_ = t;
    auVar11._8_4_ = (int)in_XMM1_Qb;
    auVar11._12_4_ = uVar2;
    auVar12._4_12_ = auVar11._4_12_;
    auVar12._0_4_ = t * (this->fields)._.sineStrength;
    fVar8 = (float)FUN_?(auVar12._0_8_);
    fVar10 = fVar10 - fVar8;
    uVar13 = (this->fields)._.defaultScale.x;
    if (pMVar4 != (MVAvatar *)0x0) {
      uStack_3 = CONCAT44((this->fields)._.defaultScale.y * _UNK_? * fVar10 +
                           fVar9 * uStack_3._4_4_,
                           (float)uVar13 * _UNK_? * fVar10 + fVar9 * (float)uStack_3);
      fStack_14 = (this->fields)._.defaultScale.z * _UNK_? * fVar10 + fVar9 * fVar5;
      (*(pMVar4->klass->vtable).set_Scale.methodPtr)
                (pMVar4,&uStack_3,(pMVar4->klass->vtable).set_Scale.method);
      if (t != (this->fields)._.timeToSize) {
        return;
      }
      pAVar1 = (this->fields)._._.owner;
      if (pAVar1 != (Avatar *)0x0) {
        fVar8 = (this->fields)._.sizeModifier;
        uVar15 = (this->fields)._.defaultScale.x;
        uVar16 = (this->fields)._.defaultScale.y;
        pMVar4 = (pAVar1->fields).mvAvatar;
        if (pMVar4 != (MVAvatar *)0x0) {
          uStack_3 = CONCAT44(fVar8 * (float)uVar16,fVar8 * (float)uVar15);
          fStack_14 = fVar8 * (this->fields)._.defaultScale.z;
          (*(pMVar4->klass->vtable).set_Scale.methodPtr)
                    (pMVar4,&uStack_3,(pMVar4->klass->vtable).set_Scale.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void <UnScale>b__4_0(Single) */

void Assembly-CSharp.dll::GrowthModifier::GrowthModifier__UnScale_b__4_0
               (GrowthModifier *this,float t,MethodInfo *method)

{
  pAVar1 = (this->fields)._._.owner;
  if (pAVar1 != (Avatar *)0x0) {
    pMVar2 = (pAVar1->fields).mvAvatar;
    auVar3._4_4_ = in_XMM1_Db;
    auVar3._0_4_ = t;
    auVar3._8_4_ = in_XMM1_Dc;
    auVar3._12_4_ = in_XMM1_Dd;
    auVar4._4_12_ = auVar3._4_12_;
    auVar4._0_4_ = t * _UNK_?;
    FUN_?(auVar4._0_8_);
    auVar5._4_4_ = in_XMM1_Db;
    auVar5._0_4_ = t;
    auVar5._8_4_ = in_XMM1_Dc;
    auVar5._12_4_ = in_XMM1_Dd;
    auVar6._4_12_ = auVar5._4_12_;
    auVar6._0_4_ = t * (this->fields)._.sineStrength;
    FUN_?(auVar6._0_8_);
    if (pMVar2 != (MVAvatar *)0x0) {
      (*(pMVar2->klass->vtable).set_Scale.methodPtr)(pMVar2);
      pAVar1 = (this->fields)._._.owner;
      if ((pAVar1 != (Avatar *)0x0) &&
         (pMVar2 = (pAVar1->fields).mvAvatar, pMVar2 != (MVAvatar *)0x0)) {
        if ((pMVar2->fields).isHidden == 0) {
          pAVar1 = (pMVar2->fields).avatar;
          if ((pAVar1 == (Avatar *)0x0) ||
             (this_00 = (pAVar1->fields).avatarFader, this_00 == (AvatarFader *)0x0))
          goto code_?;
          AvatarFader::AvatarFader_SetTransparency(this_00,_UNK_?,(MethodInfo *)0x0);
        }
        if (t == (this->fields)._.timeToSize) {
          GrowthModifier_Destroy(this,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

