
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::NextLevelRewardNotification::NextLevelRewardNotification_Initialize
               (NextLevelRewardNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  pDStackX_10 = data;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Key__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__KeyValuePair<int,_int>__get_Value__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Level__0__Unlocks_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).levelText;
  (this->fields)._.timeSinceStart = 0.0;
  pSVar2 = TM::TM__(StringLiteral_Level__0__Unlocks_,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar3 != (MVGameControllerBase *)0x0) &&
      (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
     (pLVar5 = (pMVar4->fields).levelRewardsManager, pLVar5 != (LevelRewardsManager *)0x0)) {
    pDStackX_10 = (Dictionary_2_System_Object_System_Object_ *)
                  CONCAT44(pDStackX_10._4_4_,(pLVar5->fields)._NextReward_k__BackingField.key);
    arg0 = (Object *)FUN_?(uRam_?,&pDStackX_10);
    PStack_6._arg0 = (Object *)0x0;
    PStack_6._arg1 = (Object *)0x0;
    PStack_6._arg2 = (Object *)0x0;
    PStack_6._args = (Object__Array *)0x0;
    mscorlib.dll::System::ParamsArray::ParamsArray__ctor(&PStack_6,arg0,(MethodInfo *)0x0);
    PStack_7._arg0 = PStack_6._arg0;
    PStack_7._arg1 = PStack_6._arg1;
    PStack_7._arg2 = PStack_6._arg2;
    PStack_7._args = PStack_6._args;
    pSVar2 = mscorlib.dll::System::String::String_FormatHelper
                       ((IFormatProvider *)0x0,pSVar2,&PStack_7,(MethodInfo *)0x0);
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,pSVar2);
      pTVar1 = (this->fields).goldAmount;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar3 != (MVGameControllerBase *)0x0) &&
          (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
         (pLVar5 = (pMVar4->fields).levelRewardsManager, pLVar5 != (LevelRewardsManager *)0x0)) {
        KVar8 = (pLVar5->fields)._NextReward_k__BackingField;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
             field_0x135 & 1) == 0) {
          FUN_?();
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        PStack_6._arg0 = (Object *)0x0;
        PStack_6._arg1 = (Object *)0x0;
        pSVar2 = mscorlib.dll::System::Number::Number_FormatInt32
                           (KVar8.value,(ReadOnlySpan_1_Char_ *)&PStack_6,(IFormatProvider *)0x0,
                            (MethodInfo *)0x0);
        pSVar2 = mscorlib.dll::System::String::String_Concat_4
                           (pSVar2,::StringLiteral__,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          (*(pTVar1->klass->vtable).set_text.methodPtr)
                    (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
          this_00 = (this->fields).tertiaryNotificationUI;
          l = (*(this->klass->vtable).get_Lifetime.methodPtr)
                        (this,(this->klass->vtable).get_Lifetime.method);
          if (this_00 != (TertiaryNotificationUI *)0x0) {
            TertiaryNotificationUI::TertiaryNotificationUI_Initialize
                      (this_00,(Notification *)this,l,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

