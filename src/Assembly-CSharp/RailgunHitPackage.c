
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
  func_?(__return_storage_ptr__,4,0);
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::RailgunHitPackage::RailgunHitPackage_ParseAndHandlePackage
               (RailgunHitPackage *this,MVWorldObjectClient *worldObjectClient,MVPlayer *shooter,
               InteractionData interactionStruct,MethodInfo *method)

{
  fVar1 = (float10)func_?(&interactionStruct,0);
  InteractionPackage::InteractionPackage_HandlePackage_2
            ((InteractionPackage *)this,worldObjectClient,shooter,(float)fVar1,
             PlayerKilledByType__Enum_RailGun,(MethodInfo *)0x0);
  return;
}

