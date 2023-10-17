
/* InteractionData Create(Single, Vector3, PlayerKilledByType) */

InteractionData *
Assembly-CSharp.dll::ProximityDamageAndImpulse::ProximityDamageAndImpulse_Create
          (InteractionData *__return_storage_ptr__,float damage,Vector3 impulse,
          PlayerKilledByType__Enum playerKilledByType,MethodInfo *method)

{
  __return_storage_ptr__->damage = 0.0;
  (__return_storage_ptr__->impulse).x = 0.0;
  (__return_storage_ptr__->impulse).y = 0.0;
  (__return_storage_ptr__->impulse).z = 0.0;
  __return_storage_ptr__->interactionType = 0;
  __return_storage_ptr__->playerKilledByType = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = 0;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_7
            (__return_storage_ptr__,InteractionPackageType__Enum_ProximityDamageAndImpulse,damage,
             impulse,playerKilledByType,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::ProximityDamageAndImpulse::ProximityDamageAndImpulse_ParseAndHandlePackage
               (ProximityDamageAndImpulse *this,MVWorldObjectClient *worldObjectClient,
               MVPlayer *shooter,InteractionData interactionStruct,MethodInfo *method)

{
  InteractionPackage::InteractionPackage_HandlePackage_1
            ((InteractionPackage *)this,worldObjectClient,shooter,interactionStruct.damage,
             (uint)interactionStruct._16_4_ >> 8,interactionStruct.impulse,(MethodInfo *)0x0);
  return;
}

