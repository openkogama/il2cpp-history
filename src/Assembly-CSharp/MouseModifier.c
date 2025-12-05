
/* Void Destroy() */

void Assembly-CSharp.dll::MouseModifier::MouseModifier_Destroy
               (MouseModifier *this,MethodInfo *method)

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

void Assembly-CSharp.dll::MouseModifier::MouseModifier_OnDisable
               (MouseModifier *this,MethodInfo *method)

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
  if (this == (MouseModifier *)0x0) {
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

void Assembly-CSharp.dll::MouseModifier::MouseModifier_Scale(MouseModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SizeModifier__ActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MouseModifier___Scale_b__3_0_float_);
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
            pSVar13 = (this->fields)._.shrinkSoundStream;
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
                     MethodInfo__MouseModifier___Scale_b__3_0_float_,(MethodInfo *)0x0);
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
          if (this == (MouseModifier *)0x0) {
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

void Assembly-CSharp.dll::MouseModifier::MouseModifier_UnScale
               (MouseModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SizeModifier__ActionDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MouseModifier___UnScale_b__4_0_float_);
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
            pSVar17 = (this->fields)._.growSoundStream;
            if ((pSVar17 == (StreamedAudioClipManual *)0x0) ||
               (pAVar15 = (this->fields)._.audioSource, pAVar15 == (AudioSource *)0x0))
            goto code_?;
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_PlayOneShot_1
                      (pAVar15,(pSVar17->fields)._Clip_k__BackingField,_UNK_?,
                       (MethodInfo *)0x0);
          }
          fVar3 = (this->fields)._.timeToSize;
          body = (SizeModifier_ActionDelegate *)
                 FUN_?(TypeInfo__SizeModifier__ActionDelegate);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
          UnityAction_1_System_Single___ctor
                    ((UnityAction_1_System_Single_ *)body,(Object *)this,
                     MethodInfo__MouseModifier___UnScale_b__4_0_float_,(MethodInfo *)0x0);
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
          if (this == (MouseModifier *)0x0) {
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


/* Void Update() */

void Assembly-CSharp.dll::MouseModifier::MouseModifier_Update
               (MouseModifier *this,MethodInfo *method)

{
  if ((this->fields)._.isDeactivating != 0) {
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?,0), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  fVar3 = fVar3 - (this->fields)._._.timeStamp;
  pfVar4 = &(this->fields)._.sizeUnstableAfterSeconds;
  if (fVar3 < *pfVar4 || fVar3 == *pfVar4) {
    return;
  }
  fVar5 = (this->fields)._.unstableSpeed;
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
  fVar6 = (float)(*pcRam_?)();
  pAVar7 = (this->fields)._._.owner;
  fVar6 = fVar6 + fVar5;
  (this->fields)._.unstableSpeed = fVar6;
  if (pAVar7 != (Avatar *)0x0) {
    pMVar8 = (pAVar7->fields).mvAvatar;
    uVar2._0_4_ = (this->fields)._.defaultScale.x;
    uVar2._4_4_ = (this->fields)._.defaultScale.y;
    fVar5 = (this->fields)._.sizeModifier;
    fVar3 = (float)FUN_?((fVar3 - (this->fields)._.sizeUnstableAfterSeconds) * fVar6);
    fVar3 = _UNK_? - fVar3;
    fStack_9 = (this->fields)._.defaultScale.z * _UNK_? * fVar3 +
                fVar5 * (this->fields)._.defaultScale.z;
    uStack_10 = uVar2;
    if (pMVar8 != (MVAvatar *)0x0) {
      uStack_10 = CONCAT44((float)uVar2._4_4_ * _UNK_? * fVar3 + fVar5 * (float)uVar2._4_4_,
                           (float)(undefined4)uVar2 * _UNK_? * fVar3 +
                           fVar5 * (float)(undefined4)uVar2);
      (*(pMVar8->klass->vtable).set_Scale.methodPtr)
                (pMVar8,&uStack_10,(pMVar8->klass->vtable).set_Scale.method);
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <Scale>b__3_0(Single) */

void Assembly-CSharp.dll::MouseModifier::MouseModifier__Scale_b__3_0
               (MouseModifier *this,float t,MethodInfo *method)

{
  fVar1 = _UNK_?;
  pAVar2 = (this->fields)._._.owner;
  uVar3 = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  if (pAVar2 != (Avatar *)0x0) {
    uStack_4._0_4_ = (this->fields)._.defaultScale.x;
    uStack_4._4_4_ = (this->fields)._.defaultScale.y;
    pMVar5 = (pAVar2->fields).mvAvatar;
    fVar6 = (this->fields)._.defaultScale.z;
    auVar7._4_4_ = in_XMM1_Db;
    auVar7._0_4_ = t;
    auVar7._8_4_ = (int)in_XMM1_Qb;
    auVar7._12_4_ = uVar3;
    auVar8._4_12_ = auVar7._4_12_;
    auVar8._0_4_ = t * _UNK_?;
    fVar9 = _UNK_? - (this->fields)._.sizeModifier;
    fVar10 = (float)FUN_?(auVar8._0_8_);
    fVar10 = fVar10 / _UNK_?;
    if (fVar10 < 0.0) {
      fVar10 = 0.0;
    }
    else if (fVar9 < fVar10) {
      fVar10 = fVar9;
    }
    fVar10 = fVar1 - fVar10;
    fVar9 = (this->fields)._.sizeModifier;
    uVar11 = (this->fields)._.defaultScale.x;
    uVar12 = (this->fields)._.defaultScale.y;
    auVar13._4_4_ = in_XMM1_Db;
    auVar13._0_4_ = t;
    auVar13._8_4_ = (int)in_XMM1_Qb;
    auVar13._12_4_ = uVar3;
    auVar14._4_12_ = auVar13._4_12_;
    auVar14._0_4_ = t * (this->fields)._.sineStrength;
    fVar15 = (float)FUN_?(auVar14._0_8_);
    fVar1 = fVar1 - fVar15;
    if (pMVar5 != (MVAvatar *)0x0) {
      uStack_4 = CONCAT44(fVar9 * (float)uVar12 * fVar1 + fVar10 * uStack_4._4_4_,
                           fVar9 * (float)uVar11 * fVar1 + fVar10 * (float)uStack_4);
      fStack_16 = fVar9 * (this->fields)._.defaultScale.z * fVar1 + fVar10 * fVar6;
      (*(pMVar5->klass->vtable).set_Scale.methodPtr)
                (pMVar5,&uStack_4,(pMVar5->klass->vtable).set_Scale.method);
      if (t != (this->fields)._.timeToSize) {
        return;
      }
      pAVar2 = (this->fields)._._.owner;
      if (pAVar2 != (Avatar *)0x0) {
        fVar1 = (this->fields)._.sizeModifier;
        uVar17 = (this->fields)._.defaultScale.x;
        uVar18 = (this->fields)._.defaultScale.y;
        pMVar5 = (pAVar2->fields).mvAvatar;
        if (pMVar5 != (MVAvatar *)0x0) {
          uStack_4 = CONCAT44(fVar1 * (float)uVar18,fVar1 * (float)uVar17);
          fStack_16 = fVar1 * (this->fields)._.defaultScale.z;
          (*(pMVar5->klass->vtable).set_Scale.methodPtr)
                    (pMVar5,&uStack_4,(pMVar5->klass->vtable).set_Scale.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void <UnScale>b__4_0(Single) */

void Assembly-CSharp.dll::MouseModifier::MouseModifier__UnScale_b__4_0
               (MouseModifier *this,float t,MethodInfo *method)

{
  pAVar1 = (this->fields)._._.owner;
  if (pAVar1 != (Avatar *)0x0) {
    uStack_2._0_4_ = (this->fields)._.defaultScale.x;
    uStack_2._4_4_ = (this->fields)._.defaultScale.y;
    pMVar3 = (pAVar1->fields).mvAvatar;
    fVar4 = (this->fields)._.sizeModifier;
    fVar5 = (this->fields)._.defaultScale.z;
    auVar6._4_4_ = in_XMM1_Db;
    auVar6._0_4_ = t;
    auVar6._8_4_ = in_XMM1_Dc;
    auVar6._12_4_ = in_XMM1_Dd;
    auVar7._4_12_ = auVar6._4_12_;
    auVar7._0_4_ = t * _UNK_?;
    fVar8 = (float)FUN_?(auVar7._0_8_);
    fVar9 = _UNK_?;
    fVar8 = fVar8 / _UNK_?;
    if ((fVar4 <= fVar8) && (fVar4 = fVar8, _UNK_? < fVar8)) {
      fVar4 = _UNK_?;
    }
    fVar8 = (this->fields)._.sizeModifier;
    uVar10 = (this->fields)._.defaultScale.x;
    uVar11 = (this->fields)._.defaultScale.y;
    auVar12._4_4_ = in_XMM1_Db;
    auVar12._0_4_ = t;
    auVar12._8_4_ = in_XMM1_Dc;
    auVar12._12_4_ = in_XMM1_Dd;
    auVar13._4_12_ = auVar12._4_12_;
    auVar13._0_4_ = t * (this->fields)._.sineStrength;
    fVar14 = (float)FUN_?(auVar13._0_8_);
    fVar9 = fVar9 - fVar14;
    fStack_15 = fVar8 * (this->fields)._.defaultScale.z * fVar9 + fVar5 * fVar4;
    if (pMVar3 != (MVAvatar *)0x0) {
      uStack_2 = CONCAT44(fVar8 * (float)uVar11 * fVar9 + uStack_2._4_4_ * fVar4,
                           fVar8 * (float)uVar10 * fVar9 + (float)uStack_2 * fVar4);
      (*(pMVar3->klass->vtable).set_Scale.methodPtr)
                (pMVar3,&uStack_2,(pMVar3->klass->vtable).set_Scale.method);
      if (t == (this->fields)._.timeToSize) {
        MouseModifier_Destroy(this,(MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* MouseModifier() */

void Assembly-CSharp.dll::MouseModifier::MouseModifier__ctor(MouseModifier *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields)._.timeToSize = 1.5;
  (this->fields)._.sizeModifier = 1.0;
  (this->fields)._.sizeUnstableAfterSeconds = 28.0;
  (this->fields)._.unstableSpeed = 10.0;
  (this->fields)._.sineStrength = 14.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->oneVector).y;
  fVar4 = (pVVar2->oneVector).z;
  (this->fields)._.defaultScale.x = (pVVar2->oneVector).x;
  (this->fields)._.defaultScale.y = fVar3;
  (this->fields)._.defaultScale.z = fVar4;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar5 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar6 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar7 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar8 = ppMVar6;
  if (lVar7 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar7 = lRam_?;
  }
  else {
    do {
      uVar9 = (uint)ppMVar8;
      LOCK();
      bVar1 = uVar9 != uRam_?;
      uVar10 = uVar9;
      uVar11 = uVar9 + 1;
      if (bVar1) {
        uVar10 = uRam_?;
        uVar11 = uRam_?;
      }
      uRam_? = uVar11;
      UNLOCK();
    } while ((bVar1) && (ppMVar8 = (MethodInfo **)(ulonglong)uVar10, uVar9 = uVar10, uVar10 != 2)
            );
    while (uVar9 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar9 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar7;
  puVar12 = &(pOVar5->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar12 == 1;
  if (bVar1) {
    *(undefined4 *)puVar12 = 1;
  }
  uVar9 = uRam_?;
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
    if (uVar9 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar13 = &(pOVar5->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar13 == 1;
  if (bVar1) {
    *puVar13 = 1;
  }
  uVar9 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar9 = GetCurrentThreadId();
    psVar14 = &(pOVar5->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar9 == *psVar14;
    if (bVar1) {
      *psVar14 = (ulonglong)uVar9;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar12 = &(pOVar5->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar12 == 1;
      if (bVar1) {
        *(undefined4 *)puVar12 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar7._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
      lVar7._4_4_ = (pOVar5->_1).cctor_started;
      if (lVar7 == 0) {
        (pOVar5->_1).initializationExceptionGCHandle = 0;
        (pOVar5->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar7 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar15._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
    lVar15._4_4_ = (pOVar5->_1).cctor_started;
    if (lVar15 == 0) {
      return;
    }
  }
  else {
    uVar9 = GetCurrentThreadId();
    LOCK();
    (pOVar5->_1).cctor_thread = (ulonglong)uVar9;
    UNLOCK();
    LOCK();
    (pOVar5->_1).cctor_finished_or_no_cctor = 1;
    uVar9 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar9 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar5->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar5);
      ppMVar8 = ppMVar6;
      pIVar16 = (Il2CppClass *)pOVar5;
code_?:
      do {
        if (ppMVar8 == (MethodInfo **)0x0) {
          FUN_?(pIVar16);
          if (pIVar16->field_count != 0) {
            ppMVar8 = pIVar16->methods;
            pMVar17 = *ppMVar8;
code_?:
            if (pMVar17 != (MethodInfo *)0x0) {
              if ((*pMVar17->name == '.') && ((pMVar17->flags & 0x800) != 0)) {
                ppMVar18 = ppMVar6;
                while (pcVar19 = (char *)((longlong)ppMVar18 + 0xADDR),
                      ppMVar18 = (MethodInfo **)((longlong)ppMVar18 + 1),
                      *pcVar19 == (pMVar17->name + -1)[(longlong)ppMVar18]) {
                  if (ppMVar18 == (MethodInfo **)0x7) {
                    FUN_?(pMVar17,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar8 = ppMVar8 + 1;
          if (ppMVar8 < pIVar16->methods + pIVar16->field_count) {
            pMVar17 = *ppMVar8;
            goto code_?;
          }
        }
        pIVar16 = pIVar16->parent;
        ppMVar8 = ppMVar6;
      } while (pIVar16 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar5->_1).cctor_thread = 0;
    uVar20 = _UNK_?;
    uVar21 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar5->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_22 = 0;
    uStack_23 = _UNK_?;
    uStack_24 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar5->_0).byval_arg,0,0);
    pppppppuVar19 = &pppppppuStack_78;
    if (0xf < uStack_24) {
      pppppppuVar19 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar19);
    if (uStack_24 < 0x10) {
code_?:
      lVar7 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar19 = apppppppuStack_58;
      if (0xf < uStack_25) {
        pppppppuVar19 = apppppppuStack_58[0];
      }
      uStack_23 = uVar21;
      uStack_24 = uVar20;
      lVar15 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar19);
      if (lVar7 != 0) {
        *(longlong *)(lVar15 + 0x28U) = lVar7;
        if (iRam_? != 0) {
          uVar9 = (uint)(lVar15 + 0x28U >> 0xc);
          puVar26 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar27 = *puVar26;
            LOCK();
            uVar20 = *puVar26;
            if (uVar27 == uVar20) {
              *puVar26 = uVar27 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (uVar27 != uVar20);
        }
      }
      FUN_?(pOVar5,lVar15);
      if (0xf < uStack_25) {
        pppppppuVar19 = apppppppuStack_58[0];
        if ((0xfff < uStack_25 + 1) &&
           (pppppppuVar19 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar19))))
        goto code_?;
        func_?(pppppppuVar19);
      }
      goto code_?;
    }
    pppppppuVar19 = pppppppuStack_78;
    if ((uStack_24 + 1 < 0x1000) ||
       (pppppppuVar19 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar19)) < 0x20)) {
      func_?(pppppppuVar19);
      uVar21 = _UNK_?;
      uVar20 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar21._0_4_ = (pOVar5->_1).initializationExceptionGCHandle;
  uVar21._4_4_ = (pOVar5->_1).cctor_started;
  uVar21 = FUN_?(uVar21);
  FUN_?(uVar21,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}

