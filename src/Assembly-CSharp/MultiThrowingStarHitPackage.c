
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
            (__return_storage_ptr__,CONCAT31((int3)((ulonglong)method >> 8),0x18),
             CONCAT31((int3)((uint)in_R8D >> 8),0x14),(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::MultiThrowingStarHitPackage::
     MultiThrowingStarHitPackage_ParseAndHandlePackage
               (MultiThrowingStarHitPackage *this,MVWorldObjectClient *worldObjectClient,
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
             CONCAT31((int3)((uint)in_stack_2 >> 8),0x14),&VStack_1,
             (MethodInfo *)0x0);
  return;
}

