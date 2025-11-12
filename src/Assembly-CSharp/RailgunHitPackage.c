
/* InteractionData Create() */

InteractionData *
Assembly-CSharp.dll::RailgunHitPackage::RailgunHitPackage_Create
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
            (__return_storage_ptr__,CONCAT31((int3)((ulonglong)method >> 8),4),(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::RailgunHitPackage::RailgunHitPackage_ParseAndHandlePackage
               (RailgunHitPackage *this,MVWorldObjectClient *worldObjectClient,MVPlayer *shooter,
               InteractionData *interactionStruct,MethodInfo *method)

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
  InteractionPackage::InteractionPackage_HandlePackage_2
            ((InteractionPackage *)this,worldObjectClient,shooter,interactionStruct->damage,
             CONCAT31((int3)((uint)in_stack_1 >> 8),3),(MethodInfo *)0x0);
  return;
}

