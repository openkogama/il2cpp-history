
/* InteractionData Create() */

InteractionData *
Assembly-CSharp.dll::MutantHitPackage::MutantHitPackage_Create
          (InteractionData *__return_storage_ptr__,MethodInfo *method)

{
  __return_storage_ptr__->damage = 0.0;
  (__return_storage_ptr__->impulse).x = 0.0;
  (__return_storage_ptr__->impulse).y = 0.0;
  (__return_storage_ptr__->impulse).z = 0.0;
  __return_storage_ptr__->interactionType = 0;
  __return_storage_ptr__->playerKilledByType = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = 0;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor
            (__return_storage_ptr__,InteractionPackageType__Enum_MutantHit,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::MutantHitPackage::MutantHitPackage_ParseAndHandlePackage
               (MutantHitPackage *this,MVWorldObjectClient *worldObjectClient,MVPlayer *shooter,
               InteractionData interactionStruct,MethodInfo *method)

{
  InteractionPackage::InteractionPackage_HandlePackage_2
            ((InteractionPackage *)this,worldObjectClient,shooter,interactionStruct.damage,
             PlayerKilledByType__Enum_Mutant,(MethodInfo *)0x0);
  return;
}

