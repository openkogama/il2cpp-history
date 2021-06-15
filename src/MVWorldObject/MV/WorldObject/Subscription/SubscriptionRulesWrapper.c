
/* XpBooster GetRule[XpBooster](SubscriptionBenefit) */

XpBooster *
MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
SubscriptionRulesWrapper_GetRule_2
          (SubscriptionRulesWrapper *this,SubscriptionBenefit__Enum subscriptionBenefit,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  SVar2 = subscriptionBenefit;
  pSVar3 = this;
  pIStack_4 = (IsolatedStorageException *)0x0;
  pSVar5 = (this->fields).subscriptionBase;
  if (pSVar5 != (SubscriptionBase *)0x0) {
    cVar6 = (*(code *)(*method->parameters)->data)
                      (pSVar5,subscriptionBenefit,&pIStack_4,*method->parameters);
    if (cVar6 != '\0') {
      return (XpBooster *)pIStack_4;
    }
    pSVar7 = (pSVar3->fields).subscriptionDefault;
    unaff_EDI = (SubscriptionRulesWrapper *)SVar2;
    if (pSVar7 != (SubscriptionDefault *)0x0) {
      cVar6 = (*(code *)(*pMVar1->parameters)->data)(pSVar7,SVar2,&pIStack_4,*pMVar1->parameters);
      if (cVar6 != '\0') {
        return (XpBooster *)pIStack_4;
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  this = unaff_EDI;
  arg1 = (Object *)
         func_?(TypeInfo__MV__WorldObject__Subscription__SubscriptionBenefit,&this);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  message = mscorlib.dll::System::String::String_Concat
                      ((Object *)StringLiteral_SubscriptionDefault_must_impleme,arg1,
                       (MethodInfo *)0x0);
  this_00 = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1(this_00,message,(MethodInfo *)0x0);
  pIStack_4 = this_00;
  func_?();
  pcVar8 = (code *)swi(3);
  pXVar9 = (XpBooster *)(*pcVar8)();
  return pXVar9;
}


/* SubscriptionBase GetSubscription(SubscriptionType) */

SubscriptionBase *
MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
SubscriptionRulesWrapper_GetSubscription(SubscriptionType__Enum subscriptionType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (subscriptionType != SubscriptionType__Enum_None) {
    if (subscriptionType == SubscriptionType__Enum_Membership1) {
      pSVar1 = (ScaleAnimationBase *)
               func_?(
                              TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__SubscriptionMember1
                              );
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pDVar2 = 
      TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>
      ;
      pHVar3 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                (pHVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Dictionary__
                );
      (pSVar1->fields)._._._._.m_CachedPtr = pHVar3;
      Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                (pSVar1,0.0,(MethodInfo *)pDVar2);
      pDVar4 = (pSVar1->fields)._._._._.m_CachedPtr;
      pXVar5 = TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster;
      pSVar6 = (ScaleAnimationBase *)func_?();
      Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                (pSVar6,0.0,(MethodInfo *)pXVar5);
      (pSVar6->fields)._._._._.m_CachedPtr = (void *)0x32;
      (pSVar6->fields).state = 10;
      (pSVar6->fields).originalScale.x = 1.4013e-44;
      (pSVar6->fields).originalScale.y = 5.60519e-43;
      if (pDVar4 != (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object_ *)
                    0x0) {
        subscriptionType =
             (SubscriptionType__Enum)
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
        ;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::Subscription::
        SubscriptionBenefit,System::Object]::
        Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object__Add
                  (pDVar4,SubscriptionBenefit__Enum_XPBoost,(Object *)pSVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                  );
        subscriptionType =
             (SubscriptionType__Enum)
             TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean;
        pDVar4 = (pSVar1->fields)._._._._.m_CachedPtr;
        pSVar6 = (ScaleAnimationBase *)func_?();
        Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                  (pSVar6,0.0,(MethodInfo *)pDVar2);
        *(undefined1 *)&(pSVar6->fields)._._._._.m_CachedPtr = 1;
        if (pDVar4 != (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object_ *
                      )0x0) {
          subscriptionType =
               (SubscriptionType__Enum)
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
          ;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::Subscription::
          SubscriptionBenefit,System::Object]::
          Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object__Add
                    (pDVar4,SubscriptionBenefit__Enum_FreeBuildingGameObjects,(Object *)pSVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                    );
          subscriptionType =
               (SubscriptionType__Enum)
               TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean;
          pDVar4 = (pSVar1->fields)._._._._.m_CachedPtr;
          pSVar6 = (ScaleAnimationBase *)func_?();
          Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                    (pSVar6,0.0,(MethodInfo *)pDVar2);
          *(undefined1 *)&(pSVar6->fields)._._._._.m_CachedPtr = 1;
          if (pDVar4 != (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object_
                         *)0x0) {
            subscriptionType =
                 (SubscriptionType__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
            ;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::Subscription::
            SubscriptionBenefit,System::Object]::
            Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object__Add
                      (pDVar4,SubscriptionBenefit__Enum_FreeBuildingMaterials,(Object *)pSVar6,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                      );
            subscriptionType =
                 (SubscriptionType__Enum)
                 TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean
            ;
            pDVar4 = (pSVar1->fields)._._._._.m_CachedPtr;
            pSVar6 = (ScaleAnimationBase *)func_?();
            Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                      (pSVar6,0.0,(MethodInfo *)pDVar2);
            *(undefined1 *)&(pSVar6->fields)._._._._.m_CachedPtr = 1;
            if (pDVar4 != (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object_
                           *)0x0) {
              subscriptionType =
                   (SubscriptionType__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
              ;
              mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::Subscription
              ::SubscriptionBenefit,System::Object]::
              Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object__Add
                        (pDVar4,SubscriptionBenefit__Enum_FreeBuildingThemes,(Object *)pSVar6,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                        );
              return (SubscriptionBase *)pSVar1;
            }
          }
        }
      }
    }
    else if (subscriptionType == SubscriptionType__Enum_Membership2) {
      pSVar1 = (ScaleAnimationBase *)
               func_?(
                              TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__SubscriptionMember2
                              );
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pDVar2 = 
      TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>
      ;
      pHVar3 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                (pHVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Dictionary__
                );
      (pSVar1->fields)._._._._.m_CachedPtr = pHVar3;
      Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                (pSVar1,0.0,(MethodInfo *)pDVar2);
      pDVar4 = (pSVar1->fields)._._._._.m_CachedPtr;
      pXVar5 = TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster;
      pSVar6 = (ScaleAnimationBase *)func_?();
      Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                (pSVar6,0.0,(MethodInfo *)pXVar5);
      (pSVar6->fields)._._._._.m_CachedPtr = (void *)0x32;
      (pSVar6->fields).state = 10;
      (pSVar6->fields).originalScale.x = 2.8026e-45;
      (pSVar6->fields).originalScale.y = 5.60519e-43;
      if (pDVar4 != (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object_ *)
                    0x0) {
        subscriptionType =
             (SubscriptionType__Enum)
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
        ;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::Subscription::
        SubscriptionBenefit,System::Object]::
        Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object__Add
                  (pDVar4,SubscriptionBenefit__Enum_XPBoost,(Object *)pSVar6,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                  );
        subscriptionType =
             (SubscriptionType__Enum)
             TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__SubscriptionRuleBoolean;
        pDVar4 = (pSVar1->fields)._._._._.m_CachedPtr;
        pSVar6 = (ScaleAnimationBase *)func_?();
        Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                  (pSVar6,0.0,(MethodInfo *)pDVar2);
        *(undefined1 *)&(pSVar6->fields)._._._._.m_CachedPtr = 1;
        if (pDVar4 != (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object_ *
                      )0x0) {
          subscriptionType =
               (SubscriptionType__Enum)
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
          ;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::Subscription::
          SubscriptionBenefit,System::Object]::
          Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object__Add
                    (pDVar4,SubscriptionBenefit__Enum_FreeBuildingGameObjects,(Object *)pSVar6,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                    );
          return (SubscriptionBase *)pSVar1;
        }
      }
    }
    else {
      arg1 = (Object *)
             func_?(TypeInfo__MV__WorldObject__Subscription__SubscriptionType,
                             &subscriptionType);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?(TypeInfo__System__String);
      }
      message = mscorlib.dll::System::String::String_Concat
                          ((Object *)StringLiteral_Unknown_subscription_type__,arg1,
                           (MethodInfo *)0x0);
      this = (IsolatedStorageException *)func_?(TypeInfo__System__Exception);
      mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
      IsolatedStorageException__ctor_1(this,message,(MethodInfo *)0x0);
      subscriptionType =
           (SubscriptionType__Enum)
           MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetSubscription_MV__WorldObject__Subscription__SubscriptionType_
      ;
      func_?(this);
    }
    subscriptionType = SubscriptionType__Enum_None;
    func_?();
    pcVar7 = (code *)swi(3);
    pSVar8 = (SubscriptionBase *)(*pcVar7)();
    return pSVar8;
  }
  pSVar1 = (ScaleAnimationBase *)
           func_?(
                          TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__BuiltInTypes__SubscriptionNone
                          );
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar2 = 
  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>
  ;
  pHVar3 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar3,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Dictionary__
            );
  (pSVar1->fields)._._._._.m_CachedPtr = pHVar3;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play(pSVar1,0.0,(MethodInfo *)pDVar2);
  return (SubscriptionBase *)pSVar1;
}


