
/* Boolean Check(Int32, Int32, Int32, Int32) */

bool MVWorldObject.dll::MV::WorldObject::WorldObjects::Spawner::CanSpawnChecker::
     CanSpawnChecker_Check
               (int32_t diff,int32_t respawnInterval,int32_t takenCounter,int32_t respawnCount,
               MethodInfo *method)

{
  if (diff <= respawnInterval) {
    return 0;
  }
  if (respawnCount < 0) {
    return 1;
  }
  return takenCounter < respawnCount;
}

