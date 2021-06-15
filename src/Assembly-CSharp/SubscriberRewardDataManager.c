
/* Int32 GetBaseXpAmount() */

int32_t Assembly-CSharp.dll::SubscriberRewardDataManager::
        SubscriberRewardDataManager_GetBaseXpAmount(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SubscriberRewardDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SubscriberRewardDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__SubscriberRewardDataManager);
  }
  return (TypeInfo__SubscriberRewardDataManager->static_fields->subscriberRewardData).baseXPBonus;
}


/* Void SetBaseXPBonus(Int32) */

void Assembly-CSharp.dll::SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
               (int32_t baseXpBonus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SubscriberRewardDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SubscriberRewardDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__SubscriberRewardDataManager);
    (TypeInfo__SubscriberRewardDataManager->static_fields->subscriberRewardData).baseXPBonus =
         baseXpBonus;
    return;
  }
  (TypeInfo__SubscriberRewardDataManager->static_fields->subscriberRewardData).baseXPBonus =
       baseXpBonus;
  return;
}


/* SubscriberRewardDataManager() */

void Assembly-CSharp.dll::SubscriberRewardDataManager::SubscriberRewardDataManager__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (TypeInfo__SubscriberRewardDataManager->static_fields->subscriberRewardData).baseXPBonus = 0;
  return;
}


/* KogamaVatValues get_VatValues() */

KogamaVatValues *
Assembly-CSharp.dll::SubscriberRewardDataManager::SubscriberRewardDataManager_get_VatValues
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SubscriberRewardDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SubscriberRewardDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__SubscriberRewardDataManager);
  }
  return TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField;
}


/* Void set_VatValues(KogamaVatValues) */

void Assembly-CSharp.dll::SubscriberRewardDataManager::SubscriberRewardDataManager_set_VatValues
               (KogamaVatValues *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__SubscriberRewardDataManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__SubscriberRewardDataManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__SubscriberRewardDataManager);
    TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = value;
    return;
  }
  TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = value;
  return;
}

