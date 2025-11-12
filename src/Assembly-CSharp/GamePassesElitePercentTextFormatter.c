
/* Void Start() */

void Assembly-CSharp.dll::GamePassesElitePercentTextFormatter::GamePassesElitePercentTextFormatter_Start(GamePassesElitePercentTextFormatter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SubscriberRewardDataManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).textElement;
  if (pTVar1 != (Text *)0x0) {
    pSVar2 = (String *)(*(pTVar1->klass->vtable).get_text.methodPtr)(pTVar1,(pTVar1->klass->vtable).get_text.method);
    if (*(int *)&(TypeInfo__SubscriberRewardDataManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__SubscriberRewardDataManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__SubscriberRewardDataManager->_1).field_0x1c == 0) {
      FUN_?();
    }
    pKVar3 = TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField;
    if (pKVar3 != (KogamaVatValues *)0x0) {
      afStackX_8[0] = (1.0 - (pKVar3->fields).regularUserVat) * 100.0;
      arg0 = (Object *)FUN_?(uRam_?,afStackX_8);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__SubscriberRewardDataManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__SubscriberRewardDataManager->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__SubscriberRewardDataManager);
      }
      pKVar3 = TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField;
      if (pKVar3 != (KogamaVatValues *)0x0) {
        afStackX_8[0] = (1.0 - (pKVar3->fields).subscribedUserVat) * 100.0;
        arg1 = (Object *)FUN_?(uRam_?,afStackX_8);
        PStack_4._arg0 = (Object *)0x0;
        PStack_4._arg1 = (Object *)0x0;
        PStack_4._arg2 = (Object *)0x0;
        PStack_4._args = (Object__Array *)0x0;
        mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_4,arg0,arg1,(MethodInfo *)0x0);
        PStack_5._arg0 = PStack_4._arg0;
        PStack_5._arg1 = PStack_4._arg1;
        PStack_5._arg2 = PStack_4._arg2;
        PStack_5._args = PStack_4._args;
        pSVar2 = mscorlib.dll::System::String::String_FormatHelper((IFormatProvider *)0x0,pSVar2,&PStack_5,(MethodInfo *)0x0);
        (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

