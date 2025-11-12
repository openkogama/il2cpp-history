
/* Void ApplyForceTo(MVRigidBody) */

void Assembly-CSharp.dll::ForceField::ForceField_ApplyForceTo
               (ForceField *this,MVRigidBody *body,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aVStack_2[0].x = 0.0;
    aVStack_2[0].y = 0.0;
    aVStack_2[0].z = 0.0;
    pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
    pCVar6 = (this->fields).trigger;
    if (pCVar6 != (CapsuleCollider *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CapsuleCollider>_UnityEngine__CapsuleCollider_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_7.x = 0.0;
      VStack_7.y = 0.0;
      VStack_7.z = 0.0;
      pvVar3 = (pCVar6->fields)._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar6,(MethodInfo *)0x0);
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
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_8 = 0;
        uStack_9 = 0;
        pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
        fVar10 = VStack_7.y * uStack_8._4_4_ + aVStack_2[0].y;
        pCVar6 = (this->fields).trigger;
        if (pCVar6 != (CapsuleCollider *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CapsuleCollider>_UnityEngine__CapsuleCollider_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar3 = (pCVar6->fields)._._._.m_CachedPtr;
          if (pvVar3 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar6,(MethodInfo *)0x0);
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
          fVar11 = (float)(*pcRam_?)(pvVar3);
          pCVar6 = (this->fields).trigger;
          if (pCVar6 != (CapsuleCollider *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CapsuleCollider>_UnityEngine__CapsuleCollider_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar3 = (pCVar6->fields)._._._.m_CachedPtr;
            if (pvVar3 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar6,(MethodInfo *)0x0);
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
            fVar12 = (float)(*pcRam_?)(pvVar3);
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              aVStack_2[0].x = 0.0;
              aVStack_2[0].y = 0.0;
              aVStack_2[0].z = 0.0;
              pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
              if (pvVar3 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
              fVar11 = (fVar11 * _UNK_? - fVar12) * aVStack_2[0].y;
              fVar12 = fVar11 + fVar10;
              fVar10 = fVar10 - fVar11;
              if ((body != (MVRigidBody *)0x0) &&
                 (pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)body,(MethodInfo *)0x0),
                 pTVar1 != (Transform *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                aVStack_2[0].x = 0.0;
                aVStack_2[0].y = 0.0;
                aVStack_2[0].z = 0.0;
                pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
                if (pvVar3 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
                if ((fVar10 <= aVStack_2[0].y) &&
                   (fVar10 = aVStack_2[0].y, fVar12 < aVStack_2[0].y)) {
                  fVar10 = fVar12;
                }
                pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this,(MethodInfo *)0x0);
                if (pTVar1 != (Transform *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  VStack_7.x = 0.0;
                  VStack_7.y = 0.0;
                  VStack_7.z = 0.0;
                  pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
                  if (pvVar3 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
                  fVar11 = VStack_7.z;
                  aVStack_2[0].x = VStack_7.x;
                  aVStack_2[0].y = VStack_7.y;
                  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)body,(MethodInfo *)0x0);
                  if (pTVar1 != (Transform *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    VStack_7.x = 0.0;
                    VStack_7.y = 0.0;
                    VStack_7.z = 0.0;
                    pvVar3 = (pTVar1->fields)._._.m_CachedPtr;
                    if (pvVar3 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
                    (*pcRam_?)(pvVar3,&VStack_7);
                    fVar10 = VStack_7.y - fVar10;
                    fVar12 = VStack_7.x - aVStack_2[0].x;
                    fVar11 = VStack_7.z - fVar11;
                    puVar13 = (undefined8 *)
                             (*(body->klass->vtable).__unknown_1.methodPtr)
                                       (aVStack_2,body,(body->klass->vtable).__unknown_1.method);
                    uStack_8 = *puVar13;
                    if ((float)((ulonglong)uStack_8 >> 0x20) * fVar10 + (float)uStack_8 * fVar12 +
                        *(float *)(puVar13 + 1) * fVar11 <= 0.0) {
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
                      fVar14 = (float)(*pcRam_?)();
                      fVar14 = _UNK_? / fVar14;
                      aVStack_2[0].y = fVar10;
                      aVStack_2[0].x = fVar12;
                      aVStack_2[0].z = fVar11;
                      fVar15 = (float)FUN_?(aVStack_2);
                      if (_UNK_? < fVar15) {
                        fVar11 = fVar11 / fVar15;
                        aVStack_2[0].y = fVar10 / fVar15;
                        aVStack_2[0].x = fVar12 / fVar15;
                      }
                      else {
                        if (cRam_? == '\0') {
                          FUN_?(&TypeInfo__UnityEngine__Vector3);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
                        aVStack_2[0].x = (pVVar16->zeroVector).x;
                        aVStack_2[0].y = (pVVar16->zeroVector).y;
                        fVar11 = (pVVar16->zeroVector).z;
                      }
                      puVar13 = (undefined8 *)
                               (*(body->klass->vtable).__unknown_1.methodPtr)(&VStack_7,body);
                      uStack_8 = *puVar13;
                      uStack_9 = *(undefined4 *)(puVar13 + 1);
                      fVar10 = (float)FUN_?(&uStack_8);
                      fVar15 = aVStack_2[0].x * fVar10 * fVar14;
                      fVar12 = aVStack_2[0].y * fVar10 * fVar14;
                      fVar14 = fVar11 * fVar10 * fVar14;
                      aVStack_2[0].z = fVar14 + fVar14;
                      aVStack_2[0].y = fVar12 + fVar12;
                      aVStack_2[0].x = fVar15 + fVar15;
                      MVRigidBody::MVRigidBody_AddImpulse_1(body,aVStack_2,0,(MethodInfo *)0x0);
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ApplyNoFriction(MVInteractableBase) */

void Assembly-CSharp.dll::ForceField::ForceField_ApplyNoFriction
               (ForceField *this,MVInteractableBase *interactable,MethodInfo *method)

{
  if (interactable != (MVInteractableBase *)0x0) {
    (*(interactable->klass->vtable).__unknown_4.methodPtr)
              (interactable,7,0xffffffff,0,(interactable->klass->vtable).__unknown_4.method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Awake() */

void Assembly-CSharp.dll::ForceField::ForceField_Awake(ForceField *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ForceField__OnEnter_System__Object__TriggerEventArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ForceField__OnExit_System__Object__TriggerEventArgs_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).triggerBoxEvents;
  pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar2,(Object *)this,
             MethodInfo__ForceField__OnEnter_System__Object__TriggerEventArgs_,(MethodInfo *)0x0);
  if (pTVar1 != (TriggerBoxEvents *)0x0) {
    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
              (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pUVar2,(MethodInfo *)0x0);
    pTVar1 = (this->fields).triggerBoxEvents;
    pUVar2 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar2,(Object *)this,
               MethodInfo__ForceField__OnExit_System__Object__TriggerEventArgs_,(MethodInfo *)0x0);
    if (pTVar1 != (TriggerBoxEvents *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppEVar3 = &(pTVar1->fields).TriggerExit;
      a = (pTVar1->fields).TriggerExit;
      do {
        pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)a,(Delegate *)pUVar2,(MethodInfo *)0x0);
        pEVar5 = TypeInfo__System__EventHandler<TriggerEventArgs>;
        if (pDVar4 == (Delegate *)0x0) {
          pEVar6 = (EventHandler_1_TriggerEventArgs_ *)0x0;
        }
        else {
          pEVar6 = (EventHandler_1_TriggerEventArgs_ *)
                   FUN_?(pDVar4,TypeInfo__System__EventHandler<TriggerEventArgs>);
          if (pEVar6 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
            FUN_?(pDVar4,pEVar5);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        LOCK();
        pEVar8 = *ppEVar3;
        bVar9 = a == pEVar8;
        if (bVar9) {
          *ppEVar3 = pEVar6;
          pEVar8 = a;
        }
        UNLOCK();
        pEVar6 = a;
        if (!bVar9) {
          pEVar6 = pEVar8;
        }
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)ppEVar3 >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar12 == *puVar13;
            if (bVar9) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        bVar9 = pEVar6 != a;
        a = pEVar6;
      } while (bVar9);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::ForceField::ForceField_FixedUpdate(ForceField *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVInteractableBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVRigidBody>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVRigidBody>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVInteractableBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVRigidBody>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVInteractableBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__Remove_MVRigidBody_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  HStack_1._set = (HashSet_1_System_Object_ *)0x0;
  HStack_1._index = 0;
  HStack_1._version = 0;
  HStack_1._current = (Object *)0x0;
  pHVar2 = (this->fields).interactablesInField;
  if (pHVar2 != (HashSet_1_MVInteractableBase_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pHStack_9 = (HashSet_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pHVar2->fields)._version << 0x20);
    uStack_10 = 0;
    HStack_11._8_8_ = pHStack_9;
    HStack_11._current = (Object *)0x0;
    uStack_4 = 0;
    pHStack_9 = &HStack_11;
    HStack_11._set = (HashSet_1_System_Object_ *)pHVar2;
    while (bVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                   Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                             (&HStack_11,
                              MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVInteractableBase>__MoveNext__
                             ), bVar12 != 0) {
      if (HStack_11._current == (Object *)0x0) {
        FUN_?();
        FUN_?();
        goto code_?;
      }
      (*(code *)(HStack_11._current)->klass[1]._0.declaringType)
                (HStack_11._current,7,0xffffffff,0,(HStack_11._current)->klass[1]._0.parent);
    }
    pHVar13 = (this->fields).bodiesInField;
    if (pHVar13 != (HashSet_1_MVRigidBody_ *)0x0) {
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
        lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      pHStack_9 = (HashSet_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pHVar13->fields)._version << 0x20);
      uStack_10 = 0;
      HStack_1._8_8_ = pHStack_9;
      HStack_1._current = (Object *)0x0;
      uStack_4 = 0;
      pHStack_9 = &HStack_1;
      HStack_1._set = (HashSet_1_System_Object_ *)pHVar13;
      do {
        while( true ) {
          bVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                  Object]::HashSet_1_T_Enumerator_System_Object__MoveNext
                            (&HStack_1,
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<MVRigidBody>__MoveNext__
                            );
          body = HStack_1._current;
          if (bVar12 == 0) {
            return;
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
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((MVRigidBody *)body != (MVRigidBody *)0x0) break;
code_?:
          pHVar13 = (this->fields).bodiesInField;
          if (pHVar13 == (HashSet_1_MVRigidBody_ *)0x0) {
code_?:
            FUN_?();
            FUN_?();
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__Remove
                    ((HashSet_1_System_Object_ *)pHVar13,body,
                     MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__Remove_MVRigidBody_
                    );
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((((MVRigidBody__Fields *)((longlong)body + 0x10))->_)._._._._.m_CachedPtr == (void *)0x0
           ) goto code_?;
        ForceField_ApplyForceTo(this,(MVRigidBody *)body,(MethodInfo *)0x0);
      } while( true );
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OnEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::ForceField::ForceField_OnEnter
               (ForceField *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__Add_MVInteractableBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__Add_MVRigidBody_)
    ;
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_02 != (MVWorldObjectClientManager *)0x0)) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_02,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      return;
    }
    pGVar2 = (pMVar1->fields).gameObject;
    if (pGVar2 != (GameObject *)0x0) {
      pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (pGVar2,
                          MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                         );
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
      if (pOVar3 != (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pOVar3[1].klass != (Object__Class *)0x0) {
          this_00 = (this->fields).bodiesInField;
          if (this_00 == (HashSet_1_MVRigidBody_ *)0x0) goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__AddIfNotPresent
                    ((HashSet_1_System_Object_ *)this_00,pOVar3,
                     MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__Add_MVRigidBody_
                     ->klass->rgctx_data[0x15].method);
        }
      }
      pGVar2 = (pMVar1->fields).gameObject;
      if (pGVar2 != (GameObject *)0x0) {
        pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (pGVar2,
                            MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                           );
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
        if (pOVar3 == (Object *)0x0) {
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pOVar3[1].klass == (Object__Class *)0x0) {
          return;
        }
        this_01 = (this->fields).interactablesInField;
        if (this_01 != (HashSet_1_MVInteractableBase_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__AddIfNotPresent
                    ((HashSet_1_System_Object_ *)this_01,pOVar3,
                     MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__Add_MVInteractableBase_
                     ->klass->rgctx_data[0x15].method);
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


/* Void OnExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::ForceField::ForceField_OnExit
               (ForceField *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__Remove_MVInteractableBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__Remove_MVRigidBody_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_02 != (MVWorldObjectClientManager *)0x0)) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_02,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      return;
    }
    pGVar2 = (pMVar1->fields).gameObject;
    if (pGVar2 != (GameObject *)0x0) {
      pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                         (pGVar2,
                          MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                         );
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
      if (pOVar3 != (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pOVar3[1].klass != (Object__Class *)0x0) {
          this_00 = (this->fields).bodiesInField;
          if (this_00 == (HashSet_1_MVRigidBody_ *)0x0) goto code_?;
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__Remove
                    ((HashSet_1_System_Object_ *)this_00,pOVar3,
                     MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__Remove_MVRigidBody_
                    );
        }
      }
      pGVar2 = (pMVar1->fields).gameObject;
      if (pGVar2 != (GameObject *)0x0) {
        pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (pGVar2,
                            MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                           );
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
        if (pOVar3 == (Object *)0x0) {
          return;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pOVar3[1].klass == (Object__Class *)0x0) {
          return;
        }
        this_01 = (this->fields).interactablesInField;
        if (this_01 != (HashSet_1_MVInteractableBase_ *)0x0) {
          System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
          HashSet_1_System_Object__Remove
                    ((HashSet_1_System_Object_ *)this_01,pOVar3,
                     MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__Remove_MVInteractableBase_
                    );
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


/* ForceField() */

void Assembly-CSharp.dll::ForceField::ForceField__ctor(ForceField *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__HashSet__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MVInteractableBase>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<MVRigidBody>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_MVInteractableBase_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<MVInteractableBase>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__HashSet<MVInteractableBase>__HashSet__);
  bVar1 = iRam_? != 0;
  (this->fields).interactablesInField = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).interactablesInField >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_01 = (HashSet_1_MVRigidBody_ *)
            FUN_?(TypeInfo__System__Collections__Generic__HashSet<MVRigidBody>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
  HashSet_1_System_Object___ctor
            ((HashSet_1_System_Object_ *)this_01,
             MethodInfo__System__Collections__Generic__HashSet<MVRigidBody>__HashSet__);
  bVar1 = iRam_? != 0;
  (this->fields).bodiesInField = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).bodiesInField >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
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
  return;
}

