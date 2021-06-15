
/* InteractionData Create() */

InteractionData *
Assembly-CSharp.dll::MouseGunHitPackage::MouseGunHitPackage_Create
          (InteractionData *__return_storage_ptr__,MethodInfo *method)

{
  __return_storage_ptr__->damage = 0.0;
  (__return_storage_ptr__->impulse).x = 0.0;
  (__return_storage_ptr__->impulse).y = 0.0;
  (__return_storage_ptr__->impulse).z = 0.0;
  __return_storage_ptr__->interactionType = 0;
  __return_storage_ptr__->playerKilledByType = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = 0;
  func_?(__return_storage_ptr__,0x10,0);
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::MouseGunHitPackage::MouseGunHitPackage_ParseAndHandlePackage
               (MouseGunHitPackage *this,MVWorldObjectClient *worldObjectClient,MVPlayer *shooter,
               InteractionData interactionStruct,MethodInfo *method)

{
  InteractionPackage::InteractionPackage_HandlePackage_6
            ((InteractionPackage *)this,worldObjectClient,shooter,
             AvatarModifierPackageType__Enum_Shrunken,(MethodInfo *)0x0);
  return;
}

