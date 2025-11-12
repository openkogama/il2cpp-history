
/* Void MeleeWeaponArcEnd() */

void Assembly-CSharp.dll::MeleeWeaponAnimationEventHandler::
     MeleeWeaponAnimationEventHandler_MeleeWeaponArcEnd
               (MeleeWeaponAnimationEventHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).arcInstance;
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
  if (pTVar1 != (TrailArc *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pTVar1 = (this->fields).arcInstance;
      if (pTVar1 != (TrailArc *)0x0) {
        (pTVar1->fields).Emit = 0;
        pTVar1 = (this->fields).arcInstance;
        if ((pTVar1 != (TrailArc *)0x0) &&
           (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pTVar1,(MethodInfo *)0x0), this_00 != (Transform *)0x0
           )) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (this_00,(Transform *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}


/* Void MeleeWeaponArcStart() */

void Assembly-CSharp.dll::MeleeWeaponAnimationEventHandler::
     MeleeWeaponAnimationEventHandler_MeleeWeaponArcStart
               (MeleeWeaponAnimationEventHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TrailArc_MethodInfo__UnityEngine__Object__Instantiate<TrailArc>_TrailArc_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).trailArcPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pTVar1 = (TrailArc *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pTVar1,
                      TrailArc_MethodInfo__UnityEngine__Object__Instantiate<TrailArc>_TrailArc_);
  bVar2 = iRam_? != 0;
  (this->fields).arcInstance = pTVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).arcInstance >> 0xc);
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
  pTVar1 = (this->fields).arcInstance;
  if ((pTVar1 != (TrailArc *)0x0) &&
     (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar1,(MethodInfo *)0x0), pTVar7 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar7,(this->fields).target,(MethodInfo *)0x0);
    pTVar1 = (this->fields).arcInstance;
    if (pTVar1 != (TrailArc *)0x0) {
      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
      if (pTVar7 != (Transform *)0x0) {
        CStack_9.r = (pVVar8->zeroVector).x;
        CStack_9.g = (pVVar8->zeroVector).y;
        CStack_9.b = (pVVar8->zeroVector).z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
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
        pTVar1 = (this->fields).arcInstance;
        if (pTVar1 != (TrailArc *)0x0) {
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar1,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Quaternion);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pQVar13 = TypeInfo__UnityEngine__Quaternion->static_fields;
          if (pTVar7 != (Transform *)0x0) {
            fStack_14 = (pQVar13->identityQuaternion).x;
            fStack_15 = (pQVar13->identityQuaternion).y;
            fStack_16 = (pQVar13->identityQuaternion).z;
            fStack_17 = (pQVar13->identityQuaternion).w;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar10 = (pTVar7->fields)._._.m_CachedPtr;
            if (pvVar10 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
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
            this_00 = (this->fields).meleeWeaponItem;
            pTVar1 = (this->fields).arcInstance;
            if (this_00 != (PickupItemMeleeWeapon *)0x0) {
              pPVar18 = PickupItemMeleeWeapon::PickupItemMeleeWeapon_get_Configuration
                                  (this_00,(MethodInfo *)0x0);
              if ((pPVar18 != (PickupItemMeleeWeapon_MeleeWeaponConfiguration *)0x0) &&
                 (pTVar1 != (TrailArc *)0x0)) {
                CStack_9.r = (pPVar18->fields).trailColor.r;
                CStack_9.g = (pPVar18->fields).trailColor.g;
                CStack_9.b = (pPVar18->fields).trailColor.b;
                CStack_9.a = (pPVar18->fields).trailColor.a;
                TrailArc::TrailArc_SetTrailColor(pTVar1,&CStack_9,(MethodInfo *)0x0);
                return;
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


/* Void OnDisable() */

void Assembly-CSharp.dll::MeleeWeaponAnimationEventHandler::
     MeleeWeaponAnimationEventHandler_OnDisable
               (MeleeWeaponAnimationEventHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).arcInstance;
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
  if (pTVar1 != (TrailArc *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      MeleeWeaponAnimationEventHandler_MeleeWeaponArcEnd(this,(MethodInfo *)0x0);
    }
  }
  return;
}

