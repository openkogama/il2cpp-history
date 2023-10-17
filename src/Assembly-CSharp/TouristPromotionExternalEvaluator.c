
/* Void Start() */

void Assembly-CSharp.dll::TouristPromotionExternalEvaluator::TouristPromotionExternalEvaluator_Start
               (TouristPromotionExternalEvaluator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>__Add_TouristPromotionExternalEvaluator__TouristPromotionExternalDef_
                   );
    func_?(&TypeInfo__TouristPromotionExternalEvaluator__TouristPromotionExternalDef);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).availablePromotions;
  pOVar2 = (Object__Class *)(this->fields).creyGamesPrefab;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar3 != (MVNetworkGame *)0x0) &&
     (pCVar4 = (pMVar3->fields)._CreySettings_k__BackingField, pCVar4 != (CreySettings *)0x0)) {
    pMVar5 = (MonitorData *)(pCVar4->fields)._TouristPromotionCreyFrequencyPercent_k__BackingField;
    pOVar6 = (Object *)
             func_?(
                            TypeInfo__TouristPromotionExternalEvaluator__TouristPromotionExternalDef
                            );
    if (pOVar6 != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (pOVar6,ExceptionArgument__Enum_obj,unaff_ESI);
      pOVar6[1].klass = pOVar2;
      func_?(pOVar6 + 1,pOVar2);
      pOVar6[1].monitor = pMVar5;
      if (pLVar1 != (List_1_TouristPromotionExternalEvaluator_TouristPromotionExternalDef_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar1,pOVar6,
                   MethodInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>__Add_TouristPromotionExternalEvaluator__TouristPromotionExternalDef_
                  );
        pLVar1 = (this->fields).availablePromotions;
        pOVar2 = (Object__Class *)(this->fields).customPromotionPrefab;
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar3 != (MVNetworkGame *)0x0) &&
           (pCVar7 = (pMVar3->fields)._CustomTouristPromotionSettings_k__BackingField,
           pCVar7 != (CustomTouristPromotionSettings *)0x0)) {
          pMVar5 = (MonitorData *)(pCVar7->fields)._FrequencyPercent_k__BackingField;
          pOVar6 = (Object *)
                   func_?(
                                  TypeInfo__TouristPromotionExternalEvaluator__TouristPromotionExternalDef
                                  );
          if (pOVar6 != (Object *)0x0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      (pOVar6,ExceptionArgument__Enum_obj,unaff_ESI);
            pOVar6[1].klass = pOVar2;
            func_?(pOVar6 + 1,pOVar2);
            pOVar6[1].monitor = pMVar5;
            if (pLVar1 != (List_1_TouristPromotionExternalEvaluator_TouristPromotionExternalDef_ *)
                          0x0) {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)pLVar1,pOVar6,
                         MethodInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>__Add_TouristPromotionExternalEvaluator__TouristPromotionExternalDef_
                        );
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean TryGetExternalPromotion(TouristPromotion ByRef) */

bool Assembly-CSharp.dll::TouristPromotionExternalEvaluator::
     TouristPromotionExternalEvaluator_TryGetExternalPromotion
               (TouristPromotionExternalEvaluator *this,TouristPromotion **externalPromotion,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  *externalPromotion = (TouristPromotion *)0x0;
  func_?(externalPromotion,0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).embedded == 0) {
      x = *externalPromotion;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      return bVar2;
    }
    return 0;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* TouristPromotionExternalEvaluator() */

void Assembly-CSharp.dll::TouristPromotionExternalEvaluator::TouristPromotionExternalEvaluator__ctor
               (TouristPromotionExternalEvaluator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_TouristPromotionExternalEvaluator_TouristPromotionExternalDef_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>
                           );
  if (this_00 != (List_1_TouristPromotionExternalEvaluator_TouristPromotionExternalDef_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>__List__
              );
    (this->fields).availablePromotions = this_00;
    func_?(&(this->fields).availablePromotions,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

