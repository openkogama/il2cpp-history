
/* InteractionData Create() */

InteractionData *
Assembly-CSharp.dll::MultiThrowingStarHitPackage::MultiThrowingStarHitPackage_Create
          (InteractionData *__return_storage_ptr__,MethodInfo *method)

{
  __return_storage_ptr__->damage = 0.0;
  (__return_storage_ptr__->impulse).x = 0.0;
  (__return_storage_ptr__->impulse).y = 0.0;
  (__return_storage_ptr__->impulse).z = 0.0;
  __return_storage_ptr__->interactionType = 0;
  __return_storage_ptr__->playerKilledByType = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = 0;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_3
            (__return_storage_ptr__,InteractionPackageType__Enum_MultiThrowingStarHit,
             PlayerKilledByType__Enum_MultiThrowingStar,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::MultiThrowingStarHitPackage::
     MultiThrowingStarHitPackage_ParseAndHandlePackage
               (MultiThrowingStarHitPackage *this,MVWorldObjectClient *worldObjectClient,
               MVPlayer *shooter,InteractionData interactionStruct,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  InteractionPackage::InteractionPackage_HandlePackage_1
            ((InteractionPackage *)this,worldObjectClient,shooter,interactionStruct.damage,
             PlayerKilledByType__Enum_MultiThrowingStar,interactionStruct.impulse,(MethodInfo *)0x0)
  ;
  return;
}

