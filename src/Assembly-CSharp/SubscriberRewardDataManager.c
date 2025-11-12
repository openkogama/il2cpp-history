
/* Int32 GetBaseXpAmount() */

int32_t Assembly-CSharp.dll::SubscriberRewardDataManager::
        SubscriberRewardDataManager_GetBaseXpAmount(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SubscriberRewardDataManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SubscriberRewardDataManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SubscriberRewardDataManager);
  }
  return (TypeInfo__SubscriberRewardDataManager->static_fields->subscriberRewardData).baseXPBonus;
}


/* Void SetBaseXPBonus(Int32) */

void Assembly-CSharp.dll::SubscriberRewardDataManager::SubscriberRewardDataManager_SetBaseXPBonus
               (int32_t baseXpBonus,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SubscriberRewardDataManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SubscriberRewardDataManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SubscriberRewardDataManager);
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
    FUN_?(&TypeInfo__SubscriberRewardDataManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SubscriberRewardDataManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SubscriberRewardDataManager);
  }
  return TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField;
}


/* Void set_VatValues(KogamaVatValues) */

void Assembly-CSharp.dll::SubscriberRewardDataManager::SubscriberRewardDataManager_set_VatValues
               (KogamaVatValues *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SubscriberRewardDataManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__SubscriberRewardDataManager->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__SubscriberRewardDataManager);
  }
  TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)
                   &TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField
                  >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}

