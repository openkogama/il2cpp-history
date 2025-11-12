
/* Void Start() */

void Assembly-CSharp.dll::TouristPromotionExternalEvaluator::TouristPromotionExternalEvaluator_Start
               (TouristPromotionExternalEvaluator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>__Add_TouristPromotionExternalEvaluator__TouristPromotionExternalDef_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TouristPromotionExternalEvaluator__TouristPromotionExternalDef);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).availablePromotions;
  pTVar2 = (this->fields).creyGamesPrefab;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar3 != (MVGameControllerBase *)0x0) &&
      (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
     (pCVar5 = (pMVar4->fields)._CreySettings_k__BackingField, pCVar5 != (CreySettings *)0x0)) {
    iVar6 = (pCVar5->fields)._TouristPromotionCreyFrequencyPercent_k__BackingField;
    lVar7 = FUN_?(TypeInfo__TouristPromotionExternalEvaluator__TouristPromotionExternalDef)
    ;
    bVar8 = iRam_? != 0;
    *(TouristPromotion **)(lVar7 + 0x10) = pTVar2;
    if (bVar8) {
      uVar9 = (uint)(lVar7 + 0x10U >> 0xc);
      lVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
      do {
        uVar11 = *(ulonglong *)(lVar10 + 0xADDR);
        puVar12 = (ulonglong *)(lVar10 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    *(int32_t *)(lVar7 + 0x18) = iVar6;
    if (pLVar1 != (List_1_TouristPromotionExternalEvaluator_TouristPromotionExternalDef_ *)0x0) {
      FUN_?(pLVar1,lVar7);
      pLVar1 = (this->fields).availablePromotions;
      pTVar2 = (this->fields).customPromotionPrefab;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar3 != (MVGameControllerBase *)0x0) &&
          (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
         (pCVar13 = (pMVar4->fields)._CustomTouristPromotionSettings_k__BackingField,
         pCVar13 != (CustomTouristPromotionSettings *)0x0)) {
        iVar6 = (pCVar13->fields)._FrequencyPercent_k__BackingField;
        pTVar14 = (TouristPromotionExternalEvaluator_TouristPromotionExternalDef *)
                  FUN_?(
                               TypeInfo__TouristPromotionExternalEvaluator__TouristPromotionExternalDef
                               );
        bVar8 = iRam_? != 0;
        (pTVar14->fields)._Promotion_k__BackingField = pTVar2;
        if (bVar8) {
          uVar9 = (uint)((ulonglong)&pTVar14->fields >> 0xc);
          lVar7 = (ulonglong)((uVar9 & 0x1fffff) >> 6) * 8;
          do {
            uVar11 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar12 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar8 = uVar11 == *puVar12;
            if (bVar8) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
        }
        (pTVar14->fields)._FrequencyPercent_k__BackingField = iVar6;
        pMVar15 = 
        MethodInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>__Add_TouristPromotionExternalEvaluator__TouristPromotionExternalDef_
        ;
        if (pLVar1 != (List_1_TouristPromotionExternalEvaluator_TouristPromotionExternalDef_ *)0x0)
        {
          pTVar16 = (pLVar1->fields)._items;
          piVar17 = &(pLVar1->fields)._version;
          *piVar17 = *piVar17 + 1;
          if (pTVar16 == (TouristPromotionExternalEvaluator_TouristPromotionExternalDef__Array *)0x0
             ) {
            FUN_?();
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          uVar9 = (pLVar1->fields)._size;
          if (uVar9 < (uint)pTVar16->max_length) {
            (pLVar1->fields)._size = uVar9 + 1;
          }
          else {
            uVar9 = (pLVar1->fields)._size;
            FUN_?(pLVar1,uVar9 + 1,
                          (pMVar15->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                          rgctxDataDummy,pTVar16,unaff_RDI);
            pTVar16 = (pLVar1->fields)._items;
            (pLVar1->fields)._size = uVar9 + 1;
            if (pTVar16 ==
                (TouristPromotionExternalEvaluator_TouristPromotionExternalDef__Array *)0x0) {
              FUN_?();
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
          }
          if ((uint)pTVar16->max_length <= uVar9) {
            FUN_?();
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          bVar8 = iRam_? != 0;
          pTVar16->vector[(int)uVar9] = pTVar14;
          if (bVar8) {
            uVar9 = (uint)((ulonglong)(pTVar16->vector + (int)uVar9) >> 0xc);
            puVar12 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar19 = *puVar12;
              LOCK();
              uVar11 = *puVar12;
              if (uVar19 == uVar11) {
                *puVar12 = uVar19 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (uVar19 != uVar11);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Boolean TryGetExternalPromotion(TouristPromotion ByRef) */

bool Assembly-CSharp.dll::TouristPromotionExternalEvaluator::
     TouristPromotionExternalEvaluator_TryGetExternalPromotion
               (TouristPromotionExternalEvaluator *this,TouristPromotion **externalPromotion,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = false;
  bVar2 = iRam_? != 0;
  *externalPromotion = (TouristPromotion *)0x0;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)externalPromotion >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar7 == (GameSessionData *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    bVar9 = (*pcVar8)();
    return bVar9;
  }
  if ((pGVar7->fields).embedded != 0) {
    return 0;
  }
  pTVar10 = *externalPromotion;
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
  if (pTVar10 != (TouristPromotion *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar1 = (pTVar10->fields)._._._._.m_CachedPtr != (void *)0x0;
  }
  return bVar1;
}


/* TouristPromotionExternalEvaluator() */

void Assembly-CSharp.dll::TouristPromotionExternalEvaluator::TouristPromotionExternalEvaluator__ctor
               (TouristPromotionExternalEvaluator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_TouristPromotionExternalEvaluator_TouristPromotionExternalDef_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields).availablePromotions = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).availablePromotions >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
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

