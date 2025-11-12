
/* InteractionData Create(Single, Vector3) */

InteractionData *
Assembly-CSharp.dll::AdvancedGhostBodyRotateWeaponPackage::
AdvancedGhostBodyRotateWeaponPackage_Create
          (InteractionData *__return_storage_ptr__,float damage,Vector3 *impulse,MethodInfo *method)

{
  __return_storage_ptr__->damage = 0.0;
  (__return_storage_ptr__->impulse).x = 0.0;
  (__return_storage_ptr__->impulse).y = 0.0;
  (__return_storage_ptr__->impulse).z = 0.0;
  __return_storage_ptr__->interactionType = 0;
  __return_storage_ptr__->playerKilledByType = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = 0;
  IStack_1.damage = 0.0;
  IStack_1.impulse.x = 0.0;
  IStack_1.impulse.y = 0.0;
  IStack_1.impulse.z = 0.0;
  IStack_1.interactionType = 0;
  IStack_1.playerKilledByType = 0;
  IStack_1._18_2_ = 0;
  VStack_2.x = impulse->x;
  VStack_2.y = impulse->y;
  VStack_2.z = impulse->z;
  MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
            (&IStack_1,CONCAT31((int3)((uint)in_EDX >> 8),0xc),damage,&VStack_2,
             in_stack_3 & 0xffffff00,(MethodInfo *)0x0);
  __return_storage_ptr__->damage = IStack_1.damage;
  (__return_storage_ptr__->impulse).x = IStack_1.impulse.x;
  (__return_storage_ptr__->impulse).y = IStack_1.impulse.y;
  (__return_storage_ptr__->impulse).z = IStack_1.impulse.z;
  __return_storage_ptr__->interactionType = IStack_1.interactionType;
  __return_storage_ptr__->playerKilledByType = IStack_1.playerKilledByType;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = IStack_1._18_2_;
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeaponPackage::
     AdvancedGhostBodyRotateWeaponPackage_ParseAndHandlePackage
               (AdvancedGhostBodyRotateWeaponPackage *this,MVWorldObjectClient *worldObjectClient,
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
             CONCAT31((int3)((uint)in_stack_2 >> 8),0x10),&VStack_1,
             (MethodInfo *)0x0);
  return;
}

