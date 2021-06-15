
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::GoldRewardNotification::GoldRewardNotification_Initialize
               (GoldRewardNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(2,data._0_3_);
  key = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pPVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_00,key,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar1 != (Pool *)0x0) {
      if ((pPVar1->klass->_0).element_class == (TypeInfo__NotificationLifetime->_0).element_class) {
        piVar2 = (int32_t *)func_?();
        (this->fields).lifeTime = *piVar2;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RewardClicked() */

void Assembly-CSharp.dll::GoldRewardNotification::GoldRewardNotification_RewardClicked
               (GoldRewardNotification *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__TimedPlayReward__RewardTracker->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__TimedPlayReward__RewardTracker->_1).cctor_started == 0)) {
    func_?(TypeInfo__TimedPlayReward__RewardTracker);
  }
  if (TypeInfo__TimedPlayReward__RewardTracker->static_fields->IsCollected != 0) {
    return;
  }
  if ((((uint)(TypeInfo__TimedPlayReward__RewardTracker->vtable).Equals.methodPtr & 0x2000000) != 0)
     && ((TypeInfo__TimedPlayReward__RewardTracker->_1).cctor_started == 0)) {
    func_?(TypeInfo__TimedPlayReward__RewardTracker);
  }
  if (TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged != (Action *)0x0) {
    if ((((uint)(TypeInfo__TimedPlayReward__RewardTracker->vtable).Equals.methodPtr & 0x2000000) !=
         0) && ((TypeInfo__TimedPlayReward__RewardTracker->_1).cctor_started == 0)) {
      func_?(TypeInfo__TimedPlayReward__RewardTracker);
    }
    this_00 = (JumpState_OnWallJumpDelegate *)
              TypeInfo__TimedPlayReward__RewardTracker->static_fields->CollectedChanged;
    if (this_00 == (JumpState_OnWallJumpDelegate *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
  }
  iVar2 = (*(code *)(this->klass->vtable).get_Lifetime.method)
                    (this,(this->klass->vtable).Initialize.methodPtr);
  (this->fields)._.timeSinceStart = (float)(iVar2 + 1);
  return;
}

