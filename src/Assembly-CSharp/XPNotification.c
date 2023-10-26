
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::XPNotification::XPNotification_Initialize
               (XPNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                   );
    func_?(&StringLiteral__XP___);
    func_?(&StringLiteral__from_boost_);
    func_?(&StringLiteral__XP_);
    cRam_? = '\x01';
  }
  pXVar1 = this;
  this = (XPNotification *)CONCAT13(4,this._0_3_);
  (pXVar1->fields)._.timeSinceStart = 0.0;
  pOVar2 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
  this_02 = data;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (data,pOVar2,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar2 != (Object *)0x0) {
      pSVar3 = (String *)
               (*(pOVar2->klass->vtable).ToString.methodPtr)
                         (pOVar2,(pOVar2->klass->vtable).ToString.method);
      xp = (Dictionary_2_System_Object_System_Object_ *)
           mscorlib.dll::System::Int32::Int32_Parse(pSVar3,(MethodInfo *)0x0);
      uStack_4 = 0x13;
      data = xp;
      pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_4);
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_02,pOVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
          piVar5 = (int32_t *)func_?(pOVar2);
          membersCount = *piVar5;
          this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_03 != (MVNetworkGame *)0x0) {
            pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
            if ((pMVar6 != (MVLocalPlayer *)0x0) &&
               (this_00 = (pMVar6->fields)._._SubscriptionRules_k__BackingField,
               this_00 != (SubscriptionRulesWrapper *)0x0)) {
              this_04 = (XpBooster *)
                        MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                        SubscriptionRulesWrapper_GetRule
                                  (this_00,SubscriptionBenefit__Enum_XPBoost,
                                   MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                                  );
              if (this_04 != (XpBooster *)0x0) {
                IStack_7.m_value =
                     MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster
                     ::XpBooster_GetBoostedXp(this_04,(int32_t)xp,membersCount,(MethodInfo *)0x0);
                IStack_8.m_value = IStack_7.m_value - (int)xp;
                pTVar9 = (pXVar1->fields).AmountLabel;
                if (IStack_8.m_value < 1) {
                  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_7,(MethodInfo *)0x0);
                  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                                     (pSVar3,StringLiteral__XP_,(MethodInfo *)0x0);
                  if (pTVar9 == (Text *)0x0) goto code_?;
                  (*(pTVar9->klass->vtable).set_text.methodPtr)
                            (pTVar9,pSVar3,(pTVar9->klass->vtable).set_text.method);
                  pGVar10 = (pXVar1->fields).boostedNotification;
                  if (pGVar10 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar10,0,(MethodInfo *)0x0);
                  pGVar10 = (pXVar1->fields).defaultNotification;
                  if (pGVar10 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar10,1,(MethodInfo *)0x0);
                  iVar11 = (*(pXVar1->klass->vtable).get_Lifetime.methodPtr)
                                    (pXVar1,(pXVar1->klass->vtable).get_Lifetime.method);
                  (pXVar1->fields)._.timeSinceStart = (float)iVar11 - _UNK_?;
                }
                else {
                  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_7,(MethodInfo *)0x0);
                  str2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
                  pSVar3 = mscorlib.dll::System::String::String_Concat_5
                                     (pSVar3,StringLiteral__XP___,str2,StringLiteral__from_boost_,
                                      (MethodInfo *)0x0);
                  if (pTVar9 == (Text *)0x0) goto code_?;
                  (*(pTVar9->klass->vtable).set_text.methodPtr)
                            (pTVar9,pSVar3,(pTVar9->klass->vtable).set_text.method);
                  pGVar10 = (pXVar1->fields).boostedNotification;
                  if (pGVar10 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar10,1,(MethodInfo *)0x0);
                  pGVar10 = (pXVar1->fields).defaultNotification;
                  if (pGVar10 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar10,0,(MethodInfo *)0x0);
                }
                this_01 = (pXVar1->fields).boostedBehaviour;
                if (this_01 != (XPNotificationBoostedBehaviour *)0x0) {
                  XPNotificationBoostedBehaviour::XPNotificationBoostedBehaviour_Initialize
                            (this_01,IStack_7.m_value,(int32_t)data,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else {
          func_?(pOVar2,TypeInfo__System__Int32);
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::XPNotification::XPNotification_Update
               (XPNotification *this,MethodInfo *method)

{
  fVar1 = (this->fields)._.timeSinceStart;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  pXVar3 = this->klass;
  (this->fields)._.timeSinceStart = fVar2;
  iVar4 = (*(pXVar3->vtable).get_Lifetime.methodPtr)(this,(pXVar3->vtable).get_Lifetime.method);
  if ((float)iVar4 <= fVar2) {
    this_00 = (this->fields)._.pool;
    if (this_00 == (NotificationObjectPool *)0x0) {
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    NotificationObjectPool::NotificationObjectPool_Return
              (this_00,(Notification *)this,(MethodInfo *)0x0);
  }
  return;
}

