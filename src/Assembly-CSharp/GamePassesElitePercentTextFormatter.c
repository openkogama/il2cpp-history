
/* Void Start() */

void Assembly-CSharp.dll::GamePassesElitePercentTextFormatter::
     GamePassesElitePercentTextFormatter_Start
               (GamePassesElitePercentTextFormatter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).textElement;
  if (pTVar1 != (Text *)0x0) {
    pSVar2 = (String *)
             (*(code *)(pTVar1->klass->vtable).get_text.method)
                       (pTVar1,(pTVar1->klass->vtable).set_text.methodPtr);
    if ((((uint)(TypeInfo__SubscriberRewardDataManager->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__SubscriberRewardDataManager->_1).cctor_started == 0)) {
      func_?(TypeInfo__SubscriberRewardDataManager);
    }
    pKVar3 = SubscriberRewardDataManager::SubscriberRewardDataManager_get_VatValues
                       ((MethodInfo *)0x0);
    if (pKVar3 != (KogamaVatValues *)0x0) {
      this = (GamePassesElitePercentTextFormatter *)
             ((_UNK_? - (pKVar3->fields).regularUserVat) * _UNK_?);
      arg0 = (Object *)func_?(TypeInfo__System__Single,&this);
      pKVar3 = SubscriberRewardDataManager::SubscriberRewardDataManager_get_VatValues
                         ((MethodInfo *)0x0);
      if (pKVar3 != (KogamaVatValues *)0x0) {
        fStack_4 = (_UNK_? - (pKVar3->fields).subscribedUserVat) * _UNK_?;
        arg1 = (Object *)func_?(TypeInfo__System__Single,&fStack_4);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        pSVar2 = mscorlib.dll::System::String::String_Format_1(pSVar2,arg0,arg1,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          (*(code *)(pTVar1->klass->vtable).set_text.method)
                    (pTVar1,pSVar2,
                     (pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

