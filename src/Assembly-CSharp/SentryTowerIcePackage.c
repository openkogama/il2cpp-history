
/* InteractionData Create(Vector3) */

InteractionData *
Assembly-CSharp.dll::SentryTowerIcePackage::SentryTowerIcePackage_Create
          (InteractionData *__return_storage_ptr__,Vector3 impulse,MethodInfo *method)

{
  __return_storage_ptr__->damage = 0.0;
  (__return_storage_ptr__->impulse).x = 0.0;
  (__return_storage_ptr__->impulse).y = 0.0;
  (__return_storage_ptr__->impulse).z = 0.0;
  __return_storage_ptr__->interactionType = 0;
  __return_storage_ptr__->playerKilledByType = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = 0;
  func_?(__return_storage_ptr__,0xb,impulse._0_8_,impulse.z,0);
  return __return_storage_ptr__;
}


/* Void ParseAndHandlePackage(MVWorldObjectClient, MVPlayer, InteractionData) */

void Assembly-CSharp.dll::SentryTowerIcePackage::SentryTowerIcePackage_ParseAndHandlePackage
               (SentryTowerIcePackage *this,MVWorldObjectClient *worldObjectClient,MVPlayer *shooter
               ,InteractionData interactionStruct,MethodInfo *method)

{
  pVVar1 = (Vector3 *)func_?(auStack_2,&interactionStruct,0);
  InteractionPackage::InteractionPackage_HandlePackage_4
            ((InteractionPackage *)this,worldObjectClient,*pVVar1,
             AvatarModifierPackageType__Enum_Frozen,(MethodInfo *)0x0);
  return;
}

