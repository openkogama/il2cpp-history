
/* InteractionData Create(Single, Vector3, PlayerKilledByType) */

InteractionData *
Assembly-CSharp.dll::ProximityDamageAndImpulse::ProximityDamageAndImpulse_Create
          (InteractionData *__return_storage_ptr__,float damage,Vector3 *impulse,
          PlayerKilledByType__Enum playerKilledByType,MethodInfo *method)

{
  __return_storage_ptr__->damage = 0.0;
  (__return_storage_ptr__->impulse).x = 0.0;
  (__return_storage_ptr__->impulse).y = 0.0;
  (__return_storage_ptr__->impulse).z = 0.0;
  __return_storage_ptr__->interactionType = 0;
  __return_storage_ptr__->playerKilledByType = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = 0;
  VStack_1.x = impulse->x;
  VStack_1.y = impulse->y;
  VStack_1.z = impulse->z;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
            (__return_storage_ptr__,CONCAT31((int3)((uint)in_EDX >> 8),0xd),damage,&VStack_1,
             CONCAT31((int3)((uint)in_stack_2 >> 8),(char)playerKilledByType),
             (MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::ProximityDamageAndImpulse::ProximityDamageAndImpulse_ParseAndHandlePackage
               (ProximityDamageAndImpulse *this,MVWorldObjectClient *worldObjectClient,
               MVPlayer *shooter,InteractionData *interactionStruct,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__InteractionData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__InteractionData->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_1.z = (interactionStruct->impulse).z;
  VStack_1.x = (interactionStruct->impulse).x;
  VStack_1.y = (interactionStruct->impulse).y;
  InteractionPackage::InteractionPackage_HandlePackage_1
            ((InteractionPackage *)this,worldObjectClient,shooter,interactionStruct->damage,
             CONCAT31((int3)((uint)in_stack_2 >> 8),
                      interactionStruct->playerKilledByType),&VStack_1,(MethodInfo *)0x0);
  return;
}

