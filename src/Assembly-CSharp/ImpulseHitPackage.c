
/* InteractionData Create(Vector3) */

InteractionData *
Assembly-CSharp.dll::ImpulseHitPackage::ImpulseHitPackage_Create
          (InteractionData *__return_storage_ptr__,Vector3 impulse,MethodInfo *method)

{
  __return_storage_ptr__->damage = 0.0;
  (__return_storage_ptr__->impulse).x = 0.0;
  (__return_storage_ptr__->impulse).y = 0.0;
  (__return_storage_ptr__->impulse).z = 0.0;
  __return_storage_ptr__->interactionType = 0;
  __return_storage_ptr__->playerKilledByType = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = 0;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_1
            (__return_storage_ptr__,InteractionPackageType__Enum_ImpulseGunHit,impulse,
             (MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::ImpulseHitPackage::ImpulseHitPackage_ParseAndHandlePackage
               (ImpulseHitPackage *this,MVWorldObjectClient *worldObjectClient,MVPlayer *shooter,
               InteractionData interactionStruct,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__InteractionData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__InteractionData);
  }
  InteractionPackage::InteractionPackage_HandlePackage_3
            ((InteractionPackage *)this,worldObjectClient,shooter,interactionStruct.impulse,
             AvatarModifierPackageType__Enum_NoFriction,(MethodInfo *)0x0);
  return;
}

