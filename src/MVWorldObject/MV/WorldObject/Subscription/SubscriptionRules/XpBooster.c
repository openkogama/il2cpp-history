
/* Int32 GetTotalXPBoost(Int32) */

int32_t MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster::
        XpBooster_GetTotalXPBoost(XpBooster *this,int32_t membersCount,MethodInfo *method)

{
  fVar1 = 0.0;
  if ((0 < membersCount) &&
     (fVar1 = (float)(this->fields).firstOtherMemberBoost / _UNK_? + 0.0, 1 < membersCount))
  {
    fVar1 = ((float)(this->fields).otherMembersBoost / _UNK_?) * (float)(membersCount + -1)
            + fVar1;
  }
  if ((float)(this->fields).maxMemberBoost / _UNK_? < fVar1) {
    fVar1 = (float)(this->fields).maxMemberBoost / _UNK_?;
  }
  return (int)(((float)(this->fields).baseBoost / _UNK_? + fVar1) * _UNK_?);
}


/* XpBooster(Int32, Int32, Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster::XpBooster__ctor
               (XpBooster *this,int32_t baseBoost,int32_t firstOtherMemberBoost,
               int32_t otherMembersBoost,int32_t maxMemberBoost,MethodInfo *method)

{
  (this->fields).maxMemberBoost = maxMemberBoost;
  (this->fields).baseBoost = baseBoost;
  (this->fields).firstOtherMemberBoost = firstOtherMemberBoost;
  (this->fields).otherMembersBoost = otherMembersBoost;
  return;
}

