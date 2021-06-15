
/* Void Initialize(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::XPNotification::XPNotification_Initialize
               (XPNotification *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = data;
  pIStack_1 = (Il2CppImage *)0x0;
  Notification::Notification_Initialize((Notification *)this,data,(MethodInfo *)0x0);
  data = (Dictionary_2_System_Object_System_Object_ *)CONCAT13(4,data._0_3_);
  pTVar2 = (Type *)func_?(TypeInfo__System__Byte,(int)&data + 3);
  if ((this_01 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
     (pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)this_01,pTVar2,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         ), pPVar3 == (Pool *)0x0)) goto code_?;
  pSVar4 = (String *)(*(code *)(pPVar3->klass->vtable).ToString.method)(pPVar3);
  xp = mscorlib.dll::System::Int32::Int32_Parse_3(pSVar4,(MethodInfo *)0x0);
  uStack_5 = (Object__Array__Class *)CONCAT13(0x13,(undefined3)uStack_5);
  pTVar2 = (Type *)func_?(TypeInfo__System__Byte,(int)&uStack_5 + 3,xp);
  pPVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
           Dictionary_2_System_Type_Pool__get_Item
                     ((Dictionary_2_System_Type_Pool_ *)this_01,pTVar2,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     );
  if (pPVar3 == (Pool *)0x0) goto code_?;
  if ((pPVar3->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
    piVar6 = (int32_t *)func_?();
    iVar7 = *piVar6;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((((this_02 == (MVNetworkGame *)0x0) ||
         (this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0),
         this_03 == (MVLocalPlayer *)0x0)) ||
        (this_04 = (SubscriptionRulesWrapper *)
                   PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                   PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                             ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_03,
                              (MethodInfo *)0x0), this_04 == (SubscriptionRulesWrapper *)0x0)) ||
       (this_05 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                  SubscriptionRulesWrapper_GetRule_2
                            (this_04,SubscriptionBenefit__Enum_XPBoost,
                             MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                            ), this_05 == (XpBooster *)0x0)) goto code_?;
    iVar7 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster::
            XpBooster_GetBoostedXp(this_05,xp,iVar7,(MethodInfo *)0x0);
    pTVar8 = (this->fields).AmountLabel;
    if (iVar7 - xp < 1) {
      uStack_5 = (Object__Array__Class *)&pIStack_1;
      pSVar4 = (String *)func_?();
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat_2
                         (pSVar4,StringLiteral__XP_,(MethodInfo *)0x0);
      if (pTVar8 == (Text *)0x0) goto code_?;
      (*(code *)(pTVar8->klass->vtable).set_text.method)(pTVar8,pSVar4);
      pGVar9 = (this->fields).boostedNotification;
      if (pGVar9 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar9,0,(MethodInfo *)0x0);
      pGVar9 = (this->fields).defaultNotification;
      if (pGVar9 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar9,1,(MethodInfo *)0x0);
      unboostedXpAmount = this;
      iVar10 = (*(code *)(this->klass->vtable).get_Lifetime.method)();
      (this->fields)._.timeSinceStart = (float)iVar10 - _UNK_?;
code_?:
      this_00 = (this->fields).boostedBehaviour;
      if (this_00 != (XPNotificationBoostedBehaviour *)0x0) {
        XPNotificationBoostedBehaviour::XPNotificationBoostedBehaviour_Initialize
                  (this_00,(int32_t)pIStack_1,(int32_t)unboostedXpAmount,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    uStack_5 = TypeInfo__System__Object;
    args = (Object__Array *)func_?();
    pIStack_1 = (Il2CppImage *)0x0;
    data = (Dictionary_2_System_Object_System_Object_ *)func_?();
    if (args == (Object__Array *)0x0) goto code_?;
    if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (iVar10 = func_?(data), iVar10 == 0)) goto code_?;
    if (args->max_length == 0) goto code_?;
    args->vector[0] = (Object *)data;
    if ((StringLiteral__XP___ != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral__XP___), iVar10 == 0)) goto code_?;
    if (args->max_length < 2) goto code_?;
    args->vector[1] = (Object *)StringLiteral__XP___;
    data = (Dictionary_2_System_Object_System_Object_ *)func_?(TypeInfo__System__Int32);
    if ((data != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       (iVar10 = func_?(data,(args->klass->_0).element_class), iVar10 == 0))
    goto code_?;
    if (args->max_length < 3) goto code_?;
    args->vector[2] = (Object *)data;
    if ((StringLiteral__from_boost_ != (String *)0x0) &&
       (iVar10 = func_?(StringLiteral__from_boost_,(args->klass->_0).element_class),
       iVar10 == 0)) goto code_?;
    if (3 < args->max_length) {
      args->vector[3] = (Object *)StringLiteral__from_boost_;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      pSVar4 = mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
      if (pTVar8 == (Text *)0x0) goto code_?;
      (*(code *)(pTVar8->klass->vtable).set_text.method)(pTVar8,pSVar4);
      pGVar9 = (this->fields).boostedNotification;
      if (pGVar9 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar9,1,(MethodInfo *)0x0);
      pGVar9 = (this->fields).defaultNotification;
      if (pGVar9 == (GameObject *)0x0) goto code_?;
      unboostedXpAmount = (XPNotification *)0x0;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar9,0,(MethodInfo *)0x0);
      goto code_?;
    }
  }
  else {
    func_?(pPVar3);
code_?:
    uVar11 = func_?(0);
    func_?(uVar11);
code_?:
    uVar11 = func_?(0);
    func_?(uVar11);
code_?:
    uVar11 = func_?(0);
    func_?(uVar11);
code_?:
    uVar11 = func_?(0);
    func_?(uVar11);
code_?:
    uVar11 = func_?(0,0);
    func_?(uVar11);
code_?:
    uVar11 = func_?(0,0);
    func_?(uVar11);
code_?:
    uVar11 = func_?(0,0);
    func_?(uVar11);
  }
  uVar11 = func_?(0,0);
  func_?(uVar11);
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

