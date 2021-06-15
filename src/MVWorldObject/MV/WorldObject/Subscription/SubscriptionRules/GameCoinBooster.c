
/* Int32 GetBoostedGameCoins(Int32) */

int32_t MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::GameCoinBooster::
        GameCoinBooster_GetBoostedGameCoins
                  (GameCoinBooster *this,int32_t gameCoins,MethodInfo *method)

{
  return (1 - (int)((float)(this->fields)._GameCoinBoost_k__BackingField / _UNK_?)) *
         gameCoins;
}

