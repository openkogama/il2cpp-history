
/* Int32 GetBoostedXp(Int32, Int32) */

int32_t MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster::
        XpBooster_GetBoostedXp(XpBooster *this,int32_t xp,int32_t membersCount,MethodInfo *method)

{
  fVar1 = 0.0;
  fVar2 = (float)xp;
  if (0 < membersCount) {
    fVar1 = ((float)(this->fields).firstOtherMemberBoost / _UNK_?) * fVar2 + 0.0;
  }
  if (1 < membersCount) {
    fVar1 = fVar1 + ((float)(this->fields).otherMembersBoost / _UNK_?) * fVar2 *
                    (float)(membersCount + -1);
  }
  fVar3 = ((float)(this->fields).maxMemberBoost / _UNK_?) * fVar2;
  if (fVar3 < fVar1) {
    fVar1 = fVar3;
  }
  return (int)(fVar2 + ((float)(this->fields).baseBoost / _UNK_?) * fVar2 + fVar1);
}


/* Int32 GetTotalXPBoost(Int32) */

int32_t MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster::
        XpBooster_GetTotalXPBoost(XpBooster *this,int32_t membersCount,MethodInfo *method)

{
  fVar1 = 0.0;
  if ((0 < membersCount) &&
     (fVar1 = (float)(this->fields).firstOtherMemberBoost / _UNK_? + 0.0, 1 < membersCount))
  {
    fVar1 = fVar1 + ((float)(this->fields).otherMembersBoost / _UNK_?) *
                    (float)(membersCount + -1);
  }
  fVar2 = (float)(this->fields).maxMemberBoost / _UNK_?;
  if (fVar2 < fVar1) {
    fVar1 = fVar2;
  }
  return (int)(((float)(this->fields).baseBoost / _UNK_? + fVar1) * _UNK_?);
}


/* XpBooster(Int32, Int32, Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster::XpBooster__ctor
               (XpBooster *this,int32_t baseBoost,int32_t firstOtherMemberBoost,
               int32_t otherMembersBoost,int32_t maxMemberBoost,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).baseBoost = baseBoost;
  (this->fields).firstOtherMemberBoost = firstOtherMemberBoost;
  (this->fields).otherMembersBoost = otherMembersBoost;
  (this->fields).maxMemberBoost = maxMemberBoost;
  return;
}

