
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
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)data,pOVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar3.m_Index != 0) {
      pSVar4 = (String *)
               (**(code **)(*(int *)TVar3.m_Index + 0xd8))
                         (TVar3.m_Index,*(undefined4 *)(*(int *)TVar3.m_Index + 0xdc));
      xp = (Dictionary_2_System_Object_System_Object_ *)
           mscorlib.dll::System::Int32::Int32_Parse(pSVar4,(MethodInfo *)0x0);
      uStack_5 = 0x13;
      data = xp;
      pOVar2 = (Object *)func_?(TypeInfo__System__Byte,&uStack_5);
      TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                         pOVar2,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar3.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar6 = (int32_t *)func_?(TVar3.m_Index);
          membersCount = *piVar6;
          this_03 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_03 != (MVNetworkGame *)0x0) {
            pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_03,(MethodInfo *)0x0);
            if ((pMVar7 != (MVLocalPlayer *)0x0) &&
               (this_00 = (pMVar7->fields)._._SubscriptionRules_k__BackingField,
               this_00 != (SubscriptionRulesWrapper *)0x0)) {
              this_04 = (XpBooster *)
                        MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                        SubscriptionRulesWrapper_GetRule
                                  (this_00,SubscriptionBenefit__Enum_XPBoost,
                                   MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                                  );
              if (this_04 != (XpBooster *)0x0) {
                IStack_8.m_value =
                     MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster
                     ::XpBooster_GetBoostedXp(this_04,(int32_t)xp,membersCount,(MethodInfo *)0x0);
                IStack_9.m_value = IStack_8.m_value - (int)xp;
                pTVar10 = (pXVar1->fields).AmountLabel;
                if (IStack_9.m_value < 1) {
                  pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
                  pSVar4 = mscorlib.dll::System::String::String_Concat_3
                                     (pSVar4,StringLiteral__XP_,(MethodInfo *)0x0);
                  if (pTVar10 == (Text *)0x0) goto code_?;
                  (*(code *)(pTVar10->klass->vtable).set_text.method)
                            (pTVar10,pSVar4,
                             (pTVar10->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                  pGVar11 = (pXVar1->fields).boostedNotification;
                  if (pGVar11 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar11,0,(MethodInfo *)0x0);
                  pGVar11 = (pXVar1->fields).defaultNotification;
                  if (pGVar11 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar11,1,(MethodInfo *)0x0);
                  iVar12 = (*(code *)(pXVar1->klass->vtable).get_Lifetime.method)
                                     (pXVar1,(pXVar1->klass->vtable).Initialize.methodPtr);
                  (pXVar1->fields)._.timeSinceStart = (float)iVar12 - _UNK_?;
                }
                else {
                  pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
                  str2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_9,(MethodInfo *)0x0);
                  pSVar4 = mscorlib.dll::System::String::String_Concat_5
                                     (pSVar4,StringLiteral__XP___,str2,StringLiteral__from_boost_,
                                      (MethodInfo *)0x0);
                  if (pTVar10 == (Text *)0x0) goto code_?;
                  (*(code *)(pTVar10->klass->vtable).set_text.method)
                            (pTVar10,pSVar4,
                             (pTVar10->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                  pGVar11 = (pXVar1->fields).boostedNotification;
                  if (pGVar11 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar11,1,(MethodInfo *)0x0);
                  pGVar11 = (pXVar1->fields).defaultNotification;
                  if (pGVar11 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar11,0,(MethodInfo *)0x0);
                }
                this_01 = (pXVar1->fields).boostedBehaviour;
                if (this_01 != (XPNotificationBoostedBehaviour *)0x0) {
                  XPNotificationBoostedBehaviour::XPNotificationBoostedBehaviour_Initialize
                            (this_01,IStack_8.m_value,(int32_t)data,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else {
          func_?(TVar3.m_Index,TypeInfo__System__Int32);
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
  iVar4 = (*(code *)(pXVar3->vtable).get_Lifetime.method)
                    (this,(pXVar3->vtable).Initialize.methodPtr);
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

