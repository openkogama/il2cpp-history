
/* InteractionData Create(Vector3) */

InteractionData *
Assembly-CSharp.dll::SwordHitPackage::SwordHitPackage_Create
          (InteractionData *__return_storage_ptr__,Vector3 impulse,MethodInfo *method)

{
  __return_storage_ptr__->damage = 0.0;
  (__return_storage_ptr__->impulse).x = 0.0;
  (__return_storage_ptr__->impulse).y = 0.0;
  (__return_storage_ptr__->impulse).z = 0.0;
  __return_storage_ptr__->interactionType = 0;
  __return_storage_ptr__->playerKilledByType = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = 0;
  func_?(__return_storage_ptr__,5,impulse._0_8_,impulse.z,7,0);
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::SwordHitPackage::SwordHitPackage_ParseAndHandlePackage
               (SwordHitPackage *this,MVWorldObjectClient *worldObjectClient,MVPlayer *shooter,
               InteractionData interactionStruct,MethodInfo *method)

{
  fVar1 = (float10)func_?();
  pVVar2 = (Vector3 *)func_?();
  InteractionPackage::InteractionPackage_HandlePackage
            ((InteractionPackage *)this,worldObjectClient,shooter,(float)fVar1,
             PlayerKilledByType__Enum_Sword,*pVVar2,AvatarModifierPackageType__Enum_NoFriction,
             (MethodInfo *)0x0);
  return;
}

