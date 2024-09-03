
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
    pTVar6 = TypeInfo__TouristPromotionExternalEvaluator__TouristPromotionExternalDef;
    pOVar7 = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              (pOVar7,ExceptionArgument__Enum_obj,(MethodInfo *)pTVar6);
    pOVar7[1].klass = pOVar2;
    func_?(pOVar7 + 1,pOVar2);
    pOVar7[1].monitor = pMVar5;
    if (pLVar1 != (List_1_TouristPromotionExternalEvaluator_TouristPromotionExternalDef_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar1,pOVar7,
                 MethodInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>__Add_TouristPromotionExternalEvaluator__TouristPromotionExternalDef_
                );
      pOVar2 = (Object__Class *)(this->fields).customPromotionPrefab;
      pLVar1 = (this->fields).availablePromotions;
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar3 != (MVNetworkGame *)0x0) &&
         (pCVar8 = (pMVar3->fields)._CustomTouristPromotionSettings_k__BackingField,
         pCVar8 != (CustomTouristPromotionSettings *)0x0)) {
        pMVar5 = (MonitorData *)(pCVar8->fields)._FrequencyPercent_k__BackingField;
        pTVar6 = TypeInfo__TouristPromotionExternalEvaluator__TouristPromotionExternalDef;
        pOVar7 = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOVar7,ExceptionArgument__Enum_obj,(MethodInfo *)pTVar6);
        pOVar7[1].klass = pOVar2;
        func_?(pOVar7 + 1,pOVar2);
        pOVar7[1].monitor = pMVar5;
        if (pLVar1 != (List_1_TouristPromotionExternalEvaluator_TouristPromotionExternalDef_ *)0x0)
        {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar1,pOVar7,
                     MethodInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>__Add_TouristPromotionExternalEvaluator__TouristPromotionExternalDef_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<TouristPromotionExternalEvaluator::TouristPromotionExternalDef>__List__
            );
  (this->fields).availablePromotions = this_00;
  func_?(&(this->fields).availablePromotions,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

