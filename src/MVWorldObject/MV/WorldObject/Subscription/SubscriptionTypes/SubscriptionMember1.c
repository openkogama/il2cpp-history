
/* SubscriptionMember1() */

void MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionTypes::SubscriptionMember1::
     SubscriptionMember1__ctor(SubscriptionMember1 *this,MethodInfo *method)

{
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
  pDVar1 = (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_MV_WorldObject_Subscription_SubscriptionRule_
            *)func_?();
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Dictionary__
            );
  (this->fields)._.benefits = pDVar1;
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_01);
  pDVar1 = (this->fields)._.benefits;
  method_00 = TypeInfo__MV__WorldObject__Subscription__SubscriptionRules__XpBooster;
  pSVar2 = (ScaleAnimationBase *)func_?();
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            (pSVar2,0.0,(MethodInfo *)method_00);
  (pSVar2->fields)._._._._.m_CachedPtr = (void *)0x32;
  (pSVar2->fields).state = 10;
  (pSVar2->fields).originalScale.x = 1.4013e-44;
  (pSVar2->fields).originalScale.y = 5.60519e-43;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_MV_WorldObject_Subscription_SubscriptionRule_
                 *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::Subscription::
    SubscriptionBenefit,System::Object]::
    Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object__Add
              ((Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object_ *)pDVar1
               ,SubscriptionBenefit__Enum_XPBoost,(Object *)pSVar2,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
              );
    pDVar1 = (this->fields)._.benefits;
    pSVar2 = (ScaleAnimationBase *)func_?();
    Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
              (pSVar2,0.0,(MethodInfo *)method_01);
    *(undefined1 *)&(pSVar2->fields)._._._._.m_CachedPtr = 1;
    if (pDVar1 != (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_MV_WorldObject_Subscription_SubscriptionRule_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::Subscription::
      SubscriptionBenefit,System::Object]::
      Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object__Add
                ((Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object_ *)
                 pDVar1,SubscriptionBenefit__Enum_FreeBuildingGameObjects,(Object *)pSVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                );
      pDVar1 = (this->fields)._.benefits;
      pSVar2 = (ScaleAnimationBase *)func_?();
      Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                (pSVar2,0.0,(MethodInfo *)method_01);
      *(undefined1 *)&(pSVar2->fields)._._._._.m_CachedPtr = 1;
      if (pDVar1 != (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_MV_WorldObject_Subscription_SubscriptionRule_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::Subscription::
        SubscriptionBenefit,System::Object]::
        Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object__Add
                  ((Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object_ *)
                   pDVar1,SubscriptionBenefit__Enum_FreeBuildingMaterials,(Object *)pSVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                  );
        pDVar1 = (this->fields)._.benefits;
        pSVar2 = (ScaleAnimationBase *)func_?();
        Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
                  (pSVar2,0.0,(MethodInfo *)method_01);
        *(undefined1 *)&(pSVar2->fields)._._._._.m_CachedPtr = 1;
        if (pDVar1 != (Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_MV_WorldObject_Subscription_SubscriptionRule_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::Subscription::
          SubscriptionBenefit,System::Object]::
          Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object__Add
                    ((Dictionary_2_MV_WorldObject_Subscription_SubscriptionBenefit_System_Object_ *)
                     pDVar1,SubscriptionBenefit__Enum_FreeBuildingThemes,(Object *)pSVar2,
                     MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::Subscription::SubscriptionBenefit,_MV::WorldObject::Subscription::SubscriptionRule>__Add_MV__WorldObject__Subscription__SubscriptionBenefit__MV__WorldObject__Subscription__SubscriptionRule_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

