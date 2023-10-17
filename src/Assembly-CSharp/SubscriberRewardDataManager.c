
/* Int32 GetBaseXpAmount() */

int32_t Assembly-CSharp.dll::SubscriberRewardDataManager::
        SubscriberRewardDataManager_GetBaseXpAmount(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SubscriberRewardDataManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SubscriberRewardDataManager);
  }
  return (TypeInfo__SubscriberRewardDataManager->static_fields->subscriberRewardData).baseXPBonus;
}


/* Void SetBaseXPBonus(Int32) */

void Assembly-CSharp.dll::SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
               (int32_t baseXpBonus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SubscriberRewardDataManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SubscriberRewardDataManager);
    (TypeInfo__SubscriberRewardDataManager->static_fields->subscriberRewardData).baseXPBonus =
         baseXpBonus;
    return;
  }
  (TypeInfo__SubscriberRewardDataManager->static_fields->subscriberRewardData).baseXPBonus =
       baseXpBonus;
  return;
}


/* KogamaVatValues get_VatValues() */

KogamaVatValues *
Assembly-CSharp.dll::SubscriberRewardDataManager::SubscriberRewardDataManager_get_VatValues
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SubscriberRewardDataManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SubscriberRewardDataManager);
  }
  return TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField;
}


/* Void set_VatValues(KogamaVatValues) */

void Assembly-CSharp.dll::SubscriberRewardDataManager::SubscriberRewardDataManager_set_VatValues
               (KogamaVatValues *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SubscriberRewardDataManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__SubscriberRewardDataManager);
  }
  TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = value;
  func_?(&TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField,
                  unaff_EBP);
  return;
}

