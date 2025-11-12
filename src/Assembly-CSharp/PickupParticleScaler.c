
/* Void OnDestroy() */

void Assembly-CSharp.dll::PickupParticleScaler::PickupParticleScaler_OnDestroy
               (PickupParticleScaler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PickupParticleScaler__OnScaleChange_MVWorldObjectClient__ScaleChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).itemAttachedTo;
  if (pPVar1 == (PickupItem *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pMVar3 = (pPVar1->fields).owner;
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
  if (pMVar3 != (MVPickupOwner *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar3->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pPVar1 = (this->fields).itemAttachedTo;
      if (((pPVar1 == (PickupItem *)0x0) ||
          (pMVar3 = (pPVar1->fields).owner, pMVar3 == (MVPickupOwner *)0x0)) ||
         (pMVar4 = (pMVar3->fields)._.worldObjectParent, pMVar4 == (MVWorldObjectClient *)0x0))
      goto code_?;
      pUVar5 = (pMVar4->fields).ScaleChanged;
      this_00 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__PickupParticleScaler__OnScaleChange_MVWorldObjectClient__ScaleChangedEventArgs_
                 ,(MethodInfo *)0x0);
      pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar5,(Delegate *)this_00,(MethodInfo *)0x0);
      pUVar7 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
      if (pDVar6 == (Delegate *)0x0) {
        (pMVar4->fields).ScaleChanged =
             (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
      }
      else {
        pUVar5 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)
                  FUN_?(pDVar6,
                                TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                               );
        if (pUVar5 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
          FUN_?(pDVar6,pUVar7);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (pMVar4->fields).ScaleChanged = pUVar5;
        pUVar7 = 
        TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
        lVar8 = FUN_?(pDVar6,
                               TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                              );
        if (lVar8 == 0) {
          FUN_?(pDVar6,pUVar7);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(pMVar4->fields).ScaleChanged >> 0xc);
        puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar10;
          LOCK();
          uVar12 = *puVar10;
          if (uVar11 == uVar12) {
            *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar12);
      }
    }
  }
  return;
}


/* Void OnScaleChange(MVWorldObjectClient, ScaleChangedEventArgs) */

void Assembly-CSharp.dll::PickupParticleScaler::PickupParticleScaler_OnScaleChange
               (PickupParticleScaler *this,MVWorldObjectClient *obj,ScaleChangedEventArgs *args,
               MethodInfo *method)

{
  obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (obj_00 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_1 = 0;
    uStack_2 = 0;
    pvVar3 = (obj_00->fields)._._.m_CachedPtr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
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
    (*pcRam_?)(pvVar3,&uStack_1);
    pPStack_6 = (this->fields).particleSysToScale;
    if (pPStack_6 != (ParticleSystem *)0x0) {
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&pPStack_6 >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      pcVar4 = pcRam_?;
      pPStack_12 = pPStack_6;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(&pPStack_12,uStack_1._4_4_);
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
      (*pcRam_?)(&pPStack_12,uStack_1._4_4_);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::PickupParticleScaler::PickupParticleScaler_Start
               (PickupParticleScaler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PickupParticleScaler__OnScaleChange_MVWorldObjectClient__ScaleChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).particleSysToScale;
  if (pPVar1 != (ParticleSystem *)0x0) {
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pPVar7 = (this->fields).itemAttachedTo;
    pPStackX_8 = pPVar1;
    if (pPVar7 != (PickupItem *)0x0) {
      pMVar8 = (pPVar7->fields).owner;
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
      if (pMVar8 != (MVPickupOwner *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pMVar8->fields)._._._._._.m_CachedPtr != (void *)0x0) {
          pPVar7 = (this->fields).itemAttachedTo;
          if (((pPVar7 == (PickupItem *)0x0) ||
              (pMVar8 = (pPVar7->fields).owner, pMVar8 == (MVPickupOwner *)0x0)) ||
             (pMVar9 = (pMVar8->fields)._.worldObjectParent, pMVar9 == (MVWorldObjectClient *)0x0))
          goto code_?;
          pUVar10 = (pMVar9->fields).ScaleChanged;
          this_00 = (UnityAction_2_System_Object_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                 );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (this_00,(Object *)this,
                     MethodInfo__PickupParticleScaler__OnScaleChange_MVWorldObjectClient__ScaleChangedEventArgs_
                     ,(MethodInfo *)0x0);
          pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pUVar10,(Delegate *)this_00,(MethodInfo *)0x0);
          pUVar12 = 
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
          if (pDVar11 == (Delegate *)0x0) {
            (pMVar9->fields).ScaleChanged =
                 (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0;
          }
          else {
            pUVar10 = (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)
                      FUN_?(pDVar11,
                                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                   );
            if (pUVar10 == (UnityAction_2_MVWorldObjectClient_ScaleChangedEventArgs_ *)0x0) {
              FUN_?(pDVar11,pUVar12);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            (pMVar9->fields).ScaleChanged = pUVar10;
            pUVar12 = 
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>;
            lVar3 = FUN_?(pDVar11,
                                   TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_ScaleChangedEventArgs>
                                  );
            if (lVar3 == 0) {
              FUN_?(pDVar11,pUVar12);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar2 = (uint)((ulonglong)&(pMVar9->fields).ScaleChanged >> 0xc);
            lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
            do {
              uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
              puVar5 = (ulonglong *)(lVar3 + 0xADDR);
              LOCK();
              bVar6 = uVar4 == *puVar5;
              if (bVar6) {
                *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar6);
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

