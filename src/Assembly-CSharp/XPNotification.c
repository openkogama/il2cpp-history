
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
  this_02 = data;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(4,data._0_3_);
  pOVar1 = (Object *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                       pOVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index != 0) {
      pSVar3 = (String *)(**(code **)(*(int *)TVar2.m_Index + 0xd8))();
      xp = mscorlib.dll::System::Int32::Int32_Parse(pSVar3,(MethodInfo *)0x0);
      uStack_4 = 0x13;
      pOVar1 = (Object *)func_?(TypeInfo__System__Byte,&uStack_4);
      TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::TextureId]::
              Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                        ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_02,
                         pOVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
      if (TVar2.m_Index != 0) {
        if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar5 = (int32_t *)func_?();
          iVar6 = *piVar5;
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
                iVar6 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::
                        XpBooster::XpBooster_GetBoostedXp(this_04,xp,iVar6,(MethodInfo *)0x0);
                pTVar8 = (this->fields).AmountLabel;
                if (iVar6 - xp < 1) {
                  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                                     ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
                  pSVar3 = mscorlib.dll::System::String::String_Concat_3
                                     (pSVar3,StringLiteral__XP_,(MethodInfo *)0x0);
                  if (pTVar8 == (Text *)0x0) goto code_?;
                  (*(code *)(pTVar8->klass->vtable).set_text.method)
                            (pTVar8,pSVar3,
                             (pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
                  pGVar9 = (this->fields).boostedNotification;
                  if (pGVar9 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar9,0,(MethodInfo *)0x0);
                  pGVar9 = (this->fields).defaultNotification;
                  if (pGVar9 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar9,1,(MethodInfo *)0x0);
                  pGVar9 = (GameObject *)&UNK_?;
                  iVar10 = (*(code *)(this->klass->vtable).get_Lifetime.method)();
                  (this->fields)._.timeSinceStart = (float)iVar10 - _UNK_?;
                }
                else {
                  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                                     ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
                  str2 = mscorlib.dll::System::Int32::Int32_ToString
                                   ((Int32 *)&stack0xfffffff0,(MethodInfo *)0x0);
                  mscorlib.dll::System::String::String_Concat_5
                            (pSVar3,StringLiteral__XP___,str2,StringLiteral__from_boost_,
                             (MethodInfo *)0x0);
                  if (pTVar8 == (Text *)0x0) goto code_?;
                  (*(code *)(pTVar8->klass->vtable).set_text.method)(pTVar8);
                  pGVar9 = (this->fields).boostedNotification;
                  if (pGVar9 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar9,1,(MethodInfo *)0x0);
                  pGVar9 = (this->fields).defaultNotification;
                  if (pGVar9 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar9,0,(MethodInfo *)0x0);
                }
                this_01 = (this->fields).boostedBehaviour;
                if (this_01 != (XPNotificationBoostedBehaviour *)0x0) {
                  XPNotificationBoostedBehaviour::XPNotificationBoostedBehaviour_Initialize
                            (this_01,0,(int32_t)pGVar9,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
        else {
          func_?();
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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

