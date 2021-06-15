
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
  if (0 < membersCount) {
    fVar1 = (float)(this->fields).firstOtherMemberBoost / _UNK_? + 0.0;
  }
  if (1 < membersCount) {
    fVar1 = fVar1 + ((float)(this->fields).otherMembersBoost / _UNK_?) *
                    (float)(membersCount + -1);
  }
  fVar2 = (float)(this->fields).maxMemberBoost / _UNK_?;
  if (fVar2 < fVar1) {
    fVar1 = fVar2;
  }
  return (int)((fVar1 + (float)(this->fields).baseBoost / _UNK_?) * _UNK_?);
}