/* Boolean HasBenefit(SubscriptionBenefit) */

bool MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
     SubscriptionRulesWrapper_HasBenefit
               (SubscriptionRulesWrapper *this,SubscriptionBenefit__Enum subscriptionBenefit,
               MethodInfo *method)

{
  pSVar1 = (this->fields).subscriptionBase;
  if (pSVar1 != (SubscriptionBase *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    this_00 = (pSVar1->fields).benefits;
    if (this_00 !=
        (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_MV_WorldObject_Subscription_SubscriptionRule_
         *)0x0) {
      bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::Subscription
              ::SubscriptionBenefit,System::Object]::
              Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object__ContainsKey
                        ((Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object_
                          *)this_00,subscriptionBenefit,
                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__ContainsKey_MV__WorldObject__Subscription__SubscriptionBenefit_
                        );
      return bVar2;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
         SubscriptionRulesWrapper_ToString(SubscriptionRulesWrapper *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (SubscriptionRulesWrapper *)(this->fields).SubscriptionType;
  arg1 = (Object *)func_?(TypeInfo__MV__WorldObject__Subscription__SubscriptionType,&this);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat
                     ((Object *)StringLiteral_SubscriptionType__,arg1,(MethodInfo *)0x0);
  return pSVar1;
}


/* SubscriptionRulesWrapper(SubscriptionType) */

void MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
     SubscriptionRulesWrapper__ctor
               (SubscriptionRulesWrapper *this,SubscriptionType__Enum subscriptionType,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields).SubscriptionType = subscriptionType;
  this_00 = (ScaleAnimationBase *)
            func_?(
                           TypeInfo__MV__WorldObject__Subscription__SubscriptionTypes__BuiltInTypes__SubscriptionDefault
                           );
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_01 = 
  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>
  ;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Dictionary__
            );
  (this_00->fields)._._._._.m_CachedPtr = this_01;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            (this_00,0.0,(MethodInfo *)method_01);
  pDVar1 = (this_00->fields)._._._._.m_CachedPtr;
  method_00 = TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster;
  pSVar2 = (ScaleAnimationBase *)func_?();
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            (pSVar2,0.0,(MethodInfo *)method_00);
  (pSVar2->fields)._._._._.m_CachedPtr = (void *)0x0;
  (pSVar2->fields).state = 10;
  (pSVar2->fields).originalScale.x = 1.4013e-44;
  (pSVar2->fields).originalScale.y = 5.60519e-43;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object_ *)0x0)
  {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::Subscription::
    SubscriptionBenefit,System::Object]::
    Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object__Add
              (pDVar1,SubscriptionBenefit__Enum_XPBoost,(Object *)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
              );
    pDVar1 = (this_00->fields)._._._._.m_CachedPtr;
    pSVar2 = (ScaleAnimationBase *)func_?();
    Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
              (pSVar2,0.0,(MethodInfo *)method_01);
    (pSVar2->fields)._._._._.m_CachedPtr = (void *)0x0;
    if (pDVar1 != (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object_ *)0x0
       ) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::Subscription::
      SubscriptionBenefit,System::Object]::
      Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object__Add
                (pDVar1,SubscriptionBenefit__Enum_GameCoinBoost,(Object *)pSVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                );
      pDVar1 = (this_00->fields)._._._._.m_CachedPtr;
      pSVar2 = (ScaleAnimationBase *)func_?();
      Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                (pSVar2,0.0,(MethodInfo *)method_01);
      *(undefined1 *)&(pSVar2->fields)._._._._.m_CachedPtr = 0;
      if (pDVar1 != (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object_ *)
                    0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::Subscription::
        SubscriptionBenefit,System::Object]::
        Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object__Add
                  (pDVar1,SubscriptionBenefit__Enum_FreeBuildingGameObjects,(Object *)pSVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                  );
        (this->fields).subscriptionDefault = (SubscriptionDefault *)this_00;
        pSVar3 = SubscriptionRulesWrapper_GetSubscription
                           ((SubscriptionType__Enum)pSVar2,(MethodInfo *)0x0);
        (this->fields).subscriptionBase = pSVar3;
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

