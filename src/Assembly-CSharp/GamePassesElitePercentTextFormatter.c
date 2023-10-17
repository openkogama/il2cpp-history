
/* Void Start() */

void Assembly-CSharp.dll::GamePassesElitePercentTextFormatter::
     GamePassesElitePercentTextFormatter_Start
               (GamePassesElitePercentTextFormatter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__SubscriberRewardDataManager);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).textElement;
  if (pTVar1 != (Text *)0x0) {
    pSVar2 = (String *)
             (*(pTVar1->klass->vtable).get_text.methodPtr)
                       (pTVar1,(pTVar1->klass->vtable).get_text.method);
    if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SubscriberRewardDataManager);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__SubscriberRewardDataManager);
      cRam_? = '\x01';
    }
    if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SubscriberRewardDataManager);
    }
    pKVar3 = TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField;
    if (pKVar3 != (KogamaVatValues *)0x0) {
      this = (GamePassesElitePercentTextFormatter *)
             ((_UNK_? - (pKVar3->fields).regularUserVat) * _UNK_?);
      arg0 = (Object *)func_?(TypeInfo__System__Single,&this);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__SubscriberRewardDataManager);
        cRam_? = '\x01';
      }
      if ((TypeInfo__SubscriberRewardDataManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SubscriberRewardDataManager);
      }
      pKVar3 = TypeInfo__SubscriberRewardDataManager->static_fields->_VatValues_k__BackingField;
      if (pKVar3 != (KogamaVatValues *)0x0) {
        fStack_4 = (_UNK_? - (pKVar3->fields).subscribedUserVat) * _UNK_?;
        arg1 = (Object *)func_?(TypeInfo__System__Single,&fStack_4);
        pSVar2 = mscorlib.dll::System::String::String_Format_1(pSVar2,arg0,arg1,(MethodInfo *)0x0);
        (*(pTVar1->klass->vtable).set_text.methodPtr)
                  (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
        return;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

